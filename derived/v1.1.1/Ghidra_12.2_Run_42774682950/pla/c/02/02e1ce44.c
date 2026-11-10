/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1ce44; name: FUN_02e1ce44
 */


void FUN_02e1ce44(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined4 param_5)

{
  undefined8 *__s;
  int iVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  FUN_02e1f790(*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x78),
               *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x7c),param_2,param_4,param_5,param_3);
  if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
     (bVar3 = *(byte *)(param_1 + 0x134), bVar3 != 0)) {
    __s = (undefined8 *)((long)param_3 + (ulong)param_4 * 4);
    if ((param_4 & 3) == 0) {
      uVar2 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x148) + uVar2 * 0xa0 + 0x90) == 3) {
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x148) + uVar2 * 0xa0);
          fVar17 = *(float *)(puVar6 + 0x10);
          fVar18 = *(float *)((long)puVar6 + 0x84);
          fVar19 = *(float *)(puVar6 + 0x11);
          fVar20 = *(float *)((long)puVar6 + 0x8c);
          if (param_4 != 0) {
            uVar22 = puVar6[1];
            uVar21 = *puVar6;
            uVar24 = puVar6[3];
            uVar23 = puVar6[2];
            uVar26 = puVar6[5];
            uVar25 = puVar6[4];
            uVar28 = puVar6[7];
            uVar27 = puVar6[6];
            uVar30 = puVar6[9];
            uVar29 = puVar6[8];
            uVar32 = puVar6[0xb];
            uVar31 = puVar6[10];
            uVar34 = puVar6[0xd];
            uVar33 = puVar6[0xc];
            uVar36 = puVar6[0xf];
            uVar35 = puVar6[0xe];
            puVar4 = param_3;
            do {
              fVar39 = fVar17 * (float)uVar29;
              fVar40 = fVar17 * (float)((ulong)uVar29 >> 0x20);
              fVar41 = fVar17 * (float)uVar30;
              fVar42 = fVar17 * (float)((ulong)uVar30 >> 0x20);
              fVar8 = (float)uVar31 * fVar18;
              fVar11 = (float)((ulong)uVar31 >> 0x20) * fVar18;
              fVar14 = (float)uVar32 * fVar18;
              fVar15 = (float)((ulong)uVar32 >> 0x20) * fVar18;
              puVar5 = puVar4 + 2;
              fVar17 = (float)((ulong)puVar4[1] >> 0x20);
              fVar9 = (float)uVar33 * fVar19;
              fVar12 = (float)((ulong)uVar33 >> 0x20) * fVar19;
              fVar10 = (float)uVar35 * fVar20;
              fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar20;
              fVar16 = (float)((ulong)uVar36 >> 0x20) * fVar20;
              fVar37 = (float)*puVar4;
              fVar38 = (float)((ulong)*puVar4 >> 0x20);
              fVar18 = (float)puVar4[1];
              fVar20 = fVar41 + fVar14 + (float)uVar34 * fVar19 + (float)uVar36 * fVar20 +
                       (float)uVar22 * fVar18 + (float)uVar24 * fVar18 + (float)uVar26 * fVar38 +
                       (float)uVar28 * fVar37;
              fVar19 = fVar42 + fVar15 + (float)((ulong)uVar34 >> 0x20) * fVar19 + fVar16 +
                       (float)((ulong)uVar22 >> 0x20) * fVar17 +
                       (float)((ulong)uVar24 >> 0x20) * fVar18 +
                       (float)((ulong)uVar26 >> 0x20) * fVar38 +
                       (float)((ulong)uVar28 >> 0x20) * fVar37;
              puVar4[1] = CONCAT44(fVar19,fVar20);
              *puVar4 = CONCAT44(fVar40 + fVar11 + fVar12 + fVar13 +
                                 (float)((ulong)uVar21 >> 0x20) * fVar38 +
                                 (float)((ulong)uVar23 >> 0x20) * fVar18 +
                                 (float)((ulong)uVar25 >> 0x20) * fVar38 +
                                 (float)((ulong)uVar27 >> 0x20) * fVar37,
                                 fVar39 + fVar8 + fVar9 + fVar10 + (float)uVar21 * fVar37 +
                                 (float)uVar23 * fVar18 + (float)uVar25 * fVar38 +
                                 (float)uVar27 * fVar37);
              puVar4 = puVar5;
            } while (puVar5 < __s);
          }
          *(float *)(puVar6 + 0x10) = fVar17;
          *(float *)((long)puVar6 + 0x84) = fVar18;
          *(float *)(puVar6 + 0x11) = fVar19;
          *(float *)((long)puVar6 + 0x8c) = fVar20;
          bVar3 = *(byte *)(param_1 + 0x134);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < bVar3);
    }
    else {
      iVar1 = 4 - (param_4 & 3);
      param_4 = iVar1 + param_4;
      uVar2 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x148);
        if (*(int *)(lVar7 + uVar2 * 0xa0 + 0x90) == 3) {
          memset(__s,0,(ulong)(uint)(iVar1 * 4));
          puVar6 = (undefined8 *)(lVar7 + uVar2 * 0xa0);
          fVar17 = *(float *)(puVar6 + 0x10);
          fVar18 = *(float *)((long)puVar6 + 0x84);
          fVar19 = *(float *)(puVar6 + 0x11);
          fVar20 = *(float *)((long)puVar6 + 0x8c);
          if (param_4 != 0) {
            uVar22 = puVar6[1];
            uVar21 = *puVar6;
            uVar24 = puVar6[3];
            uVar23 = puVar6[2];
            uVar26 = puVar6[5];
            uVar25 = puVar6[4];
            uVar28 = puVar6[7];
            uVar27 = puVar6[6];
            uVar30 = puVar6[9];
            uVar29 = puVar6[8];
            uVar32 = puVar6[0xb];
            uVar31 = puVar6[10];
            uVar34 = puVar6[0xd];
            uVar33 = puVar6[0xc];
            uVar36 = puVar6[0xf];
            uVar35 = puVar6[0xe];
            puVar4 = param_3;
            do {
              fVar39 = fVar17 * (float)uVar29;
              fVar40 = fVar17 * (float)((ulong)uVar29 >> 0x20);
              fVar41 = fVar17 * (float)uVar30;
              fVar42 = fVar17 * (float)((ulong)uVar30 >> 0x20);
              fVar8 = (float)uVar31 * fVar18;
              fVar11 = (float)((ulong)uVar31 >> 0x20) * fVar18;
              fVar14 = (float)uVar32 * fVar18;
              fVar15 = (float)((ulong)uVar32 >> 0x20) * fVar18;
              puVar5 = puVar4 + 2;
              fVar17 = (float)((ulong)puVar4[1] >> 0x20);
              fVar9 = (float)uVar33 * fVar19;
              fVar12 = (float)((ulong)uVar33 >> 0x20) * fVar19;
              fVar10 = (float)uVar35 * fVar20;
              fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar20;
              fVar16 = (float)((ulong)uVar36 >> 0x20) * fVar20;
              fVar37 = (float)*puVar4;
              fVar38 = (float)((ulong)*puVar4 >> 0x20);
              fVar18 = (float)puVar4[1];
              fVar20 = fVar41 + fVar14 + (float)uVar34 * fVar19 + (float)uVar36 * fVar20 +
                       (float)uVar22 * fVar18 + (float)uVar24 * fVar18 + (float)uVar26 * fVar38 +
                       (float)uVar28 * fVar37;
              fVar19 = fVar42 + fVar15 + (float)((ulong)uVar34 >> 0x20) * fVar19 + fVar16 +
                       (float)((ulong)uVar22 >> 0x20) * fVar17 +
                       (float)((ulong)uVar24 >> 0x20) * fVar18 +
                       (float)((ulong)uVar26 >> 0x20) * fVar38 +
                       (float)((ulong)uVar28 >> 0x20) * fVar37;
              puVar4[1] = CONCAT44(fVar19,fVar20);
              *puVar4 = CONCAT44(fVar40 + fVar11 + fVar12 + fVar13 +
                                 (float)((ulong)uVar21 >> 0x20) * fVar38 +
                                 (float)((ulong)uVar23 >> 0x20) * fVar18 +
                                 (float)((ulong)uVar25 >> 0x20) * fVar38 +
                                 (float)((ulong)uVar27 >> 0x20) * fVar37,
                                 fVar39 + fVar8 + fVar9 + fVar10 + (float)uVar21 * fVar37 +
                                 (float)uVar23 * fVar18 + (float)uVar25 * fVar38 +
                                 (float)uVar27 * fVar37);
              puVar4 = puVar5;
            } while (puVar5 < (undefined8 *)((long)param_3 + (ulong)param_4 * 4));
          }
          *(float *)(puVar6 + 0x10) = fVar17;
          *(float *)((long)puVar6 + 0x84) = fVar18;
          *(float *)(puVar6 + 0x11) = fVar19;
          *(float *)((long)puVar6 + 0x8c) = fVar20;
          bVar3 = *(byte *)(param_1 + 0x134);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < bVar3);
    }
  }
  return;
}


