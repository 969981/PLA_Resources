/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6f07c; name: FUN_02f6f07c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f6f07c(long param_1,long param_2,long param_3,float *param_4)

{
  long *plVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  undefined1 *puVar23;
  uint uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  float fVar40;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  code *local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  undefined8 local_90;
  long local_88;
  int local_80;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x18))
              (param_1,&DAT_03aae430,&local_100);
    fVar36 = (float)uStack_e8;
    fVar40 = (float)((ulong)uStack_e8 >> 0x20);
    fVar30 = (float)local_f0;
    fVar26 = (float)((ulong)local_f0 >> 0x20);
    fVar41 = (float)((ulong)local_100 >> 0x20);
    fVar28 = (float)((ulong)uStack_f8 >> 0x20);
    fVar29 = (fVar30 - (float)local_100) * 0.5;
    fVar33 = (fVar26 - fVar41) * 0.5;
    fVar34 = (fVar36 - (float)uStack_f8) * 0.5;
    fVar35 = (fVar40 - fVar28) * 0.5;
    auVar42._8_8_ = _UNK_038897b8;
    auVar42._0_8_ = _DAT_038897b0;
    auVar37._0_8_ =
         CONCAT17((char)(-(uint)(fVar33 == 0.0) >> 0x18),
                  (uint7)((byte)(-(uint)(fVar29 == 0.0) >> 0x18) & 0x35) << 0x18) &
         0x35ffffffffffffff;
    auVar37._8_3_ = 0;
    auVar37[0xb] = (byte)(-(uint)(fVar34 == 0.0) >> 0x18) & 0x35;
    auVar31._12_3_ = 0;
    auVar31._0_12_ = auVar37;
    auVar31[0xf] = (byte)(-(uint)(fVar35 == 0.0) >> 0x18) & 0x35;
    auVar39._0_4_ = fVar29 + (float)auVar37._0_8_;
    auVar39._4_4_ = fVar33 + (float)(auVar37._0_8_ >> 0x20);
    auVar39._8_4_ = fVar34 + auVar37._8_4_;
    auVar39._12_4_ = fVar35 + auVar31._12_4_;
    auVar38._8_8_ = _UNK_03889f48;
    auVar38._0_8_ = _DAT_03889f40;
    *(ulong *)(param_4 + 6) =
         CONCAT44(fVar40 + (fVar28 - fVar40) * 0.5,fVar36 + ((float)uStack_f8 - fVar36) * 0.5);
    *(ulong *)(param_4 + 4) =
         CONCAT44(fVar26 + (fVar41 - fVar26) * 0.5,fVar30 + ((float)local_100 - fVar30) * 0.5);
    uVar6 = _UNK_0388a138;
    uVar5 = _DAT_0388a130;
    auVar43._0_4_ = auVar39._0_4_ * auVar39._0_4_;
    auVar43._4_4_ = auVar39._4_4_ * auVar39._4_4_;
    auVar43._8_4_ = auVar39._8_4_ * auVar39._8_4_;
    auVar43._12_4_ = auVar39._12_4_ * auVar39._12_4_;
    auVar42 = a64_TBL(ZEXT816(0),auVar43,auVar42);
    auVar38 = a64_TBL(ZEXT816(0),auVar43,auVar38);
    auVar31 = NEON_ext(auVar39,auVar39,8,1);
    fVar36 = (auVar42._0_4_ + auVar38._0_4_) * 0.33333334;
    fVar40 = (auVar42._4_4_ + auVar38._4_4_) * 0.33333334;
    fVar41 = (auVar42._8_4_ + auVar38._8_4_) * 0.33333334;
    fVar30 = auVar31._0_4_ * auVar39._0_4_ * auVar39._4_4_ * 8.0;
    *param_4 = fVar30;
    param_4[10] = fVar41;
    param_4[0xb] = 1.0;
    param_4[8] = fVar36;
    param_4[9] = fVar40;
    *(undefined8 *)(param_4 + 0xe) = uVar6;
    *(undefined8 *)(param_4 + 0xc) = uVar5;
    fVar26 = *(float *)(param_2 + 0x20);
    fVar30 = -(fVar26 * fVar30);
    if (0.0 <= fVar26) {
      fVar30 = fVar26;
    }
    fVar26 = *(float *)(param_2 + 0x1c) * fVar30;
    param_4[1] = fVar30;
    *(ulong *)(param_4 + 10) = CONCAT44(fVar26 * 1.0,fVar41 * fVar26);
    *(ulong *)(param_4 + 8) = CONCAT44(fVar40 * fVar26,fVar36 * fVar26);
    return;
  }
  if (1 < *(int *)(param_2 + 0x18) - 1U) {
    return;
  }
  iVar14 = *(int *)(param_1 + 0x50);
  local_98 = 0;
  local_90 = 0x8000000000000000;
  lVar15 = tpidr_el0;
  local_80 = iVar14;
  if (iVar14 == 0) {
    local_88 = 0;
  }
  else {
    lVar18 = *(long *)(lVar15 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar18;
    }
    lVar18 = *(long *)(lVar18 + 8);
    uVar16 = (long)iVar14 * 0x90 + 0x7fU & 0xffffffffffffff80;
    if (uVar16 <= *(ulong *)(lVar18 + 0x10)) {
      local_88 = *(long *)(lVar18 + 0x18);
      uVar16 = local_88 + uVar16;
      if (uVar16 <= *(ulong *)(lVar18 + 0x20)) {
        *(ulong *)(lVar18 + 0x18) = uVar16;
        goto LAB_02f6f220;
      }
    }
    local_88 = FUN_032ce670(lVar18);
  }
