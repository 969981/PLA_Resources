/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ecb8c; name: FUN_030ecb8c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030ecb8c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float *pfVar10;
  undefined *puVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int iVar50;
  float fVar51;
  float fVar52;
  int iVar54;
  float fVar55;
  undefined8 uVar53;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  float *local_168;
  undefined1 auStack_160 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  byte *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  float *local_e8;
  uint local_e0;
  float *local_c8;
  undefined8 local_c0;
  float *local_b8;
  uint local_b0;
  byte *local_a8;
  undefined8 local_a0;
  byte *local_98;
  int local_90;
  float *local_88;
  undefined8 local_80;
  float *local_78;
  int local_70;
  
  lVar14 = tpidr_el0;
  if (*(long *)(lVar14 + 0x38d490) == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar22;
    lVar22 = *(long *)(lVar22 + 0x10);
    if (lVar22 != 0) goto LAB_030ecbe4;
LAB_030ed64c:
    if (_DAT_00000008 < _DAT_00000018) {
LAB_030ed664:
      iVar50 = *(int *)(param_1 + 0x100);
      if (iVar50 != 0) {
        puVar21 = *(undefined8 **)(param_1 + 0xf8);
        (**(code **)(*(long *)*puVar21 + 0x60))((long *)*puVar21,param_1);
        if (iVar50 != 1) {
          lVar18 = (long)iVar50 * 8 + -8;
          do {
            puVar21 = puVar21 + 1;
            (**(code **)(*(long *)*puVar21 + 0x60))((long *)*puVar21,param_1);
            lVar18 = lVar18 + -8;
          } while (lVar18 != 0);
        }
      }
    }
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar14 + 0x38d490) + 0x10);
    if (lVar22 == 0) goto LAB_030ed64c;
LAB_030ecbe4:
    puVar21 = *(undefined8 **)(lVar22 + 8);
    uVar17 = (ulong)((long)puVar21 + 0x17) & 0xfffffffffffffff8;
    if (uVar17 <= *(ulong *)(lVar22 + 0x10)) {
      *(ulong *)(lVar22 + 8) = uVar17;
      if (puVar21 == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar21 = "TtcheckSupport";
        uVar61 = nn::os::GetSystemTick();
        puVar21[1] = uVar61;
        puVar21 = *(undefined8 **)(lVar22 + 8);
      }
    }
    if (puVar21 < *(undefined8 **)(lVar22 + 0x18)) goto LAB_030ed664;
  }
  if (*(char *)(param_1 + 0x164) != '\0') {
    FUN_030f1954(param_1,param_5);
  }
  iVar50 = *(int *)(param_1 + 0x20);
  if (iVar50 == 0) {
    *(undefined1 *)(param_4 + 1) = 0;
    if (lVar22 == 0) {
      return;
    }
    puVar21 = *(undefined8 **)(lVar22 + 8);
    uVar17 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if (*(ulong *)(lVar22 + 0x10) < uVar17) {
      return;
    }
    *(ulong *)(lVar22 + 8) = uVar17;
    if (puVar21 == (undefined8 *)0x0) {
      return;
    }
    *puVar21 = &DAT_0390f40e;
    uVar61 = nn::os::GetSystemTick();
    puVar21[1] = uVar61;
    return;
  }
  if ((*(char *)(param_1 + 0x164) == '\0') && (0 < iVar50)) {
    uVar17 = (ulong)iVar50;
    do {
      while( true ) {
        uVar17 = uVar17 - 1;
        iVar50 = (**(code **)(**(long **)(param_1 + 0x48) + 0x78))
                           (*(long **)(param_1 + 0x48),
                            *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar17 * 0x40 + 0x28));
        if (iVar50 == 0) break;
LAB_030ed7d4:
        if ((long)uVar17 < 1) goto LAB_030ed7dc;
      }
      iVar50 = *(int *)(param_1 + 0x100);
      lVar18 = *(long *)(param_1 + 0x18);
      if (0 < iVar50) {
        lVar19 = (long)iVar50 + -1;
        lVar18 = lVar18 + uVar17 * 0x40;
        plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar19 * 8);
        (**(code **)(*plVar13 + 0x30))(plVar13,param_1,lVar18);
        if (0 < lVar19) {
          lVar19 = (long)iVar50 + -2;
          do {
            plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar19 * 8);
            (**(code **)(*plVar13 + 0x30))(plVar13,param_1,lVar18);
            bVar1 = 0 < lVar19;
            lVar19 = lVar19 + -1;
          } while (bVar1);
        }
        lVar18 = *(long *)(param_1 + 0x18);
      }
      uVar15 = (long)*(int *)(param_1 + 0x20) - 1;
      *(int *)(param_1 + 0x20) = (int)uVar15;
      if (uVar17 == (uVar15 & 0xffffffff)) goto LAB_030ed7d4;
      puVar21 = (undefined8 *)(lVar18 + uVar17 * 0x40);
      puVar2 = (undefined8 *)(lVar18 + uVar15 * 0x40);
      uVar61 = puVar2[5];
      puVar21[3] = puVar2[3];
      puVar21[5] = uVar61;
      puVar21[1] = puVar2[1];
      uVar61 = *puVar2;
      puVar21[2] = puVar2[2];
      *puVar21 = uVar61;
      uVar61 = puVar2[4];
      puVar21[6] = puVar2[6];
      puVar21[4] = uVar61;
    } while (0 < (long)uVar17);
