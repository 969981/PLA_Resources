/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014a0c0; name: FUN_0014a0c0
 */


ulong FUN_0014a0c0(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 2);
  uVar2 = (*param_3 >> 0xe) * (uint)uVar1;
  if (*param_2 < uVar2) {
    *param_3 = uVar2;
    *(ushort *)(param_1 + 2) = uVar1 + (short)(0x4000 - uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        uVar5 = 0;
        *param_2 = *param_2 | (uint)*pbVar3;
        goto LAB_0014a20c;
      }
    }
    uVar5 = 0;
  }
  else {
    *param_2 = *param_2 - uVar2;
    *param_3 = *param_3 - uVar2;
    *(ushort *)(param_1 + 2) = uVar1 - (uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        uVar5 = 1;
        *param_2 = *param_2 | (uint)*pbVar3;
        goto LAB_0014a20c;
      }
    }
    uVar5 = 1;
  }
LAB_0014a20c:
  uVar4 = uVar5 | 2;
  uVar1 = *(ushort *)(param_1 + uVar4 * 2);
  uVar2 = (*param_3 >> 0xe) * (uint)uVar1;
  if (*param_2 < uVar2) {
    *param_3 = uVar2;
    *(ushort *)(param_1 + uVar4 * 2) = uVar1 + (short)(0x4000 - uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        *param_2 = *param_2 | (uint)*pbVar3;
      }
    }
    uVar4 = uVar5;
  }
  else {
    *param_2 = *param_2 - uVar2;
    *param_3 = *param_3 - uVar2;
    *(ushort *)(param_1 + uVar4 * 2) = uVar1 - (uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        *param_2 = *param_2 | (uint)*pbVar3;
      }
    }
  }
  uVar5 = uVar4 | 4;
  uVar1 = *(ushort *)(param_1 + uVar5 * 2);
  uVar2 = (*param_3 >> 0xe) * (uint)uVar1;
  if (*param_2 < uVar2) {
    *param_3 = uVar2;
    *(ushort *)(param_1 + uVar5 * 2) = uVar1 + (short)(0x4000 - uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        *param_2 = *param_2 | (uint)*pbVar3;
      }
    }
  }
  else {
    *param_2 = *param_2 - uVar2;
    *param_3 = *param_3 - uVar2;
    *(ushort *)(param_1 + uVar5 * 2) = uVar1 - (uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        *param_2 = *param_2 | (uint)*pbVar3;
      }
    }
    uVar4 = uVar4 | 4;
  }
  uVar5 = uVar4 | 8;
  uVar1 = *(ushort *)(param_1 + uVar5 * 2);
  uVar2 = (*param_3 >> 0xe) * (uint)uVar1;
  if (*param_2 < uVar2) {
    *param_3 = uVar2;
    *(ushort *)(param_1 + uVar5 * 2) = uVar1 + (short)(0x4000 - uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        *param_2 = *param_2 | (uint)*pbVar3;
      }
    }
  }
  else {
    *param_2 = *param_2 - uVar2;
    *param_3 = *param_3 - uVar2;
    *(ushort *)(param_1 + uVar5 * 2) = uVar1 - (uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        *param_2 = *param_2 | (uint)*pbVar3;
      }
    }
    uVar4 = uVar4 | 8;
  }
  uVar5 = uVar4 | 0x10;
  uVar1 = *(ushort *)(param_1 + uVar5 * 2);
  uVar2 = (*param_3 >> 0xe) * (uint)uVar1;
  if (*param_2 < uVar2) {
    *param_3 = uVar2;
    *(ushort *)(param_1 + uVar5 * 2) = uVar1 + (short)(0x4000 - uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      uVar2 = *param_2 | (uint)*pbVar3;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar3 = (byte *)*param_4;
        *param_4 = (long)(pbVar3 + 1);
        *param_2 = *param_2 | (uint)*pbVar3;
      }
    }
    return uVar4;
  }
  *param_2 = *param_2 - uVar2;
  *param_3 = *param_3 - uVar2;
  *(ushort *)(param_1 + uVar5 * 2) = uVar1 - (uVar1 >> 6);
  if (*(char *)((long)param_3 + 3) == '\0') {
    *param_2 = *param_2 << 8;
    *param_3 = *param_3 << 8;
    pbVar3 = (byte *)*param_4;
    *param_4 = (long)(pbVar3 + 1);
    uVar2 = *param_2 | (uint)*pbVar3;
    *param_2 = uVar2;
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = uVar2 << 8;
      *param_3 = *param_3 << 8;
      pbVar3 = (byte *)*param_4;
      *param_4 = (long)(pbVar3 + 1);
      *param_2 = *param_2 | (uint)*pbVar3;
    }
  }
  return uVar4 | 0x10;
}


