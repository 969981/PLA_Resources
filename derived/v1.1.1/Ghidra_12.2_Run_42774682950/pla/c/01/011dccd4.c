/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dccd4; name: FUN_011dccd4
 */


void FUN_011dccd4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  switch(param_3) {
  case 0:
    FUN_011d6b20(param_1 + 0x5b0,param_2,0);
    goto switchD_011dcd04_default;
  case 1:
    lVar1 = param_1 + 0x678;
    break;
  case 2:
    lVar1 = param_1 + 0x690;
    break;
  case 3:
    lVar1 = param_1 + 0x6a8;
    break;
  case 4:
    lVar1 = param_1 + 0x6c0;
    break;
  case 5:
    lVar1 = param_1 + 0x6d8;
    break;
  default:
    goto switchD_011dcd04_default;
  }
  FUN_011d5b98(lVar1);
switchD_011dcd04_default:
  *(undefined1 *)(param_1 + 0x6fa) = 1;
  return;
}


