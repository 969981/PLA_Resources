/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325bac4; name: FUN_0325bac4
 */


void FUN_0325bac4(long param_1,long param_2,uint param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      iVar1 = FUN_0325ba4c(param_1,param_2);
      if ((iVar1 != 0) != (*(char *)(param_1 + 0x60) != '\0')) {
        lVar2 = (uVar3 >> 5 & 0x7ffffff) * 4;
        *(uint *)(*param_4 + lVar2) = *(uint *)(*param_4 + lVar2) | 1 << (ulong)((uint)uVar3 & 0x1f)
        ;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 0x10;
    } while (param_3 != uVar3);
  }
  return;
}