LAB_030ed7dc:
    iVar50 = *(int *)(param_1 + 0x20);
  }
  local_88 = (float *)0x0;
  local_80 = 0x8000000000000000;
  iVar50 = iVar50 + *(int *)(param_1 + 0x14c) + 10;
  local_70 = iVar50;
  if (iVar50 == 0) {
    local_78 = (float *)0x0;
  }
  else {
    lVar18 = *(long *)(lVar14 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar18;
    }
    lVar18 = *(long *)(lVar18 + 8);
    uVar17 = (ulong)(int)(iVar50 * 0x50 + 0x7fU & 0xffffff80);
    if (uVar17 <= *(ulong *)(lVar18 + 0x10)) {
      local_78 = *(float **)(lVar18 + 0x18);
      uVar17 = (long)local_78 + uVar17;
      if (uVar17 <= *(ulong *)(lVar18 + 0x20)) {
        *(ulong *)(lVar18 + 0x18) = uVar17;
        goto LAB_030ecc9c;
      }
    }
    local_78 = (float *)FUN_032ce670(lVar18);
  }
LAB_030ecc9c:
  local_80 = CONCAT44(iVar50,(uint)local_80) | 0x8000000000000000;
  local_88 = local_78;
  FUN_030f314c(0,param_1,param_2,&local_88);
  iVar50 = *(int *)(param_1 + 0x14c) + (uint)local_80;
  local_a8 = (byte *)0x0;
  local_a0 = 0x8000000000000000;
  local_90 = iVar50;
  if (iVar50 == 0) {
    uVar16 = 0;
    local_98 = (byte *)0x0;
  }
  else {
    lVar18 = *(long *)(lVar14 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar18;
    }
    lVar18 = *(long *)(lVar18 + 8);
    uVar17 = (ulong)(int)(iVar50 * 0x10 + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar18 + 0x10) < uVar17) {
LAB_030ed4c0:
      local_98 = (byte *)FUN_032ce670(lVar18);
    }
    else {
      local_98 = *(byte **)(lVar18 + 0x18);
      if (*(byte **)(lVar18 + 0x20) < local_98 + uVar17) goto LAB_030ed4c0;
      *(byte **)(lVar18 + 0x18) = local_98 + uVar17;
    }
    uVar16 = *(int *)(param_1 + 0x14c) + (uint)local_80;
  }
  local_a0 = CONCAT44(iVar50,(uint)local_a0) | 0x8000000000000000;
  local_c8 = (float *)0x0;
  local_c0 = 0x8000000000000000;
  local_b0 = uVar16;
  local_a8 = local_98;
  if (uVar16 == 0) {
    local_168 = (float *)0x0;
    local_e0 = (uint)local_80;
  }
  else {
    lVar18 = *(long *)(lVar14 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar18;
    }
    lVar18 = *(long *)(lVar18 + 8);
    uVar17 = (ulong)(int)(uVar16 * 0x10 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar18 + 0x10) < uVar17) {
LAB_030ed4b4:
      local_168 = (float *)FUN_032ce670();
    }
    else {
      local_168 = *(float **)(lVar18 + 0x18);
      uVar17 = (long)local_168 + uVar17;
      if (*(ulong *)(lVar18 + 0x20) < uVar17) goto LAB_030ed4b4;
      *(ulong *)(lVar18 + 0x18) = uVar17;
    }
    local_e0 = (uint)local_80;
  }
  local_c0 = CONCAT44(uVar16,(uint)local_c0) | 0x8000000000000000;
  local_e8 = local_88;
  local_130 = 0;
  uStack_128 = 0;
  uStack_118 = param_3[1];
  local_120 = *param_3;
  local_f0 = 0x3c8888893c888889;
  uStack_f8 = *(undefined8 *)(param_1 + 0x138);
  local_100 = *(undefined8 *)(param_1 + 0x130);
  uVar4 = *(undefined4 *)(param_1 + 0x150);
  local_110 = CONCAT44(uVar4,uVar4);
  uStack_108 = CONCAT44(uVar4,uVar4);
  iVar50 = *(int *)(param_1 + 0x100);
  local_c8 = local_168;
  local_b8 = local_168;
  if (0 < iVar50) {
    lVar18 = (long)iVar50 + -1;
    plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar18 * 8);
    (**(code **)(*plVar13 + 0x20))(plVar13,param_1,param_1 + 0x18,&local_130);
    if (0 < lVar18) {
      lVar18 = (long)iVar50 + -2;
      do {
        plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar18 * 8);
        (**(code **)(*plVar13 + 0x20))(plVar13,param_1,param_1 + 0x18,&local_130);
        bVar1 = 0 < lVar18;
        lVar18 = lVar18 + -1;
      } while (bVar1);
    }
  }
  uVar12 = local_e0;
  puVar11 = PTR_PTR_0434a080;
  if ((int)(uVar16 & 0x3fffffff) < (int)local_e0) {
    if (0x3fffffff < (int)local_e0) {
      FUN_032bd0a8(local_e0);
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar3 = uVar12;
    if ((int)uVar12 <= (int)uVar16) {
      uVar3 = uVar16;
    }
    local_168 = (float *)FUN_032bd1d4(puVar11,uVar3,0x10,local_168,0,(long)&local_c0 + 4);
    uVar16 = (uint)local_c0;
    local_c8 = local_168;
  }
  else {
    uVar16 = 0;
  }
  uVar3 = local_e0;
  if (uVar16 != uVar12) {
    local_c0 = CONCAT44(local_c0._4_4_,uVar12);
  }
  if ((int)(local_a0._4_4_ & 0x3fffffff) < (int)local_e0) {
    local_a8 = (byte *)FUN_030f114c(puVar11,local_e0,local_a8,local_a0 & 0xffffffff,
                                    (long)&local_a0 + 4);
  }
  uVar16 = local_e0;
  if ((uint)local_a0 != uVar3) {
    local_a0 = CONCAT44(local_a0._4_4_,uVar3);
  }
  if ((int)(local_80._4_4_ & 0x3fffffff) < (int)local_e0) {
    local_88 = (float *)FUN_030f12fc(puVar11,local_e0,local_88,local_80 & 0xffffffff,
                                     (long)&local_80 + 4);
  }
  if ((uint)local_80 != uVar16) {
    local_80 = CONCAT44(local_80._4_4_,uVar16);
  }
  if (0 < (int)local_e0) {
    uVar61 = *(undefined8 *)(local_88 + 4);
    *(undefined8 *)(local_168 + 2) = *(undefined8 *)(local_88 + 6);
    *(undefined8 *)local_168 = uVar61;
    local_88[4] = 0.0;
    local_88[5] = 0.0;
    local_88[6] = 0.0;
    local_88[7] = 0.0;
    if (1 < (int)local_e0) {
      lVar18 = 1;
      lVar19 = 0x60;
      do {
        uVar61 = *(undefined8 *)((long)local_88 + lVar19);
        *(undefined8 *)(local_168 + lVar18 * 4 + 2) = ((undefined8 *)((long)local_88 + lVar19))[1];
        *(undefined8 *)(local_168 + lVar18 * 4) = uVar61;
        lVar18 = lVar18 + 1;
        *(undefined8 *)((long)local_88 + lVar19) = 0;
        ((undefined8 *)((long)local_88 + lVar19))[1] = 0;
        lVar19 = lVar19 + 0x50;
      } while (lVar18 < (int)local_e0);
    }
  }
  local_138 = local_a8;
  FUN_0335d590(&local_130,auStack_160);
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x38) = 0;
  fVar25 = (float)param_3[1];
  fVar23 = (float)*param_3;
  fVar24 = (float)((ulong)*param_3 >> 0x20);
  if (0.001 < ABS(fStack_148 - fVar25) ||
      (0.001 < ABS(local_150 - fVar23) || 0.001 < ABS(fStack_14c - fVar24))) {
    fVar26 = fStack_148 * fStack_148 + local_150 * local_150 + fStack_14c * fStack_14c;
    fVar47 = fStack_148 * fStack_148 + local_150 * local_150 + fStack_14c * fStack_14c;
    uVar31 = SUB41(fVar47,0);
    uVar33 = (undefined1)((uint)fVar47 >> 8);
    uVar35 = (undefined1)((uint)fVar47 >> 0x10);
    uVar37 = (undefined1)((uint)fVar47 >> 0x18);
    if (fVar26 < 0.001) {
LAB_030ed00c:
      uVar31 = 2;
    }
    else {
      uVar61 = NEON_frsqrte(CONCAT17(uVar37,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(uVar31,fVar26))
                                                    )),4);
      fVar49 = (float)uVar61;
      fVar46 = (float)((ulong)uVar61 >> 0x20);
      uVar61 = NEON_frsqrts(CONCAT17(uVar37,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(uVar31,fVar26))
                                                    )),CONCAT44(fVar46 * fVar46,fVar49 * fVar49),4);
      fVar49 = fVar49 * (float)uVar61;
      fVar46 = fVar46 * (float)((ulong)uVar61 >> 0x20);
      iVar50 = -(uint)(fVar26 <= 0.0);
      iVar54 = -(uint)(fVar47 <= 0.0);
      uVar61 = NEON_frsqrts(CONCAT17(uVar37,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(uVar31,fVar26))
                                                    )),CONCAT44(fVar46 * fVar46,fVar49 * fVar49),4);
      fVar49 = (float)uVar61 * fVar49;
      fVar46 = (float)((ulong)uVar61 >> 0x20) * fVar46;
      bVar30 = SUB41(fVar49,0) & ~(byte)iVar50;
      bVar32 = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar50 >> 8);
      bVar34 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
      bVar36 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
      bVar38 = SUB41(fVar46,0) & ~(byte)iVar54;
      bVar40 = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar54 >> 8);
      bVar42 = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
      bVar44 = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
      fVar26 = (float)CONCAT13(bVar36,CONCAT12(bVar34,CONCAT11(bVar32,bVar30)));
      local_150 = local_150 * (float)CONCAT13(bVar36,CONCAT12(bVar34,CONCAT11(bVar32,bVar30)));
      fStack_14c = fStack_14c * (float)CONCAT13(bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38)));
      fStack_148 = fStack_148 * fVar26;
      fStack_144 = fStack_144 *
                   (float)(CONCAT17(bVar44,CONCAT16(bVar42,CONCAT15(bVar40,CONCAT14(bVar38,fVar26)))
                                   ) >> 0x20);
      fVar23 = fVar23 * local_150;
      fVar24 = fVar24 * fStack_14c;
      fVar25 = fVar25 * fStack_148;
      fVar26 = (float)((ulong)param_3[1] >> 0x20) * fStack_144;
      auVar27._4_4_ = fVar24;
      auVar27._0_4_ = fVar23;
      auVar27._8_4_ = fVar25;
      auVar27._12_4_ = fVar26;
      auVar62._4_4_ = fVar24;
      auVar62._0_4_ = fVar23;
      auVar62._8_4_ = fVar25;
      auVar62._12_4_ = fVar26;
      auVar27 = NEON_ext(auVar27,auVar62,8,1);
      fVar23 = fVar23 + fVar24 + auVar27._0_4_;
      if (*(float *)(param_1 + 0x118) * *(float *)(param_1 + 0x118) <= 1.0 - fVar23 * fVar23)
      goto LAB_030ed00c;
      uVar31 = 1;
    }
    *(undefined1 *)(param_4 + 1) = uVar31;
    if (0 < (int)local_e0) {
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      uVar16 = (uint)*local_a8;
      if (*local_a8 == 0) {
LAB_030ed420:
        fVar47 = 0.0;
        fVar49 = 0.0;
        uVar31 = 0;
        uVar33 = 0;
        uVar35 = 0;
        uVar37 = 0;
        uVar39 = 0;
        uVar41 = 0;
        uVar43 = 0;
        uVar45 = 0;
        fVar46 = 0.0;
        fVar48 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
      }
      else {
        fVar47 = *local_88 * (float)*param_3;
        fVar49 = local_88[1] * (float)((ulong)*param_3 >> 0x20);
        uVar31 = (undefined1)((uint)fVar49 >> 8);
        uVar33 = (undefined1)((uint)fVar49 >> 0x10);
        uVar35 = (undefined1)((uint)fVar49 >> 0x18);
        fVar46 = local_88[2] * (float)param_3[1];
        fVar48 = local_88[3] * (float)((ulong)param_3[1] >> 0x20);
        auVar5[4] = SUB41(fVar49,0);
        auVar5._0_4_ = fVar47;
        auVar5[5] = uVar31;
        auVar5[6] = uVar33;
        auVar5[7] = uVar35;
        auVar5._8_4_ = fVar46;
        auVar5._12_4_ = fVar48;
        auVar6[4] = SUB41(fVar49,0);
        auVar6._0_4_ = fVar47;
        auVar6[5] = uVar31;
        auVar6[6] = uVar33;
        auVar6[7] = uVar35;
        auVar6._8_4_ = fVar46;
        auVar6._12_4_ = fVar48;
        auVar27 = NEON_ext(auVar5,auVar6,8,1);
        if (-0.08 <= fVar47 + fVar49 + auVar27._0_4_) {
          uVar16 = 0;
          goto LAB_030ed420;
        }
        fVar46 = *local_88 + 0.0;
        fVar48 = local_88[1] + 0.0;
        fVar28 = local_88[2] + 0.0;
        fVar29 = local_88[3] + 0.0;
        *(float *)(param_4 + 0x18) = fVar28;
        *(float *)(param_4 + 0x1c) = fVar29;
        *(float *)(param_4 + 0x10) = fVar46;
        *(float *)(param_4 + 0x14) = fVar48;
        fVar23 = (float)*(undefined8 *)local_168 + 0.0;
        uVar31 = SUB41(fVar23,0);
        uVar33 = (undefined1)((uint)fVar23 >> 8);
        uVar35 = (undefined1)((uint)fVar23 >> 0x10);
        uVar37 = (undefined1)((uint)fVar23 >> 0x18);
        fVar24 = (float)((ulong)*(undefined8 *)local_168 >> 0x20) + 0.0;
        uVar39 = SUB41(fVar24,0);
        uVar41 = (undefined1)((uint)fVar24 >> 8);
        uVar43 = (undefined1)((uint)fVar24 >> 0x10);
        uVar45 = (undefined1)((uint)fVar24 >> 0x18);
        fVar47 = (float)*(undefined8 *)(local_168 + 2) + 0.0;
        fVar49 = (float)((ulong)*(undefined8 *)(local_168 + 2) >> 0x20) + 0.0;
        *(ulong *)(param_4 + 0x28) = CONCAT44(fVar49,fVar47);
        *(ulong *)(param_4 + 0x20) =
             CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(uVar39,fVar23))));
        auVar27 = *(undefined1 (*) [16])(local_88 + 8);
        uVar16 = 1;
        fVar23 = auVar27._0_4_ + 0.0;
        fVar24 = auVar27._4_4_ + 0.0;
        fVar25 = auVar27._8_4_ + 0.0;
        fVar26 = auVar27._12_4_ + 0.0;
        *(ulong *)(param_4 + 0x38) = CONCAT44(fVar26,fVar25);
        *(ulong *)(param_4 + 0x30) = CONCAT44(fVar24,fVar23);
      }
      if (local_e0 != 1) {
        lVar18 = 0;
        lVar19 = (long)(int)local_e0 + -1;
        pfVar10 = local_168;
        pbVar20 = local_a8;
        do {
          pbVar20 = pbVar20 + 0x10;
          if (*pbVar20 != 0) {
            auVar27 = *(undefined1 (*) [16])((long)local_88 + lVar18 + 0x50);
            fVar9 = auVar27._0_4_ * (float)*param_3;
            fVar52 = auVar27._4_4_ * (float)((ulong)*param_3 >> 0x20);
            uVar56 = (undefined1)((uint)fVar52 >> 8);
            uVar57 = (undefined1)((uint)fVar52 >> 0x10);
            uVar58 = (undefined1)((uint)fVar52 >> 0x18);
            fVar59 = auVar27._8_4_ * (float)param_3[1];
            fVar60 = auVar27._12_4_ * (float)((ulong)param_3[1] >> 0x20);
            auVar7[4] = SUB41(fVar52,0);
            auVar7._0_4_ = fVar9;
            auVar7[5] = uVar56;
            auVar7[6] = uVar57;
            auVar7[7] = uVar58;
            auVar7._8_4_ = fVar59;
            auVar7._12_4_ = fVar60;
            auVar8[4] = SUB41(fVar52,0);
            auVar8._0_4_ = fVar9;
            auVar8[5] = uVar56;
            auVar8[6] = uVar57;
            auVar8[7] = uVar58;
            auVar8._8_4_ = fVar59;
            auVar8._12_4_ = fVar60;
            auVar62 = NEON_ext(auVar7,auVar8,8,1);
            if (fVar9 + fVar52 + auVar62._0_4_ < -0.08) {
              fVar46 = fVar46 + auVar27._0_4_;
              fVar48 = fVar48 + auVar27._4_4_;
              fVar28 = fVar28 + auVar27._8_4_;
              fVar29 = fVar29 + auVar27._12_4_;
              uVar16 = uVar16 + 1;
              *(float *)(param_4 + 0x18) = fVar28;
              *(float *)(param_4 + 0x1c) = fVar29;
              *(float *)(param_4 + 0x10) = fVar46;
              *(float *)(param_4 + 0x14) = fVar48;
              fVar9 = (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar33,uVar31))) + pfVar10[4];
              uVar31 = SUB41(fVar9,0);
              uVar33 = (undefined1)((uint)fVar9 >> 8);
              uVar35 = (undefined1)((uint)fVar9 >> 0x10);
              uVar37 = (undefined1)((uint)fVar9 >> 0x18);
              fVar52 = (float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39))) + pfVar10[5]
              ;
              uVar39 = SUB41(fVar52,0);
              uVar41 = (undefined1)((uint)fVar52 >> 8);
              uVar43 = (undefined1)((uint)fVar52 >> 0x10);
              uVar45 = (undefined1)((uint)fVar52 >> 0x18);
              fVar47 = fVar47 + pfVar10[6];
              fVar49 = fVar49 + pfVar10[7];
              *(ulong *)(param_4 + 0x28) = CONCAT44(fVar49,fVar47);
              *(ulong *)(param_4 + 0x20) =
                   CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(uVar39,fVar9))));
              auVar27 = *(undefined1 (*) [16])((long)local_88 + lVar18 + 0x70);
              fVar23 = fVar23 + auVar27._0_4_;
              fVar24 = fVar24 + auVar27._4_4_;
              fVar25 = fVar25 + auVar27._8_4_;
              fVar26 = fVar26 + auVar27._12_4_;
              *(ulong *)(param_4 + 0x38) = CONCAT44(fVar26,fVar25);
              *(ulong *)(param_4 + 0x30) = CONCAT44(fVar24,fVar23);
            }
          }
          lVar19 = lVar19 + -1;
          lVar18 = lVar18 + 0x50;
          pfVar10 = pfVar10 + 4;
        } while (lVar19 != 0);
      }
      if (0 < (int)uVar16) {
        fVar51 = fVar28 * fVar28 + fVar46 * fVar46 + fVar48 * fVar48;
        fVar55 = fVar28 * fVar28 + fVar46 * fVar46 + fVar48 * fVar48;
        uVar53 = CONCAT44(fVar55,fVar51);
        uVar61 = NEON_frsqrte(uVar53,4);
        fVar60 = 1.0 / (float)(int)uVar16;
        fVar52 = (float)uVar61;
        fVar59 = (float)((ulong)uVar61 >> 0x20);
        uVar61 = NEON_frsqrts(uVar53,CONCAT44(fVar59 * fVar59,fVar52 * fVar52),4);
        fVar52 = fVar52 * (float)uVar61;
        fVar59 = fVar59 * (float)((ulong)uVar61 >> 0x20);
        fVar9 = (float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39))) * fVar60;
        uVar61 = NEON_frsqrts(uVar53,CONCAT44(fVar59 * fVar59,fVar52 * fVar52),4);
        iVar50 = -(uint)(fVar51 <= 0.0);
        iVar54 = -(uint)(fVar55 <= 0.0);
        fVar52 = (float)uVar61 * fVar52;
        fVar59 = (float)((ulong)uVar61 >> 0x20) * fVar59;
        fVar52 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                 CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                          ~(byte)((uint)iVar50 >> 0x10),
                                          CONCAT11((byte)((uint)fVar52 >> 8) &
                                                   ~(byte)((uint)iVar50 >> 8),
                                                   SUB41(fVar52,0) & ~(byte)iVar50)));
        *(ulong *)(param_4 + 0x38) = CONCAT44(fVar26 * fVar60,fVar25 * fVar60);
        *(ulong *)(param_4 + 0x30) = CONCAT44(fVar24 * fVar60,fVar23 * fVar60);
        fVar23 = (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                  CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                           ~(byte)((uint)iVar54 >> 0x10),
                                           CONCAT15((byte)((uint)fVar59 >> 8) &
                                                    ~(byte)((uint)iVar54 >> 8),
                                                    CONCAT14(SUB41(fVar59,0) & ~(byte)iVar54,fVar52)
                                                   ))) >> 0x20);
        *(float *)(param_4 + 0x18) = fVar28 * fVar52;
        *(float *)(param_4 + 0x1c) = fVar29 * fVar23;
        *(float *)(param_4 + 0x10) = fVar46 * fVar52;
        *(float *)(param_4 + 0x14) = fVar48 * fVar23;
        *(ulong *)(param_4 + 0x28) = CONCAT44(fVar49 * fVar60,fVar47 * fVar60);
        *(ulong *)(param_4 + 0x20) =
             CONCAT17((char)((uint)fVar9 >> 0x18),
                      CONCAT16((char)((uint)fVar9 >> 0x10),
                               CONCAT15((char)((uint)fVar9 >> 8),
                                        CONCAT14(SUB41(fVar9,0),
                                                 (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(
                                                  uVar33,uVar31))) * fVar60))));
        goto joined_r0x030ed17c;
      }
    }
  }
  *(undefined1 *)(param_4 + 1) = 0;
