/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6075c; name: FUN_02e6075c
 */


void FUN_02e6075c(undefined8 *param_1,undefined1 (*param_2) [12],long *param_3,float *param_4,
                 ulong param_5,ulong param_6)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  long lVar5;
  float fVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_98;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_5 & 1) != 0) {
    lVar10 = *(long *)(param_4 + 6);
    *(undefined4 *)(lVar10 + 8) = 0;
    *(undefined4 *)(lVar10 + 0x10) = 0xffffffff;
    (**(code **)**(undefined8 **)(param_4 + 8))();
    *(undefined1 *)(*(long *)(param_4 + 8) + 0xd) = 0;
    *(undefined1 *)(*(long *)(param_4 + 8) + 0xc) = 0;
  }
  if (*(char *)(param_4 + 0xb) != '\0') {
    FUN_02e61898(param_1,param_2,param_3);
  }
  FUN_02e5f924(param_1,param_2,param_4);
  auVar4 = *param_2;
  uVar3 = *(undefined8 *)param_4;
  fVar13 = *(float *)(*param_2 + 4) - param_4[1];
  fVar11 = *(float *)*param_2 - *param_4;
  fVar12 = param_4[2];
  fVar15 = *(float *)(*param_2 + 8) - fVar12;
  fVar11 = fVar11 * fVar11 + fVar13 * fVar13 + fVar15 * fVar15;
  fVar13 = param_4[10] * param_4[10];
  if ((*(char *)((long)param_4 + 0x2d) != '\0') && (fVar11 < fVar13)) {
    auVar14 = NEON_fmov(0x3f800000,4);
    fVar15 = auVar14._12_4_;
    uStack_d8 = CONCAT44(fVar15,fVar12);
    uStack_d0 = CONCAT44(auVar4._4_4_ - (float)((ulong)uVar3 >> 0x20),auVar4._0_4_ - (float)uVar3);
    uStack_c8 = CONCAT44(fVar15 - fVar15,auVar4._8_4_ - fVar12);
    local_e0 = uVar3;
    local_80 = uStack_d0;
    uStack_78 = uStack_c8;
    uStack_70 = uVar3;
    uStack_68 = uStack_d8;
    if ((param_6 & 1) == 0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_bc = 0;
      local_98 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      local_198 = 0;
      FUN_02e4c480(*param_1,&uStack_70,&local_80,&local_1a0,1);
      uVar8 = FUN_02e4c578(&local_1a0);
      cVar2 = *(char *)((long)param_1 + 0x21);
    }
    else {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_c0 = 0;
      local_88 = 0;
      local_84 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      local_198 = 0;
      FUN_02e5cfb8(*param_1,&uStack_70,&local_80,&local_1a0,1);
      uVar8 = FUN_02e61a18(&local_1a0);
      lVar10 = *(long *)(param_4 + 8);
      if (local_c0 != 0) {
        uVar9 = FUN_02e5db28(&local_1a0);
        if ((uVar9 & 1) != 0) {
          local_84 = 1;
        }
        local_c0 = 0;
      }
      *(undefined4 *)(lVar10 + 8) = local_88;
      cVar2 = *(char *)((long)param_1 + 0x21);
    }
    if ((cVar2 == '\0') || ((uVar8 & 1) == 0)) {
      FUN_02e58514(*(undefined8 *)(param_4 + 8),param_4,param_2);
    }
  }
  if (fVar13 <= fVar11) goto LAB_02e60bc8;
  local_1a0._0_4_ = 3.4028235e+38;
  local_198._0_4_ = 3.4028235e+38;
  local_190._0_4_ = -3.4028235e+38;
  fVar11 = *param_4;
  if (fVar11 < 3.4028235e+38) {
    local_1a0._0_4_ = fVar11;
  }
  local_1a0._4_4_ = 3.4028235e+38;
  fVar12 = param_4[1];
  if (fVar12 < 3.4028235e+38) {
    local_1a0._4_4_ = fVar12;
  }
  fVar13 = param_4[2];
  if (fVar13 < 3.4028235e+38) {
    local_198._0_4_ = fVar13;
  }
  local_198._4_4_ = -3.4028235e+38;
  if (-3.4028235e+38 < fVar11) {
    local_198._4_4_ = fVar11;
  }
  if (-3.4028235e+38 < fVar12) {
    local_190._0_4_ = fVar12;
  }
  local_190._4_4_ = -3.4028235e+38;
  if (-3.4028235e+38 < fVar13) {
    local_190._4_4_ = fVar13;
  }
  fVar16 = *(float *)((long)param_1 + 0x24);
  fVar18 = fVar16 + fVar11;
  fVar15 = fVar16 + fVar12;
  if (fVar18 < (float)local_1a0) {
    local_1a0._0_4_ = fVar18;
  }
  fVar17 = fVar16 + fVar13;
  fVar6 = fVar15;
  if (local_1a0._4_4_ <= fVar15) {
    fVar6 = local_1a0._4_4_;
  }
  if (fVar17 < (float)local_198) {
    local_198._0_4_ = fVar17;
  }
  if (fVar18 <= local_198._4_4_) {
    fVar18 = local_198._4_4_;
  }
  if (fVar15 <= (float)local_190) {
    fVar15 = (float)local_190;
  }
  if (local_190._4_4_ < fVar17) {
    local_190._4_4_ = fVar17;
  }
  local_198._4_4_ = fVar11 - fVar16;
  local_190._0_4_ = fVar12 - fVar16;
  if (local_198._4_4_ < (float)local_1a0) {
    local_1a0._0_4_ = local_198._4_4_;
  }
  fVar13 = fVar13 - fVar16;
  if ((float)local_190 < fVar6) {
    local_1a0._4_4_ = (float)local_190;
    if ((float)local_198 <= fVar13) goto LAB_02e60a30;
LAB_02e60b7c:
    local_198._0_4_ = fVar13;
    if (local_198._4_4_ <= fVar18) goto LAB_02e60a38;
LAB_02e60b88:
    if ((float)local_190 <= fVar15) goto LAB_02e60a40;
LAB_02e60b94:
    if (fVar13 <= local_190._4_4_) goto LAB_02e60a48;
LAB_02e60ba0:
    uVar1 = *(uint *)(param_3 + 1);
    local_190._4_4_ = fVar13;
  }
  else {
    local_1a0._4_4_ = fVar6;
    if (fVar13 < (float)local_198) goto LAB_02e60b7c;
LAB_02e60a30:
    if (fVar18 < local_198._4_4_) goto LAB_02e60b88;
LAB_02e60a38:
    local_198._4_4_ = fVar18;
    if (fVar15 < (float)local_190) goto LAB_02e60b94;
LAB_02e60a40:
    local_190._0_4_ = fVar15;
    if (local_190._4_4_ < fVar13) goto LAB_02e60ba0;
LAB_02e60a48:
    uVar1 = *(uint *)(param_3 + 1);
  }
  if (uVar1 != 0) {
    lVar10 = (ulong)uVar1 * 0x50;
    iVar7 = *(int *)(*param_3 + 0x40);
    lVar5 = *param_3 + 0x20;
    while( true ) {
      if (iVar7 != 0) {
        FUN_02e61a6c(param_1,param_2,param_4,lVar5 + -0x10,lVar5,lVar5 + -0x20,&local_1a0);
        param_1[1] = *(undefined8 *)(lVar5 + 0x10);
      }
      lVar10 = lVar10 + -0x50;
      if (lVar10 == 0) break;
      iVar7 = *(int *)(lVar5 + 0x70);
      lVar5 = lVar5 + 0x50;
    }
  }
  if (*(char *)((long)param_4 + 0x2d) == '\0') {
    return;
  }
  iVar7 = (**(code **)(**(long **)(param_4 + 8) + 0x10))();
  if (iVar7 != 0) {
    return;
  }
LAB_02e60bc8:
  *(undefined1 *)(*(long *)(param_4 + 8) + 0xd) = 1;
  return;
}


