/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d53568; name: FUN_00d53568
 */


void FUN_00d53568(long param_1,long param_2,uint param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined1 local_a8;
  undefined7 uStack_a7;
  long *local_90;
  undefined4 local_84;
  long *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined4 local_58;
  
  plVar13 = *(long **)(param_1 + 0x2c8);
  uVar14 = (ulong)param_3;
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_60 = (long *)0x0;
  local_58 = 0;
  local_84 = 0;
  local_70 = &DAT_03996322;
  uStack_68 = 0;
  local_80 = (long *)0x0;
  puStack_78 = &DAT_cbf29ce484222645;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 1:
    FUN_00d533f0(&local_a8,param_1,param_4,uVar14);
    plVar15 = (long *)plVar13[0x29];
    lVar16 = plVar13[0x2a];
    lVar5 = CONCAT71(uStack_a7,local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))(local_90);
    }
    plVar6 = plVar15;
    plVar10 = local_90;
    if ((lVar16 != 0) && (*plVar15 != lVar5)) {
      lVar12 = lVar16 * 0x30;
      plVar11 = plVar15 + lVar16 * 6;
      do {
        lVar12 = lVar12 + -0x30;
        plVar6 = plVar11;
        if (lVar12 == 0) break;
        plVar1 = plVar15 + 6;
        plVar15 = plVar15 + 6;
        plVar6 = plVar15;
      } while (*plVar1 != lVar5);
    }
    goto joined_r0x00d538d0;
  case 2:
    uVar9 = FUN_0284eb30(&local_80,&local_84,*(undefined2 *)(param_2 + 0xc));
    break;
  case 3:
    local_a8 = 0;
    uVar9 = FUN_0284f0fc(&local_80,&local_a8,0,*(undefined4 *)(param_2 + 0x10),
                         *(undefined2 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                         *(undefined1 *)(param_2 + 0x1c),*(undefined1 *)(param_2 + 0x1d),0);
    local_84 = 0;
    break;
  case 4:
    uVar7 = FUN_00d48ac0(param_2);
    uVar9 = FUN_0284e784(&local_80,&local_84,uVar7);
    break;
  default:
    goto switchD_00d535fc_default;
  }
  FUN_00d533f0(&local_a8,uVar9,param_4,uVar14);
  plVar6 = local_90;
  plVar15 = (long *)plVar13[0x29];
  lVar16 = plVar13[0x2a];
  lVar5 = CONCAT71(uStack_a7,local_a8);
  if (local_90 == (long *)0x0) {
    if (lVar16 == 0) goto LAB_00d538ec;
LAB_00d53634:
    if (*plVar15 == lVar5) goto LAB_00d538ec;
    lVar12 = lVar16 * 0x30;
    plVar10 = plVar15 + lVar16 * 6;
    do {
      lVar12 = lVar12 + -0x30;
      plVar11 = plVar10;
      if (lVar12 == 0) break;
      plVar1 = plVar15 + 6;
      plVar15 = plVar15 + 6;
      plVar11 = plVar15;
    } while (*plVar1 != lVar5);
    plVar15 = plVar11;
    if (plVar6 == (long *)0x0) goto LAB_00d538b8;
LAB_00d53674:
    (**(code **)(*plVar6 + 0x20))(plVar6);
    *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  else {
    (**(code **)(*local_90 + 0x18))(local_90);
    if (lVar16 != 0) goto LAB_00d53634;
LAB_00d538ec:
    if (plVar6 != (long *)0x0) goto LAB_00d53674;
LAB_00d538b8:
    *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
  }
  lVar16 = *(long *)(param_1 + 0x4e8);
  uVar17 = uVar14;
  if (param_4 != 0) {
    if (param_4 == 1) {
      uVar17 = (ulong)(param_3 + 0x30);
    }
    else {
      uVar17 = (ulong)(param_3 + 0x60);
    }
  }
  uVar8 = FUN_02c4d8d4(*(undefined8 *)(lVar16 + uVar17 * 0xc0 + 8),&local_80,local_84,0);
  if ((uVar8 & 1) == 0) {
switchD_00d535fc_default:
  }
  else {
    lVar16 = lVar16 + uVar17 * 0xc0;
    *(undefined1 *)(lVar16 + 0x30) = 0;
    *(undefined4 *)(lVar16 + 0x34) = 0;
    FUN_00d579e8(&local_a8,param_4,uVar14);
    plVar15 = (long *)plVar13[0x29];
    lVar16 = plVar13[0x2a];
    lVar5 = CONCAT71(uStack_a7,local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))(local_90);
    }
    plVar6 = plVar15;
    plVar10 = local_90;
    if ((lVar16 != 0) && (*plVar15 != lVar5)) {
      lVar12 = lVar16 * 0x30;
      plVar11 = plVar15 + lVar16 * 6;
      do {
        lVar12 = lVar12 + -0x30;
        plVar6 = plVar11;
        if (lVar12 == 0) break;
        plVar1 = plVar15 + 6;
        plVar15 = plVar15 + 6;
        plVar6 = plVar15;
      } while (*plVar1 != lVar5);
    }
joined_r0x00d538d0:
    if (plVar10 == (long *)0x0) {
      *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe;
    }
    else {
      (**(code **)(*plVar10 + 0x20))(plVar10);
      *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      iVar4 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


