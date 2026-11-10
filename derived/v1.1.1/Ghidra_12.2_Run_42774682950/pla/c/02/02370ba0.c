/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02370ba0; name: FUN_02370ba0
 */


void FUN_02370ba0(char *param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  std::string::append(param_1,(ulong)pbVar1);
  return;
}


