/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00409f20; name: FUN_00409f20
 */


void FUN_00409f20(undefined8 *param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  
  pbVar4 = (byte *)*param_1;
  bVar2 = param_5 & 0xc0 | (param_2 != 0) << 5;
  bVar3 = (byte)param_4;
  if ((int)param_4 < 0x1f) {
    *pbVar4 = bVar2 | bVar3 & 0x1f;
  }
  else {
    *pbVar4 = bVar2 | 0x1f;
    uVar1 = 0;
    uVar6 = param_4;
    do {
      uVar8 = uVar1;
      uVar6 = uVar6 >> 7;
      uVar1 = uVar8 + 1;
    } while (uVar6 != 0);
    uVar11 = uVar1;
    if ((uVar8 & 1) == 0) {
      param_4 = (int)param_4 >> 7;
      pbVar4[uVar1] = bVar3 & 0x7f;
      uVar11 = uVar8;
      uVar8 = uVar8 - 1;
    }
    if ((int)uVar1 != 1) {
      uVar11 = uVar11 & 0xffffffff;
      pbVar9 = pbVar4 + uVar8 + 1;
      lVar10 = uVar8 - uVar1;
      uVar6 = (int)uVar8 - 1;
      do {
        bVar2 = (byte)param_4 & 0x7f;
        if ((int)uVar11 != (int)uVar1) {
          bVar2 = (byte)param_4 | 0x80;
        }
        *pbVar9 = bVar2;
        lVar7 = uVar8 - 1;
        bVar2 = (byte)(param_4 >> 7) & 0x7f;
        if (lVar10 != 0) {
          bVar2 = (byte)(param_4 >> 7) | 0x80;
        }
        pbVar9[-1] = bVar2;
        param_4 = (int)param_4 >> 0xe;
        uVar8 = uVar8 - 2;
        pbVar9 = pbVar9 + -2;
        lVar10 = lVar10 + -2;
        uVar11 = (ulong)uVar6;
        uVar6 = uVar6 - 2;
      } while (0 < lVar7);
    }
    pbVar4 = pbVar4 + uVar1;
  }
  pbVar9 = pbVar4 + 1;
  if (param_2 == 2) {
    *pbVar9 = 0x80;
    *param_1 = pbVar4 + 2;
    return;
  }
  if ((int)param_3 < 0x80) {
    *pbVar9 = (byte)param_3;
    *param_1 = pbVar4 + 2;
    return;
  }
  uVar1 = 0;
  uVar8 = (ulong)param_3;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 + 1;
    uVar11 = uVar8 >> 8;
    uVar8 = uVar8 >> 8;
  } while ((int)uVar11 != 0);
  *pbVar9 = (byte)uVar1 | 0x80;
  uVar8 = uVar1 & 3;
  uVar11 = uVar5;
  if (uVar8 != 0) {
    do {
      uVar11 = uVar1;
      pbVar9[uVar11] = (byte)param_3;
      param_3 = (int)param_3 >> 8;
      uVar8 = uVar8 - 1;
      uVar1 = uVar11 - 1;
    } while (uVar8 != 0);
    uVar11 = uVar11 - 2;
  }
  if (2 < (uint)uVar5) {
    lVar10 = uVar11 + 1;
    do {
      lVar7 = lVar10 + -4;
      uVar6 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
      param_3 = (int)param_3 >> 0x1f;
      *(uint *)(pbVar9 + lVar10 + -3) = uVar6 >> 0x10 | uVar6 << 0x10;
      lVar10 = lVar7;
    } while (0 < lVar7);
  }
  *param_1 = pbVar9 + uVar5 + 2;
  return;
}


