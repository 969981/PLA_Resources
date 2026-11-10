/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e8b84; name: FUN_008e8b84
 */


void FUN_008e8b84(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  FUN_00150260(param_2,param_3);
  uVar1 = FUN_00155070(param_2,0xfff0b9d8);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}


