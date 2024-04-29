import angr

project = angr.Project('./hash')
state = project.factory.entry_state()

simmgr = project.factory.simulation_manager(state)
simmgr.explore(find=lambda state: b'Correct\n' in state.posix.dumps(1))  

if simmgr.found:
    password = []

    for byte in simmgr.found[0].posix.dumps(0):
        password.append(hex(byte))

    print(', '.join(password))
