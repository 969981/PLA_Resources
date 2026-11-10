/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019fa7a0; name: FUN_019fa7a0
 */


void FUN_019fa7a0(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    piVar1 = (int *)(lVar7 + 0xc);
    puVar8 = PTR_DAT_04382338;
    pbVar10 = PTR_DAT_04382340;
    iVar9 = *(int *)(lVar7 + 0xc);
    do {
      plVar11 = *(long **)(lVar7 + 0x10);
      if (((*pbVar10 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04382340), puVar8 = PTR_DAT_04382338,
         pbVar10 = PTR_DAT_04382340, iVar5 != 0)) {
        uVar6 = FUN_019fa6c0();
        *(undefined8 *)PTR_DAT_04382338 = uVar6;
        __cxa_guard_release(PTR_DAT_04382340);
        puVar8 = PTR_DAT_04382338;
        pbVar10 = PTR_DAT_04382340;
      }
      while( true ) {
        if (plVar11 == (long *)0x0) goto LAB_019fa7b4;
        if (plVar11 == (long *)puVar8) break;
        plVar11 = (long *)*plVar11;
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar7 + 0x18) != 0) {
            lVar2 = *(long *)(lVar7 + 0x18) + -0x50;
          }
          *param_1 = lVar2;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_019fa7b4:
  *param_1 = 0;
  return;
}


