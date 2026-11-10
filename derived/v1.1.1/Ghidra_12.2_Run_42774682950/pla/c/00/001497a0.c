/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001497a0; name: FUN_001497a0
 */


ulong FUN_001497a0(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = *(ushort *)(param_1 + 2);
  uVar4 = (*param_3 >> 0xe) * (uint)uVar3;
  if (*param_2 < uVar4) {
    *param_3 = uVar4;
    *(ushort *)(param_1 + 2) = uVar3 + (short)(0x4000 - uVar3 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar5 = (byte *)*param_4;
      *param_4 = (long)(pbVar5 + 1);
      uVar4 = *param_2 | (uint)*pbVar5;
      *param_2 = uVar4;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar4 << 8;
        *param_3 = *param_3 << 8;
        pbVar5 = (byte *)*param_4;
        *param_4 = (long)(pbVar5 + 1);
        *param_2 = *param_2 | (uint)*pbVar5;
      }
    }
    lVar7 = 2;
  }
  else {
    *param_2 = *param_2 - uVar4;
    *param_3 = *param_3 - uVar4;
    *(ushort *)(param_1 + 2) = uVar3 - (uVar3 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar5 = (byte *)*param_4;
      *param_4 = (long)(pbVar5 + 1);
      uVar4 = *param_2 | (uint)*pbVar5;
      *param_2 = uVar4;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar4 << 8;
        *param_3 = *param_3 << 8;
        pbVar5 = (byte *)*param_4;
        *param_4 = (long)(pbVar5 + 1);
        lVar7 = 3;
        *param_2 = *param_2 | (uint)*pbVar5;
        goto LAB_001498e4;
      }
    }
    lVar7 = 3;
  }
LAB_001498e4:
  uVar3 = *(ushort *)(param_1 + lVar7 * 2);
  uVar4 = (*param_3 >> 0xe) * (uint)uVar3;
  if (*param_2 < uVar4) {
    *param_3 = uVar4;
    *(ushort *)(param_1 + lVar7 * 2) = uVar3 + (short)(0x4000 - uVar3 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar5 = (byte *)*param_4;
      *param_4 = (long)(pbVar5 + 1);
      uVar4 = *param_2 | (uint)*pbVar5;
      *param_2 = uVar4;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar4 << 8;
        *param_3 = *param_3 << 8;
        pbVar5 = (byte *)*param_4;
        *param_4 = (long)(pbVar5 + 1);
        uVar6 = 0;
        *param_2 = *param_2 | (uint)*pbVar5;
        goto LAB_00149a28;
      }
    }
    uVar6 = 0;
  }
  else {
    *param_2 = *param_2 - uVar4;
    *param_3 = *param_3 - uVar4;
    *(ushort *)(param_1 + lVar7 * 2) = uVar3 - (uVar3 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar5 = (byte *)*param_4;
      *param_4 = (long)(pbVar5 + 1);
      uVar4 = *param_2 | (uint)*pbVar5;
      *param_2 = uVar4;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar4 << 8;
        *param_3 = *param_3 << 8;
        pbVar5 = (byte *)*param_4;
        *param_4 = (long)(pbVar5 + 1);
        *param_2 = *param_2 | (uint)*pbVar5;
      }
    }
    uVar6 = 1;
  }
LAB_00149a28:
  uVar1 = lVar7 << 1;
  uVar2 = uVar6 | uVar1;
  uVar3 = *(ushort *)(param_1 + uVar2 * 2);
  uVar4 = (*param_3 >> 0xe) * (uint)uVar3;
  if (uVar4 <= *param_2) {
    *param_2 = *param_2 - uVar4;
    *param_3 = *param_3 - uVar4;
    *(ushort *)(param_1 + uVar2 * 2) = uVar3 - (uVar3 >> 6);
    if (*(char *)((long)param_3 + 3) != '\0') {
      return (uVar6 | uVar1 & 3) << 1 | 1;
    }
    *param_2 = *param_2 << 8;
    *param_3 = *param_3 << 8;
    pbVar5 = (byte *)*param_4;
    *param_4 = (long)(pbVar5 + 1);
    uVar4 = *param_2 | (uint)*pbVar5;
    *param_2 = uVar4;
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = uVar4 << 8;
      *param_3 = *param_3 << 8;
      pbVar5 = (byte *)*param_4;
      *param_4 = (long)(pbVar5 + 1);
      *param_2 = *param_2 | (uint)*pbVar5;
      return (uVar6 | uVar1 & 3) << 1 | 1;
    }
    return (uVar6 | uVar1 & 3) << 1 | 1;
  }
  *param_3 = uVar4;
  *(ushort *)(param_1 + uVar2 * 2) = uVar3 + (short)(0x4000 - uVar3 >> 6);
  if (*(char *)((long)param_3 + 3) != '\0') {
    return (uVar6 | uVar1 & 3) << 1;
  }
  *param_2 = *param_2 << 8;
  *param_3 = *param_3 << 8;
  pbVar5 = (byte *)*param_4;
  *param_4 = (long)(pbVar5 + 1);
  uVar4 = *param_2 | (uint)*pbVar5;
  *param_2 = uVar4;
  if (*(char *)((long)param_3 + 3) == '\0') {
    *param_2 = uVar4 << 8;
    *param_3 = *param_3 << 8;
    pbVar5 = (byte *)*param_4;
    *param_4 = (long)(pbVar5 + 1);
    *param_2 = *param_2 | (uint)*pbVar5;
    return (uVar6 | uVar1 & 3) << 1;
  }
  return (uVar6 | uVar1 & 3) << 1;
}


