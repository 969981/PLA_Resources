/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050f6ec; name: FUN_0050f6ec
 */


void FUN_0050f6ec(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_04374a48 + 0x10);
                    /* try { // try from 0050f708 to 0050f817 has its CatchHandler @ 0050f818 */
  FUN_004fcf80(param_1 + 6);
  FUN_004fcf80(param_1 + 0x1d);
  FUN_003c8500(param_1[9]);
  FUN_003c8500(param_1[0x13]);
  plVar7 = (long *)param_1[0x21];
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
  if (param_1[5] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x30b,2,"assertion failed: %s","call_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_003c9e40();
  FUN_00521230(param_1 + 0x31,param_1[0x32]);
  FUN_0036b9a4(param_1 + 0x2e,param_1[0x2f]);
  FUN_0050f620(param_1 + 3);
  return;
}


