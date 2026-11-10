/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dff43c; name: FUN_02dff43c
 */


void FUN_02dff43c(long param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
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
  float fVar37;
  float fVar38;
  
  FUN_02dff52c();
  if ((param_3 & 3) != 0) {
    iVar1 = 4 - (param_3 & 3);
    memset((void *)((long)param_2 + (ulong)param_3 * 4),0,(ulong)(uint)(iVar1 * 4));
    param_3 = iVar1 + param_3;
  }
  fVar13 = *(float *)(param_1 + 0xf0);
  fVar32 = *(float *)(param_1 + 0xf4);
  fVar38 = *(float *)(param_1 + 0xf8);
  fVar36 = *(float *)(param_1 + 0xfc);
  if (param_3 != 0) {
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    uVar17 = *(undefined8 *)(param_1 + 0x88);
    uVar16 = *(undefined8 *)(param_1 + 0x80);
    uVar19 = *(undefined8 *)(param_1 + 0x98);
    uVar18 = *(undefined8 *)(param_1 + 0x90);
    uVar21 = *(undefined8 *)(param_1 + 0xa8);
    uVar20 = *(undefined8 *)(param_1 + 0xa0);
    uVar23 = *(undefined8 *)(param_1 + 0xb8);
    uVar22 = *(undefined8 *)(param_1 + 0xb0);
    uVar25 = *(undefined8 *)(param_1 + 200);
    uVar24 = *(undefined8 *)(param_1 + 0xc0);
    uVar27 = *(undefined8 *)(param_1 + 0xd8);
    uVar26 = *(undefined8 *)(param_1 + 0xd0);
    uVar29 = *(undefined8 *)(param_1 + 0xe8);
    uVar28 = *(undefined8 *)(param_1 + 0xe0);
    puVar3 = param_2;
    do {
      fVar33 = fVar13 * (float)uVar22;
      fVar34 = fVar13 * (float)((ulong)uVar22 >> 0x20);
      fVar35 = fVar13 * (float)uVar23;
      fVar37 = fVar13 * (float)((ulong)uVar23 >> 0x20);
      fVar4 = (float)uVar24 * fVar32;
      fVar7 = (float)((ulong)uVar24 >> 0x20) * fVar32;
      fVar10 = (float)uVar25 * fVar32;
      fVar11 = (float)((ulong)uVar25 >> 0x20) * fVar32;
      puVar2 = puVar3 + 2;
      fVar32 = (float)puVar3[1];
      fVar13 = (float)((ulong)puVar3[1] >> 0x20);
      fVar30 = (float)*puVar3;
      fVar31 = (float)((ulong)*puVar3 >> 0x20);
      fVar5 = (float)uVar26 * fVar38;
      fVar8 = (float)((ulong)uVar26 >> 0x20) * fVar38;
      fVar6 = (float)uVar28 * fVar36;
      fVar9 = (float)((ulong)uVar28 >> 0x20) * fVar36;
      fVar12 = (float)((ulong)uVar29 >> 0x20) * fVar36;
      fVar36 = fVar35 + fVar10 + (float)uVar27 * fVar38 + (float)uVar29 * fVar36 +
               (float)uVar15 * fVar32 + (float)uVar17 * fVar32 + (float)uVar19 * fVar31 +
               (float)uVar21 * fVar30;
      fVar38 = fVar37 + fVar11 + (float)((ulong)uVar27 >> 0x20) * fVar38 + fVar12 +
               (float)((ulong)uVar15 >> 0x20) * fVar13 + (float)((ulong)uVar17 >> 0x20) * fVar32 +
               (float)((ulong)uVar19 >> 0x20) * fVar31 + (float)((ulong)uVar21 >> 0x20) * fVar30;
      puVar3[1] = CONCAT44(fVar38,fVar36);
      *puVar3 = CONCAT44(fVar34 + fVar7 + fVar8 + fVar9 + (float)((ulong)uVar14 >> 0x20) * fVar31 +
                         (float)((ulong)uVar16 >> 0x20) * fVar32 +
                         (float)((ulong)uVar18 >> 0x20) * fVar31 +
                         (float)((ulong)uVar20 >> 0x20) * fVar30,
                         fVar33 + fVar4 + fVar5 + fVar6 + (float)uVar14 * fVar30 +
                         (float)uVar16 * fVar32 + (float)uVar18 * fVar31 + (float)uVar20 * fVar30);
      puVar3 = puVar2;
    } while (puVar2 < (undefined8 *)((long)param_2 + (ulong)param_3 * 4));
  }
  *(ulong *)(param_1 + 0xf0) = CONCAT44(fVar32,fVar13);
  *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar36,fVar38);
  return;
}


