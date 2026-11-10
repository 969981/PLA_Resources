/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57860; name: FUN_02e57860
 */


void FUN_02e57860(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 1) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 1) * 0x50;
    lVar1 = *param_1 + 0x40;
    do {
      FUN_02e437f0(lVar1);
      FUN_02e437f0(lVar1);
      lVar2 = lVar2 + -0x50;
      lVar1 = lVar1 + 0x50;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


