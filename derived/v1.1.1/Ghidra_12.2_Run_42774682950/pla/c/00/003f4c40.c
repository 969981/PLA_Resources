/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f4c40; name: FUN_003f4c40
 */


undefined8 FUN_003f4c40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != 0) {
    uVar1 = FUN_002ebd80(param_1 * 0x18);
    *param_2 = uVar1;
    param_2[1] = param_1;
  }
  return 0;
}


