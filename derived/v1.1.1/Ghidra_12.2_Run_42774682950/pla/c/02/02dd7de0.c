/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd7de0; name: FUN_02dd7de0
 */


void FUN_02dd7de0(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined1 (*pauVar12) [12];
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  float fVar51;
  float fVar52;
  float fVar54;
  undefined8 uVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  lVar15 = **(long **)(param_1 + 0xb8);
  lVar11 = lVar15 + param_2 * 0x70;
  lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  puVar14 = (undefined8 *)(lVar13 + (*(ulong *)(lVar11 + 0x10) & 0xffffff) * 0xc0);
  pauVar12 = (undefined1 (*) [12])(lVar13 + (*(ulong *)(lVar11 + 8) & 0xffffff) * 0xc0);
  pauVar1 = (undefined1 (*) [12])(pauVar12[2] + 8);
  fVar30 = (float)*(undefined8 *)(pauVar12[3] + 4);
  fVar31 = (float)((ulong)*(undefined8 *)(pauVar12[3] + 4) >> 0x20);
  fVar28 = (float)*(undefined8 *)*pauVar1;
  fVar29 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar20 = (float)*(undefined8 *)(*pauVar12 + 8);
  fVar22 = (float)((ulong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
  fVar21 = (float)*(undefined8 *)*pauVar12;
  fVar23 = (float)((ulong)*(undefined8 *)*pauVar12 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(pauVar12[1] + 4);
  fVar26 = (float)*(undefined8 *)pauVar12[2];
  fVar27 = (float)((ulong)*(undefined8 *)pauVar12[2] >> 0x20);
  fVar24 = (float)*(undefined8 *)*pauVar2;
  fVar25 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar38._12_4_ = fVar27;
  auVar38._0_12_ = *pauVar2;
  auVar4._12_4_ = fVar27;
  auVar4._0_12_ = *pauVar2;
  auVar38 = NEON_ext(auVar38,auVar4,8,1);
  auVar33._12_4_ = fVar22;
  auVar33._0_12_ = *pauVar12;
  auVar3._12_4_ = fVar22;
  auVar3._0_12_ = *pauVar12;
  auVar33 = NEON_ext(auVar33,auVar3,8,1);
  fVar18 = auVar33._0_4_;
  fVar19 = auVar38._0_4_;
  auVar5._12_4_ = fVar31;
  auVar5._0_12_ = *pauVar1;
  auVar6._12_4_ = fVar31;
  auVar6._0_12_ = *pauVar1;
  auVar33 = NEON_ext(auVar5,auVar6,8,1);
  uVar60 = *(undefined8 *)pauVar12[4];
  fVar37 = *(float *)(puVar14 + 6) - (float)uVar60;
  fVar39 = *(float *)((long)puVar14 + 0x34) - (float)((ulong)uVar60 >> 0x20);
  fVar40 = *(float *)(puVar14 + 7) - (float)*(undefined8 *)(pauVar12[4] + 8);
  fVar36 = auVar33._0_4_;
  auVar42._0_4_ = fVar18 * fVar40 + fVar21 * fVar37 + fVar23 * fVar39;
  auVar42._4_4_ = fVar19 * fVar40 + fVar24 * fVar37 + fVar25 * fVar39;
  auVar42._8_4_ = fVar36 * fVar40 + fVar28 * fVar37 + fVar29 * fVar39;
  auVar42._12_4_ = auVar33._4_4_ * fVar40 + fVar29 * fVar37 + auVar33._4_4_ * fVar39;
  fVar37 = *(float *)(lVar11 + 0x68) +
           *(float *)(lVar11 + 0x60) + *(float *)(lVar11 + 0x60) * *(float *)(lVar11 + 100);
  fVar39 = auVar42._0_4_ * auVar42._0_4_ + auVar42._4_4_ * auVar42._4_4_ +
           auVar42._8_4_ * auVar42._8_4_;
  fVar40 = auVar42._0_4_ * auVar42._0_4_ + auVar42._4_4_ * auVar42._4_4_ +
           auVar42._8_4_ * auVar42._8_4_;
  uVar60 = CONCAT44(fVar40,fVar39);
  if (fVar37 * fVar37 < fVar39) {
    fVar32 = (float)*puVar14;
    fVar51 = (float)((ulong)*puVar14 >> 0x20);
    fVar52 = (float)puVar14[1];
    fVar35 = (float)((ulong)puVar14[2] >> 0x20);
    fVar61 = fVar18 * fVar52 + fVar21 * fVar32 + fVar23 * fVar51;
    fVar62 = fVar19 * fVar52 + fVar24 * fVar32 + fVar25 * fVar51;
    fVar63 = fVar36 * fVar52 + fVar28 * fVar32 + fVar29 * fVar51;
    fVar32 = (float)puVar14[2];
    fVar52 = (float)puVar14[3];
    fVar51 = (float)puVar14[4];
    fVar54 = (float)((ulong)puVar14[4] >> 0x20);
    fVar56 = (float)puVar14[5];
    uVar53 = NEON_frsqrte(uVar60,4);
    fVar57 = fVar18 * fVar52 + fVar21 * fVar32 + fVar23 * fVar35;
    fVar58 = fVar19 * fVar52 + fVar24 * fVar32 + fVar25 * fVar35;
    fVar59 = fVar36 * fVar52 + fVar28 * fVar32 + fVar29 * fVar35;
    fVar52 = (float)uVar53;
    fVar55 = (float)((ulong)uVar53 >> 0x20);
    iVar8 = -(uint)(fVar39 <= 0.0);
    iVar9 = -(uint)(fVar40 <= 0.0);
    fVar32 = fVar18 * fVar56 + fVar21 * fVar51 + fVar23 * fVar54;
    fVar35 = fVar19 * fVar56 + fVar24 * fVar51 + fVar25 * fVar54;
    fVar36 = fVar36 * fVar56 + fVar28 * fVar51 + fVar29 * fVar54;
    auVar41._0_8_ = CONCAT44(-(uint)(0.0 < fVar40),-(uint)(0.0 < fVar39));
    uVar53 = NEON_frsqrts(uVar60,CONCAT44(fVar55 * fVar55,fVar52 * fVar52),4);
    fVar52 = fVar52 * (float)uVar53;
    fVar55 = fVar55 * (float)((ulong)uVar53 >> 0x20);
    auVar41._8_8_ = auVar41._0_8_;
    uVar60 = NEON_frsqrts(uVar60,CONCAT44(fVar55 * fVar55,fVar52 * fVar52),4);
    fVar52 = (float)uVar60 * fVar52;
    fVar55 = (float)((ulong)uVar60 >> 0x20) * fVar55;
    bVar43 = SUB41(fVar52,0) & ~(byte)iVar8;
    bVar44 = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar8 >> 8);
    bVar45 = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
    bVar46 = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
    bVar47 = SUB41(fVar55,0) & ~(byte)iVar9;
    bVar48 = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar9 >> 8);
    bVar49 = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    bVar50 = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
    fVar18 = (float)CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
    fVar19 = auVar42._4_4_ * (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47)));
    auVar7[4] = SUB41(fVar19,0);
    auVar7._0_4_ = auVar42._0_4_ * (float)CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
    auVar7[5] = (char)((uint)fVar19 >> 8);
    auVar7[6] = (char)((uint)fVar19 >> 0x10);
    auVar7[7] = (char)((uint)fVar19 >> 0x18);
    auVar7._8_4_ = auVar42._8_4_ * fVar18;
    auVar7._12_4_ =
         auVar42._12_4_ *
         (float)(CONCAT17(bVar50,CONCAT16(bVar49,CONCAT15(bVar48,CONCAT14(bVar47,fVar18)))) >> 0x20)
    ;
    auVar42 = auVar42 ^ (auVar42 ^ auVar7) & auVar41;
    fVar39 = auVar42._0_4_ * fVar37;
    fVar40 = auVar42._4_4_ * fVar37;
    fVar37 = auVar42._8_4_ * fVar37;
    local_80 = fVar28 * fVar36 + fVar21 * fVar32 + fVar24 * fVar35;
    fStack_7c = fVar29 * fVar36 + fVar23 * fVar32 + fVar25 * fVar35;
    fStack_78 = fVar30 * fVar36 + fVar20 * fVar32 + fVar26 * fVar35;
    fStack_74 = fVar31 * fVar36 + fVar22 * fVar32 + fVar27 * fVar35;
    auVar34._0_8_ =
         CONCAT44(fVar29 * fVar59 + fVar23 * fVar57 + fVar25 * fVar58,
                  fVar28 * fVar59 + fVar21 * fVar57 + fVar24 * fVar58);
    auVar34._8_4_ = fVar30 * fVar59 + fVar20 * fVar57 + fVar26 * fVar58;
    auVar34._12_4_ = fVar31 * fVar59 + fVar22 * fVar57 + fVar27 * fVar58;
    uStack_98 = CONCAT44(fVar31 * fVar63 + fVar22 * fVar61 + fVar27 * fVar62,
                         fVar30 * fVar63 + fVar20 * fVar61 + fVar26 * fVar62);
    local_a0 = CONCAT44(fVar29 * fVar63 + fVar23 * fVar61 + fVar25 * fVar62,
                        fVar28 * fVar63 + fVar21 * fVar61 + fVar24 * fVar62);
    uStack_88 = auVar34._8_8_;
    uVar60 = *(undefined8 *)pauVar12[4];
    fVar18 = (float)uVar60 + fVar28 * fVar37 + fVar21 * fVar39 + fVar24 * fVar40;
    fVar19 = (float)((ulong)uVar60 >> 0x20) + fVar29 * fVar37 + fVar23 * fVar39 + fVar25 * fVar40;
    fVar21 = (float)*(undefined8 *)(pauVar12[4] + 8) +
             fVar30 * fVar37 + fVar20 * fVar39 + fVar26 * fVar40;
    fVar23 = (float)((ulong)*(undefined8 *)(pauVar12[4] + 8) >> 0x20) +
             fVar31 * fVar37 + fVar22 * fVar39 + fVar27 * fVar40;
    local_60 = (double)fVar18;
    dStack_58 = (double)fVar19;
    uStack_68 = CONCAT44(fVar23,fVar21);
    local_70 = CONCAT44(fVar19,fVar18);
    local_50 = (double)fVar21;
    dStack_48 = (double)fVar23;
    plVar10 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
    uStack_90 = auVar34._0_8_;
    (**(code **)(*plVar10 + 0x88))(plVar10,*(ulong *)(lVar11 + 0x10),&local_a0,&local_60,1);
  }
  piVar16 = (int *)(lVar15 + param_2 * 0x70 + 0x58);
  if (*piVar16 != 0) {
    uVar17 = 0;
    do {
      FUN_02dd7de0(param_1,(long)*(int *)(*(long *)(lVar15 + param_2 * 0x70 + 0x50) + uVar17 * 4));
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulong)(long)*piVar16);
  }
  return;
}


