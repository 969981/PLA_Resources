/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d6e78; name: FUN_011d6e78
 */


void FUN_011d6e78(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar9 = *param_1;
  plVar12 = *(long **)(lVar9 + 0x1b8);
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_011d7118;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar9 = *param_1;
  }
  plVar13 = *(long **)(lVar9 + 0x1c0);
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar10 = &DAT_041f87a8;
  }
  else {
    puVar10 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
LAB_011d7118:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar10 = &DAT_041f8af0;
      break;
    case 3:
      puVar10 = &DAT_041f8e38;
      break;
    case 4:
      puVar10 = &DAT_041f9180;
      break;
    case 5:
      puVar10 = &DAT_041f94c8;
    }
  }
  uVar7 = puVar10[9];
  uVar4 = puVar10[10];
  uVar15 = puVar10[0xb];
  lVar9 = *(long *)(param_1[1] + 0xb0);
  if (lVar9 != 0) {
    plVar11 = *(long **)(lVar9 + 0x270);
    if (plVar11 != *(long **)(lVar9 + 0x278)) {
      iVar8 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar11 != 0) {
          plVar2 = (long *)(*plVar11 + 0x58);
        }
        if (*plVar2 == -0x1776ab98f4ed9d3d) goto LAB_011d6f84;
        plVar11 = plVar11 + 1;
        iVar8 = iVar8 + 1;
      } while (*(long **)(lVar9 + 0x278) != plVar11);
    }
  }
  iVar8 = 0;
LAB_011d6f84:
  FUN_02c2e33c(param_1[1],iVar8,plVar13);
  FUN_010c6004(plVar12,0,param_2);
  lVar14 = *param_1;
  local_58 = (long *)0x0;
  lVar16 = *(long *)(lVar14 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar14 + 0x1c0);
  lVar9 = *(long *)(lVar14 + 0x1c8);
  *(undefined4 *)(lVar16 + 0x124) = 0;
  *(undefined2 *)(lVar16 + 0x128) = 0;
  *(undefined4 *)(lVar16 + 300) = 0;
  *(undefined4 *)(lVar16 + 0x134) = 0;
  local_70 = uVar7;
  uStack_68 = uVar4;
  local_60 = uVar15;
  FUN_02c33414(lVar16,uVar3);
  if (*(char *)(lVar9 + 0x7c) != '\0') {
    **(undefined2 **)(lVar9 + 0x58) = 0;
    *(undefined2 *)(lVar9 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar16,lVar9,uVar3,0,0);
  FUN_0283ce7c(lVar14,&local_70,*(undefined8 *)(lVar14 + 0x1c8),10);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


