/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbd4cc; name: FUN_02bbd4cc
 */


void FUN_02bbd4cc(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  
  if (((*(char *)(param_1 + 0x240) != '\0') && (lVar12 = *(long *)(param_1 + 0x1a0), lVar12 != 0))
     && (*(char *)(lVar12 + 0x180) != '\0')) {
    fVar30 = (float)*(undefined8 *)(lVar12 + 200);
    fVar19 = (float)*(undefined8 *)(lVar12 + 0xc0);
    fVar29 = (float)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 0x20);
    fVar34 = (float)*(undefined8 *)(lVar12 + 0xd8);
    fVar32 = (float)*(undefined8 *)(lVar12 + 0xd0);
    fVar33 = (float)((ulong)*(undefined8 *)(lVar12 + 0xd0) >> 0x20);
    fVar38 = (float)*(undefined8 *)(lVar12 + 0xe8);
    fVar35 = (float)*(undefined8 *)(lVar12 + 0xe0);
    fVar36 = (float)((ulong)*(undefined8 *)(lVar12 + 0xe0) >> 0x20);
    fVar43 = (float)*(undefined8 *)(lVar12 + 0xf8);
    fVar40 = (float)*(undefined8 *)(lVar12 + 0xf0);
    fVar42 = (float)((ulong)*(undefined8 *)(lVar12 + 0xf0) >> 0x20);
    fVar41 = (float)*(undefined8 *)(lVar12 + 0x108);
    fVar37 = (float)*(undefined8 *)(lVar12 + 0x100);
    fVar39 = (float)((ulong)*(undefined8 *)(lVar12 + 0x100) >> 0x20);
    fVar46 = (float)*(undefined8 *)(lVar12 + 0x118);
    fVar23 = *(float *)(lVar12 + 0x50);
    fVar25 = *(float *)(lVar12 + 0x54);
    fVar27 = *(float *)(lVar12 + 0x58);
    fVar7 = *(float *)(lVar12 + 0x5c);
    fVar22 = (float)*(undefined8 *)(lVar12 + 0x40);
    fVar24 = (float)((ulong)*(undefined8 *)(lVar12 + 0x40) >> 0x20);
    fVar26 = (float)*(undefined8 *)(lVar12 + 0x48);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar12 + 0x48) >> 0x20);
    fVar44 = (float)*(undefined8 *)(lVar12 + 0x110);
    fVar45 = (float)((ulong)*(undefined8 *)(lVar12 + 0x110) >> 0x20);
    fVar8 = *(float *)(lVar12 + 0x60);
    fVar9 = *(float *)(lVar12 + 100);
    fVar10 = *(float *)(lVar12 + 0x68);
    fVar11 = *(float *)(lVar12 + 0x6c);
    fVar14 = (float)*(undefined8 *)(lVar12 + 0x70);
    fVar16 = (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20);
    fVar18 = (float)*(undefined8 *)(lVar12 + 0x78);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar12 + 0x78) >> 0x20);
    fVar52 = fVar22 * fVar19 + fVar23 * fVar29 + fVar8 * fVar30 + fVar14 * 0.0;
    fVar53 = fVar24 * fVar19 + fVar25 * fVar29 + fVar9 * fVar30 + fVar16 * 0.0;
    fVar54 = fVar26 * fVar19 + fVar27 * fVar29 + fVar10 * fVar30 + fVar18 * 0.0;
    fVar55 = fVar22 * fVar32 + fVar23 * fVar33 + fVar8 * fVar34 + fVar14 * 0.0;
    fVar56 = fVar24 * fVar32 + fVar25 * fVar33 + fVar9 * fVar34 + fVar16 * 0.0;
    fVar57 = fVar26 * fVar32 + fVar27 * fVar33 + fVar10 * fVar34 + fVar18 * 0.0;
    fVar58 = fVar22 * fVar35 + fVar23 * fVar36 + fVar8 * fVar38 + fVar14 * 0.0;
    fVar59 = fVar24 * fVar35 + fVar25 * fVar36 + fVar9 * fVar38 + fVar16 * 0.0;
    fVar60 = fVar26 * fVar35 + fVar27 * fVar36 + fVar10 * fVar38 + fVar18 * 0.0;
    fVar61 = fVar22 * fVar40 + fVar23 * fVar42 + fVar8 * fVar43 + fVar14 * 0.0;
    fVar62 = fVar24 * fVar40 + fVar25 * fVar42 + fVar9 * fVar43 + fVar16 * 0.0;
    fVar63 = fVar26 * fVar40 + fVar27 * fVar42 + fVar10 * fVar43 + fVar18 * 0.0;
    fVar13 = fVar14 * fVar52;
    fVar15 = fVar16 * fVar53;
    fVar17 = fVar18 * fVar54;
    fVar19 = fVar20 * (fVar28 * fVar19 + fVar7 * fVar29 + fVar11 * fVar30 + fVar20 * 0.0);
    fVar29 = fVar14 * fVar55;
    fVar30 = fVar16 * fVar56;
    fVar31 = fVar18 * fVar57;
    fVar32 = fVar20 * (fVar28 * fVar32 + fVar7 * fVar33 + fVar11 * fVar34 + fVar20 * 0.0);
    auVar21._4_4_ = fVar15;
    auVar21._0_4_ = fVar13;
    auVar21._8_4_ = fVar17;
    auVar21._12_4_ = fVar19;
    auVar47._4_4_ = fVar15;
    auVar47._0_4_ = fVar13;
    auVar47._8_4_ = fVar17;
    auVar47._12_4_ = fVar19;
    auVar47 = NEON_ext(auVar21,auVar47,8,1);
    fVar19 = fVar14 * fVar58;
    fVar17 = fVar16 * fVar59;
    fVar33 = fVar18 * fVar60;
    fVar34 = fVar20 * (fVar28 * fVar35 + fVar7 * fVar36 + fVar11 * fVar38 + fVar20 * 0.0);
    auVar48._4_4_ = fVar30;
    auVar48._0_4_ = fVar29;
    auVar48._8_4_ = fVar31;
    auVar48._12_4_ = fVar32;
    auVar49._4_4_ = fVar30;
    auVar49._0_4_ = fVar29;
    auVar49._8_4_ = fVar31;
    auVar49._12_4_ = fVar32;
    auVar48 = NEON_ext(auVar48,auVar49,8,1);
    fVar32 = fVar14 * fVar61;
    fVar31 = fVar16 * fVar62;
    fVar35 = fVar18 * fVar63;
    fVar36 = fVar20 * (fVar28 * fVar40 + fVar7 * fVar42 + fVar11 * fVar43 + fVar20 * 0.0);
    fVar64 = fVar22 * fVar37 + fVar23 * fVar39 + fVar8 * fVar41 + fVar14 * 0.0;
    fVar65 = fVar24 * fVar37 + fVar25 * fVar39 + fVar9 * fVar41 + fVar16 * 0.0;
    fVar66 = fVar26 * fVar37 + fVar27 * fVar39 + fVar10 * fVar41 + fVar18 * 0.0;
    fVar38 = fVar14 * fVar64;
    fVar40 = fVar16 * fVar65;
    fVar42 = fVar18 * fVar66;
    fVar43 = fVar20 * (fVar28 * fVar37 + fVar7 * fVar39 + fVar11 * fVar41 + fVar20 * 0.0);
    auVar50._4_4_ = fVar17;
    auVar50._0_4_ = fVar19;
    auVar50._8_4_ = fVar33;
    auVar50._12_4_ = fVar34;
    auVar51._4_4_ = fVar17;
    auVar51._0_4_ = fVar19;
    auVar51._8_4_ = fVar33;
    auVar51._12_4_ = fVar34;
    auVar49 = NEON_ext(auVar50,auVar51,8,1);
    auVar3._4_4_ = fVar31;
    auVar3._0_4_ = fVar32;
    auVar3._8_4_ = fVar35;
    auVar3._12_4_ = fVar36;
    auVar4._4_4_ = fVar31;
    auVar4._0_4_ = fVar32;
    auVar4._8_4_ = fVar35;
    auVar4._12_4_ = fVar36;
    auVar50 = NEON_ext(auVar3,auVar4,8,1);
    auVar5._4_4_ = fVar40;
    auVar5._0_4_ = fVar38;
    auVar5._8_4_ = fVar42;
    auVar5._12_4_ = fVar43;
    auVar6._4_4_ = fVar40;
    auVar6._0_4_ = fVar38;
    auVar6._8_4_ = fVar42;
    auVar6._12_4_ = fVar43;
    auVar51 = NEON_ext(auVar5,auVar6,8,1);
    fVar23 = fVar22 * fVar44 + fVar23 * fVar45 + fVar8 * fVar46 + fVar14 * 0.0;
    fVar25 = fVar24 * fVar44 + fVar25 * fVar45 + fVar9 * fVar46 + fVar16 * 0.0;
    fVar27 = fVar26 * fVar44 + fVar27 * fVar45 + fVar10 * fVar46 + fVar18 * 0.0;
    fVar14 = fVar14 * fVar23;
    fVar16 = fVar16 * fVar25;
    fVar18 = fVar18 * fVar27;
    fVar20 = fVar20 * (fVar28 * fVar44 + fVar7 * fVar45 + fVar11 * fVar46 + fVar20 * 0.0);
    auVar1._4_4_ = fVar16;
    auVar1._0_4_ = fVar14;
    auVar1._8_4_ = fVar18;
    auVar1._12_4_ = fVar20;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar14;
    auVar2._8_4_ = fVar18;
    auVar2._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar1,auVar2,8,1);
    *(ulong *)(lVar12 + 0x128) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 200) >> 0x20) -
                  (auVar47._0_4_ + fVar13 + auVar47._4_4_ + fVar15),fVar54);
    *(ulong *)(lVar12 + 0x120) = CONCAT44(fVar53,fVar52);
    *(ulong *)(lVar12 + 0x138) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xd8) >> 0x20) -
                  (auVar48._0_4_ + fVar29 + auVar48._4_4_ + fVar30),fVar57);
    *(ulong *)(lVar12 + 0x130) = CONCAT44(fVar56,fVar55);
    *(ulong *)(lVar12 + 0x148) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20) -
                  (auVar49._0_4_ + fVar19 + auVar49._4_4_ + fVar17),fVar60);
    *(ulong *)(lVar12 + 0x140) = CONCAT44(fVar59,fVar58);
    *(ulong *)(lVar12 + 0x158) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xf8) >> 0x20) -
                  (auVar50._0_4_ + fVar32 + auVar50._4_4_ + fVar31),fVar63);
    *(ulong *)(lVar12 + 0x150) = CONCAT44(fVar62,fVar61);
    *(ulong *)(lVar12 + 0x168) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x108) >> 0x20) -
                  (auVar51._0_4_ + fVar38 + auVar51._4_4_ + fVar40),fVar66);
    *(ulong *)(lVar12 + 0x160) = CONCAT44(fVar65,fVar64);
    *(ulong *)(lVar12 + 0x178) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x118) >> 0x20) -
                  (auVar21._0_4_ + fVar14 + auVar21._4_4_ + fVar16),fVar27);
    *(ulong *)(lVar12 + 0x170) = CONCAT44(fVar25,fVar23);
    *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0x180) = 0;
  }
  return;
}


