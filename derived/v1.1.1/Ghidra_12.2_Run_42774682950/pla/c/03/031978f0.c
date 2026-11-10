/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031978f0; name: FUN_031978f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_031978f0(long param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  byte bVar28;
  byte bVar31;
  float fVar32;
  undefined1 auVar23 [16];
  float fVar29;
  float fVar33;
  undefined1 auVar24 [16];
  float fVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar34;
  undefined8 uVar35;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  int iVar46;
  int iVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  lVar17 = tpidr_el0;
  if (*(long *)(lVar17 + 0x38d490) == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar13;
    lVar17 = *(long *)(lVar13 + 0x10);
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38d490) + 0x10);
  }
  if (lVar17 != 0) {
    puVar15 = *(undefined8 **)(lVar17 + 8);
    uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= *(ulong *)(lVar17 + 0x10)) &&
       (*(ulong *)(lVar17 + 8) = uVar14, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = "TtResolveEdgePenetration";
      uVar35 = nn::os::GetSystemTick();
      puVar15[1] = uVar35;
    }
  }
  auVar36._8_8_ = _UNK_03889038;
  auVar36._0_8_ = _DAT_03889030;
  fStack_88 = (float)param_2[1];
  fStack_84 = (float)((ulong)param_2[1] >> 0x20);
  local_90 = (float)*param_2;
  fStack_8c = (float)((ulong)*param_2 >> 0x20);
  pauVar16 = (undefined1 (*) [16])(param_2 + 4);
  fVar44 = (float)param_2[5];
  fVar45 = (float)((ulong)param_2[5] >> 0x20);
  uVar35 = *(undefined8 *)*pauVar16;
  fVar42 = (float)uVar35;
  fVar43 = (float)((ulong)uVar35 >> 0x20);
  fVar20 = fVar42 * fVar42;
  fVar30 = fVar20 + fVar20;
  fVar41 = fVar43 * fVar43 + fVar20;
  uVar48 = SUB41(fVar41,0);
  uVar49 = (undefined1)((uint)fVar41 >> 8);
  uVar50 = (undefined1)((uint)fVar41 >> 0x10);
  uVar51 = (undefined1)((uint)fVar41 >> 0x18);
  fVar21 = fVar44 * fVar44 + fVar20;
  uVar52 = SUB41(fVar21,0);
  uVar53 = (undefined1)((uint)fVar21 >> 8);
  uVar54 = (undefined1)((uint)fVar21 >> 0x10);
  uVar55 = (undefined1)((uint)fVar21 >> 0x18);
  fVar20 = fVar45 * fVar45 + fVar20;
  uVar56 = SUB41(fVar20,0);
  uVar57 = (undefined1)((uint)fVar20 >> 8);
  uVar58 = (undefined1)((uint)fVar20 >> 0x10);
  uVar59 = (undefined1)((uint)fVar20 >> 0x18);
  auVar60._0_12_ = SUB1612(*pauVar16,0);
  auVar60._12_4_ = 0;
  auVar23 = a64_TBL(ZEXT816(0),auVar60,auVar36);
  auVar37._8_4_ = (int)_UNK_03889f18;
  auVar37._0_8_ = _DAT_03889f10;
  auVar37._12_4_ = (int)((ulong)_UNK_03889f18 >> 0x20);
  auVar37 = a64_TBL(ZEXT816(0),auVar60,auVar37);
  iVar46 = -(uint)(fVar21 < fVar41);
  iVar47 = -(uint)(fVar21 < fVar41);
  auVar61._4_4_ = iVar47;
  auVar61._0_4_ = iVar46;
  auVar61._12_4_ = iVar47;
  auVar61._8_4_ = iVar46;
  auVar37 = auVar37 ^ (auVar37 ^ auVar23) & auVar61;
  auVar6[4] = uVar48;
  auVar6._0_4_ = fVar30;
  auVar6[5] = uVar49;
  auVar6[6] = uVar50;
  auVar6[7] = uVar51;
  auVar6[8] = uVar52;
  auVar6[9] = uVar53;
  auVar6[10] = uVar54;
  auVar6[0xb] = uVar55;
  auVar6[0xc] = uVar56;
  auVar6[0xd] = uVar57;
  auVar6[0xe] = uVar58;
  auVar6[0xf] = uVar59;
  auVar23 = NEON_frsqrte(auVar6,4);
  fVar19 = auVar23._0_4_;
  auVar38._0_4_ = fVar19 * fVar19;
  fVar29 = auVar23._4_4_;
  auVar38._4_4_ = fVar29 * fVar29;
  fVar32 = auVar23._8_4_;
  auVar38._8_4_ = fVar32 * fVar32;
  fVar33 = auVar23._12_4_;
  auVar38._12_4_ = fVar33 * fVar33;
  auVar7[4] = uVar48;
  auVar7._0_4_ = fVar30;
  auVar7[5] = uVar49;
  auVar7[6] = uVar50;
  auVar7[7] = uVar51;
  auVar7[8] = uVar52;
  auVar7[9] = uVar53;
  auVar7[10] = uVar54;
  auVar7[0xb] = uVar55;
  auVar7[0xc] = uVar56;
  auVar7[0xd] = uVar57;
  auVar7[0xe] = uVar58;
  auVar7[0xf] = uVar59;
  auVar23 = NEON_frsqrts(auVar7,auVar38,4);
  fVar19 = fVar19 * auVar23._0_4_;
  fVar29 = fVar29 * auVar23._4_4_;
  fVar32 = fVar32 * auVar23._8_4_;
  fVar33 = fVar33 * auVar23._12_4_;
  fVar34 = -auVar37._0_4_;
  fVar63 = auVar37._4_4_;
  auVar62._4_12_ = auVar37._4_12_;
  auVar62._0_4_ = fVar34;
  auVar39._0_4_ = fVar19 * fVar19;
  auVar39._4_4_ = fVar29 * fVar29;
  auVar39._8_4_ = fVar32 * fVar32;
  auVar39._12_4_ = fVar33 * fVar33;
  auVar8[4] = uVar48;
  auVar8._0_4_ = fVar30;
  auVar8[5] = uVar49;
  auVar8[6] = uVar50;
  auVar8[7] = uVar51;
  auVar8[8] = uVar52;
  auVar8[9] = uVar53;
  auVar8[10] = uVar54;
  auVar8[0xb] = uVar55;
  auVar8[0xc] = uVar56;
  auVar8[0xd] = uVar57;
  auVar8[0xe] = uVar58;
  auVar8[0xf] = uVar59;
  auVar23 = NEON_frsqrts(auVar8,auVar39,4);
  iVar11 = -(uint)(fVar30 <= 0.0);
  iVar18 = -(uint)(fVar41 <= 0.0);
  iVar9 = -(uint)(fVar21 <= 0.0);
  iVar10 = -(uint)(fVar20 <= 0.0);
  fVar19 = auVar23._0_4_ * fVar19;
  fVar29 = auVar23._4_4_ * fVar29;
  fVar32 = auVar23._8_4_ * fVar32;
  fVar33 = auVar23._12_4_ * fVar33;
  auVar23._12_4_ = fVar45;
  auVar23._0_12_ = *(undefined1 (*) [12])*pauVar16;
  auVar1._12_4_ = fVar45;
  auVar1._0_12_ = *(undefined1 (*) [12])*pauVar16;
  auVar23 = NEON_ext(auVar23,auVar1,8,1);
  uVar35 = NEON_ext(uVar35,auVar23._0_8_,4,1);
  bVar28 = SUB41(fVar29,0) & ~(byte)iVar18;
  bVar31 = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar18 >> 8);
  auVar24._0_6_ =
       CONCAT15(bVar31,CONCAT14(bVar28,CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                ~(byte)((uint)iVar11 >> 0x18),
                                                CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                         ~(byte)((uint)iVar11 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar19 >> 8) &
                                                                  ~(byte)((uint)iVar11 >> 8),
                                                                  SUB41(fVar19,0) & ~(byte)iVar11)))
                               ));
  auVar24[6] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
  auVar24[7] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
  auVar24[8] = SUB41(fVar32,0) & ~(byte)iVar9;
  auVar24[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar9 >> 8);
  auVar24[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  auVar24[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  auVar24[0xc] = SUB41(fVar33,0) & ~(byte)iVar10;
  auVar24[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar10 >> 8);
  auVar24[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
  auVar24[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
  auVar23 = NEON_ext(auVar24,auVar24,8,1);
  uVar14 = CONCAT44(auVar23._0_4_,auVar23._0_4_);
  uVar3 = CONCAT12(auVar24[6],(short)((uint6)auVar24._0_6_ >> 0x20));
  uVar4 = CONCAT13(auVar24[7],uVar3);
  uVar5 = CONCAT16(auVar24[6],CONCAT15(bVar31,CONCAT14(bVar28,uVar4)));
  uVar2 = CONCAT17(auVar24[7],uVar5);
  uVar14 = uVar14 ^ (uVar14 ^ uVar2) & CONCAT44(iVar47,iVar46);
  fStack_a8 = (float)uVar14;
  fStack_a4 = (float)(uVar14 >> 0x20);
  local_a0 = fStack_a8 * fVar34;
  fStack_9c = fStack_a4 * fVar63;
  fStack_98 = fStack_a8 * auVar37._8_4_;
  fStack_94 = fStack_a4 * auVar37._12_4_;
  auVar23 = NEON_ext(auVar62,auVar62,4,1);
  fVar20 = fVar42 * auVar23._0_4_ - (float)uVar35 * fVar34;
  fVar30 = fVar43 * auVar23._4_4_ - (float)((ulong)uVar35 >> 0x20) * fVar63;
  auVar25._0_8_ = CONCAT44(fVar30,fVar20);
  auVar25._8_4_ = fVar44 * fVar34 - fVar42 * auVar37._8_4_;
  auVar25._12_4_ = fVar45 * fVar63 - fVar43 * auVar37._12_4_;
  auVar23 = NEON_ext(auVar25,auVar25,4,1);
  local_b0 = fStack_a8 * auVar23._0_4_;
  fStack_ac = fStack_a4 * auVar23._4_4_;
  fStack_a8 = fStack_a8 * fVar20;
  fStack_a4 = fStack_a4 * fVar30;
  auVar40._4_4_ = (float)*(undefined4 *)(param_2 + 3);
  auVar40._0_4_ = (float)*(undefined4 *)(param_2 + 3);
  auVar40._8_8_ = auVar25._0_8_;
  fVar20 = *(float *)((long)param_2 + 0x14);
  if (*(int *)(param_2 + 7) < 0) {
    puVar15 = param_2 + 8;
  }
  else {
    puVar15 = (undefined8 *)
              (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                        (long)(int)*(long *)((long)param_2 + 0x34) * 0x18) +
              (*(long *)((long)param_2 + 0x34) >> 0x20) * 0x18);
  }
  iVar11 = *(int *)((long)param_2 + 0x1c);
  if (0 < iVar11) {
    uVar35 = *puVar15;
    iVar18 = 0;
    do {
      auVar26._8_8_ = auVar40._0_8_;
      auVar26._0_8_ = auVar40._0_8_;
      fVar30 = auVar40._0_4_;
      fVar41 = auVar40._4_4_;
      if ((iVar18 == iVar11 + -1) || (fVar20 < fVar30)) {
        auVar26._0_4_ = fVar30 + (fVar20 - fVar30) * (float)*(undefined8 *)*pauVar16;
        auVar26._4_4_ =
             fVar41 + (fVar20 - fVar41) * (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
        auVar26._8_4_ = fVar30 + (fVar20 - fVar30) * (float)param_2[5];
        auVar26._12_4_ = fVar41 + (fVar20 - fVar41) * (float)((ulong)param_2[5] >> 0x20);
      }
      auVar27._0_8_ = CONCAT44(auVar26._4_4_ + fStack_8c,auVar26._0_4_ + local_90);
      auVar27._8_4_ = auVar26._8_4_ + fStack_88;
      auVar27._12_4_ = auVar26._12_4_ + fStack_84;
      uStack_c8 = CONCAT44(fStack_84 - auVar26._12_4_,fStack_88 - auVar26._8_4_);
      local_d0 = CONCAT44(fStack_8c - auVar26._4_4_,local_90 - auVar26._0_4_);
      uStack_b8 = auVar27._8_8_;
      local_d8 = CONCAT44(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 2));
      uStack_c0 = auVar27._0_8_;
      iVar11 = FUN_0319a080(param_1,*(undefined4 *)(param_2 + 6),uVar35,param_2[9],
                            *(undefined4 *)(param_2 + 10),pauVar16,&local_a0,&local_b0,&local_90,
                            &local_d8,&local_d0,param_3,param_4);
      if (iVar11 == 0) {
        iVar11 = *(int *)((long)param_2 + 0x1c);
      }
      else {
        fVar21 = (*param_3 - local_90) * (*param_3 - local_90);
        fVar29 = (param_3[1] - fStack_8c) * (param_3[1] - fStack_8c);
        fVar32 = (param_3[2] - fStack_88) * (param_3[2] - fStack_88);
        fVar19 = fVar21 + fVar29 + fVar32;
        uVar22 = CONCAT44(fVar21 + fVar29 + fVar32,fVar19);
        uVar12 = NEON_frsqrte(uVar22,4);
        fVar21 = (float)uVar12;
        fVar29 = (float)((ulong)uVar12 >> 0x20);
        uVar12 = NEON_frsqrts(uVar22,CONCAT44(fVar29 * fVar29,fVar21 * fVar21),4);
        fVar21 = fVar21 * (float)uVar12;
        fVar29 = fVar29 * (float)((ulong)uVar12 >> 0x20);
        uVar12 = NEON_frsqrts(uVar22,CONCAT44(fVar29 * fVar29,fVar21 * fVar21),4);
        iVar11 = -(uint)(fVar19 <= 0.0);
        fVar19 = fVar19 * (float)uVar12 * fVar21;
        if (((float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                             CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                      CONCAT11((byte)((uint)fVar19 >> 8) &
                                               ~(byte)((uint)iVar11 >> 8),
                                               SUB41(fVar19,0) & ~(byte)iVar11))) < fVar30) ||
           (iVar11 = *(int *)((long)param_2 + 0x1c), iVar18 == iVar11 + -1)) {
          uVar35 = 1;
          goto joined_r0x03197b5c;
        }
      }
      auVar40._0_4_ = fVar30 + fVar30;
      auVar40._4_4_ = fVar41 + fVar41;
      auVar40._8_8_ = 0;
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar11);
  }
  uVar35 = 0;
joined_r0x03197b5c:
  if (lVar17 != 0) {
    puVar15 = *(undefined8 **)(lVar17 + 8);
    uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= *(ulong *)(lVar17 + 0x10)) &&
       (*(ulong *)(lVar17 + 8) = uVar14, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_0390f40e;
      uVar12 = nn::os::GetSystemTick();
      puVar15[1] = uVar12;
    }
  }
  return uVar35;
}


