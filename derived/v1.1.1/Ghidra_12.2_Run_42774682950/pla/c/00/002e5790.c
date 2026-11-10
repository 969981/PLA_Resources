/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e5790; name: FUN_002e5790
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002e5790(byte *param_1,byte *param_2,byte *param_3,void *param_4,size_t param_5,
                 ulong param_6,ulong param_7,ulong param_8)

{
  byte *pbVar1;
  ulong uVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  size_t sVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_2 == param_3) {
    return;
  }
  if ((*param_2 & 1) == 0) {
    uVar11 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar11 = *(ulong *)(param_2 + 8);
  }
  if (param_2 + 0x18 != param_3) {
    pbVar13 = param_2 + 0x18;
    uVar2 = (ulong)(param_3 + (-0x30 - (long)param_2)) / 0x18 + 1;
    if (uVar2 < 4) {
      lVar19 = uVar11 + param_5;
      bVar8 = *pbVar13;
      pbVar14 = param_2;
      if ((bVar8 & 1) != 0) goto LAB_002e5858;
      goto LAB_002e5830;
    }
    uVar15 = uVar2 & 0x1ffffffffffffffc;
    lVar19 = 0;
    lVar20 = 0;
    lVar18 = 0;
    puVar16 = (ulong *)(param_2 + 0x38);
    pbVar13 = pbVar13 + uVar15 * 0x18;
    pbVar14 = param_2 + uVar15 * 0x18;
    sVar12 = param_5;
    uVar17 = uVar15;
    do {
      bVar9 = (byte)puVar16[-4];
      bVar10 = (byte)puVar16[-1];
      bVar8 = (byte)puVar16[2];
      bVar7 = (byte)puVar16[5];
      if ((bVar9 & 1) != 0) {
        sVar12 = puVar16[-3];
      }
      if ((bVar10 & 1) != 0) {
        param_6 = *puVar16;
      }
      if ((bVar8 & 1) != 0) {
        param_7 = puVar16[3];
      }
      if ((bVar7 & 1) != 0) {
        param_8 = puVar16[6];
      }
      sVar3 = (ulong)(bVar9 >> 1);
      if ((bVar9 & 1) != 0) {
        sVar3 = sVar12;
      }
      uVar4 = (ulong)(bVar10 >> 1);
      if ((bVar10 & 1) != 0) {
        uVar4 = param_6;
      }
      uVar5 = (ulong)(bVar8 >> 1);
      if ((bVar8 & 1) != 0) {
        uVar5 = param_7;
      }
      uVar6 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        uVar6 = param_8;
      }
      uVar11 = uVar11 + param_5 + sVar3;
      lVar19 = lVar19 + param_5 + uVar4;
      lVar20 = lVar20 + param_5 + uVar5;
      lVar18 = lVar18 + param_5 + uVar6;
      uVar17 = uVar17 - 4;
      puVar16 = puVar16 + 0xc;
    } while (uVar17 != 0);
    uVar11 = lVar18 + lVar20 + lVar19 + uVar11;
    if (uVar2 != uVar15) {
      do {
        lVar19 = uVar11 + param_5;
        bVar8 = *pbVar13;
        if ((bVar8 & 1) == 0) {
LAB_002e5830:
          uVar11 = (ulong)(bVar8 >> 1);
          pbVar14 = pbVar13;
        }
        else {
LAB_002e5858:
          uVar11 = *(ulong *)(pbVar14 + 0x20);
          pbVar14 = pbVar13;
        }
        uVar11 = lVar19 + uVar11;
        pbVar13 = pbVar14 + 0x18;
      } while (param_3 != pbVar13);
    }
  }
  pbVar13 = param_2 + 0x18;
  if (uVar11 == 0) {
    return;
  }
                    /* try { // try from 002e5940 to 002e5947 has its CatchHandler @ 002e5a3c */
  FUN_002e5a60(param_1);
  pbVar14 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar14 = param_1 + 1;
  }
  if ((*param_2 & 1) == 0) {
    memcpy(pbVar14,param_2 + 1,(ulong)(*param_2 >> 1));
    bVar8 = *param_2;
  }
  else {
    memcpy(pbVar14,*(void **)(param_2 + 0x10),*(size_t *)(param_2 + 8));
    bVar8 = *param_2;
  }
  if ((bVar8 & 1) == 0) {
    uVar11 = (ulong)(bVar8 >> 1);
  }
  else {
    uVar11 = *(ulong *)(param_2 + 8);
  }
  if (pbVar13 != param_3) {
    pbVar14 = pbVar14 + uVar11;
    do {
      while( true ) {
        memcpy(pbVar14,param_4,param_5);
        pbVar14 = pbVar14 + param_5;
        if ((*pbVar13 & 1) != 0) break;
        memcpy(pbVar14,pbVar13 + 1,(ulong)(*pbVar13 >> 1));
        bVar8 = *pbVar13;
        if ((bVar8 & 1) == 0) goto LAB_002e59b0;
LAB_002e5a10:
        pbVar1 = pbVar13 + 8;
        pbVar13 = pbVar13 + 0x18;
        pbVar14 = pbVar14 + *(long *)pbVar1;
        if (param_3 == pbVar13) {
          return;
        }
      }
      memcpy(pbVar14,*(void **)(pbVar13 + 0x10),*(size_t *)(pbVar13 + 8));
      bVar8 = *pbVar13;
      if ((bVar8 & 1) != 0) goto LAB_002e5a10;
LAB_002e59b0:
      pbVar13 = pbVar13 + 0x18;
      pbVar14 = pbVar14 + (bVar8 >> 1);
    } while (param_3 != pbVar13);
  }
  return;
}


