/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014b250; name: FUN_0014b250
 */


ulong FUN_0014b250(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  
  iVar3 = 5;
  uVar4 = 1;
  do {
    while( true ) {
      uVar1 = *(ushort *)(param_1 + uVar4 * 2);
      uVar2 = (*param_3 >> 0xe) * (uint)uVar1;
      if (*param_2 < uVar2) break;
      *param_2 = *param_2 - uVar2;
      *param_3 = *param_3 - uVar2;
      *(ushort *)(param_1 + uVar4 * 2) = uVar1 - (uVar1 >> 6);
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = *param_2 << 8;
        *param_3 = *param_3 << 8;
        pbVar5 = (byte *)*param_4;
        *param_4 = (long)(pbVar5 + 1);
        uVar2 = *param_2 | (uint)*pbVar5;
        *param_2 = uVar2;
        if (*(char *)((long)param_3 + 3) == '\0') {
          *param_2 = uVar2 << 8;
          *param_3 = *param_3 << 8;
          pbVar5 = (byte *)*param_4;
          *param_4 = (long)(pbVar5 + 1);
          *param_2 = *param_2 | (uint)*pbVar5;
        }
        uVar4 = uVar4 << 1 | 1;
      }
      else {
        uVar4 = uVar4 << 1 | 1;
      }
joined_r0x0014b3e0:
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) goto LAB_0014b414;
    }
    *param_3 = uVar2;
    *(ushort *)(param_1 + uVar4 * 2) = uVar1 + (short)(0x4000 - uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) != '\0') {
joined_r0x0014b3c8:
      uVar4 = uVar4 << 1;
      goto joined_r0x0014b3e0;
    }
    *param_2 = *param_2 << 8;
    *param_3 = *param_3 << 8;
    pbVar5 = (byte *)*param_4;
    *param_4 = (long)(pbVar5 + 1);
    uVar2 = *param_2 | (uint)*pbVar5;
    *param_2 = uVar2;
    if (*(char *)((long)param_3 + 3) != '\0') goto joined_r0x0014b3c8;
    *param_2 = uVar2 << 8;
    *param_3 = *param_3 << 8;
    pbVar5 = (byte *)*param_4;
    *param_4 = (long)(pbVar5 + 1);
    *param_2 = *param_2 | (uint)*pbVar5;
    uVar4 = uVar4 << 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_0014b414:
  return uVar4 & 0x1f;
}


