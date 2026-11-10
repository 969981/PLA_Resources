/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ff548; name: FUN_025ff548
 */


void FUN_025ff548(long param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  switch(*param_2) {
  case 1:
    puVar1 = (undefined1 *)(param_1 + 0x250);
    break;
  case 2:
    puVar1 = (undefined1 *)(param_1 + 0x280);
    break;
  case 3:
    puVar1 = (undefined1 *)(param_1 + 0x2b0);
    break;
  case 4:
    puVar1 = (undefined1 *)(param_1 + 0x2e0);
    break;
  case 5:
    puVar1 = (undefined1 *)(param_1 + 0x310);
    break;
  case 6:
    puVar1 = (undefined1 *)(param_1 + 0x340);
    break;
  case 7:
    puVar1 = (undefined1 *)(param_1 + 0x370);
    break;
  case 8:
    puVar1 = (undefined1 *)(param_1 + 0x3a8);
    break;
  default:
    goto switchD_025ff56c_default;
  }
  *puVar1 = 1;
switchD_025ff56c_default:
  return;
}


