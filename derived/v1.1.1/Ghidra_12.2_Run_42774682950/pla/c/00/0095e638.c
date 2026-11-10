/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095e638; name: FUN_0095e638
 */


void FUN_0095e638(long param_1,void *param_2,ulong param_3,long param_4)

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
      FUN_0095e7c0(param_1 + 0x18,lVar1,uVar3);
      uVar3 = uVar3 + 8;
      lVar1 = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 8) = lVar1;
    } while (uVar3 < param_3);
  }
  if (__n == 0) {
    return;
  }
  memmove((void *)(lVar2 + ((long)__n >> 3) * -8),param_2,__n);
  return;
}


