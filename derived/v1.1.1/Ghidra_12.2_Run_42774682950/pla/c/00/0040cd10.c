/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040cd10; name: FUN_0040cd10
 */


undefined8 FUN_0040cd10(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  iVar3 = (int)param_1[1];
  uVar1 = param_2 >> 5;
  if (iVar3 <= (int)uVar1) {
    if (*(int *)((long)param_1 + 0xc) <= (int)uVar1) {
      lVar2 = FUN_0040c320(param_1,uVar1 + 1);
      if (lVar2 == 0) {
        return 0;
      }
      iVar3 = (int)param_1[1];
    }
    if (iVar3 <= (int)uVar1) {
      memset((void *)(*param_1 + (long)iVar3 * 4),0,(ulong)(uVar1 - iVar3) * 4 + 4);
    }
    *(uint *)(param_1 + 1) = uVar1 + 1;
  }
  *(uint *)(*param_1 + (ulong)uVar1 * 4) =
       *(uint *)(*param_1 + (ulong)uVar1 * 4) | 1 << (ulong)(param_2 & 0x1f);
  return 1;
}


