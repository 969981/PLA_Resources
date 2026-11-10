/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5e08; name: FUN_02ea5e08
 */


undefined8 FUN_02ea5e08(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x60) == (long *)0x0) {
    uVar1 = 2;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
    if ((int)uVar1 == 1) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
    }
  }
  return uVar1;
}


