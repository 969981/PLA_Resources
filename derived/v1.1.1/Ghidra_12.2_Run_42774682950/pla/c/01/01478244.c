/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01478244; name: FUN_01478244
 */


void FUN_01478244(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  long *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  char *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char acStack_a0 [64];
  
  iVar7 = FUN_02c60024(param_2);
  iVar8 = FUN_02c68e44(*(undefined8 *)(param_2 + 0x98));
  iVar9 = FUN_02c600e8(param_2);
  snprintf(acStack_a0,0x40,"anime_L_result_plate_%02d_L_gauge_exp_00_gauge_scale",param_3);
  local_c8 = acStack_a0;
  FUN_009313e8(&local_e8,&local_c8);
  plVar5 = local_e8;
  if (local_e8 == (long *)0x0) {
    lVar19 = *(long *)PTR_DAT_04379c88;
LAB_01478620:
    lStack_b8 = *(long *)PTR_PTR_04379d00;
    if (local_e8 != (long *)0x0) goto LAB_014782e0;
LAB_01478630:
    local_b0 = 0;
  }
  else {
    lVar19 = local_e8[0xb];
    if (local_e8 == (long *)0x0) goto LAB_01478620;
    lStack_b8 = local_e8[0xc];
    if (local_e8 == (long *)0x0) goto LAB_01478630;
LAB_014782e0:
    local_b0 = local_e8[0xd];
  }
  local_a8 = (long *)0x0;
  local_c0 = lVar19;
  if (local_e8 == (long *)0x0) {
    local_a8 = local_e8;
  }
  else {
    (**(code **)(*local_e8 + 0x18))(local_e8);
    local_a8 = plVar5;
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  fVar20 = 0.0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      fVar20 = (float)FUN_0283b914(*(long *)(param_1 + 0x2c8),&local_c0);
    }
  }
  uVar10 = FUN_02c5fb2c(param_2);
  if (uVar10 < 100) {
    iVar17 = (int)fVar20;
    uVar10 = iVar9 - iVar7;
    uVar3 = iVar8 - iVar7;
    if (uVar10 == 0 && uVar3 == 0) {
      lVar18 = *(long *)(param_1 + 0x2c8);
      iVar7 = iVar17;
    }
    else {
      fVar20 = (float)(uVar3 * iVar17) / (float)uVar10;
      uVar16 = (uint)fVar20;
      iVar7 = (fVar20 - (float)uVar16 != 0.0) + uVar16;
      iVar7 = iVar7 - (uint)(uVar3 != uVar10 && iVar7 == iVar17);
      lVar18 = *(long *)(param_1 + 0x2c8);
    }
    if (lVar18 == 0) goto LAB_01478668;
    plVar12 = *(long **)(lVar18 + 0x1a0);
    lVar2 = *(long *)(lVar18 + 0x1a8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar4 = plVar12;
    if ((lVar2 != 0) && (*plVar12 != lVar19)) {
      lVar14 = lVar2 * 0x30;
      plVar15 = plVar12 + lVar2 * 6;
      do {
        lVar14 = lVar14 + -0x30;
        plVar4 = plVar15;
        if (lVar14 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar4 = plVar12;
      } while (*plVar1 != lVar19);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    plVar12 = (long *)(*(long *)(lVar18 + 0x1a0) + *(long *)(lVar18 + 0x1a8) * 0x30);
    if (plVar4 == plVar12) {
      plVar15 = (long *)0x0;
      if (plVar4 != plVar12) goto LAB_01478404;
LAB_01478644:
      if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_01478668;
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
    }
    else {
      plVar15 = plVar4 + 4;
      if (plVar4 == plVar12) goto LAB_01478644;
LAB_01478404:
      uVar13 = (ulong)*(uint *)(plVar15 + 1);
      if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
          (lVar19 = *(long *)(*plVar15 + 600), *(char *)(lVar19 + uVar13 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar19 + uVar13 * 0x48 + 0xb) == '\0')) goto LAB_01478644;
      plVar12 = (long *)(lVar19 + uVar13 * 0x48 + 0x10);
      lVar18 = *plVar12;
      if ((lVar18 != 0) && (*(char *)(lVar19 + uVar13 * 0x48 + 9) == '\0')) {
        fVar20 = *(float *)(lVar18 + 0x20);
        uVar6 = FUN_00227728();
        uVar13 = FUN_00227744(*plVar12);
        if (((float)uVar6 <= fVar20) && ((uVar13 & 1) == 0)) goto LAB_01478644;
      }
    }
    fVar20 = (float)(uint)(iVar17 - iVar7);
    uVar11 = *(undefined8 *)(param_1 + 0x2c8);
  }
  else {
    lVar18 = *(long *)(param_1 + 0x2c8);
    if (lVar18 == 0) goto LAB_01478668;
    plVar12 = *(long **)(lVar18 + 0x1a0);
    lVar2 = *(long *)(lVar18 + 0x1a8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar4 = plVar12;
    if ((lVar2 != 0) && (*plVar12 != lVar19)) {
      lVar14 = lVar2 * 0x30;
      plVar15 = plVar12 + lVar2 * 6;
      do {
        lVar14 = lVar14 + -0x30;
        plVar4 = plVar15;
        if (lVar14 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar4 = plVar12;
      } while (*plVar1 != lVar19);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    plVar12 = (long *)(*(long *)(lVar18 + 0x1a0) + *(long *)(lVar18 + 0x1a8) * 0x30);
    if (plVar4 == plVar12) {
      plVar15 = (long *)0x0;
      if (plVar4 != plVar12) goto LAB_01478554;
LAB_014786f4:
      if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_01478668;
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
    }
    else {
      plVar15 = plVar4 + 4;
      if (plVar4 == plVar12) goto LAB_014786f4;
LAB_01478554:
      uVar13 = (ulong)*(uint *)(plVar15 + 1);
      if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
          (lVar19 = *(long *)(*plVar15 + 600), *(char *)(lVar19 + uVar13 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar19 + uVar13 * 0x48 + 0xb) == '\0')) goto LAB_014786f4;
      plVar12 = (long *)(lVar19 + uVar13 * 0x48 + 0x10);
      lVar18 = *plVar12;
      if ((lVar18 != 0) && (*(char *)(lVar19 + uVar13 * 0x48 + 9) == '\0')) {
        fVar20 = *(float *)(lVar18 + 0x20);
        uVar6 = FUN_00227728();
        uVar13 = FUN_00227744(*plVar12);
        if (((float)uVar6 <= fVar20) && ((uVar13 & 1) == 0)) goto LAB_014786f4;
      }
    }
    uVar11 = *(undefined8 *)(param_1 + 0x2c8);
    fVar20 = 100.0;
  }
  FUN_0283b748(fVar20,uVar11,&local_c0);
LAB_01478668:
  local_e8 = (long *)0x640ef0d12e2f1543;
  pcStack_e0 = "PLAY_UI_COMMON_LV_GAUGE_UP";
  local_d8 = 0x1a;
  local_d0 = (long *)0x0;
  FUN_028354b0(&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}


