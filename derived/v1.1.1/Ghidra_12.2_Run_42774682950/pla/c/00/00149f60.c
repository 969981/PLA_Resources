/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00149f60; name: FUN_00149f60
 */


long FUN_00149f60(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    uVar1 = *(ushort *)(param_1 + (long)(int)uVar5 * 2);
    lVar3 = (long)(int)uVar5;
    uVar2 = (*param_3 >> 0xe) * (uint)uVar1;
    if (uVar2 <= *param_2) break;
    *param_3 = uVar2;
    *(ushort *)(param_1 + lVar3 * 2) = uVar1 + (short)(0x4000 - uVar1 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar4 = (byte *)*param_4;
      *param_4 = (long)(pbVar4 + 1);
      uVar2 = *param_2 | (uint)*pbVar4;
      *param_2 = uVar2;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar2 << 8;
        *param_3 = *param_3 << 8;
        pbVar4 = (byte *)*param_4;
        *param_4 = (long)(pbVar4 + 1);
        *param_2 = *param_2 | (uint)*pbVar4;
      }
    }
    uVar5 = uVar5 + 1;
    if (0xc < uVar5) {
      return 0xd;
    }
  }
  *param_2 = *param_2 - uVar2;
  *param_3 = *param_3 - uVar2;
  *(ushort *)(param_1 + lVar3 * 2) = uVar1 - (uVar1 >> 6);
  if (*(char *)((long)param_3 + 3) != '\0') {
    return lVar3;
  }
  *param_2 = *param_2 << 8;
  *param_3 = *param_3 << 8;
  pbVar4 = (byte *)*param_4;
  *param_4 = (long)(pbVar4 + 1);
  uVar5 = *param_2 | (uint)*pbVar4;
  *param_2 = uVar5;
  if (*(char *)((long)param_3 + 3) == '\0') {
    *param_2 = uVar5 << 8;
    *param_3 = *param_3 << 8;
    pbVar4 = (byte *)*param_4;
    *param_4 = (long)(pbVar4 + 1);
    *param_2 = *param_2 | (uint)*pbVar4;
    return lVar3;
  }
  return lVar3;
}


