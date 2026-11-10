/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085a944; name: FUN_0085a944
 */


void FUN_0085a944(long *param_1)

{
  if (param_1[0x273] != 0) {
    (**(code **)(*param_1 + 0x230))(param_1);
    param_1[0x273] = 0;
  }
  if (param_1[0x274] != 0) {
    (**(code **)(*param_1 + 0x220))(param_1);
    param_1[0x274] = 0;
  }
  param_1[0xee] = 0;
  return;
}


