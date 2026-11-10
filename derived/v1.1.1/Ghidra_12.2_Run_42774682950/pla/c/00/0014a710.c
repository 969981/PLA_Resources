/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014a710; name: FUN_0014a710
 */


ulong FUN_0014a710(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  byte *pbVar7;
  ulong uVar8;
  
  lVar5 = FUN_0014b250();
  if (lVar5 == 0) {
    return 1;
  }
  puVar6 = (ushort *)(param_1 + (lVar5 + -1) * 2 + 0x40);
  uVar2 = *puVar6;
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *puVar6 = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = 0;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *puVar6 = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = 1;
  }
  if (lVar5 == 1) {
    return uVar8 | 2;
  }
  puVar6 = (ushort *)(param_1 + uVar8 * 0x40 + (lVar5 + -1) * 2 + 0x80);
  uVar2 = *puVar6;
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *puVar6 = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
        uVar8 = uVar8 << 1 | 4;
        goto joined_r0x0014aa18;
      }
    }
    uVar8 = uVar8 << 1 | 4;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *puVar6 = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1 | 5;
  }
joined_r0x0014aa18:
  if (lVar5 != 2) {
    uVar3 = *param_3 >> (ulong)((int)lVar5 - 2U & 0x1f);
    *param_3 = uVar3;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *param_2 / uVar3;
    }
    uVar3 = *param_2 - uVar4 * uVar3;
    *param_2 = uVar3;
    cVar1 = *(char *)((long)param_3 + 3);
    while (cVar1 == '\0') {
      *param_2 = uVar3 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      cVar1 = *(char *)((long)param_3 + 3);
    }
    uVar8 = uVar8 << (lVar5 - 2U & 0x3f) | (ulong)uVar4;
  }
  return uVar8;
}


