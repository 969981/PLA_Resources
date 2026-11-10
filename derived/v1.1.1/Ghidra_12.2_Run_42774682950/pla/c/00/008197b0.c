/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008197b0; name: FUN_008197b0
 */


int FUN_008197b0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint local_48 [2];
  
  memcpy(local_48,(void *)(param_3 + 0x5fc),4);
  if (*(int *)(param_3 + 0x5fc) == 0xffffff) {
    memset(local_48,0xff,4);
    local_48[0] = local_48[0] & 0xffffff;
  }
  if ((*(char *)(param_1 + 0x90) == -3) || (*(short *)(param_1 + 0x92) == 0)) {
    return 0;
  }
  lVar4 = 0;
  uVar5 = 0;
  iVar3 = 0;
  lVar2 = param_2;
  if (*(char *)(param_1 + 0x90) == '\0') goto LAB_00819874;
  do {
    param_2 = lVar2;
    if (((local_48[0] & 1 << (ulong)((uint)uVar5 & 0x1f)) != 0) &&
       (uVar1 = FUN_007f0ee4(*(long *)(param_1 + 0x80) + lVar4), (uVar1 & 1) != 0)) {
      param_2 = lVar2 + 0x20;
      FUN_007f0f88(lVar2,*(long *)(param_1 + 0x80) + lVar4);
      iVar3 = iVar3 + 1;
    }
LAB_00819874:
    do {
      uVar5 = uVar5 + 1;
      if (*(ushort *)(param_1 + 0x92) <= uVar5) {
        return iVar3;
      }
      lVar4 = lVar4 + 0x20;
      lVar2 = param_2;
    } while ((uint)uVar5 == (uint)*(byte *)(param_1 + 0x90));
  } while( true );
}


