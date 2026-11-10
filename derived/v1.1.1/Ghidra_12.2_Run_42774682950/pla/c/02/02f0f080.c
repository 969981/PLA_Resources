/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0f080; name: FUN_02f0f080
 */


void FUN_02f0f080(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x3c) == 3) {
    uVar1 = 4;
  }
  else {
    if (*(int *)(param_2 + 0x3c) != 2) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  return;
}


