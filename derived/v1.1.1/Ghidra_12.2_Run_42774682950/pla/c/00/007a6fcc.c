/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a6fcc; name: FUN_007a6fcc
 */


byte * FUN_007a6fcc(uint param_1,byte *param_2,byte *param_3,byte *param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  size_t sVar7;
  
  if (param_4 < (byte *)*param_5) {
    uVar6 = param_1 << 3 | 2;
    if (0x7f < uVar6) goto LAB_007a702c;
LAB_007a7004:
    pbVar4 = param_4 + 1;
    *param_4 = (byte)uVar6;
  }
  else {
    param_4 = (byte *)FUN_00310ec4(param_5,param_4);
    uVar6 = param_1 << 3 | 2;
    if (uVar6 < 0x80) goto LAB_007a7004;
LAB_007a702c:
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
        uVar2 = uVar6 >> 7;
        pbVar5[-1] = (byte)uVar6 | 0x80;
        pbVar4 = pbVar5 + 1;
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar2;
      } while (uVar3 != 0);
      *pbVar5 = (byte)uVar2;
    }
  }
  uVar6 = (uint)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar6 = *(uint *)(param_2 + 8);
  }
  uVar2 = (uint)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 8);
  }
  uVar6 = uVar6 + uVar2 + (((uint)LZCOUNT(uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
          (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
  if (uVar6 < 0x80) {
    pbVar5 = pbVar4 + 1;
    *pbVar4 = (byte)uVar6;
    if ((byte *)*param_5 <= pbVar5) goto LAB_007a7158;
LAB_007a70ec:
    bVar1 = *param_2;
    if ((bVar1 & 1) != 0) goto LAB_007a7170;
LAB_007a70f4:
    sVar7 = (size_t)(bVar1 >> 1);
LAB_007a717c:
    if ((*param_5 - (long)pbVar5) + 0xe < (long)sVar7) goto LAB_007a71dc;
    *pbVar5 = 10;
    pbVar5[1] = (byte)sVar7;
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    memcpy(pbVar5 + 2,pbVar4,sVar7);
    pbVar4 = pbVar5 + 2 + sVar7;
    if (pbVar4 < (byte *)*param_5) goto LAB_007a71cc;
LAB_007a71fc:
    pbVar4 = (byte *)FUN_00310ec4(param_5,pbVar4);
    bVar1 = *param_3;
    if ((bVar1 & 1) == 0) goto LAB_007a71d4;
LAB_007a7214:
    sVar7 = *(size_t *)(param_3 + 8);
    if (0x7f < (long)sVar7) goto LAB_007a7274;
  }
  else {
    *pbVar4 = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe != 0) {
      pbVar5 = pbVar4 + 2;
      uVar6 = uVar6 >> 7;
      do {
        pbVar4 = pbVar5;
        uVar2 = uVar6 >> 7;
        pbVar4[-1] = (byte)uVar6 | 0x80;
        pbVar5 = pbVar4 + 1;
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar2;
      } while (uVar3 != 0);
      *pbVar4 = (byte)uVar2;
      if ((byte *)*param_5 <= pbVar5) goto LAB_007a7158;
      goto LAB_007a70ec;
    }
    pbVar4[1] = (byte)(uVar6 >> 7);
    pbVar5 = pbVar4 + 2;
    if (pbVar5 < (byte *)*param_5) goto LAB_007a70ec;
LAB_007a7158:
    pbVar5 = (byte *)FUN_00310ec4(param_5,pbVar5);
    bVar1 = *param_2;
    if ((bVar1 & 1) == 0) goto LAB_007a70f4;
LAB_007a7170:
    sVar7 = *(size_t *)(param_2 + 8);
    if ((long)sVar7 < 0x80) goto LAB_007a717c;
LAB_007a71dc:
    pbVar4 = (byte *)FUN_00311488(param_5,1,param_2);
    if ((byte *)*param_5 <= pbVar4) goto LAB_007a71fc;
LAB_007a71cc:
    bVar1 = *param_3;
    if ((bVar1 & 1) != 0) goto LAB_007a7214;
LAB_007a71d4:
    sVar7 = (size_t)(bVar1 >> 1);
  }
  if ((long)sVar7 <= (*param_5 - (long)pbVar4) + 0xe) {
    *pbVar4 = 0x12;
    pbVar4[1] = (byte)sVar7;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    memcpy(pbVar4 + 2,pbVar5,sVar7);
    return pbVar4 + 2 + sVar7;
  }
LAB_007a7274:
  pbVar4 = (byte *)FUN_00311488(param_5,2,param_3);
  return pbVar4;
}


