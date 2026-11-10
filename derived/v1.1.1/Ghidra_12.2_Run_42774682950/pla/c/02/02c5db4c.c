/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5db4c; name: FUN_02c5db4c
 */


undefined8 FUN_02c5db4c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_02c6bbd4(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 1:
    uVar1 = FUN_02c6bf10(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 2:
    uVar1 = FUN_02c6c24c(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 3:
    uVar1 = FUN_02c6c588(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 4:
    uVar1 = FUN_02c6c8c4(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 5:
    uVar1 = FUN_02c6cc00(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  default:
    return 0;
  }
}


