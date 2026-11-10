/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307a310; name: FUN_0307a310
 */


/* WARNING: Removing unreachable block (ram,0x0307a6ec) */

undefined8
FUN_0307a310(long param_1,uint param_2,undefined1 (*param_3) [16],long param_4,long param_5,
            undefined8 *param_6)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  undefined1 auVar32 [16];
  long local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 local_cb;
  float *local_c8;
  undefined8 local_c0;
  float *local_b8;
  uint local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  uint local_90;
  undefined4 local_84;
  long local_80;
  undefined8 local_78;
  long local_70;
  int local_68;
  
  iVar9 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_4 + 0x18) * 0x200 + 0x58))(param_4);
  local_80 = 0;
  local_78 = 0x8000000000000000;
  lVar10 = tpidr_el0;
  local_68 = iVar9;
  if (iVar9 == 0) {
    local_70 = 0;
  }
  else {
    lVar12 = *(long *)(lVar10 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar12;
    }
    lVar12 = *(long *)(lVar12 + 8);
    uVar11 = (ulong)(int)(iVar9 * 0xc + 0x7fU & 0xffffff80);
    if (uVar11 <= *(ulong *)(lVar12 + 0x10)) {
      local_70 = *(long *)(lVar12 + 0x18);
      uVar11 = local_70 + uVar11;
      if (uVar11 <= *(ulong *)(lVar12 + 0x20)) {
        *(ulong *)(lVar12 + 0x18) = uVar11;
        goto LAB_0307a3cc;
      }
    }
    local_70 = FUN_032ce670();
  }
LAB_0307a3cc:
  local_78 = CONCAT44(iVar9,(int)local_78) | 0x8000000000000000;
  local_80 = local_70;
  if (iVar9 < 0x40000000) {
    if (iVar9 != 0) goto LAB_0307a428;
  }
  else {
    local_80 = FUN_02fb8184(PTR_PTR_0434a080,iVar9,local_70,0,(long)&local_78 + 4);
    if ((int)local_78 != iVar9) {
LAB_0307a428:
      local_78 = CONCAT44(local_78._4_4_,iVar9);
    }
  }
  lVar12 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_4 + 0x18) * 0x200 + 0x60))
                     (param_4,local_80,iVar9,&local_84);
  local_a8 = 0;
  local_a0 = 0x8000000000000000;
  local_90 = param_2;
  if (param_2 == 0) {
    local_98 = 0;
  }
  else {
    lVar13 = *(long *)(lVar10 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar13;
    }
    lVar13 = *(long *)(lVar13 + 8);
    uVar11 = (ulong)(int)(param_2 * 0x10 + 0x7f & 0xffffff80);
    if (uVar11 <= *(ulong *)(lVar13 + 0x10)) {
      local_98 = *(long *)(lVar13 + 0x18);
      uVar11 = local_98 + uVar11;
      if (uVar11 <= *(ulong *)(lVar13 + 0x20)) {
        *(ulong *)(lVar13 + 0x18) = uVar11;
        goto LAB_0307a4b0;
      }
    }
    local_98 = FUN_032ce670();
  }
