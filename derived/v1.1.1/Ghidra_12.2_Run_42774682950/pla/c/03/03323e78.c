/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03323e78; name: FUN_03323e78
 */


void FUN_03323e78(long *param_1)

{
  if ((param_1[3] != 0) && ((char)param_1[4] != '\0')) {
    (**(code **)(*param_1 + 0x30))(param_1);
    nn::fs::CloseFile(param_1[3]);
    param_1[3] = 0;
  }
  return;
}


