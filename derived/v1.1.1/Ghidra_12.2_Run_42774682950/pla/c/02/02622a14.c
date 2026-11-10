/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02622a14; name: FUN_02622a14
 */


void FUN_02622a14(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_02622a58(param_1 + 10);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}


