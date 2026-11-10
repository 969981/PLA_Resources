/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5dc80; name: FUN_02c5dc80
 */


undefined8 FUN_02c5dc80(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_02c69e70(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 1:
    uVar1 = FUN_02c6a1a8(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 2:
    uVar1 = FUN_02c6a4e0(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 3:
    uVar1 = FUN_02c6a818(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 4:
    uVar1 = FUN_02c6ab50(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 5:
    uVar1 = FUN_02c6ae88(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  default:
    return 0;
  }
}


