/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024efc; name: FUN_03024efc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03024efc(long param_1,ushort *param_2,float *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  undefined4 uVar34;
  ulong uVar31;
  int iVar33;
  int iVar35;
  int iVar36;
  undefined1 auVar32 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  pauVar1 = (undefined1 (*) [16])(param_2 + 8);
  fVar22 = (float)*(undefined8 *)(param_2 + 0xc);
  fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  auVar10 = *(undefined1 (*) [12])*pauVar1;
  auVar9 = *(undefined1 (*) [12])*pauVar1;
  auVar45 = *pauVar1;
  fVar23 = (float)*(undefined8 *)*pauVar1;
  fVar25 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  lVar19 = *(long *)(param_2 + 0x10);
  fVar21 = fVar23 * (float)*param_4 + fVar25 * (float)((ulong)*param_4 >> 0x20) +
           fVar22 * (float)param_4[1];
  if (lVar19 != 0) {
    fVar28 = (float)((uint)*(ushort *)(lVar19 + 0x3c) << 0x10);
    fVar27 = *param_3;
    fVar29 = param_3[1];
    fVar26 = (float)*(undefined8 *)(param_1 + 0x10) * fVar28;
    fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar28;
    *(ulong *)(lVar19 + 0x78) =
         CONCAT44(*(float *)(lVar19 + 0x7c) + fVar21 * fVar28,
                  *(float *)(lVar19 + 0x78) + param_3[2] * fVar26);
    *(ulong *)(lVar19 + 0x70) =
         CONCAT44(*(float *)(lVar19 + 0x74) + fVar29 * fVar28,
                  *(float *)(lVar19 + 0x70) + fVar27 * fVar26);
  }
  uVar3 = *param_2;
  if ((uVar3 & 0x30) != 0) {
    fVar28 = fVar23 * fVar23;
    fVar27 = fVar28 + fVar28;
    fVar29 = fVar25 * fVar25 + fVar28;
    fVar26 = fVar22 * fVar22 + fVar28;
    fVar28 = fVar24 * fVar24 + fVar28;
    auVar47._4_4_ = fVar29;
    auVar47._0_4_ = fVar27;
    auVar47._8_4_ = fVar26;
    auVar47._12_4_ = fVar28;
    auVar38 = NEON_frsqrte(auVar47,4);
    iVar30 = -(uint)(fVar27 <= 0.0);
    iVar33 = -(uint)(fVar29 <= 0.0);
    iVar35 = -(uint)(fVar26 <= 0.0);
    iVar36 = -(uint)(fVar28 <= 0.0);
    fVar37 = auVar38._0_4_;
    auVar42._0_4_ = fVar37 * fVar37;
    fVar39 = auVar38._4_4_;
    auVar42._4_4_ = fVar39 * fVar39;
    fVar40 = auVar38._8_4_;
    auVar42._8_4_ = fVar40 * fVar40;
    fVar41 = auVar38._12_4_;
    auVar42._12_4_ = fVar41 * fVar41;
    auVar7._4_4_ = fVar29;
    auVar7._0_4_ = fVar27;
    auVar7._8_4_ = fVar26;
    auVar7._12_4_ = fVar28;
    auVar38 = NEON_frsqrts(auVar7,auVar42,4);
    fVar37 = fVar37 * auVar38._0_4_;
    fVar39 = fVar39 * auVar38._4_4_;
    fVar40 = fVar40 * auVar38._8_4_;
    fVar41 = fVar41 * auVar38._12_4_;
    auVar43._0_4_ = fVar37 * fVar37;
    auVar43._4_4_ = fVar39 * fVar39;
    auVar43._8_4_ = fVar40 * fVar40;
    auVar43._12_4_ = fVar41 * fVar41;
    auVar8._4_4_ = fVar29;
    auVar8._0_4_ = fVar27;
    auVar8._8_4_ = fVar26;
    auVar8._12_4_ = fVar28;
    auVar38 = NEON_frsqrts(auVar8,auVar43,4);
    fVar37 = auVar38._0_4_ * fVar37;
    fVar39 = auVar38._4_4_ * fVar39;
    fVar40 = auVar38._8_4_ * fVar40;
    fVar41 = auVar38._12_4_ * fVar41;
    auVar46._0_12_ = auVar45._0_12_;
    auVar46._12_4_ = 0;
    auVar44._8_8_ = _UNK_03889038;
    auVar44._0_8_ = _DAT_03889030;
    auVar48._8_8_ = _UNK_03889f18;
    auVar48._0_8_ = _DAT_03889f10;
    bVar2 = (byte)param_2[2];
    auVar32._0_8_ =
         CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                  CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                           CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                    CONCAT14(SUB41(fVar39,0) & ~(byte)iVar33,
                                             CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                      ~(byte)((uint)iVar30 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                                               ~(byte)((uint)iVar30 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar37 >> 8) &
                                                                        ~(byte)((uint)iVar30 >> 8),
                                                                        SUB41(fVar37,0) &
                                                                        ~(byte)iVar30)))))));
    auVar32[8] = SUB41(fVar40,0) & ~(byte)iVar35;
    auVar32[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar35 >> 8);
    auVar32[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
    auVar32[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
    auVar32[0xc] = SUB41(fVar41,0) & ~(byte)iVar36;
    auVar32[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar36 >> 8);
    auVar32[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
    auVar32[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
    lVar18 = (ulong)bVar2 * 0x20 + 0xd0;
    auVar45 = a64_TBL(ZEXT816(0),auVar46,auVar44);
    auVar47 = a64_TBL(ZEXT816(0),auVar46,auVar48);
    iVar30 = -(uint)(fVar26 < fVar29);
    iVar33 = -(uint)(fVar26 < fVar29);
    uVar20 = (ulong)(byte)(&DAT_03aa2a64)[(byte)param_2[(ulong)bVar2 * 0x10 + 0x6a]];
    auVar49._4_4_ = iVar33;
    auVar49._0_4_ = iVar30;
    auVar49._12_4_ = iVar33;
    auVar49._8_4_ = iVar30;
    auVar47 = auVar47 ^ (auVar47 ^ auVar45) & auVar49;
    fVar37 = -auVar47._0_4_;
    fVar39 = auVar47._4_4_;
    auVar50._4_12_ = auVar47._4_12_;
    auVar50._0_4_ = fVar37;
    uVar34 = (undefined4)((ulong)auVar32._0_8_ >> 0x20);
    auVar45 = NEON_ext(auVar32,auVar32,8,1);
    uVar31 = CONCAT44(auVar45._0_4_,auVar45._0_4_);
    uVar31 = uVar31 ^ (uVar31 ^ CONCAT44(uVar34,uVar34)) & CONCAT44(iVar33,iVar30);
    fVar29 = (float)uVar31;
    fVar26 = (float)(uVar31 >> 0x20);
    auVar45._12_4_ = fVar24;
    auVar45._0_12_ = auVar9;
    auVar38._12_4_ = fVar24;
    auVar38._0_12_ = auVar10;
    auVar45 = NEON_ext(auVar45,auVar38,4,1);
    auVar38 = NEON_ext(auVar50,auVar50,4,1);
    fVar28 = fVar23 * auVar38._0_4_ - auVar45._0_4_ * fVar37;
    fVar27 = fVar25 * auVar38._4_4_ - auVar45._4_4_ * fVar39;
    fVar23 = fVar22 * fVar37 - fVar23 * auVar47._8_4_;
    fVar25 = fVar24 * fVar39 - fVar25 * auVar47._12_4_;
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar28;
    auVar5._8_4_ = fVar23;
    auVar5._12_4_ = fVar25;
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar28;
    auVar6._8_4_ = fVar23;
    auVar6._12_4_ = fVar25;
    auVar45 = NEON_ext(auVar5,auVar6,4,1);
    fVar23 = *param_3 * fVar29 * fVar37 + param_3[1] * fVar26 * fVar39 +
             param_3[2] * fVar29 * auVar47._8_4_;
    fVar25 = *param_3 * fVar29 * auVar45._0_4_ + param_3[1] * fVar26 * auVar45._4_4_ +
             param_3[2] * fVar29 * fVar28;
    if ((uVar3 >> 3 & 1) == 0) {
      auVar45 = *(undefined1 (*) [16])((long)param_2 + uVar20 + lVar18);
      auVar38 = NEON_ext(auVar45,auVar45,8,1);
      puVar4 = (undefined8 *)((long)param_2 + uVar20 + lVar18);
      puVar4[1] = CONCAT44(auVar45._12_4_,auVar38._0_4_ - fVar21);
      *puVar4 = CONCAT44(auVar45._4_4_ - fVar25,auVar45._0_4_ - fVar23);
    }
    else {
      puVar4 = (undefined8 *)((long)param_2 + uVar20 + lVar18);
      puVar4[1] = CONCAT44(*(undefined4 *)((long)param_2 + uVar20 + lVar18 + 0xc),-fVar21);
      *puVar4 = CONCAT44(-fVar25,-fVar23);
      *param_2 = uVar3 & 0xfff7;
    }
    if (lVar19 != 0) {
      fVar27 = (float)*(undefined8 *)(param_1 + 0xd8) * (float)*(undefined8 *)(param_1 + 0x10) *
               (float)((uint)*(ushort *)(lVar19 + 0x3c) << 0x10);
      uVar34 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x20);
      uVar11 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x22);
      fVar22 = *(float *)(param_2 + (ulong)bVar2 * 0x10 + 0x26);
      uVar12 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x38);
      uVar13 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x3a);
      uVar14 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x3c);
      fVar24 = *(float *)(param_2 + (ulong)bVar2 * 0x10 + 0x3e);
      uVar15 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x58);
      uVar16 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x5a);
      uVar17 = *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x5c);
      fVar28 = *(float *)(param_2 + (ulong)bVar2 * 0x10 + 0x5e);
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x24) =
           *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x24);
      *(float *)(param_2 + (ulong)bVar2 * 0x10 + 0x26) = fVar22 + fVar23 * fVar27;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x20) = uVar34;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x22) = uVar11;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x3c) = uVar14;
      *(float *)(param_2 + (ulong)bVar2 * 0x10 + 0x3e) = fVar24 + fVar25 * fVar27;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x38) = uVar12;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x3a) = uVar13;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x5c) = uVar17;
      *(float *)(param_2 + (ulong)bVar2 * 0x10 + 0x5e) = fVar28 + fVar21 * fVar27;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x58) = uVar15;
      *(undefined4 *)(param_2 + (ulong)bVar2 * 0x10 + 0x5a) = uVar16;
    }
  }
  return;
}


