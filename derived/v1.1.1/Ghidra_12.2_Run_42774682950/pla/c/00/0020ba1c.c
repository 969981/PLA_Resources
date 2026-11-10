/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020ba1c; name: FUN_0020ba1c
 */


undefined4 FUN_0020ba1c(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  switch(param_2) {
  case 1:
    puVar1 = (undefined4 *)(param_1 + 0x964);
    break;
  case 2:
    puVar1 = (undefined4 *)(param_1 + 0x968);
    break;
  case 3:
    puVar1 = (undefined4 *)(param_1 + 0x96c);
    break;
  case 4:
    puVar1 = (undefined4 *)(param_1 + 0x970);
    break;
  case 5:
    puVar1 = (undefined4 *)(param_1 + 0x974);
    break;
  case 6:
    puVar1 = (undefined4 *)(param_1 + 0x978);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  case 8:
    puVar1 = (undefined4 *)(param_1 + 0x97c);
  }
  return *puVar1;
}


