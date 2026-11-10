/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0288d7e0; name: FUN_0288d7e0
 */


void FUN_0288d7e0(undefined8 *param_1)

{
  FUN_0288d82c();
  *param_1 = &PTR_LAB_04271a18;
  param_1[9] = &PTR_LAB_04271a48;
  nn::os::InitializeLightEvent((long)param_1 + 0x54,0,1);
  param_1[0xc] = 0;
  FUN_0288da7c(param_1 + 0xd);
  return;
}


