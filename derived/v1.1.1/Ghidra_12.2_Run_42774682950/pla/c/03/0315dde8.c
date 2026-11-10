/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315dde8; name: FUN_0315dde8
 */


void FUN_0315dde8(long param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + *param_2;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 2) = 0;
    } while (param_3 != iVar2);
  }
  if (0 < param_5) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + *param_4;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 2) = 0;
    } while (param_5 != iVar2);
  }
  DataMemoryBarrier(2,3);
  return;
}


