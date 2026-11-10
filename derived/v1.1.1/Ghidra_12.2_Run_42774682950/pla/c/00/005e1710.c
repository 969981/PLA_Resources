/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e1710; name: FUN_005e1710
 */


void FUN_005e1710(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = &PTR_LAB_0418dff0;
  if (param_1[4] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x30e,2,"assertion failed: %s","lb_call_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 005e1730 to 005e182b has its CatchHandler @ 005e182c */
  FUN_003c9e40();
  FUN_004fcf80(param_1 + 5);
  FUN_004fcf80(param_1 + 0x26);
  FUN_003c8500(param_1[8]);
  FUN_003c8500(param_1[0x12]);
  plVar7 = (long *)param_1[0x2a];
  if ((plVar7 != (long *)0x0) && (plVar3 = (long *)*plVar7, plVar3 != (long *)0x0)) {
    plVar5 = plVar3 + 1;
    lVar4 = *plVar3;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar3,lVar6);
    }
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (*(code *)plVar7[3])(plVar7[4]);
    }
  }
  FUN_005df9b4(param_1 + 0x2e);
  FUN_00546ca4(param_1 + 3);
  return;
}