joined_r0x030ed17c:
  if (lVar22 != 0) {
    puVar21 = *(undefined8 **)(lVar22 + 8);
    uVar17 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar22 + 0x10)) &&
       (*(ulong *)(lVar22 + 8) = uVar17, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = &DAT_0390f40e;
      uVar61 = nn::os::GetSystemTick();
      puVar21[1] = uVar61;
    }
  }
  uVar16 = local_b0;
  pfVar10 = local_b8;
  if (local_b8 == local_168) {
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  lVar22 = *(long *)(lVar14 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar22;
  }
  lVar22 = *(long *)(lVar22 + 8);
  uVar15 = (ulong)(int)(uVar16 * 0x10 + 0x7f & 0xffffff80);
  uVar17 = local_c0;
  if (((*(ulong *)(lVar22 + 0x10) < uVar15) || (*(long *)(lVar22 + 0x18) != uVar15 + (long)pfVar10))
     || (*(float **)(lVar22 + 0x28) == pfVar10)) {
    if (pfVar10 != (float *)0x0) {
      if (*(ulong *)(lVar22 + 0x10) < uVar15) {
        *(int *)(*(long *)(lVar22 + 8) + 0x20) = *(int *)(*(long *)(lVar22 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar22 + 0x40) + 0x18))(*(long **)(lVar22 + 0x40),pfVar10);
        uVar17 = local_c0;
      }
      else if (*(long *)(lVar22 + 0x18) == uVar15 + (long)pfVar10) {
        *(float **)(lVar22 + 0x18) = pfVar10;
        FUN_032ce944();
        uVar17 = local_c0;
      }
      else {
        FUN_032ceaf0(lVar22,pfVar10);
        uVar17 = local_c0;
      }
    }
  }
  else {
    *(float **)(lVar22 + 0x18) = pfVar10;
  }
  local_c0 = uVar17 & 0xffffffff00000000;
  if ((local_168 != (float *)0x0) && (-1 < (long)local_c0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_168,(uVar17 >> 0x20 & 0x3fffffff) << 4);
  }
  iVar50 = local_90;
  pbVar20 = local_98;
  if (local_98 == local_a8) {
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  lVar22 = *(long *)(lVar14 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar22;
  }
  lVar22 = *(long *)(lVar22 + 8);
  uVar17 = (ulong)(int)(iVar50 * 0x10 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar22 + 0x10) < uVar17) || (*(byte **)(lVar22 + 0x18) != pbVar20 + uVar17)) ||
     (*(byte **)(lVar22 + 0x28) == pbVar20)) {
    if (pbVar20 != (byte *)0x0) {
      if (*(ulong *)(lVar22 + 0x10) < uVar17) {
        *(int *)(*(long *)(lVar22 + 8) + 0x20) = *(int *)(*(long *)(lVar22 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar22 + 0x40) + 0x18))(*(long **)(lVar22 + 0x40),pbVar20);
      }
      else if (*(byte **)(lVar22 + 0x18) == pbVar20 + uVar17) {
        *(byte **)(lVar22 + 0x18) = pbVar20;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar22,pbVar20);
      }
    }
  }
  else {
    *(byte **)(lVar22 + 0x18) = pbVar20;
  }
  uVar17 = local_a0;
  uVar15 = (ulong)local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_a8 != (byte *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_a8,(uVar15 & 0x3fffffff) << 4);
  }
  pfVar10 = local_78;
  if (local_78 == local_88) {
    local_80 = local_80 & 0xffffffff00000000;
  }
  lVar18 = (long)local_70;
  lVar22 = *(long *)(lVar14 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar22;
  }
  lVar14 = *(long *)(lVar22 + 8);
  uVar17 = lVar18 * 0x50 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar14 + 0x10) < uVar17) || (*(long *)(lVar14 + 0x18) != uVar17 + (long)pfVar10))
     || (*(float **)(lVar14 + 0x28) == pfVar10)) {
    if (pfVar10 != (float *)0x0) {
      if (*(ulong *)(lVar14 + 0x10) < uVar17) {
        *(int *)(*(long *)(lVar14 + 8) + 0x20) = *(int *)(*(long *)(lVar14 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar14 + 0x40) + 0x18))(*(long **)(lVar14 + 0x40),pfVar10);
      }
      else if (*(long *)(lVar14 + 0x18) == uVar17 + (long)pfVar10) {
        *(float **)(lVar14 + 0x18) = pfVar10;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar14,pfVar10);
      }
    }
  }
  else {
    *(float **)(lVar14 + 0x18) = pfVar10;
  }
  uVar17 = local_80;
  uVar15 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_88 != (float *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_88,(uVar15 & 0x3fffffff) * 0x50);
  }
  return;
}