LAB_0307a4b0:
  uVar11 = local_a0;
  local_a0 = CONCAT44(param_2,(uint)local_a0) | 0x8000000000000000;
  local_a8 = local_98;
  if (0x3fffffff < (int)param_2) {
    local_a8 = FUN_02ffeb8c(PTR_PTR_0434a080,param_2,local_98,uVar11 & 0xffffffff,
                            (long)&local_a0 + 4);
  }
  if ((uint)local_a0 != param_2) {
    local_a0 = CONCAT44(local_a0._4_4_,param_2);
  }
  if (0 < (int)param_2) {
    lVar13 = 0;
    uVar11 = (ulong)param_2;
    puVar16 = (ushort *)(param_1 + 0x80);
    do {
      uVar3 = *puVar16;
      puVar17 = (undefined8 *)(lVar12 + (ulong)uVar3 * 0xc);
      uVar22 = *puVar17;
      uVar4 = *(undefined4 *)(puVar17 + 1);
      puVar17 = (undefined8 *)(local_a8 + lVar13);
      uVar11 = uVar11 - 1;
      puVar17[1] = CONCAT44(uVar4,uVar4);
      *puVar17 = uVar22;
      *(uint *)((long)puVar17 + 0xc) = uVar3 | 0x3f000000;
      lVar13 = lVar13 + 0x10;
      puVar16 = puVar16 + 1;
    } while (uVar11 != 0);
  }
  uVar24 = *(undefined8 *)(*param_3 + 8);
  uVar22 = *(undefined8 *)*param_3;
  auVar32 = param_3[1];
  auVar29 = param_3[2];
  auVar5 = param_3[3];
  lVar12 = (long)(int)param_2;
  do {
    lVar13 = lVar12 * 0x10;
    lVar12 = lVar12 + -1;
    pfVar14 = (float *)(local_a8 + -0x10 + lVar13);
    fVar20 = *pfVar14;
    fVar21 = pfVar14[1];
    fVar23 = pfVar14[2];
    auVar25._0_8_ =
         CONCAT44(auVar5._4_4_ +
                  auVar29._4_4_ * fVar23 +
                  (float)((ulong)uVar22 >> 0x20) * fVar20 + auVar32._4_4_ * fVar21,
                  auVar5._0_4_ +
                  auVar29._0_4_ * fVar23 + (float)uVar22 * fVar20 + auVar32._0_4_ * fVar21);
    auVar25._8_4_ =
         auVar5._8_4_ + auVar29._8_4_ * fVar23 + (float)uVar24 * fVar20 + auVar32._8_4_ * fVar21;
    auVar25._12_4_ =
         auVar5._12_4_ +
         auVar29._12_4_ * fVar23 + (float)((ulong)uVar24 >> 0x20) * fVar20 + auVar32._12_4_ * fVar21
    ;
    puVar17 = (undefined8 *)(local_a8 + -0x10 + lVar13);
    puVar17[1] = auVar25._8_8_;
    *puVar17 = auVar25._0_8_;
  } while (0 < lVar12);
  local_c8 = (float *)0x0;
  local_c0 = 0x8000000000000000;
  local_b0 = param_2;
  if (param_2 == 0) {
    local_b8 = (float *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar10 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar12;
    }
    lVar12 = *(long *)(lVar12 + 8);
    uVar11 = (ulong)(int)(param_2 * 0x60 + 0x7f & 0xffffff80);
    if (uVar11 <= *(ulong *)(lVar12 + 0x10)) {
      local_b8 = *(float **)(lVar12 + 0x18);
      uVar11 = (long)local_b8 + uVar11;
      if (uVar11 <= *(ulong *)(lVar12 + 0x20)) {
        *(ulong *)(lVar12 + 0x18) = uVar11;
        goto LAB_0307a5ec;
      }
    }
    local_b8 = (float *)FUN_032ce670();
  }
LAB_0307a5ec:
  uVar11 = local_c0;
  local_c0._4_4_ = param_2 | 0x80000000;
  local_c8 = local_b8;
  if (0x3fffffff < (int)param_2) {
    local_c8 = (float *)FUN_02ffe910(PTR_PTR_0434a080,param_2,local_b8,uVar11 & 0xffffffff,
                                     (long)&local_c0 + 4);
  }
  if ((int)(uint)local_c0 < (int)param_2) {
    lVar12 = (long)(int)(uint)local_c0 * -0x60 + (long)(int)param_2 * 0x60;
    pfVar14 = local_c8 + (long)(int)(uint)local_c0 * 0x18 + 0x12;
    do {
      *(undefined2 *)(pfVar14 + -2) = 0xffff;
      lVar12 = lVar12 + -0x60;
      pfVar14[-1] = 0.0;
      pfVar14[0] = 0.0;
      pfVar14[1] = 0.0;
      pfVar14 = pfVar14 + 0x18;
      local_c0._0_4_ = param_2;
    } while (lVar12 != 0);
  }
  else if ((int)param_2 < (int)(uint)local_c0) {
    local_c0._0_4_ = param_2;
  }
  local_d4 = local_84;
  uStack_d0 = 0x7f7fffee;
  local_e0 = local_a8;
  local_cb = 1;
  local_d8 = param_2;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_5 + 0x18) * 0x200 + 0xf0))(param_5,&local_e0);
  pfVar8 = local_b8;
  pfVar14 = local_c8;
  if (1 < (int)param_2) {
    if (param_2 == 2) {
      lVar12 = 1;
      pfVar15 = local_c8;
    }
    else {
      pfVar15 = local_c8 + 0x24;
      lVar12 = 1;
      do {
        lVar12 = lVar12 + 2;
        pfVar1 = pfVar15 + 0x18;
        pfVar2 = pfVar15 + -0xc;
        if (pfVar14[0xc] <= *pfVar15) {
          pfVar2 = pfVar14;
        }
        pfVar14 = pfVar15 + 0xc;
        pfVar15 = pfVar15 + 0x30;
        if (pfVar2[0xc] <= *pfVar1) {
          pfVar14 = pfVar2;
        }
      } while ((ulong)param_2 - ((ulong)(param_2 - 1) & 1) != lVar12);
      pfVar15 = pfVar14;
      if ((param_2 - 1 & 1) == 0) goto LAB_0307a770;
    }
    pfVar14 = local_c8 + lVar12 * 0x18;
    if (pfVar15[0xc] <= (local_c8 + lVar12 * 0x18)[0xc]) {
      pfVar14 = pfVar15;
    }
  }