LAB_02f6f220:
  uVar12 = DAT_0388a148;
  uVar11 = DAT_0388a140;
  uVar10 = _UNK_0388a138;
  uVar9 = _DAT_0388a130;
  uVar8 = _UNK_03889a88;
  uVar7 = _DAT_03889a80;
  uVar6 = _UNK_03888d18;
  uVar5 = _DAT_03888d10;
  local_90 = CONCAT44(iVar14,(int)local_90) | 0x8000000000000000;
  plVar1 = (long *)(param_1 + 0x48);
  if (param_3 == 0) {
    local_110 = (code *)0x0;
  }
  else {
    local_110 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_3 + 0x18) * 0x40 + 0x4040);
  }
  fVar30 = 0.0;
  uVar13 = 0;
  do {
    uVar24 = uVar13;
    local_98 = local_88;
    if (*(int *)(param_1 + 0x50) <= (int)uVar24) goto LAB_02f6f4e4;
    lVar18 = *plVar1;
    uVar13 = uVar24 + 1;
  } while ((*(byte *)((long)plVar1 + (ulong)(uVar24 & 0xffff) * 0x40 + lVar18 + 0x1e) & 1) != 0);
  if (uVar24 + 1 != 0) {
    uVar44 = NEON_fmov(0x3f800000,4);
    fVar30 = 0.0;
    do {
      pauVar2 = (undefined1 (*) [12])((long)plVar1 + (ulong)(uVar24 & 0xffff) * 0x40 + lVar18);
      if ((((byte)pauVar2[2][6] >> 6 & 1) != 0) &&
         ((param_3 == 0 || (uVar16 = (*local_110)(param_3), (uVar16 & 1) != 0)))) {
        iVar14 = (int)local_90 + 1;
        if ((int)(local_90._4_4_ & 0x3fffffff) <= (int)local_90) {
          local_98 = FUN_02f79b68(PTR_PTR_0434a080,iVar14,local_98,local_90 & 0xffffffff,
                                  (long)&local_90 + 4);
        }
        pfVar22 = (float *)(local_98 + (long)(int)local_90 * 0x90);
        local_90 = CONCAT44(local_90._4_4_,iVar14);
        pfVar22[4] = 0.0;
        pfVar22[5] = 0.0;
        pfVar22[6] = 0.0;
        pfVar22[7] = 0.0;
        pfVar22[0] = 0.0;
        pfVar22[1] = 0.0;
        pfVar22[8] = 0.0;
        pfVar22[9] = 0.0;
        pfVar22[10] = 0.0;
        pfVar22[0xb] = 0.0;
        pfVar22[0xc] = 0.0;
        pfVar22[0xd] = 0.0;
        pfVar22[0xe] = 0.0;
        pfVar22[0xf] = 0.0;
        *(undefined8 *)(pfVar22 + 0x16) = uVar8;
        *(undefined8 *)(pfVar22 + 0x14) = uVar7;
        *(undefined8 *)(pfVar22 + 0x1a) = uVar12;
        *(undefined8 *)(pfVar22 + 0x18) = uVar11;
        *(undefined8 *)(pfVar22 + 0x1e) = uVar6;
        *(undefined8 *)(pfVar22 + 0x1c) = uVar5;
        pfVar22[0x10] = 0.0;
        pfVar22[0x11] = 0.0;
        pfVar22[0x12] = 0.0;
        pfVar22[0x13] = 0.0;
        *(undefined8 *)(pfVar22 + 0x22) = uVar10;
        *(undefined8 *)(pfVar22 + 0x20) = uVar9;
        fVar40 = (float)*(undefined8 *)(*pauVar2 + 8);
        fVar41 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
        fVar26 = (float)*(undefined8 *)*pauVar2;
        fVar36 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
        uVar16 = *(ulong *)pauVar2[2];
        uVar27 = *(undefined8 *)(pauVar2[1] + 4);
        auVar3._12_4_ = fVar41;
        auVar3._0_12_ = *pauVar2;
        auVar4._12_4_ = fVar41;
        auVar4._0_12_ = *pauVar2;
        auVar39 = NEON_ext(auVar3,auVar4,8,1);
        auVar32._0_4_ = fVar26 + fVar26;
        auVar32._4_4_ = fVar36 + fVar36;
        auVar32._8_4_ = fVar40 + fVar40;
        auVar32._12_4_ = fVar41 + fVar41;
        auVar31 = NEON_ext(auVar32,auVar32,8,1);
        fVar40 = auVar39._0_4_ * auVar31._0_4_;
        fVar28 = (float)uVar44;
        *(ulong *)(pfVar22 + 0x16) = (ulong)(uint)(auVar32._8_4_ * fVar26 - auVar32._4_4_ * fVar41);
        *(ulong *)(pfVar22 + 0x14) =
             CONCAT44(auVar32._4_4_ * fVar26 + auVar32._8_4_ * fVar41,
                      fVar28 - (auVar32._4_4_ * fVar36 + fVar40));
        *(ulong *)(pfVar22 + 0x1a) = (ulong)(uint)(auVar32._8_4_ * fVar36 + auVar32._0_4_ * fVar41);
        *(ulong *)(pfVar22 + 0x18) =
             CONCAT44(fVar28 - (auVar32._0_4_ * fVar26 + fVar40),
                      auVar32._4_4_ * fVar26 - auVar32._8_4_ * fVar41);
        *(ulong *)(pfVar22 + 0x1e) =
             (ulong)(uint)(fVar28 - (auVar32._0_4_ * fVar26 + auVar32._4_4_ * fVar36));
        *(ulong *)(pfVar22 + 0x1c) =
             CONCAT44(auVar32._8_4_ * fVar36 - auVar32._0_4_ * fVar41,
                      auVar32._8_4_ * fVar26 + auVar32._4_4_ * fVar41);
        *(ulong *)(pfVar22 + 0x22) = uVar16 & 0xffffffff;
        *(undefined8 *)(pfVar22 + 0x20) = uVar27;
        lVar18 = *(long *)pauVar2[4];
        if (lVar18 == 0) {
          puVar23 = (undefined1 *)0x0;
        }
        else {
          puVar23 = pauVar2[4] + lVar18;
        }
        iVar14 = FUN_02fed474(puVar23,pfVar22);
        if (iVar14 < 0) {
          (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar23[0x18] * 0x200 + 0x38))
                    (puVar23,param_2,&local_100);
          FUN_0328f03c(&local_100,pfVar22);
        }
        if (((byte)pauVar2[2][6] >> 3 & 1) != 0) {
          local_100 = *(undefined8 *)(pauVar2[2] + 8);
          uVar25 = (undefined4)local_100;
          uStack_f8 = CONCAT44(0x3f800000,(int)*(undefined8 *)(pauVar2[3] + 4));
          if ((byte)puVar23[0x18] - 1 < 2) {
            uStack_a8 = CONCAT44(uVar25,uVar25);
            local_b0 = CONCAT44(uVar25,uVar25);
            puVar17 = &local_b0;
          }
          else {
            puVar17 = &local_100;
          }
          FUN_03291078(pfVar22,puVar17);
        }
        fVar30 = fVar30 + *pfVar22;
      }
      uVar13 = uVar24 + 1;
      do {
        uVar24 = uVar13;
        if (*(int *)(param_1 + 0x50) <= (int)uVar24) goto LAB_02f6f4e4;
        lVar18 = *plVar1;
        uVar13 = uVar24 + 1;
      } while ((*(byte *)((long)plVar1 + (ulong)(uVar24 & 0xffff) * 0x40 + lVar18 + 0x1e) & 1) != 0)
      ;
    } while (uVar24 + 1 != 0);
  }
