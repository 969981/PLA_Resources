/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dcc00; name: FUN_011dcc00
 */


void FUN_011dcc00(long param_1,int param_2)

{
  *(bool *)(param_1 + 0x6f8) = param_2 == 1;
  *(uint *)(param_1 + 0x6fc) = (uint)(param_2 == 1);
  FUN_011dcc38();
  FUN_011d6350(param_1 + 0x638,0);
  return;
}


