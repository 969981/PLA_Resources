/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe78c; name: FUN_02dfe78c
 */


void FUN_02dfe78c(long param_1,uint param_2,long param_3,long param_4,long param_5)

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
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if (param_2 != 0) {
    uVar2 = 0;
    fVar15 = *(float *)(param_1 + 0x3c);
    fVar6 = fVar15 + *(float *)(param_1 + 0x44);
    fVar14 = *(float *)(param_1 + 0x7c);
    fVar11 = fVar14 + *(float *)(param_1 + 0x84);
    fVar20 = fVar6 + fVar15;
    fVar28 = fVar11 + fVar14;
    fVar23 = fVar20 + fVar15;
    fVar29 = fVar28 + fVar14;
    fVar5 = fVar15 * 4.0;
    fVar30 = fVar29 + fVar14;
    fVar15 = fVar23 + fVar15;
    fVar14 = fVar14 * 4.0;
    do {
      lVar3 = uVar2 * 4;
      lVar4 = (ulong)((int)uVar2 + 4) * 4;
      fVar16 = fVar6 + fVar5;
      fVar17 = fVar20 + fVar5;
      fVar18 = fVar23 + fVar5;
      fVar19 = fVar15 + fVar5;
      uVar22 = ((undefined8 *)(param_3 + lVar3))[1];
      uVar21 = *(undefined8 *)(param_3 + lVar3);
      uVar1 = (int)uVar2 + 8;
      uVar2 = (ulong)uVar1;
      uVar25 = ((undefined8 *)(param_3 + lVar4))[1];
      uVar24 = *(undefined8 *)(param_3 + lVar4);
      uVar27 = ((undefined8 *)(param_4 + lVar4))[1];
      uVar26 = *(undefined8 *)(param_4 + lVar4);
      fVar31 = fVar11 + fVar14;
      fVar32 = fVar28 + fVar14;
      fVar33 = fVar29 + fVar14;
      fVar34 = fVar30 + fVar14;
      fVar7 = fVar11 * fVar6;
      fVar8 = fVar28 * fVar20;
      fVar9 = fVar29 * fVar23;
      fVar10 = fVar30 * fVar15;
      uVar13 = ((undefined8 *)(param_4 + lVar3))[1];
      uVar12 = *(undefined8 *)(param_4 + lVar3);
      fVar6 = fVar16 + fVar5;
      fVar20 = fVar17 + fVar5;
      fVar23 = fVar18 + fVar5;
      fVar15 = fVar19 + fVar5;
      fVar11 = fVar31 + fVar14;
      fVar28 = fVar32 + fVar14;
      fVar29 = fVar33 + fVar14;
      fVar30 = fVar34 + fVar14;
      ((undefined8 *)(param_5 + lVar3))[1] =
           CONCAT44(fVar10 * (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar13 >> 0x20),
                    fVar9 * (float)uVar22 * (float)uVar13);
      *(undefined8 *)(param_5 + lVar3) =
           CONCAT44(fVar8 * (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar12 >> 0x20),
                    fVar7 * (float)uVar21 * (float)uVar12);
      ((undefined8 *)(param_5 + lVar4))[1] =
           CONCAT44(fVar34 * fVar19 *
                    (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar27 >> 0x20),
                    fVar33 * fVar18 * (float)uVar25 * (float)uVar27);
      *(undefined8 *)(param_5 + lVar4) =
           CONCAT44(fVar32 * fVar17 *
                    (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar26 >> 0x20),
                    fVar31 * fVar16 * (float)uVar24 * (float)uVar26);
    } while (uVar1 < param_2);
  }
  return;
}


