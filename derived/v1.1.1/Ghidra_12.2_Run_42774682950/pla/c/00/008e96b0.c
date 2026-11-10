/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e96b0; name: FUN_008e96b0
 */


void FUN_008e96b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar1 = lVar2, lVar1 != param_2) {
    lVar2 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar2;
    if ((*(long *)(lVar1 + -0x10) != 0) && (*(int *)(lVar1 + -8) != -2)) {
      FUN_00155150(*(long *)(lVar1 + -0x10),0xfff0b9d8);
      lVar2 = *(long *)(param_1 + 0x10);
    }
  }
  return;
}