LAB_0307a770:
  if (3.40282e+38 <= pfVar14[0xc]) {
    uVar22 = 0x80040200;
  }
  else {
    fVar20 = pfVar14[4];
    fVar21 = pfVar14[5];
    fVar23 = pfVar14[6];
    auVar32._0_4_ = fVar20 * (0.0 - *pfVar14);
    auVar32._4_4_ = fVar21 * (0.0 - pfVar14[1]);
    auVar32._8_4_ = fVar23 * (0.0 - pfVar14[2]);
    auVar32._12_4_ = pfVar14[7] * (0.0 - pfVar14[3]);
    auVar29 = NEON_ext(auVar32,auVar32,8,1);
    fVar31 = auVar32._0_4_ + auVar32._4_4_ + auVar29._0_4_;
    pfVar14[6] = fVar23;
    pfVar14[7] = fVar31;
    pfVar14[4] = fVar20;
    pfVar14[5] = fVar21;
    if ((int)param_2 < 1) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
      uVar11 = (ulong)param_2;
      pfVar15 = local_c8;
      do {
        uVar11 = uVar11 - 1;
        auVar29._0_4_ = fVar20 * *pfVar15;
        auVar29._4_4_ = fVar21 * pfVar15[1];
        auVar29._8_4_ = fVar23 * pfVar15[2];
        auVar29._12_4_ = fVar31 * pfVar15[3];
        auVar32 = NEON_ext(auVar29,auVar29,8,1);
        fVar19 = auVar32._0_4_ + fVar31;
        uVar22 = NEON_fmax(uVar22,CONCAT44(auVar29._0_4_ + auVar29._4_4_ + fVar19,
                                           auVar29._0_4_ + auVar29._4_4_ + fVar19),4);
        pfVar15 = pfVar15 + 0x18;
      } while (uVar11 != 0);
    }
    fVar28 = (float)uVar22;
    fVar19 = pfVar14[0xc] - fVar28;
    fVar30 = (float)((ulong)uVar22 >> 0x20);
    pfVar14[0xc] = fVar19;
    pfVar14[2] = pfVar14[2] + fVar23 * fVar28;
    pfVar14[3] = pfVar14[3] + fVar31 * fVar30;
    *pfVar14 = *pfVar14 + fVar20 * fVar28;
    pfVar14[1] = pfVar14[1] + fVar21 * fVar30;
    *param_6 = CONCAT44(fVar19,fVar19);
    auVar32 = param_3[2];
    auVar29 = *param_3;
    auVar5 = param_3[1];
    auVar25 = NEON_ext(auVar29,auVar29,8,1);
    auVar26 = NEON_ext(auVar5,auVar5,8,1);
    uVar22 = 0;
    auVar27 = NEON_ext(auVar32,auVar32,8,1);
    fVar20 = pfVar14[4];
    fVar21 = pfVar14[5];
    fVar23 = pfVar14[6];
    *(float *)(param_6 + 3) =
         auVar27._0_4_ * fVar23 + auVar32._0_4_ * fVar20 + auVar32._4_4_ * fVar21;
    *(float *)((long)param_6 + 0x1c) = fVar19;
    *(float *)(param_6 + 2) =
         auVar25._0_4_ * fVar23 + auVar29._0_4_ * fVar20 + auVar29._4_4_ * fVar21;
    *(float *)((long)param_6 + 0x14) =
         auVar26._0_4_ * fVar23 + auVar5._0_4_ * fVar20 + auVar5._4_4_ * fVar21;
    fVar20 = pfVar14[0xc];
    auVar32 = *param_3;
    fVar21 = (*pfVar14 + pfVar14[4] * fVar20) - *(float *)param_3[3];
    fVar23 = (pfVar14[1] + pfVar14[5] * fVar20) - *(float *)(param_3[3] + 4);
    fVar20 = (pfVar14[2] + pfVar14[6] * fVar20) - *(float *)(param_3[3] + 8);
    auVar25 = NEON_ext(auVar32,auVar32,8,1);
    auVar5 = param_3[1];
    auVar29 = param_3[2];
    auVar26 = NEON_ext(auVar5,auVar5,8,1);
    auVar27 = NEON_ext(auVar29,auVar29,8,1);
    param_6[5] = CONCAT44(auVar27._4_4_ * fVar20 + auVar29._4_4_ * fVar21 + auVar27._4_4_ * fVar23,
                          auVar27._0_4_ * fVar20 + auVar29._0_4_ * fVar21 + auVar29._4_4_ * fVar23);
    param_6[4] = CONCAT44(auVar26._0_4_ * fVar20 + auVar5._0_4_ * fVar21 + auVar5._4_4_ * fVar23,
                          auVar25._0_4_ * fVar20 + auVar32._0_4_ * fVar21 + auVar32._4_4_ * fVar23);
  }
  if (local_b8 == local_c8) {
    local_c0._0_4_ = 0;
  }
  lVar13 = (long)(int)local_b0;
  lVar12 = *(long *)(lVar10 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar12;
  }
  lVar12 = *(long *)(lVar12 + 8);
  uVar11 = lVar13 * 0x60 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar12 + 0x10) < uVar11) || (*(long *)(lVar12 + 0x18) != uVar11 + (long)pfVar8))
     || (*(float **)(lVar12 + 0x28) == pfVar8)) {
    FUN_032cedf0(lVar12,pfVar8);
  }
  else {
    *(float **)(lVar12 + 0x18) = pfVar8;
  }
  uVar7 = local_c0._4_4_;
  puVar6 = PTR_PTR_0434a080;
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  if ((-1 < (int)uVar7) && (local_c8 != (float *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_c8,0x60,uVar7 & 0x3fffffff);
  }
  uVar7 = local_90;
  lVar12 = local_98;
  if (local_98 == local_a8) {
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  lVar13 = *(long *)(lVar10 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar13;
  }
  lVar13 = *(long *)(lVar13 + 8);
  uVar11 = (ulong)(int)(uVar7 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar13 + 0x10) < uVar11) || (*(long *)(lVar13 + 0x18) != uVar11 + lVar12)) ||
     (*(long *)(lVar13 + 0x28) == lVar12)) {
    FUN_032cedf0(lVar13,lVar12);
  }
  else {
    *(long *)(lVar13 + 0x18) = lVar12;
  }
  uVar11 = local_a0;
  uVar7 = local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_a8 != 0)) {
    FUN_032cf244(puVar6,local_a8,0x10,uVar7 & 0x3fffffff);
  }
  lVar12 = local_70;
  if (local_70 == local_80) {
    local_78 = local_78 & 0xffffffff00000000;
  }
  lVar18 = (long)local_68;
  lVar13 = *(long *)(lVar10 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar13;
  }
  lVar10 = *(long *)(lVar13 + 8);
  uVar11 = lVar18 * 0xc + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar10 + 0x10) < uVar11) || (*(long *)(lVar10 + 0x18) != uVar11 + lVar12)) ||
     (*(long *)(lVar10 + 0x28) == lVar12)) {
    FUN_032cedf0(lVar10,lVar12);
  }
  else {
    *(long *)(lVar10 + 0x18) = lVar12;
  }
  uVar11 = local_78;
  uVar7 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_80 != 0)) {
    FUN_032cf244(puVar6,local_80,0xc,uVar7 & 0x3fffffff);
  }
  return uVar22;
}


