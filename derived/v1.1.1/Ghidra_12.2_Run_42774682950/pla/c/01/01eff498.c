/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eff498; name: FUN_01eff498
 */


void FUN_01eff498(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  FUN_00d894e4();
  *param_1 = &PTR_LAB_04259528;
  param_1[9] = &PTR_LAB_04259598;
  param_1[10] = &PTR_LAB_042595e0;
  param_1[0xf] = *param_2;
  param_1[0x10] = param_2[1];
  param_1[0x11] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[0x12] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = PTR_DAT_0437a508 + 0x10;
  param_1[0x14] = 0;
  FUN_01effed8(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 4);
  return;
}


