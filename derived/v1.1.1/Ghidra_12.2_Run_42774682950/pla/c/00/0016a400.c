/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016a400; name: FUN_0016a400
 */


void FUN_0016a400(long param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x20) == 0x121) {
    uVar1 = FUN_0016a460(param_1,param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0x121;
  return;
}


