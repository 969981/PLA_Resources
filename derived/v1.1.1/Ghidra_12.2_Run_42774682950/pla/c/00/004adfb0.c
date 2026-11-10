/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004adfb0; name: FUN_004adfb0
 */


void FUN_004adfb0(uint *param_1,int param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  byte *pbVar30;
  uint uVar31;
  uint *puVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  uint uVar46;
  uint uVar47;
  long lVar48;
  long lVar49;
  uint local_124;
  uint local_120 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar25 = param_2;
  if (0xf < param_2) {
    iVar25 = 0x10;
  }
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if (param_2 < 1) {
    uVar27 = 0;
    local_80._4_4_ = 0;
    uStack_78._0_4_ = 0;
    uVar29 = 0;
    local_68._0_4_ = 0;
    local_70._0_4_ = 0;
    uVar28 = 0;
    local_68._4_4_ = 0;
    uVar31 = 0;
    local_70._4_4_ = 0;
    uVar21 = 0;
    uVar38 = 0;
    uVar40 = 0;
    uVar22 = 0;
    local_88._4_4_ = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar19 = 0;
    uStack_98._4_4_ = 0;
    uVar36 = 0;
    uVar47 = 0;
    uVar46 = 0;
    goto LAB_004ae114;
  }
  uVar27 = (ulong)iVar25;
  uVar29 = uVar27;
  if ((long)uVar27 < 2) {
    uVar29 = 1;
  }
  if (uVar29 < 4) {
    uVar28 = 0;
LAB_004ae0a8:
    do {
      local_120[uVar28 + 0x20] = (uint)*(byte *)(param_3 + uVar28);
      uVar28 = uVar28 + 1;
    } while ((long)uVar28 < (long)uVar27);
  }
  else {
    uVar28 = uVar29 & 0x7ffffffffffffffc;
    pbVar30 = (byte *)(param_3 + 1);
    puVar32 = (uint *)((ulong)&local_a0 | 8);
    uVar34 = uVar28;
    do {
      uVar34 = uVar34 - 4;
      bVar16 = *pbVar30;
      bVar17 = pbVar30[1];
      bVar18 = pbVar30[2];
      puVar32[-2] = (uint)pbVar30[-1];
      puVar32[-1] = (uint)bVar16;
      *puVar32 = (uint)bVar17;
      puVar32[1] = (uint)bVar18;
      pbVar30 = pbVar30 + 4;
      puVar32 = puVar32 + 4;
    } while (uVar34 != 0);
    if (uVar29 != uVar28) goto LAB_004ae0a8;
  }
  uVar19 = (int)local_90 << 0x18;
  uVar43 = local_90._4_4_ << 0x10;
  uVar42 = (int)local_88 << 8;
  uVar28 = (ulong)local_70._4_4_;
  uVar47 = local_a0._4_4_ << 0x10;
  uVar46 = (int)local_a0 << 0x18;
  uVar36 = (int)uStack_98 << 8;
  uVar29 = local_80 & 0xffffffff;
  uVar22 = (int)local_80 << 0x18;
  uVar27 = uStack_78 >> 0x20;
  uVar40 = local_80._4_4_ << 0x10;
  uVar38 = (uint)uStack_78 << 8;
  uVar21 = (uint)local_70 << 0x18;
  local_70._4_4_ = local_70._4_4_ << 0x10;
  uVar31 = (uint)local_68 << 8;
LAB_004ae114:
  uVar47 = uVar47 | uVar46 | uVar36 | uStack_98._4_4_;
  local_124 = uVar43 | uVar19 | uVar42 | local_88._4_4_;
  param_1[0x20] = (uint)(iVar25 < 0xb);
  uVar42 = *(uint *)(PTR_DAT_043745f0 + (ulong)local_68._4_4_ * 4);
  uVar19 = *(uint *)(PTR_DAT_043745f8 + uVar29 * 4);
  uVar43 = uVar40 | uVar22 | uVar38 | (uint)uVar27;
  local_68._4_4_ = local_70._4_4_ | uVar21 | uVar31 | local_68._4_4_;
  lVar35 = 0;
  do {
    uVar19 = *(uint *)(PTR_DAT_04374600 + uVar28 * 4) ^ uVar47 ^ uVar42 ^
             *(uint *)(PTR_DAT_043745f8 + (ulong)(uint)local_70 * 4) ^
             *(uint *)(PTR_DAT_04374608 + (ulong)(uint)local_68 * 4) ^ uVar19;
    lVar24 = (ulong)(uVar19 >> 0x18) * 4;
    lVar33 = (ulong)(uVar19 >> 8 & 0xff) * 4;
    uVar36 = *(uint *)(PTR_DAT_04374608 + lVar33);
    lVar26 = (ulong)(uVar19 >> 0x10 & 0xff) * 4;
    uVar22 = *(uint *)(PTR_DAT_043745f8 + lVar26);
    lVar20 = (ulong)(uVar19 & 0xff) * 4;
    uVar40 = *(uint *)(PTR_DAT_04374608 + lVar24);
    uVar43 = *(uint *)(PTR_DAT_04374600 + lVar24) ^ uVar43 ^ *(uint *)(PTR_DAT_043745f0 + lVar33) ^
             uVar22 ^ *(uint *)(PTR_DAT_04374608 + lVar20) ^
             *(uint *)(PTR_DAT_04374608 + (ulong)(uint)uStack_78 * 4);
    uVar38 = *(uint *)(PTR_DAT_043745f8 + lVar20);
    lVar44 = (ulong)(uVar43 >> 8 & 0xff) * 4;
    lVar39 = (ulong)(uVar43 >> 0x10 & 0xff) * 4;
    uVar21 = *(uint *)(PTR_DAT_043745f0 + lVar44);
    uVar31 = *(uint *)(PTR_DAT_043745f8 + lVar39);
    lVar23 = (ulong)(uVar43 & 0xff) * 4;
    lVar41 = (ulong)(uVar43 >> 0x18) * 4;
    uVar2 = *(uint *)(PTR_DAT_04374608 + lVar41);
    uVar42 = uVar31 ^ uVar21 ^ local_68._4_4_ ^ *(uint *)(PTR_DAT_04374600 + lVar23) ^ uVar2 ^
             *(uint *)(PTR_DAT_04374600 + (ulong)local_80._4_4_ * 4);
    uVar3 = *(uint *)(PTR_DAT_04374600 + (ulong)(uVar42 >> 8 & 0xff) * 4);
    lVar37 = (ulong)(uVar42 & 0xff) * 4;
    lVar48 = (ulong)(uVar42 >> 0x10 & 0xff) * 4;
    uVar4 = *(uint *)(PTR_DAT_043745f0 + lVar37);
    lVar49 = (ulong)(uVar42 >> 0x18) * 4;
    uVar5 = *(uint *)(PTR_DAT_043745f8 + lVar48);
    uVar42 = *(uint *)(PTR_DAT_04374608 + lVar44) ^ uVar42 ^ *(uint *)(PTR_DAT_04374600 + lVar39) ^
             *(uint *)(PTR_DAT_043745f0 + lVar23) ^ *(uint *)(PTR_DAT_043745f8 + lVar41) ^
             *(uint *)(PTR_DAT_043745f8 + lVar24);
    lVar39 = (ulong)(uVar42 >> 0x18) * 4;
    uVar47 = uVar3 ^ local_124 ^ *(uint *)(PTR_DAT_043745f0 + lVar48) ^
             *(uint *)(PTR_DAT_043745f8 + lVar37) ^ *(uint *)(PTR_DAT_04374608 + lVar49) ^
             *(uint *)(PTR_DAT_043745f0 + uVar27 * 4);
    uVar6 = *(uint *)(PTR_DAT_04374600 + lVar39);
    uVar7 = *(uint *)(PTR_DAT_043745f0 + (ulong)(uVar42 >> 8 & 0xff) * 4);
    lVar45 = (ulong)(uVar42 >> 0x10 & 0xff) * 4;
    uVar8 = *(uint *)(PTR_DAT_043745f8 + lVar45);
    lVar37 = (ulong)(uVar42 & 0xff) * 4;
    uVar46 = *(uint *)(PTR_DAT_04374608 + lVar37);
    local_120[lVar35] =
         *(uint *)(PTR_DAT_04374600 + lVar49) ^ *(uint *)(PTR_DAT_043745f0 + lVar48) ^
         *(uint *)(PTR_DAT_043745f8 + lVar23) ^ *(uint *)(PTR_DAT_04374608 + lVar44) ^
         *(uint *)(PTR_DAT_04374600 + lVar33);
    local_120[lVar35 + 1] = uVar31 ^ uVar21 ^ uVar2 ^ uVar3 ^ uVar4;
    uVar21 = *(uint *)(PTR_DAT_043745f0 + (ulong)(uVar47 & 0xff) * 4);
    lVar24 = (ulong)(uVar47 >> 0x18) * 4;
    uVar31 = *(uint *)(PTR_DAT_04374600 + (ulong)(uVar47 >> 8 & 0xff) * 4);
    uVar2 = *(uint *)(PTR_DAT_04374608 + lVar24);
    uVar46 = uVar36 ^ uVar19 ^ uVar6 ^ uVar7 ^ uVar8 ^ uVar46;
    uVar3 = *(uint *)(PTR_DAT_043745f0 + (ulong)(uVar46 >> 8 & 0xff) * 4);
    lVar33 = (ulong)(uVar46 & 0xff) * 4;
    lVar23 = (ulong)(uVar46 >> 0x10 & 0xff) * 4;
    uVar4 = *(uint *)(PTR_DAT_04374600 + lVar33);
    uVar19 = *(uint *)(PTR_DAT_043745f8 + lVar23);
    lVar41 = (ulong)(uVar46 >> 0x18) * 4;
    local_120[lVar35 + 2] =
         *(uint *)(PTR_DAT_043745f0 + (ulong)(uVar47 >> 0x10 & 0xff) * 4) ^
         *(uint *)(PTR_DAT_04374600 + lVar24) ^ uVar38 ^ uVar36 ^ uVar5;
    local_120[lVar35 + 3] = uVar31 ^ uVar22 ^ uVar21 ^ uVar40 ^ uVar2;
    uVar22 = *(uint *)(PTR_DAT_043745f8 + lVar37);
    uVar40 = *(uint *)(PTR_DAT_04374600 + lVar23);
    uVar19 = uVar3 ^ uVar4 ^ uVar43 ^ uVar19 ^ *(uint *)(PTR_DAT_04374608 + lVar41) ^
             *(uint *)(PTR_DAT_04374600 + lVar26);
    uVar38 = *(uint *)(PTR_DAT_043745f0 + lVar41);
    lVar41 = (ulong)(uVar19 >> 8 & 0xff) * 4;
    lVar26 = (ulong)(uVar19 >> 0x10 & 0xff) * 4;
    lVar24 = (ulong)(uVar19 & 0xff) * 4;
    lVar44 = (ulong)(uVar19 >> 0x18) * 4;
    uVar21 = *(uint *)(PTR_DAT_04374608 + lVar26);
    uVar31 = *(uint *)(PTR_DAT_043745f0 + lVar39);
    uVar2 = *(uint *)(PTR_DAT_04374600 + lVar45);
    uVar43 = *(uint *)(PTR_DAT_04374600 + lVar41) ^ uVar47 ^ *(uint *)(PTR_DAT_043745f0 + lVar26) ^
             *(uint *)(PTR_DAT_043745f8 + lVar24) ^ *(uint *)(PTR_DAT_04374608 + lVar44) ^
             *(uint *)(PTR_DAT_043745f0 + lVar20);
    uVar5 = *(uint *)(PTR_DAT_043745f8 + lVar44);
    uVar6 = *(uint *)(PTR_DAT_043745f8 + lVar41);
    uVar8 = *(uint *)(PTR_DAT_04374608 + lVar24);
    lVar39 = (ulong)(uVar43 >> 0x10 & 0xff) * 4;
    uVar9 = *(uint *)(PTR_DAT_043745f8 + (ulong)(uVar43 >> 0x18) * 4);
    lVar20 = (ulong)(uVar43 >> 8 & 0xff) * 4;
    uVar10 = *(uint *)(PTR_DAT_043745f8 + lVar20);
    lVar23 = (ulong)(uVar43 & 0xff) * 4;
    uVar11 = *(uint *)(PTR_DAT_04374608 + lVar33);
    uVar12 = *(uint *)(PTR_DAT_04374600 + lVar39);
    uVar13 = *(uint *)(PTR_DAT_04374608 + lVar23);
    uVar14 = *(uint *)(PTR_DAT_043745f0 + lVar23);
    uVar15 = *(uint *)(PTR_DAT_043745f0 + lVar39);
    uVar36 = *(uint *)(PTR_DAT_04374608 + lVar20);
    uVar47 = *(uint *)(PTR_DAT_04374600 + lVar26);
    local_120[lVar35 + 4] =
         *(uint *)(PTR_DAT_04374600 + lVar37) ^ uVar7 ^ uVar9 ^ *(uint *)(PTR_DAT_04374608 + lVar39)
         ^ *(uint *)(PTR_DAT_04374600 + lVar44);
    local_120[lVar35 + 5] = uVar31 ^ uVar2 ^ uVar10 ^ uVar13 ^ uVar15;
    uVar36 = uVar9 ^ uVar42 ^ uVar5 ^ uVar12 ^ uVar14 ^ uVar36;
    lVar20 = (ulong)(uVar36 >> 0x18) * 4;
    lVar26 = (ulong)(uVar36 >> 8 & 0xff) * 4;
    lVar44 = (ulong)(uVar36 >> 0x10 & 0xff) * 4;
    uVar31 = *(uint *)(PTR_DAT_043745f0 + lVar26);
    lVar39 = (ulong)(uVar36 & 0xff) * 4;
    uVar19 = *(uint *)(PTR_DAT_04374600 + lVar20) ^ uVar19 ^ uVar31 ^
             *(uint *)(PTR_DAT_043745f8 + lVar44) ^ *(uint *)(PTR_DAT_04374608 + lVar39) ^
             *(uint *)(PTR_DAT_04374608 + lVar41);
    lVar41 = (ulong)(uVar19 & 0xff) * 4;
    lVar37 = (ulong)(uVar19 >> 8 & 0xff) * 4;
    uVar2 = *(uint *)(PTR_DAT_04374600 + lVar41);
    uVar7 = *(uint *)(PTR_DAT_043745f0 + lVar37);
    lVar23 = (ulong)(uVar19 >> 0x10 & 0xff) * 4;
    lVar33 = (ulong)(uVar19 >> 0x18) * 4;
    uVar42 = *(uint *)(PTR_DAT_043745f0 + lVar24);
    uVar9 = *(uint *)(PTR_DAT_04374600 + lVar44);
    uVar10 = *(uint *)(PTR_DAT_04374608 + lVar37);
    uVar47 = uVar7 ^ uVar2 ^ uVar43 ^ *(uint *)(PTR_DAT_043745f8 + lVar23) ^
             *(uint *)(PTR_DAT_04374608 + lVar33) ^ uVar47;
    uVar43 = *(uint *)(PTR_DAT_04374600 + lVar39);
    lVar37 = (ulong)(uVar47 >> 8 & 0xff) * 4;
    lVar44 = (ulong)(uVar47 >> 0x18) * 4;
    uVar12 = *(uint *)(PTR_DAT_04374608 + lVar44);
    local_120[lVar35 + 6] = uVar3 ^ uVar4 ^ uVar5 ^ uVar21 ^ uVar22;
    local_120[lVar35 + 7] = uVar38 ^ uVar40 ^ uVar6 ^ uVar8 ^ uVar11;
    uVar22 = *(uint *)(PTR_DAT_04374600 + lVar23);
    lVar45 = (ulong)(uVar47 >> 0x10 & 0xff) * 4;
    uVar40 = *(uint *)(PTR_DAT_043745f0 + lVar33);
    lVar23 = (ulong)(uVar47 & 0xff) * 4;
    uVar38 = *(uint *)(PTR_DAT_043745f0 + lVar20);
    uVar21 = *(uint *)(PTR_DAT_04374600 + lVar45);
    uVar3 = *(uint *)(PTR_DAT_043745f8 + lVar37);
    uVar4 = *(uint *)(PTR_DAT_04374608 + lVar23);
    uVar47 = uVar10 ^ uVar22 ^ uVar47 ^ *(uint *)(PTR_DAT_043745f0 + lVar41) ^
             *(uint *)(PTR_DAT_043745f8 + lVar33) ^ *(uint *)(PTR_DAT_043745f8 + lVar20);
    lVar24 = (ulong)(uVar47 >> 0x18) * 4;
    lVar33 = (ulong)(uVar47 >> 8 & 0xff) * 4;
    uVar5 = *(uint *)(PTR_DAT_043745f8 + (ulong)(uVar47 >> 0x10 & 0xff) * 4);
    uVar42 = *(uint *)(PTR_DAT_04374600 + lVar37) ^ uVar46 ^ *(uint *)(PTR_DAT_043745f0 + lVar45) ^
             *(uint *)(PTR_DAT_043745f8 + lVar23) ^ uVar12 ^ uVar42;
    lVar20 = (ulong)(uVar47 & 0xff) * 4;
    lVar23 = (ulong)(uVar42 >> 0x18) * 4;
    uVar46 = *(uint *)(PTR_DAT_043745f8 + (ulong)(uVar42 >> 8 & 0xff) * 4);
    uVar6 = *(uint *)(PTR_DAT_043745f8 + lVar23);
    uVar8 = *(uint *)(PTR_DAT_04374608 + (ulong)(uVar42 >> 0x10 & 0xff) * 4);
    uVar11 = *(uint *)(PTR_DAT_04374608 + (ulong)(uVar42 & 0xff) * 4);
    local_124 = *(uint *)(PTR_DAT_04374600 + lVar24) ^ uVar36 ^ *(uint *)(PTR_DAT_043745f0 + lVar33)
                ^ uVar5 ^ *(uint *)(PTR_DAT_04374608 + lVar20) ^
                *(uint *)(PTR_DAT_04374608 + lVar26);
    uVar36 = *(uint *)(PTR_DAT_043745f0 + lVar23);
    uVar12 = *(uint *)(PTR_DAT_043745f8 + (ulong)(local_124 >> 0x10 & 0xff) * 4);
    uVar13 = *(uint *)(PTR_DAT_04374608 + (ulong)(local_124 >> 0x18) * 4);
    lVar37 = (ulong)(local_124 & 0xff) * 4;
    local_120[lVar35 + 10] =
         uVar7 ^ uVar2 ^ *(uint *)(PTR_DAT_043745f8 + lVar44) ^ *(uint *)(PTR_DAT_04374608 + lVar45)
         ^ *(uint *)(PTR_DAT_043745f8 + lVar26);
    local_120[lVar35 + 0xb] = uVar10 ^ uVar22 ^ uVar40 ^ uVar3 ^ uVar4;
    uVar22 = *(uint *)(PTR_DAT_04374600 + lVar37);
    lVar26 = (ulong)(local_124 >> 8 & 0xff) * 4;
    local_120[lVar35 + 8] = uVar43 ^ uVar31 ^ uVar6 ^ uVar8 ^ uVar21;
    local_120[lVar35 + 9] = uVar38 ^ uVar9 ^ uVar46 ^ uVar11 ^ uVar36;
    uVar43 = uVar13 ^ uVar12 ^ uVar19 ^ uVar9 ^ uVar22 ^ *(uint *)(PTR_DAT_043745f0 + lVar26);
    uStack_78._0_4_ = uVar43 >> 8 & 0xff;
    uVar27 = (ulong)(uVar43 & 0xff);
    local_80._4_4_ = uVar43 >> 0x10 & 0xff;
    uVar19 = *(uint *)(PTR_DAT_04374600 + (ulong)(uint)uStack_78 * 4);
    lVar23 = (ulong)(uVar43 >> 0x18) * 4;
    uVar46 = *(uint *)(PTR_DAT_043745f0 + uVar27 * 4);
    local_68._4_4_ =
         uVar19 ^ uVar42 ^ *(uint *)(PTR_DAT_043745f0 + (ulong)local_80._4_4_ * 4) ^
         *(uint *)(PTR_DAT_043745f8 + uVar27 * 4) ^ *(uint *)(PTR_DAT_04374608 + lVar23) ^
         *(uint *)(PTR_DAT_043745f0 + lVar39);
    uVar42 = *(uint *)(PTR_DAT_043745f0 + lVar37);
    local_70._0_4_ = local_68._4_4_ >> 0x18;
    local_120[lVar35 + 0xc] =
         *(uint *)(PTR_DAT_04374600 + lVar23) ^
         *(uint *)(PTR_DAT_043745f0 + (ulong)local_80._4_4_ * 4) ^
         *(uint *)(PTR_DAT_043745f8 + lVar37) ^ *(uint *)(PTR_DAT_04374608 + lVar26) ^
         *(uint *)(PTR_DAT_04374600 + lVar20);
    local_120[lVar35 + 0xd] = uVar13 ^ uVar12 ^ uVar19 ^ uVar46 ^ uVar42;
    uVar28 = (ulong)(local_68._4_4_ >> 0x10 & 0xff);
    uVar46 = *(uint *)(PTR_DAT_04374608 + uVar28 * 4);
    local_68._0_4_ = local_68._4_4_ >> 8 & 0xff;
    uVar36 = *(uint *)(PTR_DAT_04374600 + (ulong)(uint)local_68 * 4);
    uVar42 = *(uint *)(PTR_DAT_043745f0 + (ulong)(local_68._4_4_ & 0xff) * 4);
    uVar22 = *(uint *)(PTR_DAT_04374608 + lVar24);
    uVar19 = *(uint *)(PTR_DAT_043745f8 + lVar23);
    local_120[lVar35 + 0xe] =
         *(uint *)(PTR_DAT_043745f0 + uVar28 * 4) ^
         *(uint *)(PTR_DAT_04374600 + (ulong)(uint)local_70 * 4) ^
         *(uint *)(PTR_DAT_043745f8 + lVar20) ^ *(uint *)(PTR_DAT_04374608 + lVar33) ^ uVar19;
    local_120[lVar35 + 0xf] = uVar36 ^ uVar5 ^ uVar42 ^ uVar22 ^ uVar46;
    bVar1 = lVar35 == 0;
    lVar35 = 0x10;
  } while (bVar1);
  *param_1 = local_120[0];
  param_1[1] = local_120[0x10] + 0x10 & 0x1f;
  param_1[2] = local_120[1];
  param_1[3] = local_120[0x11] + 0x10 & 0x1f;
  param_1[4] = local_120[2];
  param_1[5] = local_120[0x12] + 0x10 & 0x1f;
  param_1[6] = local_120[3];
  param_1[7] = local_120[0x13] + 0x10 & 0x1f;
  param_1[8] = local_120[4];
  param_1[9] = local_120[0x14] + 0x10 & 0x1f;
  param_1[10] = local_120[5];
  param_1[0xb] = local_120[0x15] + 0x10 & 0x1f;
  param_1[0xc] = local_120[6];
  param_1[0xd] = local_120[0x16] + 0x10 & 0x1f;
  param_1[0xe] = local_120[7];
  param_1[0xf] = local_120[0x17] + 0x10 & 0x1f;
  param_1[0x10] = local_120[8];
  param_1[0x11] = local_120[0x18] + 0x10 & 0x1f;
  param_1[0x12] = local_120[9];
  param_1[0x13] = local_120[0x19] + 0x10 & 0x1f;
  param_1[0x14] = local_120[10];
  param_1[0x15] = local_120[0x1a] + 0x10 & 0x1f;
  param_1[0x16] = local_120[0xb];
  param_1[0x17] = local_120[0x1b] + 0x10 & 0x1f;
  param_1[0x18] = local_120[0xc];
  param_1[0x19] = local_120[0x1c] + 0x10 & 0x1f;
  param_1[0x1a] = local_120[0xd];
  param_1[0x1b] = local_120[0x1d] + 0x10 & 0x1f;
  param_1[0x1c] = local_120[0xe];
  param_1[0x1d] = local_120[0x1e] + 0x10 & 0x1f;
  param_1[0x1e] = local_120[0xf];
  param_1[0x1f] = local_120[0x1f] + 0x10 & 0x1f;
  return;
}


