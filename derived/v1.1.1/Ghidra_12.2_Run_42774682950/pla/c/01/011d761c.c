/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d761c; name: FUN_011d761c
 */


void FUN_011d761c(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar10 = *param_1;
  plVar13 = *(long **)(lVar10 + 0x1b8);
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_011d78d4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = *param_1;
  }
  plVar14 = *(long **)(lVar10 + 0x1c0);
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar11 = &DAT_041f87a8;
  }
  else {
    puVar11 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
LAB_011d78d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar11 = &DAT_041f8af0;
      break;
    case 3:
      puVar11 = &DAT_041f8e38;
      break;
    case 4:
      puVar11 = &DAT_041f9180;
      break;
    case 5:
      puVar11 = &DAT_041f94c8;
    }
  }
  uVar8 = puVar11[3];
  uVar4 = puVar11[4];
  uVar16 = puVar11[5];
  uVar7 = FUN_02c5fb2c(param_2);
  lVar10 = *(long *)(param_1[1] + 0xb0);
  if (lVar10 != 0) {
    plVar12 = *(long **)(lVar10 + 0x270);
    if (plVar12 != *(long **)(lVar10 + 0x278)) {
      iVar9 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar12 != 0) {
          plVar2 = (long *)(*plVar12 + 0x58);
        }
        if (*plVar2 == 0x3d82dcc65ea4f3fb) goto LAB_011d7734;
        plVar12 = plVar12 + 1;
        iVar9 = iVar9 + 1;
      } while (*(long **)(lVar10 + 0x278) != plVar12);
    }
  }
  iVar9 = 0;
LAB_011d7734:
  FUN_02c2e33c(param_1[1],iVar9,plVar14);
  FUN_02c395d0(plVar13,0,uVar7,3,0,1);
  lVar15 = *param_1;
  local_58 = (long *)0x0;
  lVar17 = *(long *)(lVar15 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar15 + 0x1c0);
  lVar10 = *(long *)(lVar15 + 0x1c8);
  *(undefined4 *)(lVar17 + 0x124) = 0;
  *(undefined2 *)(lVar17 + 0x128) = 0;
  *(undefined4 *)(lVar17 + 300) = 0;
  *(undefined4 *)(lVar17 + 0x134) = 0;
  local_70 = uVar8;
  uStack_68 = uVar4;
  local_60 = uVar16;
  FUN_02c33414(lVar17,uVar3);
  if (*(char *)(lVar10 + 0x7c) != '\0') {
    **(undefined2 **)(lVar10 + 0x58) = 0;
    *(undefined2 *)(lVar10 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar17,lVar10,uVar3,0,0);
  FUN_0283ce7c(lVar15,&local_70,*(undefined8 *)(lVar15 + 0x1c8),10);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 10;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


