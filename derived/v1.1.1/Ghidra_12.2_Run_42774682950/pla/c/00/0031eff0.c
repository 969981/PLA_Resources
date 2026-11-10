/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031eff0; name: FUN_0031eff0
 */


void FUN_0031eff0(undefined8 param_1,byte *param_2)

{
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    FUN_0031ec90();
    return;
  }
  **(undefined1 **)(param_2 + 0x10) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  FUN_0031ec90();
  return;
}


