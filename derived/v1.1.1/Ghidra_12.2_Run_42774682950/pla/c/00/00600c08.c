/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00600c08; name: FUN_00600c08
 */


void FUN_00600c08(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418f5a8;
  if (PTR_DAT_04375180[0x10] != '\0') {
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      lVar5 = (long)param_1 + 0x21;
    }
    else {
      lVar5 = param_1[6];
    }
                    /* try { // try from 00600d5c to 00600d7b has its CatchHandler @ 00600da8 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                 ,0x19c,1,"[weighted_target_lb %p] WeightedChild %p %s: destroying child",param_1[3]
                 ,param_1,lVar5);
  }
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
  ;
  local_28 = 0x1a0;
  if (param_1[3] != 0) {
                    /* try { // try from 00600c50 to 00600c5f has its CatchHandler @ 00600db4 */
    FUN_00549014(param_1[3],&local_30,"WeightedChild");
  }
  param_1[3] = 0;
  FUN_006009a4(param_1[9]);
  puVar4 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00600c80 to 00600c83 has its CatchHandler @ 00600db0 */
    (**(code **)*puVar4)();
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[6]);
  }
  plVar6 = (long *)param_1[3];
  if (plVar6 != (long *)0x0) {
    lVar5 = plVar6[1];
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 00600cd0 to 00600cef has its CatchHandler @ 00600dac */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 00600d80 to 00600da7 has its CatchHandler @ 00600dac */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_002e2ea0(PTR_LAB_04373088,plVar6);
      return;
    }
  }
  return;
}


