/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4658; name: FUN_02ee4658
 */


void FUN_02ee4658(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
    do {
      FUN_02ee4908(lVar1);
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  FUN_02ee5114((long *)(param_1 + 0x10));
  return;
}


