/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5600; name: FUN_031f5600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031f5600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  ulong uVar16;
  int iVar21;
  int iVar22;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulong uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fStack_154;
  undefined8 local_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  FUN_031f58c0(param_1,auStack_90);
  uVar45 = *param_1;
  fVar41 = (float)param_1[1];
  fStack_154 = (float)((ulong)param_1[1] >> 0x20);
  FUN_031f5918(param_1,auStack_a0,&local_b0);
  FUN_031f59f0(param_1,param_2,auStack_c0);
  FUN_031f5a70(param_1,param_3,auStack_d0);
  iVar2 = FUN_031f5af0(param_1,auStack_c0,auStack_d0,param_5);
  if (iVar2 == 0) {
    auVar29._8_4_ = fVar41;
    auVar29._0_8_ = uVar45;
    auVar26._8_4_ = fVar41;
    auVar26._0_8_ = uVar45;
    fVar40 = (float)uVar45;
    fVar42 = (float)((ulong)uVar45 >> 0x20);
    auVar19._8_4_ = fStack_a8;
    auVar19._0_8_ = local_b0;
    auVar15._8_4_ = fStack_a8;
    auVar15._0_8_ = local_b0;
    fVar13 = (float)local_b0;
    fVar14 = (float)((ulong)local_b0 >> 0x20);
    fVar5 = auStack_a0._0_4_;
    auVar18._0_4_ = -fVar5;
    fVar12 = auStack_a0._4_4_;
    auVar18._4_4_ = -fVar12;
    auVar18._8_4_ = -auStack_a0._8_4_;
    auVar18._12_4_ = -auStack_a0._12_4_;
    auVar8._0_4_ = fVar40 + fVar5;
    auVar8._4_4_ = fVar42 + fVar12;
    auVar8._8_4_ = fVar41 + auStack_a0._8_4_;
    auVar8._12_4_ = fStack_154 + auStack_a0._12_4_;
    auVar25._0_4_ = -fVar13;
    auVar25._4_4_ = -fVar14;
    auVar25._8_4_ = -fStack_a8;
    auVar25._12_4_ = -fStack_a4;
    uVar32 = CONCAT44(fVar13,fVar5);
    uVar33 = (undefined1)((ulong)local_b0 >> 0x20);
    uVar34 = (undefined1)((ulong)local_b0 >> 0x28);
    uVar36 = (undefined1)((ulong)local_b0 >> 0x30);
    uVar38 = (undefined1)((ulong)local_b0 >> 0x38);
    auVar10 = NEON_ext(auStack_a0,auStack_a0,8,1);
    auVar15._12_4_ = fStack_a4;
    auVar19._12_4_ = fStack_a4;
    auVar28 = NEON_ext(auVar15,auVar19,8,1);
    auVar26._12_4_ = fStack_154;
    auVar29._12_4_ = fStack_154;
    auVar15 = NEON_ext(auVar26,auVar29,8,1);
    fVar5 = fVar40 + fVar13;
    fVar6 = fVar42 + fVar14;
    uVar43 = CONCAT44(auVar28._0_4_,auVar10._0_4_);
    uVar47 = CONCAT17(uVar38,CONCAT16(uVar36,CONCAT15(uVar34,CONCAT14(uVar33,fVar12))));
    uVar30 = CONCAT44(auVar25._0_4_,auVar18._0_4_);
    uVar31 = CONCAT44(auVar25._4_4_,auVar18._4_4_);
    auVar19 = NEON_ext(auVar18,auVar18,8,1);
    auVar29 = NEON_ext(auVar8,auVar8,8,1);
    auVar11._0_4_ = auVar8._0_4_ + fVar13;
    auVar11._4_4_ = auVar8._4_4_ + fVar14;
    auVar11._8_4_ = auVar8._8_4_ + fStack_a8;
    auVar11._12_4_ = auVar8._12_4_ + fStack_a4;
    uVar35 = (undefined1)((uint)auVar8._0_4_ >> 8);
    uVar37 = (undefined1)((uint)auVar8._0_4_ >> 0x10);
    uVar39 = (undefined1)((uint)auVar8._0_4_ >> 0x18);
    auVar26 = NEON_ext(auVar25,auVar25,8,1);
    uVar24 = CONCAT44(auVar26._0_4_,auVar19._0_4_);
    auVar9._4_4_ = fVar6;
    auVar9._0_4_ = fVar5;
    auVar9._8_4_ = fVar41 + fStack_a8;
    auVar9._12_4_ = fStack_154 + fStack_a4;
    auVar20._4_4_ = fVar6;
    auVar20._0_4_ = fVar5;
    auVar20._8_4_ = fVar41 + fStack_a8;
    auVar20._12_4_ = fStack_154 + fStack_a4;
    auVar20 = NEON_ext(auVar9,auVar20,8,1);
    uVar27 = CONCAT44(auVar29._0_4_,auVar15._0_4_);
    local_100 = CONCAT17(uVar39,CONCAT16(uVar37,CONCAT15(uVar35,CONCAT14(SUB41(auVar8._0_4_,0),
                                                                         fVar40))));
    uStack_118 = CONCAT44(auVar25._4_4_,auVar18._4_4_);
    uStack_120 = CONCAT44((int)(CONCAT17(uVar38,CONCAT16(uVar36,CONCAT15(uVar34,CONCAT14(uVar33,
                                                  fVar12)))) >> 0x20),fVar12);
    auVar9 = NEON_ext(auVar11,auVar11,8,1);
    uVar16 = CONCAT44(auVar20._0_4_,auVar9._0_4_);
    uVar7 = CONCAT44(fVar6,auVar11._4_4_);
    uVar46 = CONCAT17(uVar39,CONCAT16(uVar37,CONCAT15(uVar35,CONCAT14(SUB41(auVar8._0_4_,0),fVar40))
                                     ));
    uVar45 = CONCAT44(fVar5,auVar11._0_4_);
    uStack_f8 = CONCAT44(fVar5,auVar11._0_4_);
    uVar44 = CONCAT44(auVar8._4_4_,fVar42);
    uStack_e8 = CONCAT44(fVar6,auVar11._4_4_);
    uStack_f0 = CONCAT44(auVar8._4_4_,fVar42);
    uStack_108 = CONCAT44(auVar26._0_4_,auVar19._0_4_);
    local_110 = CONCAT44(auVar28._0_4_,auVar10._0_4_);
    local_130 = uVar32;
    uStack_128 = uVar30;
    local_e0 = uVar27;
    uStack_d8 = uVar16;
    FUN_031f51f0(auStack_c0,auStack_d0,&local_100,&local_130,param_4,&local_140,&local_150,param_8,
                 uVar44,0,uVar7,0,uVar45,0,uVar27,0,uVar46,0,uVar16,0,uVar43,0,uVar32,0,uVar47,0,
                 uVar31,0,uVar30,0,uVar24,0);
    auVar10[8] = uStack_148;
    auVar10._0_8_ = local_150;
    auVar10[9] = (char)uStack_147;
    auVar10[10] = (char)((uint7)uStack_147 >> 8);
    auVar10[0xb] = (char)((uint7)uStack_147 >> 0x10);
    auVar10[0xc] = (char)((uint7)uStack_147 >> 0x18);
    auVar10[0xd] = (char)((uint7)uStack_147 >> 0x20);
    auVar10[0xe] = (char)((uint7)uStack_147 >> 0x28);
    auVar10[0xf] = (char)((uint7)uStack_147 >> 0x30);
    fVar41 = (float)NEON_fminnmv(auVar10,4);
    uStack_78 = uVar27 & 0xffffffff;
    local_80 = CONCAT44((int)uVar44,(int)uVar46);
    uStack_68 = uVar27 >> 0x20;
    uStack_70 = CONCAT44((int)((ulong)uVar44 >> 0x20),(int)((ulong)uVar46 >> 0x20));
    uStack_58 = uVar16 & 0xffffffff;
    local_60 = CONCAT44((int)uVar7,(int)uVar45);
    uStack_48 = uVar16 >> 0x20;
    uStack_50 = CONCAT44((int)((ulong)uVar7 >> 0x20),(int)((ulong)uVar45 >> 0x20));
    iVar2 = -(uint)((float)local_150 <= fVar41);
    iVar21 = -(uint)((float)((ulong)local_150 >> 0x20) <= fVar41);
    iVar22 = -(uint)((float)CONCAT71(uStack_147,uStack_148) <= fVar41);
    iVar23 = -(uint)((float)((uint7)uStack_147 >> 0x18) <= fVar41);
    iVar2 = CONCAT13((byte)((uint)iVar2 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x18),
                     CONCAT12((byte)((uint)iVar2 >> 0x10) & (byte)((ulong)_DAT_03889700 >> 0x10),
                              CONCAT11((byte)((uint)iVar2 >> 8) & (byte)((ulong)_DAT_03889700 >> 8),
                                       (byte)iVar2 & (byte)_DAT_03889700)));
    auVar17._0_8_ =
         CONCAT17((byte)((uint)iVar21 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                  CONCAT16((byte)((uint)iVar21 >> 0x10) & (byte)((ulong)_DAT_03889700 >> 0x30),
                           CONCAT15((byte)((uint)iVar21 >> 8) & (byte)((ulong)_DAT_03889700 >> 0x28)
                                    ,CONCAT14((byte)iVar21 & (byte)((ulong)_DAT_03889700 >> 0x20),
                                              iVar2))));
    auVar17[8] = (byte)iVar22 & (byte)_UNK_03889708;
    auVar17[9] = (byte)((uint)iVar22 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
    auVar17[10] = (byte)((uint)iVar22 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
    auVar17[0xb] = (byte)((uint)iVar22 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
    auVar28[0xc] = (byte)iVar23 & (byte)((ulong)_UNK_03889708 >> 0x20);
    auVar28._0_12_ = auVar17;
    auVar28[0xd] = (byte)((uint)iVar23 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
    auVar28[0xe] = (byte)((uint)iVar23 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
    auVar28[0xf] = (byte)((uint)iVar23 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
    cVar1 = (&DAT_03aadfc0)
            [(uint)(iVar2 + (int)((ulong)auVar17._0_8_ >> 0x20) + auVar17._8_4_ + auVar28._12_4_)];
    lVar3 = (long)cVar1;
    lVar4 = lVar3 * 0x10;
    uVar45 = *(undefined8 *)(auStack_90 + lVar4 + 0x10);
    uStack_78 = uVar43 & 0xffffffff;
    local_80 = CONCAT44((int)uVar47,(int)uVar32);
    uStack_68 = uVar43 >> 0x20;
    uStack_70 = CONCAT44((int)((ulong)uVar47 >> 0x20),(int)((ulong)uVar32 >> 0x20));
    uStack_58 = uVar24 & 0xffffffff;
    local_60 = CONCAT44((int)uVar31,(int)uVar30);
    uStack_48 = uVar24 >> 0x20;
    uStack_50 = CONCAT44((int)((ulong)uVar31 >> 0x20),(int)((ulong)uVar30 >> 0x20));
    fVar41 = *(float *)(auStack_90 + lVar4 + 0x10);
    fVar5 = *(float *)(auStack_90 + lVar4 + 0x14);
    if (cVar1 == '\x01') {
      fVar6 = (float)((ulong)local_140 >> 0x20);
    }
    else if (cVar1 == '\x03') {
      fVar6 = (float)((ulong)local_138 >> 0x20);
    }
    else {
      if (cVar1 == '\x02') {
        local_140 = local_138;
      }
      fVar6 = (float)local_140;
    }
    param_5[1] = CONCAT44((float)((ulong)(&uStack_78)[lVar3 * 2] >> 0x20) +
                          *(float *)((long)&uStack_78 + lVar4 + 4) * fVar6,
                          (float)(&uStack_78)[lVar3 * 2] +
                          *(float *)(&uStack_78 + lVar3 * 2) * fVar6);
    *param_5 = CONCAT44((float)((ulong)uVar45 >> 0x20) + fVar5 * fVar6,
                        (float)uVar45 + fVar41 * fVar6);
  }
  return;
}


