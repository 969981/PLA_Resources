/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5f79c; name: FUN_00d5f79c
 */


undefined1  [16] FUN_00d5f79c(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auStack_80 [24];
  long *local_68;
  
  plVar15 = *(long **)(param_1 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  iVar9 = param_2;
  if (param_2 == 2) {
    iVar9 = 0;
  }
  lVar11 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar9 * 0x28);
  lVar11 = *(long *)(lVar11 + 0x8b0);
  iVar3 = *(int *)(lVar11 + 0x10);
  iVar4 = *(int *)(lVar11 + 0x14);
  piVar2 = (int *)(lVar11 + 0x20);
  if (*(int *)(lVar11 + 0x28) != 0) {
    piVar2 = (int *)(lVar11 + 0x24);
  }
  iVar6 = *piVar2;
  lVar12 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar9 * 0x28);
  lVar11 = **(long **)(lVar12 + 0x838);
  lVar5 = (*(long **)(lVar12 + 0x838))[1];
  if ((lVar11 != lVar5) &&
     (iVar4 = iVar4 + iVar6 * iVar3,
     *(char *)(lVar11 + 0x20) != '\0' || *(int *)(lVar11 + 0x24) != iVar4)) {
    lVar10 = lVar11 + 0x30;
    do {
      lVar14 = lVar10;
      lVar11 = lVar5;
      if (lVar5 == lVar14) break;
      lVar10 = lVar14 + 0x30;
    } while ((*(char *)(lVar14 + 0x20) != '\0') ||
            (lVar11 = lVar14, *(int *)(lVar14 + 0x24) != iVar4));
  }
  uVar13 = 0xffffffff;
  if ((lVar11 != 0) && (uVar13 = 0xffffffff, lVar5 != lVar11)) {
    uVar13 = *(undefined4 *)(lVar11 + 0x28);
  }
  FUN_00d533f0(auStack_80,lVar12,param_2,uVar13);
  auVar16 = FUN_0283ad10(plVar15,auStack_80);
  uVar17 = auVar16._8_8_;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  auVar16._8_8_ = uVar17;
  return auVar16;
}


