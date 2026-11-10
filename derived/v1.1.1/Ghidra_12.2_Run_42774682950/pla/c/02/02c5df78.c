/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5df78; name: FUN_02c5df78
 */


undefined1 FUN_02c5df78(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_02c6df60(*(undefined8 *)(param_1 + 0x98));
    break;
  case 1:
    uVar1 = FUN_02c6e298(*(undefined8 *)(param_1 + 0x98));
    break;
  case 2:
    uVar1 = FUN_02c6e5d0(*(undefined8 *)(param_1 + 0x98));
    break;
  case 3:
    uVar1 = FUN_02c6ec40(*(undefined8 *)(param_1 + 0x98));
    break;
  case 4:
    uVar1 = FUN_02c6ef78(*(undefined8 *)(param_1 + 0x98));
    break;
  case 5:
    uVar1 = FUN_02c6e908(*(undefined8 *)(param_1 + 0x98));
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


