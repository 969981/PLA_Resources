/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a79f8; name: FUN_031a79f8
 */


bool FUN_031a79f8(long param_1,float *param_2,uint param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  undefined1 (*pauVar15) [12];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar41;
  float fVar42;
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  uint local_38 [2];
  
  if (*(char *)(param_1 + 0x61) == '\0') {
    bVar14 = false;
  }
  else if (param_3 == 0xffffffff) {
    *param_5 = 0;
    param_5[1] = 0;
    bVar14 = *(char *)(param_1 + 0x60) == '\0';
  }
  else {
    local_38[0] = param_3 >> 0x16;
    pauVar15 = (undefined1 (*) [12])
               FUN_03179e10(*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),local_38);
    if (*(char *)(param_1 + 0x60) == '\0') {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x58);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
      fVar16 = (float)*(undefined8 *)(param_1 + 0x50);
      fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    }
    else {
      fVar37 = (float)*(undefined8 *)(param_1 + 0x58);
      fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
      fVar21 = (float)*(undefined8 *)(param_1 + 0x50);
      fVar16 = *(float *)(pauVar15[2] + 8) * fVar37 +
               (float)*(undefined8 *)*pauVar15 * fVar21 +
               (float)*(undefined8 *)(pauVar15[1] + 4) * fVar4;
      fVar18 = *(float *)pauVar15[3] * fVar37 +
               (float)((ulong)*(undefined8 *)*pauVar15 >> 0x20) * fVar21 +
               (float)((ulong)*(undefined8 *)(pauVar15[1] + 4) >> 0x20) * fVar4;
      fVar19 = *(float *)(pauVar15[3] + 4) * fVar37 +
               (float)*(undefined8 *)(*pauVar15 + 8) * fVar21 +
               (float)*(undefined8 *)pauVar15[2] * fVar4;
      fVar21 = *(float *)(pauVar15[3] + 8) * fVar37 +
               (float)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20) * fVar21 +
               (float)((ulong)*(undefined8 *)pauVar15[2] >> 0x20) * fVar4;
    }
    param_4[1] = CONCAT44(fVar21,fVar19);
    *param_4 = CONCAT44(fVar18,fVar16);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x128);
    fVar20 = (float)uVar5;
    uVar39 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x120);
    fVar4 = (float)uVar39;
    fVar38 = fVar16 * fVar4;
    fVar37 = (float)((ulong)uVar39 >> 0x20);
    fVar41 = fVar18 * fVar37;
    fVar35 = fVar19 * fVar20;
    fVar17 = fVar38 + fVar41 + fVar35;
    fVar35 = fVar38 + fVar41 + fVar35;
    fVar16 = fVar16 - fVar4 * fVar17;
    fVar18 = fVar18 - fVar37 * fVar35;
    fVar19 = fVar19 - fVar20 * fVar17;
    fVar4 = fVar16 * fVar16 + fVar18 * fVar18 + fVar19 * fVar19;
    fVar38 = fVar16 * fVar16 + fVar18 * fVar18 + fVar19 * fVar19;
    uVar26 = SUB41(fVar38,0);
    uVar28 = (undefined1)((uint)fVar38 >> 8);
    uVar30 = (undefined1)((uint)fVar38 >> 0x10);
    uVar32 = (undefined1)((uint)fVar38 >> 0x18);
    uVar39 = NEON_frsqrte(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar4)))),
                          4);
    fVar37 = (float)uVar39;
    fVar41 = (float)((ulong)uVar39 >> 0x20);
    uVar39 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar4)))),
                          CONCAT44(fVar41 * fVar41,fVar37 * fVar37),4);
    fVar37 = fVar37 * (float)uVar39;
    fVar41 = fVar41 * (float)((ulong)uVar39 >> 0x20);
    iVar8 = -(uint)(fVar4 <= 0.0);
    iVar9 = -(uint)(fVar38 <= 0.0);
    uVar39 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar4)))),
                          CONCAT44(fVar41 * fVar41,fVar37 * fVar37),4);
    fVar37 = (float)uVar39 * fVar37;
    fVar41 = (float)((ulong)uVar39 >> 0x20) * fVar41;
    bVar22 = SUB41(fVar37,0) & ~(byte)iVar8;
    bVar23 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar8 >> 8);
    bVar24 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
    bVar25 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
    bVar27 = SUB41(fVar41,0) & ~(byte)iVar9;
    bVar29 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar9 >> 8);
    bVar31 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    bVar33 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
    fVar4 = (float)CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar22)));
    param_4[1] = CONCAT44((fVar21 - (float)((ulong)uVar5 >> 0x20) *
                                    (float)(CONCAT17((char)((uint)fVar35 >> 0x18),
                                                     CONCAT16((char)((uint)fVar35 >> 0x10),
                                                              CONCAT15((char)((uint)fVar35 >> 8),
                                                                       CONCAT14(SUB41(fVar35,0),
                                                                                fVar17)))) >> 0x20))
                          * (float)(CONCAT17(bVar33,CONCAT16(bVar31,CONCAT15(bVar29,CONCAT14(bVar27,
                                                  fVar4)))) >> 0x20),fVar19 * fVar4);
    *param_4 = CONCAT44(fVar18 * (float)CONCAT13(bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar27))),
                        fVar16 * (float)CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar22))));
    fVar20 = (float)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20);
    fVar17 = (float)*(undefined8 *)*pauVar15;
    fVar35 = (float)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
    pauVar2 = (undefined1 (*) [12])(pauVar15[1] + 4);
    fVar34 = (float)((ulong)*(undefined8 *)pauVar15[2] >> 0x20);
    pauVar1 = (undefined1 (*) [12])(pauVar15[2] + 8);
    fVar36 = (float)((ulong)*(undefined8 *)(pauVar15[3] + 4) >> 0x20);
    auVar43._12_4_ = fVar34;
    auVar43._0_12_ = *pauVar2;
    auVar3._12_4_ = fVar34;
    auVar3._0_12_ = *pauVar2;
    auVar43 = NEON_ext(auVar43,auVar3,8,1);
    auVar40._12_4_ = fVar20;
    auVar40._0_12_ = *pauVar15;
    auVar51._12_4_ = fVar20;
    auVar51._0_12_ = *pauVar15;
    auVar40 = NEON_ext(auVar40,auVar51,8,1);
    auVar6._12_4_ = fVar36;
    auVar6._0_12_ = *pauVar1;
    auVar7._12_4_ = fVar36;
    auVar7._0_12_ = *pauVar1;
    auVar51 = NEON_ext(auVar6,auVar7,8,1);
    fVar16 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar38 = auVar40._0_4_;
    fVar41 = auVar43._0_4_;
    fVar21 = (float)*(undefined8 *)*pauVar2;
    fVar18 = *(float *)(pauVar15[6] + 8);
    fVar19 = *(float *)pauVar15[7];
    fVar37 = *(float *)(pauVar15[7] + 4);
    fVar4 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar44 = (float)*(undefined8 *)*pauVar1;
    fVar45 = *param_2 - (float)*(undefined8 *)pauVar15[4];
    fVar47 = param_2[1] - (float)((ulong)*(undefined8 *)pauVar15[4] >> 0x20);
    fVar49 = param_2[2] - (float)*(undefined8 *)(pauVar15[4] + 8);
    fVar53 = auVar51._4_4_;
    fVar42 = auVar51._0_4_;
    fVar46 = fVar38 * fVar49 + fVar17 * fVar45 + fVar35 * fVar47;
    fVar48 = fVar41 * fVar49 + fVar21 * fVar45 + fVar16 * fVar47;
    fVar50 = fVar42 * fVar49 + fVar44 * fVar45 + fVar4 * fVar47;
    fVar49 = fVar53 * fVar49 + fVar4 * fVar45 + fVar53 * fVar47;
    auVar52._0_4_ = fVar38 * fVar37 + fVar17 * fVar18 + fVar35 * fVar19;
    auVar52._4_4_ = fVar41 * fVar37 + fVar21 * fVar18 + fVar16 * fVar19;
    auVar52._8_4_ = fVar42 * fVar37 + fVar44 * fVar18 + fVar4 * fVar19;
    auVar52._12_4_ = fVar53 * fVar37 + fVar4 * fVar18 + fVar53 * fVar19;
    auVar10._4_4_ = fVar48;
    auVar10._0_4_ = fVar46;
    auVar10._8_4_ = fVar50;
    auVar10._12_4_ = fVar49;
    auVar11._4_4_ = fVar48;
    auVar11._0_4_ = fVar46;
    auVar11._8_4_ = fVar50;
    auVar11._12_4_ = fVar49;
    auVar51 = NEON_ext(auVar10,auVar11,4,1);
    auVar40 = NEON_ext(auVar52,auVar52,4,1);
    fVar18 = *(float *)(pauVar15[5] + 4);
    fVar19 = *(float *)(pauVar15[5] + 8);
    fVar37 = *(float *)pauVar15[6];
    fVar45 = auVar52._0_4_ * auVar51._0_4_ - fVar46 * auVar40._0_4_;
    fVar47 = auVar52._4_4_ * auVar51._4_4_ - fVar48 * auVar40._4_4_;
    fVar46 = auVar52._8_4_ * fVar46 - fVar50 * auVar52._0_4_;
    fVar48 = auVar52._12_4_ * fVar48 - fVar49 * auVar52._4_4_;
    bVar14 = true;
    auVar12._4_4_ = fVar47;
    auVar12._0_4_ = fVar45;
    auVar12._8_4_ = fVar46;
    auVar12._12_4_ = fVar48;
    auVar13._4_4_ = fVar47;
    auVar13._0_4_ = fVar45;
    auVar13._8_4_ = fVar46;
    auVar13._12_4_ = fVar48;
    auVar40 = NEON_ext(auVar12,auVar13,4,1);
    fVar38 = fVar38 * fVar37 + fVar17 * fVar18 + fVar35 * fVar19 + auVar40._0_4_ + 0.0;
    fVar41 = fVar41 * fVar37 + fVar21 * fVar18 + fVar16 * fVar19 + auVar40._4_4_ + 0.0;
    fVar18 = fVar42 * fVar37 + fVar44 * fVar18 + fVar4 * fVar19 + fVar45 + 0.0;
    param_5[1] = CONCAT44(fVar36 * fVar18 + fVar20 * fVar38 + fVar34 * fVar41,
                          (float)*(undefined8 *)(pauVar15[3] + 4) * fVar18 +
                          (float)*(undefined8 *)(*pauVar15 + 8) * fVar38 +
                          (float)*(undefined8 *)pauVar15[2] * fVar41);
    *param_5 = CONCAT44(fVar4 * fVar18 + fVar35 * fVar38 + fVar16 * fVar41,
                        fVar44 * fVar18 + fVar17 * fVar38 + fVar21 * fVar41);
  }
  return bVar14;
}


