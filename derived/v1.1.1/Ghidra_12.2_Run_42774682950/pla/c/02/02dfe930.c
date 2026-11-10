/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe930; name: FUN_02dfe930
 */


void FUN_02dfe930(long param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  
  if (param_2 != 0) {
    auVar22 = NEON_fmov(0x40800000,4);
    uVar2 = 0;
    fVar8 = *(float *)(param_1 + 0xa4);
    fVar7 = fVar8 + *(float *)(param_1 + 0xac);
    fVar13 = fVar7 + fVar8;
    fVar14 = fVar13 + fVar8;
    fVar15 = fVar14 + fVar8;
    fVar8 = fVar8 * 4.0;
    fVar20 = fVar8 + fVar8;
    fVar9 = fVar7 + fVar8;
    fVar10 = fVar13 + fVar8;
    fVar11 = fVar14 + fVar8;
    fVar12 = fVar15 + fVar8;
    fVar8 = fVar8 * auVar22._0_4_;
    fVar16 = fVar9 + fVar20;
    fVar17 = fVar10 + fVar20;
    fVar18 = fVar11 + fVar20;
    fVar19 = fVar12 + fVar20;
    fVar21 = fVar7 + fVar20;
    fVar23 = fVar13 + fVar20;
    fVar24 = fVar14 + fVar20;
    fVar20 = fVar15 + fVar20;
    do {
      uVar6 = (ulong)uVar2;
      lVar3 = (ulong)(uVar2 + 4) * 4;
      lVar4 = (ulong)(uVar2 + 8) * 4;
      lVar5 = (ulong)(uVar2 + 0xc) * 4;
      uVar2 = uVar2 + 0x10;
      puVar1 = (undefined8 *)(param_3 + uVar6 * 4);
      uVar29 = puVar1[1];
      uVar26 = *puVar1;
      fVar25 = (float)uVar26 * fVar7;
      fVar27 = (float)((ulong)uVar26 >> 0x20) * fVar13;
      fVar28 = (float)uVar29 * fVar14;
      fVar30 = (float)((ulong)uVar29 >> 0x20) * fVar15;
      puVar1 = (undefined8 *)(param_3 + lVar3);
      uVar29 = puVar1[1];
      uVar26 = *puVar1;
      puVar1 = (undefined8 *)(param_3 + lVar4);
      uVar39 = puVar1[1];
      uVar36 = *puVar1;
      puVar1 = (undefined8 *)(param_3 + lVar5);
      uVar45 = puVar1[1];
      uVar42 = *puVar1;
      fVar31 = (float)uVar26 * fVar9;
      fVar32 = (float)((ulong)uVar26 >> 0x20) * fVar10;
      fVar33 = (float)uVar29 * fVar11;
      fVar34 = (float)((ulong)uVar29 >> 0x20) * fVar12;
      fVar35 = (float)uVar36 * fVar21;
      fVar37 = (float)((ulong)uVar36 >> 0x20) * fVar23;
      fVar38 = (float)uVar39 * fVar24;
      fVar40 = (float)((ulong)uVar39 >> 0x20) * fVar20;
      fVar41 = (float)uVar42 * fVar16;
      fVar43 = (float)((ulong)uVar42 >> 0x20) * fVar17;
      fVar44 = (float)uVar45 * fVar18;
      fVar46 = (float)((ulong)uVar45 >> 0x20) * fVar19;
      fVar7 = fVar7 + fVar8;
      fVar13 = fVar13 + fVar8;
      fVar14 = fVar14 + fVar8;
      fVar15 = fVar15 + fVar8;
      fVar9 = fVar9 + fVar8;
      fVar10 = fVar10 + fVar8;
      fVar11 = fVar11 + fVar8;
      fVar12 = fVar12 + fVar8;
      fVar21 = fVar21 + fVar8;
      fVar23 = fVar23 + fVar8;
      fVar24 = fVar24 + fVar8;
      fVar20 = fVar20 + fVar8;
      fVar16 = fVar16 + fVar8;
      fVar17 = fVar17 + fVar8;
      fVar18 = fVar18 + fVar8;
      fVar19 = fVar19 + fVar8;
      puVar1 = (undefined8 *)(param_3 + uVar6 * 4);
      puVar1[1] = CONCAT44(fVar30,fVar28);
      *puVar1 = CONCAT44(fVar27,fVar25);
      puVar1 = (undefined8 *)(param_3 + lVar3);
      puVar1[1] = CONCAT44(fVar34,fVar33);
      *puVar1 = CONCAT44(fVar32,fVar31);
      puVar1 = (undefined8 *)(param_3 + lVar4);
      puVar1[1] = CONCAT44(fVar40,fVar38);
      *puVar1 = CONCAT44(fVar37,fVar35);
      puVar1 = (undefined8 *)(param_3 + lVar5);
      puVar1[1] = CONCAT44(fVar46,fVar44);
      *puVar1 = CONCAT44(fVar43,fVar41);
    } while (uVar2 < param_2);
  }
  return;
}


