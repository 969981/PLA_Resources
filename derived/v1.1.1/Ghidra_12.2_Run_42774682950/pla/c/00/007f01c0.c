/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f01c0; name: FUN_007f01c0
 */


void FUN_007f01c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}


