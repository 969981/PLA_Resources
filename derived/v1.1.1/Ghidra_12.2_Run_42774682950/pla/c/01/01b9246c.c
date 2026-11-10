/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9246c; name: FUN_01b9246c
 */


void FUN_01b9246c(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  byte *pbVar9;
  int iVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_04381ff8;
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    plVar8 = (long *)PTR_DAT_04382138;
    pbVar9 = PTR_DAT_04382130;
    iVar10 = *(int *)(param_2 + 0xc);
    do {
      while( true ) {
        plVar11 = *(long **)(param_2 + 0x10);
        if (((*pbVar9 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04382130), plVar8 = (long *)PTR_DAT_04382138,
           pbVar9 = PTR_DAT_04382130, iVar6 != 0)) {
          if (((*PTR_DAT_04381ff0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04381ff0), iVar6 != 0)) {
            uVar7 = FUN_01b925ec();
            *(undefined8 *)puVar5 = uVar7;
            __cxa_guard_release(PTR_DAT_04381ff0);
          }
          plVar8 = (long *)PTR_DAT_04382138;
          *(undefined **)PTR_DAT_04382138 = puVar5;
          pbVar9 = PTR_DAT_04382130;
          __cxa_guard_release(PTR_DAT_04382130);
          if (plVar11 != (long *)0x0) goto LAB_01b924b4;
          goto LAB_01b924c4;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_01b924c4;
LAB_01b924b4:
          if (plVar11 == plVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_01b924c4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(param_2 + 0x18) != 0) {
          lVar2 = *(long *)(param_2 + 0x18) + -0x50;
        }
        *param_1 = lVar2;
        return;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01b924c4:
  *param_1 = 0;
  return;
}


