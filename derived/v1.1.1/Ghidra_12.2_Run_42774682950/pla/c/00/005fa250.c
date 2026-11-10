/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005fa250; name: FUN_005fa250
 */


void FUN_005fa250(byte *param_1,ulong *param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  byte *pbVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  uVar7 = *param_2;
  puVar9 = (ulong *)param_2[1];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = param_2 + 1;
  if ((uVar7 & 1) != 0) {
    puVar2 = puVar9;
  }
  uVar7 = uVar7 >> 1;
  if (uVar7 != 0) {
    uVar6 = puVar2[1];
    puVar9 = puVar2 + 2;
    if (uVar7 != 1) {
      uVar1 = (uVar7 * 0x10 - 0x20 >> 4) + 1;
      puVar13 = puVar9;
      puVar10 = puVar2;
      if (8 < uVar1) {
        lVar16 = 0;
        lVar17 = 0;
        lVar18 = 0;
        uVar3 = 8;
        if ((uVar1 & 7) != 0) {
          uVar3 = uVar1 & 7;
        }
        lVar12 = uVar1 - uVar3;
        lVar20 = 0;
        lVar19 = 0;
        lVar15 = 0;
        lVar14 = 0;
        lVar4 = lVar12 * 2;
        lVar5 = lVar12 * 2;
        puVar13 = puVar2 + 0xb;
        do {
          uVar6 = uVar6 + param_4 + puVar13[-8];
          lVar18 = lVar18 + param_4 + puVar13[-6];
          lVar16 = lVar16 + param_4 + puVar13[-4];
          lVar17 = lVar17 + param_4 + puVar13[-2];
          lVar19 = lVar19 + param_4 + *puVar13;
          lVar20 = lVar20 + param_4 + puVar13[2];
          lVar14 = lVar14 + param_4 + puVar13[4];
          lVar15 = lVar15 + param_4 + puVar13[6];
          lVar12 = lVar12 + -8;
          puVar13 = puVar13 + 0x10;
        } while (lVar12 != 0);
        uVar6 = lVar14 + lVar19 + lVar16 + uVar6 + lVar15 + lVar20 + lVar17 + lVar18;
        puVar13 = puVar9 + lVar4;
        puVar10 = puVar2 + lVar5;
      }
      do {
        puVar8 = puVar13;
        uVar6 = uVar6 + param_4 + puVar10[3];
        puVar13 = puVar8 + 2;
        puVar10 = puVar8;
      } while (puVar2 + uVar7 * 2 != puVar13);
    }
    if (uVar6 != 0) {
                    /* try { // try from 005fa378 to 005fa37f has its CatchHandler @ 005fa3f4 */
      FUN_002e5a60(param_1);
      pbVar11 = *(byte **)(param_1 + 0x10);
      if ((*param_1 & 1) == 0) {
        pbVar11 = param_1 + 1;
      }
      memcpy(pbVar11,(void *)*puVar2,puVar2[1]);
      if (uVar7 != 1) {
        pbVar11 = pbVar11 + puVar2[1];
        do {
          memcpy(pbVar11,param_3,param_4);
          memcpy(pbVar11 + param_4,(void *)*puVar9,puVar9[1]);
          puVar13 = puVar9 + 1;
          puVar9 = puVar9 + 2;
          pbVar11 = pbVar11 + param_4 + *puVar13;
        } while (puVar9 != puVar2 + uVar7 * 2);
      }
    }
  }
  return;
}


