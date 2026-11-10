/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00148ab0; name: FUN_00148ab0
 */


ulong FUN_00148ab0(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  ushort *puVar7;
  
  uVar2 = *(ushort *)(param_1 + 4);
  uVar3 = *(ushort *)(param_1 + 6);
  uVar4 = ((uint)uVar3 + (uint)uVar2) * (*param_3 >> 0xf);
  if (*param_2 < uVar4) {
    *param_3 = uVar4;
    *(ushort *)(param_1 + 4) = uVar2 + (short)(0x4000 - uVar2 >> 3);
    *(ushort *)(param_1 + 6) = uVar3 + (short)(0x4000 - uVar3 >> 6);
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
    uVar6 = 2;
  }
  else {
    *param_2 = *param_2 - uVar4;
    *param_3 = *param_3 - uVar4;
    *(ushort *)(param_1 + 4) = uVar2 - (uVar2 >> 3);
    *(ushort *)(param_1 + 6) = uVar3 - (uVar3 >> 6);
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
    uVar6 = 3;
  }
  puVar1 = (ushort *)(param_1 + uVar6 * 4);
  uVar2 = *puVar1;
  puVar7 = puVar1 + 1;
  uVar3 = *puVar7;
  uVar4 = ((uint)uVar3 + (uint)uVar2) * (*param_3 >> 0xf);
  if (uVar4 <= *param_2) {
    *param_2 = *param_2 - uVar4;
    *param_3 = *param_3 - uVar4;
    *puVar1 = uVar2 - (uVar2 >> 3);
    *puVar7 = uVar3 - (uVar3 >> 6);
    if (*(char *)((long)param_3 + 3) != '\0') {
      return (uVar6 & 1) << 1 | 1;
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
      return (uVar6 & 1) << 1 | 1;
    }
    return (uVar6 & 1) << 1 | 1;
  }
  *param_3 = uVar4;
  *puVar1 = uVar2 + (short)(0x4000 - uVar2 >> 3);
  *puVar7 = uVar3 + (short)(0x4000 - uVar3 >> 6);
  if (*(char *)((long)param_3 + 3) != '\0') {
    return (uVar6 & 1) << 1;
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
    return (uVar6 & 1) << 1;
  }
  return (uVar6 & 1) << 1;
}


