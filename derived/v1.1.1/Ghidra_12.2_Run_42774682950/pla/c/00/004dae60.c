/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dae60; name: FUN_004dae60
 */


undefined8 FUN_004dae60(int param_1,int param_2,int *param_3)

{
  if (param_2 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_1 == 0x1ffff) {
    if ((param_2 - 0xfefdU < 4) || (param_2 == 0x100)) goto LAB_004daea8;
  }
  else if ((param_1 == 0x10000) && (param_2 - 0x300U < 5)) {
LAB_004daea8:
    *param_3 = param_2;
    return 1;
  }
  return 0;
}


