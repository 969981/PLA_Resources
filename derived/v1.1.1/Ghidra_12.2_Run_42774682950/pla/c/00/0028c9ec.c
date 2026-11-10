/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028c9ec; name: FUN_0028c9ec
 */


void FUN_0028c9ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00271670();
  FUN_0028d3b4(param_1 + 0x38,param_2,uVar1);
  uVar1 = FUN_00271670();
  FUN_0028d3b4(param_1 + 0x1e8,param_2,uVar1);
  if (*(int *)(param_1 + 4) == 3) {
    uVar1 = FUN_00271670();
    FUN_0028d3b4(param_1 + 0x398,param_2,uVar1);
    return;
  }
  return;
}


