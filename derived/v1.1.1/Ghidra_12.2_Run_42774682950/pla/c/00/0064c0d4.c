/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064c0d4; name: FUN_0064c0d4
 */


void FUN_0064c0d4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_30;
  long *local_28;
  
  local_30 = *param_2;
  if (param_2[1] == 0) {
    local_28 = (long *)0x0;
  }
  else {
    local_28 = (long *)std::__shared_weak_count::lock();
    if (local_28 != (long *)0x0) {
                    /* try { // try from 0064c0fc to 0064c107 has its CatchHandler @ 0064c16c */
      FUN_00656508(param_1,&local_30);
      if (local_28 != (long *)0x0) {
        plVar1 = local_28 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
          std::__shared_weak_count::__release_weak();
          return;
        }
      }
      return;
    }
  }
                    /* try { // try from 0064c164 to 0064c167 has its CatchHandler @ 0064c168 */
  FUN_0064ddf0();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064c164 with catch @ 0064c168
                        */
  FUN_00102150();
}


