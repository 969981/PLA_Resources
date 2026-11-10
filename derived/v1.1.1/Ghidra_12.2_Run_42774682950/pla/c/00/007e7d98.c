/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e7d98; name: FUN_007e7d98
 */


void FUN_007e7d98(uint *param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
  uVar8 = (ulong)(*param_1 ^ *param_4);
  uVar6 = (ulong)(param_1[1] ^ param_4[1]);
  uVar10 = (ulong)(param_1[2] ^ param_4[2]);
  uVar12 = (ulong)(param_1[3] ^ param_4[3]);
  lVar13 = 0x10;
  do {
    uVar7 = (uint)uVar8;
    uVar5 = (uint)uVar6;
    uVar9 = (uint)uVar10;
    uVar11 = (uint)uVar12;
    puVar1 = (uint *)((long)param_1 + lVar13);
    lVar13 = lVar13 + 0x10;
    uVar2 = *(uint *)(&DAT_03a7196c + (ulong)(uVar7 & 0xff) * 4) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar5 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar5 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar9 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar9 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03a7196c + (uVar12 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03a7196c + (uVar12 >> 0x18) * 4) << 0x18) ^ *puVar1;
    uVar8 = (ulong)uVar2;
    uVar3 = *(uint *)(&DAT_03a7196c + (ulong)(uVar5 & 0xff) * 4) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar9 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar9 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar11 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar11 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar7 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar7 >> 0x18) * 4) << 0x18) ^ puVar1[1];
    uVar6 = (ulong)uVar3;
    uVar4 = *(uint *)(&DAT_03a7196c + (ulong)(uVar9 & 0xff) * 4) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar11 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar11 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar7 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar7 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar5 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar5 >> 0x18) * 4) << 0x18) ^ puVar1[2];
    uVar10 = (ulong)uVar4;
    uVar5 = *(uint *)(&DAT_03a7196c + (ulong)(uVar11 & 0xff) * 4) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar7 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar7 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar5 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar5 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03a7196c + (ulong)(uVar9 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03a7196c + (ulong)(uVar9 >> 0x18) * 4) << 0x18) ^ puVar1[3];
    uVar12 = (ulong)uVar5;
  } while ((int)lVar13 != 0xa0);
  *param_2 = CONCAT13((&DAT_03a7186a)[uVar5 >> 0x18],
                      CONCAT12((&DAT_03a7186a)[(ulong)(uVar4 >> 0x10) & 0xff],
                               CONCAT11((&DAT_03a7186a)[(ulong)(uVar3 >> 8) & 0xff],
                                        (&DAT_03a7186a)[uVar8 & 0xff]))) ^ param_1[0x28];
  param_2[1] = CONCAT13((&DAT_03a7186a)[uVar2 >> 0x18],
                        CONCAT12((&DAT_03a7186a)[(ulong)(uVar5 >> 0x10) & 0xff],
                                 CONCAT11((&DAT_03a7186a)[(ulong)(uVar4 >> 8) & 0xff],
                                          (&DAT_03a7186a)[uVar6 & 0xff]))) ^ param_1[0x29];
  param_2[2] = CONCAT13((&DAT_03a7186a)[uVar3 >> 0x18],
                        CONCAT12((&DAT_03a7186a)[(ulong)(uVar2 >> 0x10) & 0xff],
                                 CONCAT11((&DAT_03a7186a)[(ulong)(uVar5 >> 8) & 0xff],
                                          (&DAT_03a7186a)[uVar10 & 0xff]))) ^ param_1[0x2a];
  param_2[3] = CONCAT13((&DAT_03a7186a)[uVar4 >> 0x18],
                        CONCAT12((&DAT_03a7186a)[(ulong)(uVar3 >> 0x10) & 0xff],
                                 CONCAT11((&DAT_03a7186a)[(ulong)(uVar2 >> 8) & 0xff],
                                          (&DAT_03a7186a)[uVar12 & 0xff]))) ^ param_1[0x2b];
  return;
}


