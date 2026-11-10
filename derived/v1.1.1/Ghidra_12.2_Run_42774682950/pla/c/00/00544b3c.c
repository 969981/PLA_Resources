/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00544b3c; name: FUN_00544b3c
 */


void FUN_00544b3c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x48);
  puVar4 = PTR_DAT_04374be0;
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_04374c80 + 0x10);
    plVar5[1] = (long)puVar4;
    plVar5[2] = 1;
    auVar9 = FUN_003fda40(PTR_PTR_04374c88);
    *(undefined1 (*) [16])(plVar5 + 3) = auVar9;
    FUN_002ef6d0(plVar5 + 5);
  }
  puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = plVar5;
    *(undefined8 **)PTR_DAT_04374c90 = puVar6;
    return;
  }
  *(undefined8 *)PTR_DAT_04374c90 = 0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[1];
    plVar1 = plVar5 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 00544c00 to 00544c1f has its CatchHandler @ 00544c8c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar5 + 1,lVar8);
    }
    if (lVar8 < 1) {
                    /* try { // try from 00544c64 to 00544c8b has its CatchHandler @ 00544c8c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      FUN_002e2ea0(PTR_LAB_04373088,plVar5);
      return;
    }
  }
  return;
}


