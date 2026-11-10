/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f27b60; name: FUN_01f27b60
 */


void FUN_01f27b60(long param_1,void *param_2,ulong param_3,long param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  __n = lVar2 - param_4;
  uVar3 = (long)param_2 + __n;
  if (uVar3 < param_3) {
    lVar1 = lVar2;
    do {
      FUN_01f274c8(param_1 + 0x18,lVar1,uVar3);
      uVar3 = uVar3 + 0x10;
      lVar1 = *(long *)(param_1 + 8) + 0x10;
      *(long *)(param_1 + 8) = lVar1;
    } while (uVar3 < param_3);
  }
  if (__n == 0) {
    return;
  }
  memmove((void *)(lVar2 + ((long)__n >> 4) * -0x10),param_2,__n);
  return;
}


