/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053b304; name: FUN_0053b304
 */


long * FUN_0053b304(long *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_28;
  
  plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (plVar5 != (long *)0x0) {
    lVar10 = *param_1;
    uVar9 = *param_2;
    local_28 = 0;
    lVar7 = *param_3;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x10);
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = *(long *)(lVar7 + 8);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar7 + 8),lVar6,
                     lVar6 + 1);
      }
    }
    puVar4 = PTR_DAT_04374bb0;
    local_28 = *param_3;
    *plVar5 = (long)(PTR_DAT_04374b90 + 0x10);
    plVar5[1] = (long)puVar4;
    plVar5[2] = 1;
    plVar5[3] = lVar10;
                    /* try { // try from 0053b3bc to 0053b3c3 has its CatchHandler @ 0053b3ec */
    lVar7 = FUN_002e45d0(uVar9);
    plVar5[4] = lVar7;
    plVar5[5] = local_28;
    local_28 = 0;
    FUN_00535c40(&local_28);
  }
  return plVar5;
}


