/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fae1c; name: FUN_029fae1c
 */


void FUN_029fae1c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x26;
  switch(param_4) {
  case 4:
    uVar1 = 0x27;
    break;
  case 5:
    break;
  default:
    uVar1 = 0;
    break;
  case 0xb:
    uVar1 = 0x28;
    break;
  case 0xc:
    uVar1 = 0x29;
    break;
  case 0x30:
    uVar1 = 0x2f;
  }
  FUN_029719b8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x17a0) + 0x38),param_2,param_3
               ,uVar1);
  return;
}


