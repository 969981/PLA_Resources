/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b48c8; name: FUN_013b48c8
 */


void FUN_013b48c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar2 = param_1[2];
    param_1[2] = lVar2 + -1;
    lVar1 = *param_1;
    while (lVar2 != 0) {
      FUN_013b4920(param_1[1],lVar1);
      lVar2 = param_1[2];
      param_1[2] = lVar2 + -1;
      lVar1 = lVar1 + 0x90;
    }
  }
  return;
}


