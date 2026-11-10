/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780a28; name: FUN_02780a28
 */


void FUN_02780a28(long param_1,void *param_2,ulong param_3,long param_4)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  __n = lVar3 - param_4;
  uVar2 = (long)param_2 + __n;
  if (uVar2 < param_3) {
    lVar1 = lVar3;
    do {
      FUN_02764fa4(param_1 + 0x18,lVar1,uVar2);
      uVar2 = uVar2 + 0x18;
      lVar1 = *(long *)(param_1 + 8) + 0x18;
      *(long *)(param_1 + 8) = lVar1;
    } while (uVar2 < param_3);
  }
  if (__n == 0) {
    return;
  }
  memmove((void *)(lVar3 - __n),param_2,__n);
  return;
}