LAB_02f6f4e4:
  fVar26 = *(float *)(param_2 + 0x20);
  if (fVar26 <= 0.0) {
    fVar26 = -fVar26;
  }
  else {
    fVar26 = fVar26 / fVar30;
  }
  local_100 = CONCAT44(fVar26,fVar26);
  if (0 < (int)local_90) {
    lVar20 = 0;
    lVar18 = 0;
    do {
      FUN_03291048(local_98 + lVar20,&local_100);
      lVar18 = lVar18 + 1;
      lVar20 = lVar20 + 0x90;
    } while (lVar18 < (int)local_90);
  }
  local_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_03290038(&local_98,&local_100);
  FUN_0328ed90(param_4,&local_100);
  lVar18 = local_88;
  if (local_88 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  lVar21 = (long)local_80;
  lVar20 = *(long *)(lVar15 + 0x38d490);
  if (lVar20 == 0) {
    lVar20 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar20;
  }
  lVar15 = *(long *)(lVar20 + 8);
  uVar16 = lVar21 * 0x90 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar15 + 0x10) < uVar16) || (*(long *)(lVar15 + 0x18) != uVar16 + lVar18)) ||
     (*(long *)(lVar15 + 0x28) == lVar18)) {
    FUN_032cedf0(lVar15,lVar18);
  }
  else {
    *(long *)(lVar15 + 0x18) = lVar18;
  }
  uVar16 = local_90;
  uVar19 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (long)uVar16) && (local_98 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_98,(uVar19 & 0x3fffffff) * 0x90);
  }
  return;
}


