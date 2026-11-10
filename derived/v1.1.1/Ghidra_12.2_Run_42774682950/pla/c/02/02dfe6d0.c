/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe6d0; name: FUN_02dfe6d0
 */


void FUN_02dfe6d0(long param_1,uint param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
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
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  if (param_2 != 0) {
    uVar2 = 0;
    fVar13 = *(float *)(param_1 + 0x3c);
    fVar10 = fVar13 + *(float *)(param_1 + 0x44);
    fVar12 = *(float *)(param_1 + 0x7c);
    fVar11 = fVar12 + *(float *)(param_1 + 0x84);
    fVar18 = fVar10 + fVar13;
    fVar30 = fVar11 + fVar12;
    fVar25 = fVar18 + fVar13;
    fVar31 = fVar30 + fVar12;
    fVar9 = fVar13 * 4.0;
    fVar32 = fVar31 + fVar12;
    fVar13 = fVar25 + fVar13;
    fVar12 = fVar12 * 4.0;
    do {
      lVar3 = uVar2 * 4;
      lVar4 = (ulong)((int)uVar2 + 4) * 4;
      fVar33 = fVar10 + fVar9;
      fVar34 = fVar18 + fVar9;
      fVar35 = fVar25 + fVar9;
      fVar36 = fVar13 + fVar9;
      uVar23 = ((undefined8 *)(param_3 + lVar3))[1];
      uVar20 = *(undefined8 *)(param_3 + lVar3);
      uVar1 = (int)uVar2 + 8;
      uVar2 = (ulong)uVar1;
      uVar29 = ((undefined8 *)(param_3 + lVar4))[1];
      uVar28 = *(undefined8 *)(param_3 + lVar4);
      uVar27 = ((undefined8 *)(param_4 + lVar3))[1];
      uVar26 = *(undefined8 *)(param_4 + lVar3);
      uVar38 = ((undefined8 *)(param_4 + lVar4))[1];
      uVar37 = *(undefined8 *)(param_4 + lVar4);
      fVar14 = fVar11 + fVar12;
      fVar15 = fVar30 + fVar12;
      fVar16 = fVar31 + fVar12;
      fVar17 = fVar32 + fVar12;
      fVar19 = (float)uVar20 * fVar10;
      fVar21 = (float)((ulong)uVar20 >> 0x20) * fVar18;
      fVar22 = (float)uVar23 * fVar25;
      fVar24 = (float)((ulong)uVar23 >> 0x20) * fVar13;
      fVar5 = fVar11 * (float)uVar26;
      fVar6 = fVar30 * (float)((ulong)uVar26 >> 0x20);
      fVar7 = fVar31 * (float)uVar27;
      fVar8 = fVar32 * (float)((ulong)uVar27 >> 0x20);
      fVar11 = fVar14 + fVar12;
      fVar30 = fVar15 + fVar12;
      fVar31 = fVar16 + fVar12;
      fVar32 = fVar17 + fVar12;
      fVar10 = fVar33 + fVar9;
      fVar18 = fVar34 + fVar9;
      fVar25 = fVar35 + fVar9;
      fVar13 = fVar36 + fVar9;
      ((undefined8 *)(param_5 + lVar3))[1] = CONCAT44(fVar24 + fVar8,fVar22 + fVar7);
      *(undefined8 *)(param_5 + lVar3) = CONCAT44(fVar21 + fVar6,fVar19 + fVar5);
      ((undefined8 *)(param_5 + lVar4))[1] =
           CONCAT44((float)((ulong)uVar29 >> 0x20) * fVar36 +
                    fVar17 * (float)((ulong)uVar38 >> 0x20),
                    (float)uVar29 * fVar35 + fVar16 * (float)uVar38);
      *(undefined8 *)(param_5 + lVar4) =
           CONCAT44((float)((ulong)uVar28 >> 0x20) * fVar34 +
                    fVar15 * (float)((ulong)uVar37 >> 0x20),
                    (float)uVar28 * fVar33 + fVar14 * (float)uVar37);
    } while (uVar1 < param_2);
  }
  return;
}


