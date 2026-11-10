/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03306908; name: FUN_03306908
 */


void FUN_03306908(long param_1)

{
  undefined1 auStack_38 [16];
  ulong local_28;
  
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_032dd9e8(auStack_38,param_1);
    FUN_032e6310(auStack_38,1,1);
    if ((local_28 & 1) != 0) {
      FUN_032e0c40(local_28 & 0xfffffffffffffffe);
    }
  }
  FUN_0330696c(param_1);
  return;
}


