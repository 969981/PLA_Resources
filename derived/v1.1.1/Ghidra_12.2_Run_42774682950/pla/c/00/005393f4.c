/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005393f4; name: FUN_005393f4
 */


long FUN_005393f4(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_28;
  
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (lVar4 != 0) {
    local_28 = 0;
    lVar6 = *param_1;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 0x10);
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *(long *)(lVar6 + 8);
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                     lVar5 + 1);
      }
    }
    local_28 = *param_1;
                    /* try { // try from 0053948c to 00539497 has its CatchHandler @ 005394b4 */
    FUN_005394c8(lVar4,&local_28,*param_2,*param_3);
    FUN_005318f8(&local_28);
  }
  return lVar4;
}


