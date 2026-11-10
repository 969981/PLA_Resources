/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fed7a0; name: FUN_02fed7a0
 */


long FUN_02fed7a0(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  byte bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  int iVar43;
  int iVar45;
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  
  lVar8 = param_1 + 0x160 + (long)param_2 * 0x30;
  uVar13 = *(undefined8 *)(lVar8 + 0x850);
  fVar15 = *(float *)(lVar8 + 0x858);
  uVar16 = *(undefined8 *)(lVar8 + 0x85c);
  fVar17 = *(float *)(lVar8 + 0x864);
  uVar18 = *(undefined8 *)(lVar8 + 0x868);
  fVar19 = *(float *)(lVar8 + 0x870);
  uVar2 = *(ushort *)(param_1 + 0x160 + (long)param_2 * 2 + 0xa30);
  uVar10 = *(undefined8 *)(lVar8 + 0x874);
  uVar1 = *(undefined4 *)(lVar8 + 0x87c);
  piVar9 = (int *)(param_3 + 0x40);
  fVar20 = (float)uVar13;
  fVar21 = (float)((ulong)uVar13 >> 0x20);
  if (*piVar9 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = (undefined8 *)((long)*piVar9 + (long)piVar9);
  }
  iVar43 = *(int *)(param_3 + 0x48);
  if (iVar43 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)((long)iVar43 + param_3 + 0x48);
  }
  fVar41 = (float)uVar16 - fVar20;
  fVar7 = (float)((ulong)uVar16 >> 0x20) - fVar21;
  uVar27 = SUB41(fVar7,0);
  uVar30 = (undefined1)((uint)fVar7 >> 8);
  uVar33 = (undefined1)((uint)fVar7 >> 0x10);
  uVar36 = (undefined1)((uint)fVar7 >> 0x18);
  fVar39 = fVar17 - fVar15;
  fVar40 = fVar17 - fVar15;
  *puVar12 = uVar13;
  auVar42._0_4_ = (float)uVar18 - fVar20;
  auVar42._4_4_ = (float)((ulong)uVar18 >> 0x20) - fVar21;
  auVar42._8_4_ = fVar19 - fVar15;
  auVar42._12_4_ = fVar19 - fVar15;
  *(float *)(puVar12 + 1) = fVar15;
  *(undefined8 *)((long)puVar12 + 0xc) = uVar16;
  auVar3[4] = uVar27;
  auVar3._0_4_ = fVar41;
  auVar3[5] = uVar30;
  auVar3[6] = uVar33;
  auVar3[7] = uVar36;
  auVar3._8_4_ = fVar39;
  auVar3._12_4_ = fVar40;
  auVar4[4] = uVar27;
  auVar4._0_4_ = fVar41;
  auVar4[5] = uVar30;
  auVar4[6] = uVar33;
  auVar4[7] = uVar36;
  auVar4._8_4_ = fVar39;
  auVar4._12_4_ = fVar40;
  auVar44 = NEON_ext(auVar3,auVar4,4,1);
  auVar46 = NEON_ext(auVar42,auVar42,4,1);
  *(float *)((long)puVar12 + 0x14) = fVar17;
  puVar12[3] = uVar18;
  *(float *)(puVar12 + 4) = fVar19;
  *(undefined8 *)((long)puVar12 + 0x24) = uVar10;
  fVar17 = fVar41 * auVar46._0_4_ - auVar42._0_4_ * auVar44._0_4_;
  fVar19 = fVar7 * auVar46._4_4_ - auVar42._4_4_ * auVar44._4_4_;
  uVar28 = SUB41(fVar19,0);
  uVar31 = (undefined1)((uint)fVar19 >> 8);
  uVar34 = (undefined1)((uint)fVar19 >> 0x10);
  uVar37 = (undefined1)((uint)fVar19 >> 0x18);
  fVar19 = fVar39 * auVar42._0_4_ - auVar42._8_4_ * fVar41;
  fVar41 = fVar40 * auVar42._4_4_ -
           auVar42._12_4_ *
           (float)(CONCAT17(uVar36,CONCAT16(uVar33,CONCAT15(uVar30,CONCAT14(uVar27,fVar41)))) >>
                  0x20);
  auVar5[4] = uVar28;
  auVar5._0_4_ = fVar17;
  auVar5[5] = uVar31;
  auVar5[6] = uVar34;
  auVar5[7] = uVar37;
  auVar5._8_4_ = fVar19;
  auVar5._12_4_ = fVar41;
  auVar6[4] = uVar28;
  auVar6._0_4_ = fVar17;
  auVar6[5] = uVar31;
  auVar6[6] = uVar34;
  auVar6[7] = uVar37;
  auVar6._8_4_ = fVar19;
  auVar6._12_4_ = fVar41;
  auVar44 = NEON_ext(auVar5,auVar6,4,1);
  fVar40 = auVar44._0_4_;
  fVar14 = auVar44._4_4_;
  fVar20 = fVar20 * fVar40;
  fVar21 = fVar21 * fVar14;
  fVar22 = fVar15 * (float)(CONCAT17(uVar37,CONCAT16(uVar34,CONCAT15(uVar31,CONCAT14(uVar28,fVar17))
                                                    )) >> 0x20);
  fVar19 = fVar40 * fVar40 + fVar14 * fVar14 + fVar17 * fVar17;
  fVar7 = fVar40 * fVar40 + fVar14 * fVar14 + fVar17 * fVar17;
  uVar27 = SUB41(fVar7,0);
  uVar28 = (undefined1)((uint)fVar7 >> 8);
  uVar30 = (undefined1)((uint)fVar7 >> 0x10);
  uVar31 = (undefined1)((uint)fVar7 >> 0x18);
  uVar10 = NEON_frsqrte(CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar19)))),4
                       );
  fVar41 = (float)uVar10;
  fVar39 = (float)((ulong)uVar10 >> 0x20);
  uVar10 = NEON_frsqrts(CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar19)))),
                        CONCAT44(fVar39 * fVar39,fVar41 * fVar41),4);
  fVar41 = fVar41 * (float)uVar10;
  fVar39 = fVar39 * (float)((ulong)uVar10 >> 0x20);
  iVar43 = -(uint)(fVar19 <= 0.0);
  iVar45 = -(uint)(fVar7 <= 0.0);
  uVar10 = NEON_frsqrts(CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar19)))),
                        CONCAT44(fVar39 * fVar39,fVar41 * fVar41),4);
  fVar41 = (float)uVar10 * fVar41;
  fVar39 = (float)((ulong)uVar10 >> 0x20) * fVar39;
  bVar23 = SUB41(fVar41,0) & ~(byte)iVar43;
  bVar24 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar43 >> 8);
  bVar25 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
  bVar26 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
  bVar29 = SUB41(fVar39,0) & ~(byte)iVar45;
  bVar32 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar45 >> 8);
  bVar35 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
  bVar38 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
  auVar44._4_4_ = fVar21;
  auVar44._0_4_ = fVar20;
  auVar44._8_4_ = fVar15 * fVar17;
  auVar44._12_4_ = fVar22;
  auVar46._4_4_ = fVar21;
  auVar46._0_4_ = fVar20;
  auVar46._8_4_ = fVar15 * fVar17;
  auVar46._12_4_ = fVar22;
  auVar44 = NEON_ext(auVar44,auVar46,8,1);
  fVar15 = (float)CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23)));
  *(undefined4 *)((long)puVar12 + 0x2c) = uVar1;
  fVar40 = fVar40 * (float)CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23)));
  fVar14 = fVar14 * (float)CONCAT13(bVar38,CONCAT12(bVar35,CONCAT11(bVar32,bVar29)));
  uVar10 = CONCAT44(fVar14,fVar40);
  fVar17 = fVar17 * fVar15;
  fVar15 = -(fVar20 + fVar21 + auVar44._0_4_) *
           (float)(CONCAT17(bVar38,CONCAT16(bVar35,CONCAT15(bVar32,CONCAT14(bVar29,fVar15)))) >>
                  0x20);
  uVar13 = CONCAT44(fVar15,fVar17);
  iVar43 = *(int *)(param_3 + 0x58);
  *(undefined4 *)(param_3 + 0x44) = 4;
  if (iVar43 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)iVar43 + param_3 + 0x58;
  }
  *(undefined1 *)(lVar8 + 3) = 3;
  *(undefined1 *)(lVar8 + 7) = 3;
  puVar11[1] = uVar13;
  *puVar11 = uVar10;
  puVar11[3] = CONCAT44(-fVar15,-fVar17);
  puVar11[2] = CONCAT44(-fVar14,-fVar40);
  puVar11[5] = uVar13;
  puVar11[4] = uVar10;
  puVar11[7] = uVar13;
  puVar11[6] = uVar10;
  *(ushort *)(param_3 + 0x1a) = uVar2;
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0xc0c);
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_1 + (long)param_2 * 8 + 0xba8);
  if ((uVar2 >> 10 & 1) != 0) {
    return param_3;
  }
  if (*piVar9 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)*piVar9 + (long)piVar9;
  }
  *(undefined8 *)(lVar8 + 0x24) = *(undefined8 *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(lVar8 + 0x20);
  *(undefined4 *)(param_3 + 0x44) = 3;
  return param_3;
}


