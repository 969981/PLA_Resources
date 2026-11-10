/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5aec0; name: FUN_02f5aec0
 */


void FUN_02f5aec0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar6;
  float fVar4;
  byte bVar7;
  undefined8 uVar5;
  float fVar8;
  byte bVar9;
  float fVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_0335c548(param_1 + 8,param_2);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    puVar2 = puVar3 + (long)*(int *)(param_1 + 0x50) * 2;
    do {
      uVar11 = puVar3[1];
      uVar5 = *puVar3;
      uVar12 = (uint)((int)uVar5 >> 0x1f) >> 1;
      uVar13 = (uint)((long)uVar5 >> 0x3f) >> 1;
      uVar14 = (uint)((int)uVar11 >> 0x1f) >> 1;
      bVar6 = (byte)((ulong)uVar5 >> 0x18);
      fVar8 = (float)CONCAT13((byte)((char)bVar6 >> 7) >> 1 ^ bVar6,
                              CONCAT12((byte)(uVar12 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x10),
                                       CONCAT11((byte)(uVar12 >> 8) ^ (byte)((ulong)uVar5 >> 8),
                                                (byte)uVar12 ^ (byte)uVar5)));
      bVar6 = (byte)((ulong)uVar5 >> 0x38);
      bVar7 = (byte)((ulong)uVar11 >> 0x18);
      puVar1 = puVar3 + 1;
      fVar4 = (float)*param_2 + fVar8;
      fVar8 = (float)((ulong)*param_2 >> 0x20) +
              (float)(CONCAT17((byte)((char)bVar6 >> 7) >> 1 ^ bVar6,
                               CONCAT16((byte)(uVar13 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x30),
                                        CONCAT15((byte)(uVar13 >> 8) ^ (byte)((ulong)uVar5 >> 0x28),
                                                 CONCAT14((byte)uVar13 ^
                                                          (byte)((ulong)uVar5 >> 0x20),fVar8)))) >>
                     0x20);
      fVar10 = (float)param_2[1] +
               (float)CONCAT13((byte)((char)bVar7 >> 7) >> 1 ^ bVar7,
                               CONCAT12((byte)(uVar14 >> 0x10) ^ (byte)((ulong)uVar11 >> 0x10),
                                        CONCAT11((byte)(uVar14 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                 (byte)uVar14 ^ (byte)uVar11)));
      uVar12 = (uint)((int)fVar4 >> 0x1f) >> 1;
      uVar13 = (uint)((int)fVar8 >> 0x1f) >> 1;
      uVar14 = (uint)((int)fVar10 >> 0x1f) >> 1;
      bVar7 = (byte)((uint)fVar4 >> 0x18);
      bVar9 = (byte)((uint)fVar8 >> 0x18);
      bVar6 = (byte)((uint)fVar10 >> 0x18);
      *puVar3 = CONCAT17((byte)((char)bVar9 >> 7) >> 1 ^ bVar9,
                         CONCAT16((byte)(uVar13 >> 0x10) ^ (byte)((uint)fVar8 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 8) ^ (byte)((uint)fVar8 >> 8),
                                           CONCAT14((byte)uVar13 ^ SUB41(fVar8,0),
                                                    CONCAT13((byte)((char)bVar7 >> 7) >> 1 ^ bVar7,
                                                             CONCAT12((byte)(uVar12 >> 0x10) ^
                                                                      (byte)((uint)fVar4 >> 0x10),
                                                                      CONCAT11((byte)(uVar12 >> 8) ^
                                                                               (byte)((uint)fVar4 >>
                                                                                     8),(byte)uVar12
                                                                                        ^ SUB41(
                                                  fVar4,0))))))));
      puVar3 = puVar3 + 2;
      *(uint *)puVar1 =
           CONCAT13((byte)((char)bVar6 >> 7) >> 1 ^ bVar6,
                    CONCAT12((byte)(uVar14 >> 0x10) ^ (byte)((uint)fVar10 >> 0x10),
                             CONCAT11((byte)(uVar14 >> 8) ^ (byte)((uint)fVar10 >> 8),
                                      (byte)uVar14 ^ SUB41(fVar10,0))));
    } while (puVar3 != puVar2);
  }
  return;
}


