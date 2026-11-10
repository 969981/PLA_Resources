/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e39a4; name: FUN_005e39a4
 */


void FUN_005e39a4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  char *local_30;
  undefined4 local_28;
  
  *param_1 = (long)&PTR_FUN_0418e378;
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc";
  local_28 = 0x143;
  if (param_1[5] != 0) {
                    /* try { // try from 005e39dc to 005e39eb has its CatchHandler @ 005e3a60 */
    FUN_00549014(param_1[5],&local_30,"StateWatcher");
  }
  param_1[5] = 0;
  FUN_005dfc2c(0);
  *param_1 = (long)(PTR_DAT_04374050 + 0x10);
  plVar5 = (long *)param_1[4];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


