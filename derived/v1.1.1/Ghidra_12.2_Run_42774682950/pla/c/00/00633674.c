/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00633674; name: FUN_00633674
 */


void FUN_00633674(uint param_1,byte *param_2,long param_3,byte *param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  size_t __n;
  
  if (param_4 < (byte *)*param_5) {
    uVar6 = param_1 << 3 | 2;
    if (0x7f < uVar6) goto LAB_006336d4;
LAB_006336ac:
    pbVar4 = param_4 + 1;
    *param_4 = (byte)uVar6;
  }
  else {
    param_4 = (byte *)FUN_00310ec4(param_5,param_4);
    uVar6 = param_1 << 3 | 2;
    if (uVar6 < 0x80) goto LAB_006336ac;
LAB_006336d4:
    *param_4 = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe == 0) {
      param_4[1] = (byte)(param_1 >> 4);
      pbVar4 = param_4 + 2;
    }
    else {
      pbVar4 = param_4 + 2;
      uVar6 = param_1 >> 4 & 0x1ffffff;
      do {
        pbVar5 = pbVar4;
        uVar3 = uVar6 >> 7;
        pbVar5[-1] = (byte)uVar6 | 0x80;
        pbVar4 = pbVar5 + 1;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar3;
      } while (uVar2 != 0);
      *pbVar5 = (byte)uVar3;
    }
  }
  uVar6 = (uint)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar6 = *(uint *)(param_2 + 8);
  }
  uVar6 = *(uint *)(param_3 + 0x18) + uVar6 +
          (((uint)LZCOUNT(*(uint *)(param_3 + 0x18) | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
          (((uint)LZCOUNT(uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
  if (uVar6 < 0x80) {
    pbVar5 = pbVar4 + 1;
    *pbVar4 = (byte)uVar6;
    if ((byte *)*param_5 <= pbVar5) goto LAB_006337f0;
LAB_00633784:
    bVar1 = *param_2;
    if ((bVar1 & 1) != 0) goto LAB_00633808;
LAB_0063378c:
    __n = (size_t)(bVar1 >> 1);
LAB_00633814:
    if ((*param_5 - (long)pbVar5) + 0xe < (long)__n) goto LAB_006338e0;
    *pbVar5 = 10;
    pbVar5[1] = (byte)__n;
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    memcpy(pbVar5 + 2,pbVar4,__n);
    pbVar4 = pbVar5 + 2 + __n;
    if (pbVar4 < (byte *)*param_5) goto LAB_00633864;
  }
  else {
    *pbVar4 = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe != 0) {
      pbVar5 = pbVar4 + 2;
      uVar6 = uVar6 >> 7;
      do {
        pbVar4 = pbVar5;
        uVar3 = uVar6 >> 7;
        pbVar4[-1] = (byte)uVar6 | 0x80;
        pbVar5 = pbVar4 + 1;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar3;
      } while (uVar2 != 0);
      *pbVar4 = (byte)uVar3;
      if ((byte *)*param_5 <= pbVar5) goto LAB_006337f0;
      goto LAB_00633784;
    }
    pbVar4[1] = (byte)(uVar6 >> 7);
    pbVar5 = pbVar4 + 2;
    if (pbVar5 < (byte *)*param_5) goto LAB_00633784;
LAB_006337f0:
    pbVar5 = (byte *)FUN_00310ec4(param_5,pbVar5);
    bVar1 = *param_2;
    if ((bVar1 & 1) == 0) goto LAB_0063378c;
LAB_00633808:
    __n = *(size_t *)(param_2 + 8);
    if ((long)__n < 0x80) goto LAB_00633814;
LAB_006338e0:
    pbVar4 = (byte *)FUN_00311488(param_5,1,param_2);
    if (pbVar4 < (byte *)*param_5) goto LAB_00633864;
  }
  pbVar4 = (byte *)FUN_00310ec4(param_5);
LAB_00633864:
  *pbVar4 = 0x12;
  uVar6 = *(uint *)(param_3 + 0x18);
  if (uVar6 < 0x80) {
    pbVar4[1] = (byte)uVar6;
    pbVar4 = pbVar4 + 2;
  }
  else {
    pbVar4[1] = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe == 0) {
      pbVar4[2] = (byte)(uVar6 >> 7);
      pbVar4 = pbVar4 + 3;
    }
    else {
      pbVar4 = pbVar4 + 3;
      uVar6 = uVar6 >> 7;
      do {
        pbVar5 = pbVar4;
        uVar3 = uVar6 >> 7;
        pbVar5[-1] = (byte)uVar6 | 0x80;
        pbVar4 = pbVar5 + 1;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar3;
      } while (uVar2 != 0);
      *pbVar5 = (byte)uVar3;
    }
  }
  FUN_002df6d0(param_3,pbVar4,param_5);
  return;
}


