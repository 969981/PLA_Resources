/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446200; name: FUN_00446200
 */


int FUN_00446200(long param_1,long param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x5c) >> 1 & 1) == 0)) {
    puVar3 = &DAT_03a0bcfc;
    bVar7 = *param_3;
  }
  else {
    puVar3 = &DAT_03a0bc7c;
    bVar7 = *param_3;
  }
  if ((char)bVar7 < '\0') {
LAB_00446258:
    iVar4 = param_4;
  }
  else {
    do {
      iVar4 = param_4 + -1;
      if ((param_4 < 1) || (puVar3[bVar7] != -0x20)) goto LAB_00446258;
      param_3 = param_3 + 1;
      bVar7 = *param_3;
      param_4 = iVar4;
    } while (-1 < (char)bVar7);
  }
  uVar2 = (long)iVar4;
  do {
    uVar9 = uVar2;
    if (((long)uVar9 < 4) || ((char)param_3[uVar9 - 1] < '\0')) break;
    uVar2 = uVar9 - 1;
  } while ((puVar3[param_3[uVar9 - 1]] | 0x13) == 0xf3);
  if ((uVar9 & 3) != 0) {
    return -1;
  }
  if ((int)uVar9 < 1) {
    return 0;
  }
  lVar6 = 0;
  lVar5 = 0;
  pbVar10 = param_3;
  if ((char)bVar7 < '\0') goto LAB_00446300;
LAB_004462c4:
  uVar8 = (uint)(byte)puVar3[bVar7];
  bVar7 = pbVar10[1];
  if ((char)bVar7 < '\0') goto LAB_0044630c;
LAB_004462d4:
  uVar11 = (uint)(byte)puVar3[bVar7];
  bVar7 = pbVar10[2];
  if ((char)bVar7 < '\0') goto LAB_00446318;
LAB_004462e4:
  uVar12 = (uint)(byte)puVar3[bVar7];
  bVar7 = pbVar10[3];
  if ((char)bVar7 < '\0') goto LAB_00446324;
  do {
    bVar7 = puVar3[bVar7];
    while( true ) {
      if ((char)((byte)uVar11 | (byte)uVar8 | (byte)uVar12 | bVar7) < '\0') {
        return -1;
      }
      pbVar1 = (byte *)(param_2 + lVar5);
      pbVar1[1] = (byte)((uVar12 << 6) >> 8) | (byte)((uVar11 << 0xc) >> 8);
      *pbVar1 = (byte)((uVar11 << 0xc) >> 0x10) | (byte)((uVar8 << 0x12) >> 0x10);
      pbVar1[2] = bVar7 | (byte)(uVar12 << 6);
      if ((int)uVar9 <= (int)lVar6 + 4) {
        return (int)lVar5 + 3;
      }
      bVar7 = pbVar10[4];
      lVar5 = lVar5 + 3;
      lVar6 = lVar6 + 4;
      pbVar10 = param_3 + lVar6;
      if (-1 < (char)bVar7) goto LAB_004462c4;
LAB_00446300:
      uVar8 = 0xff;
      bVar7 = pbVar10[1];
      if (-1 < (char)bVar7) goto LAB_004462d4;
LAB_0044630c:
      uVar11 = 0xff;
      bVar7 = pbVar10[2];
      if (-1 < (char)bVar7) goto LAB_004462e4;
LAB_00446318:
      uVar12 = 0xff;
      bVar7 = pbVar10[3];
      if (-1 < (char)bVar7) break;
LAB_00446324:
      bVar7 = 0xff;
    }
  } while( true );
}


