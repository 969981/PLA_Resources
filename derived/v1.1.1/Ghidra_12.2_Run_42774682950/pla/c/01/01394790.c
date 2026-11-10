/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01394790; name: FUN_01394790
 */


void FUN_01394790(undefined8 *param_1,undefined8 param_2)

{
  param_1[6] = 0;
  *param_1 = &PTR_FUN_042092b8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = param_2;
  param_1[5] = 0x35e50d79435e50d;
  FUN_01394a50();
  return;
}


