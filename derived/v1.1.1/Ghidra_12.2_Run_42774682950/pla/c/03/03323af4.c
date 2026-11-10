/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03323af4; name: FUN_03323af4
 */


void FUN_03323af4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04350288;
  if (param_1[3] != 0) {
    nn::fs::CloseFile();
  }
  FUN_03325024(param_1);
  return;
}


