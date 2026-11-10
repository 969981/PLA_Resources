/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c06a4; name: FUN_030c06a4
 */


void FUN_030c06a4(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  
  plVar19 = *(long **)(param_1 + 0x40);
  if ((int)plVar19[1] == 0) {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x30);
  piVar1 = (int *)(param_1 + 0x48);
  lVar15 = *(long *)(lVar18 + 0x10);
  if ((int)plVar19[1] <= *piVar1) {
    return;
  }
  lVar13 = *(long *)(param_2 + 8);
  if (lVar13 == 0) {
    lVar13 = tpidr_el0;
    if (*(long *)(lVar13 + 0x38d490) == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar10;
      lVar13 = *(long *)(lVar10 + 0x10);
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38d490) + 0x10);
    }
    if (lVar13 == 0) {
      bVar6 = true;
      goto LAB_030c0748;
    }
  }
  FUN_032d5af0(lVar13,"TtConstraints",0xd);
  FUN_032d5af0(lVar13,"TtBuildConstraintJacobians",0x1a);
  bVar6 = false;
LAB_030c0748:
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  piVar8 = (int *)FUN_0301c29c();
  lVar14 = *(long *)(piVar8 + 2);
  iVar3 = *piVar8;
  lVar10 = *(long *)(lVar15 + 0x100);
  uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x488) + 8);
  uVar11 = *(undefined8 *)(*(long *)(lVar14 + 0x488) + 0x38);
  do {
    iVar16 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 < (int)plVar19[1]) {
    lVar10 = lVar10 + (long)iVar3 * 0x500;
    lVar18 = lVar18 + 0x140;
    lVar15 = lVar15 + 0xb0;
    if (bVar6) {
      do {
        puVar9 = (undefined4 *)(*plVar19 + (long)iVar16 * 0xc);
        lVar2 = 0;
        if (*(long *)(*(long *)(piVar8 + 2) + 0x698) != 0) {
          lVar2 = lVar10;
        }
        FUN_0309a860(piVar8,lVar14,uVar12,uVar11,lVar18,*puVar9,puVar9[1],lVar15,lVar10 + 0x300,
                     lVar2);
        do {
          iVar16 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      } while (iVar16 < (int)plVar19[1]);
    }
    else {
      do {
        FUN_032d5af0(lVar13,"TtSubTask",9);
        piVar17 = (int *)(*plVar19 + (long)iVar16 * 0xc);
        lVar2 = 0;
        if (*(long *)(*(long *)(piVar8 + 2) + 0x698) != 0) {
          lVar2 = lVar10;
        }
        FUN_0309a860(piVar8,lVar14,uVar12,uVar11,lVar18,*piVar17,piVar17[1],lVar15,lVar10 + 0x300,
                     lVar2);
        FUN_032d5b34(lVar13,&DAT_0390f40e);
        FUN_032d5c48((float)((piVar17[1] - *piVar17) + 1),lVar13,"MiNumConstraints");
        do {
          iVar16 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      } while (iVar16 < (int)plVar19[1]);
    }
  }
  FUN_0301c35c(uVar7,piVar8);
  if (bVar6) {
    return;
  }
  FUN_032d5b34(lVar13,&DAT_0390f40e);
  FUN_032d5b34(lVar13,&DAT_0390f40e);
  return;
}


