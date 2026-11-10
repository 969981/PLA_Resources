/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dcd74; name: FUN_011dcd74
 */


void FUN_011dcd74(long param_1,int param_2)

{
  long lVar1;
  
  FUN_011d5e34(param_1 + 0x678,*(undefined1 *)(param_1 + 0x6f9));
  FUN_011d5e34(param_1 + 0x690,*(undefined1 *)(param_1 + 0x6f9));
  FUN_011d5e34(param_1 + 0x6a8,*(undefined1 *)(param_1 + 0x6f9));
  FUN_011d5e34(param_1 + 0x6c0,*(undefined1 *)(param_1 + 0x6f9));
  FUN_011d5e34(param_1 + 0x6d8,*(undefined1 *)(param_1 + 0x6f9));
  lVar1 = param_1 + 0x678;
  if (param_2 != 1) {
    switch(param_2) {
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
      return;
    }
  }
  FUN_011d5d28(lVar1,*(undefined1 *)(param_1 + 0x6f9));
  return;
}


