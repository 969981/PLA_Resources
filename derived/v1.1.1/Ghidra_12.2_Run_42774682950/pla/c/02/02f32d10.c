/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f32d10; name: FUN_02f32d10
 */


void FUN_02f32d10(float param_1,float param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  uVar6 = (ulong)*(byte *)(param_3 + 1);
  if (*(byte *)(param_3 + 1) != 0) {
    uVar4 = 0;
    do {
      puVar5 = (undefined8 *)(*param_3 + uVar4 * *(ushort *)(param_3 + 2) * 4);
      uVar9 = (ulong)(*(ushort *)(param_3 + 2) >> 2);
      puVar2 = puVar5 + uVar9 * 2;
      if (puVar5 < puVar2) {
        uVar6 = uVar9 * 0x10 - 1;
        uVar1 = ((uint)(uVar6 >> 4) & 0xfffffff) + 1;
        puVar8 = param_4;
        if ((uVar1 & 3) != 0) {
          lVar10 = -((ulong)uVar1 & 3);
          puVar7 = param_4;
          puVar11 = puVar5;
          do {
            puVar8 = puVar7 + 2;
            uVar12 = *puVar7;
            puVar5 = puVar11 + 2;
            bVar3 = lVar10 != -1;
            lVar10 = lVar10 + 1;
            puVar11[1] = CONCAT44((param_1 + param_2 * (float)((ulong)puVar7[1] >> 0x20)) *
                                  (float)((ulong)puVar11[1] >> 0x20),
                                  (param_1 + param_2 * (float)puVar7[1]) * (float)puVar11[1]);
            *puVar11 = CONCAT44((param_1 + param_2 * (float)((ulong)uVar12 >> 0x20)) *
                                (float)((ulong)*puVar11 >> 0x20),
                                (param_1 + param_2 * (float)uVar12) * (float)*puVar11);
            puVar7 = puVar8;
            puVar11 = puVar5;
          } while (bVar3);
        }
        if (0x2f < uVar6) {
          do {
            uVar12 = *puVar8;
            puVar5[1] = CONCAT44((param_1 + param_2 * (float)((ulong)puVar8[1] >> 0x20)) *
                                 (float)((ulong)puVar5[1] >> 0x20),
                                 (param_1 + param_2 * (float)puVar8[1]) * (float)puVar5[1]);
            *puVar5 = CONCAT44((param_1 + param_2 * (float)((ulong)uVar12 >> 0x20)) *
                               (float)((ulong)*puVar5 >> 0x20),
                               (param_1 + param_2 * (float)uVar12) * (float)*puVar5);
            uVar12 = puVar8[2];
            puVar5[3] = CONCAT44((param_1 + param_2 * (float)((ulong)puVar8[3] >> 0x20)) *
                                 (float)((ulong)puVar5[3] >> 0x20),
                                 (param_1 + param_2 * (float)puVar8[3]) * (float)puVar5[3]);
            puVar5[2] = CONCAT44((param_1 + param_2 * (float)((ulong)uVar12 >> 0x20)) *
                                 (float)((ulong)puVar5[2] >> 0x20),
                                 (param_1 + param_2 * (float)uVar12) * (float)puVar5[2]);
            uVar12 = puVar8[4];
            puVar5[5] = CONCAT44((param_1 + param_2 * (float)((ulong)puVar8[5] >> 0x20)) *
                                 (float)((ulong)puVar5[5] >> 0x20),
                                 (param_1 + param_2 * (float)puVar8[5]) * (float)puVar5[5]);
            puVar5[4] = CONCAT44((param_1 + param_2 * (float)((ulong)uVar12 >> 0x20)) *
                                 (float)((ulong)puVar5[4] >> 0x20),
                                 (param_1 + param_2 * (float)uVar12) * (float)puVar5[4]);
            puVar7 = puVar8 + 7;
            uVar12 = puVar8[6];
            puVar8 = puVar8 + 8;
            puVar5[7] = CONCAT44((param_1 + param_2 * (float)((ulong)*puVar7 >> 0x20)) *
                                 (float)((ulong)puVar5[7] >> 0x20),
                                 (param_1 + param_2 * (float)*puVar7) * (float)puVar5[7]);
            puVar5[6] = CONCAT44((param_1 + param_2 * (float)((ulong)uVar12 >> 0x20)) *
                                 (float)((ulong)puVar5[6] >> 0x20),
                                 (param_1 + param_2 * (float)uVar12) * (float)puVar5[6]);
            puVar5 = puVar5 + 8;
          } while (puVar5 < puVar2);
        }
        uVar6 = (ulong)*(byte *)(param_3 + 1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  return;
}


