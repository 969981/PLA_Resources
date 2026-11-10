/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bef90; name: FUN_031bef90
 */


void FUN_031bef90(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_0332ba4c(lVar1);
    FUN_032cf640(lVar1,0x38);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_032d647c();
  return;
}


