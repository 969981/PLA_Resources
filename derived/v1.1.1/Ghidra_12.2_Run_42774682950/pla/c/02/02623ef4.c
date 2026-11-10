/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02623ef4; name: FUN_02623ef4
 */


void FUN_02623ef4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_02623f40(param_2);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_02623f44(*param_1);
  return;
}


