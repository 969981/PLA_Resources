/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002408cc; name: FUN_002408cc
 */


void FUN_002408cc(undefined8 param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
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
  undefined8 uVar31;
  float fVar32;
  
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_3 + 0x78);
  fVar4 = (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_3 + 0x50);
  fVar8 = (float)*(undefined8 *)(param_3 + 0x58);
  fVar2 = (float)*(undefined8 *)(param_3 + 0x68);
  fVar3 = (float)*(undefined8 *)(param_3 + 0x70);
  fVar18 = (float)((ulong)*(undefined8 *)(param_3 + 0x70) >> 0x20);
  fVar1 = (float)*(undefined8 *)(param_3 + 0x60);
  fVar17 = (((fVar8 * fVar1 * fVar18 + fVar14 * fVar4 * fVar5 + fVar7 * fVar2 * fVar3) -
            fVar4 * fVar3 * fVar8) - fVar7 * fVar1 * fVar5) - fVar14 * fVar18 * fVar2;
  if (fVar17 == 0.0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = 1.0 / fVar17;
  }
  fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
  fVar19 = (fVar7 * fVar3 - fVar14 * fVar18) * fVar17;
  uVar13 = *(undefined8 *)(param_3 + 0x88);
  uVar12 = *(undefined8 *)(param_3 + 0x80);
  uVar31 = *(undefined8 *)(param_3 + 0x98);
  uVar15 = *(undefined8 *)(param_3 + 0x90);
  fVar16 = (fVar4 * fVar5 - fVar2 * fVar18) * fVar17;
  fVar20 = (fVar8 * fVar18 - fVar7 * fVar5) * fVar17;
  fVar11 = (fVar14 * fVar4 - fVar7 * fVar1) * fVar17;
  fVar23 = (fVar7 * fVar2 - fVar8 * fVar4) * fVar17;
  fVar22 = (fVar14 * fVar5 - fVar8 * fVar3) * fVar17;
  fVar14 = (fVar8 * fVar1 - fVar14 * fVar2) * fVar17;
  fVar18 = (fVar1 * fVar18 - fVar4 * fVar3) * fVar17;
  fVar17 = (fVar2 * fVar3 - fVar1 * fVar5) * fVar17;
  fVar4 = (float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20);
  fVar24 = (float)uVar12;
  fVar25 = (float)((ulong)uVar12 >> 0x20);
  fVar26 = (float)uVar13;
  fVar27 = (float)((ulong)uVar13 >> 0x20);
  fVar28 = (float)uVar15;
  fVar29 = (float)((ulong)uVar15 >> 0x20);
  fVar30 = (float)uVar31;
  fVar32 = (float)((ulong)uVar31 >> 0x20);
  fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x78) >> 0x20);
  uVar9 = *(undefined8 *)(param_3 + 0xa8);
  uVar6 = *(undefined8 *)(param_3 + 0xa0);
  fVar1 = (-(fVar10 * fVar18) - fVar19 * fVar4) - fVar11 * fVar2;
  fVar21 = (-(fVar10 * fVar16) - fVar20 * fVar4) - fVar23 * fVar2;
  fVar3 = (float)uVar6;
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  fVar7 = (float)uVar9;
  fVar8 = (float)((ulong)uVar9 >> 0x20);
  fVar4 = (-(fVar10 * fVar17) - fVar22 * fVar4) - fVar14 * fVar2;
  *(undefined8 *)(param_2 + 0x88) = uVar13;
  *(undefined8 *)(param_2 + 0x80) = uVar12;
  *(undefined8 *)(param_2 + 0x98) = uVar31;
  *(undefined8 *)(param_2 + 0x90) = uVar15;
  *(undefined8 *)(param_2 + 0xa8) = uVar9;
  *(undefined8 *)(param_2 + 0xa0) = uVar6;
  *(ulong *)(param_2 + 0xb8) =
       CONCAT44(fVar21 + fVar27 * fVar16 + fVar32 * fVar20 + fVar8 * fVar23,
                fVar26 * fVar16 + fVar30 * fVar20 + fVar7 * fVar23 + 0.0);
  *(ulong *)(param_2 + 0xb0) =
       CONCAT44(fVar25 * fVar16 + fVar29 * fVar20 + fVar5 * fVar23 + 0.0,
                fVar24 * fVar16 + fVar28 * fVar20 + fVar3 * fVar23 + 0.0);
  *(ulong *)(param_2 + 200) =
       CONCAT44(fVar4 + fVar27 * fVar17 + fVar32 * fVar22 + fVar8 * fVar14,
                fVar26 * fVar17 + fVar30 * fVar22 + fVar7 * fVar14 + 0.0);
  *(ulong *)(param_2 + 0xc0) =
       CONCAT44(fVar25 * fVar17 + fVar29 * fVar22 + fVar5 * fVar14 + 0.0,
                fVar24 * fVar17 + fVar28 * fVar22 + fVar3 * fVar14 + 0.0);
  *(ulong *)(param_2 + 0xd8) =
       CONCAT44(fVar1 + fVar27 * fVar18 + fVar32 * fVar19 + fVar8 * fVar11,
                fVar26 * fVar18 + fVar30 * fVar19 + fVar7 * fVar11 + 0.0);
  *(ulong *)(param_2 + 0xd0) =
       CONCAT44(fVar25 * fVar18 + fVar29 * fVar19 + fVar5 * fVar11 + 0.0,
                fVar24 * fVar18 + fVar28 * fVar19 + fVar3 * fVar11 + 0.0);
  uVar15 = *(undefined8 *)(param_3 + 0x70);
  uVar9 = *(undefined8 *)(param_3 + 0x58);
  uVar6 = *(undefined8 *)(param_3 + 0x50);
  uVar13 = *(undefined8 *)(param_3 + 0x68);
  uVar12 = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(param_2 + 0x100) = uVar15;
  *(undefined8 *)(param_2 + 0xe8) = uVar9;
  *(undefined8 *)(param_2 + 0xe0) = uVar6;
  *(undefined8 *)(param_2 + 0xf8) = uVar13;
  *(undefined8 *)(param_2 + 0xf0) = uVar12;
  *(ulong *)(param_2 + 0x110) = CONCAT44(fVar4,fVar21);
  *(float *)(param_2 + 0x118) = fVar1;
  return;
}


