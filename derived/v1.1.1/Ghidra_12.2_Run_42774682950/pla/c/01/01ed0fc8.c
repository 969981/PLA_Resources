/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed0fc8; name: FUN_01ed0fc8
 */


void FUN_01ed0fc8(long param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00b640d4(param_2,param_1);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x10);
  return;
}


