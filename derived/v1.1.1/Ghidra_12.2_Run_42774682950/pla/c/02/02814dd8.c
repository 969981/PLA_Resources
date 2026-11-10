/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02814dd8; name: FUN_02814dd8
 */


void FUN_02814dd8(long param_1,uint param_2)

{
  long lVar1;
  
  param_1 = param_1 + (ulong)param_2 * 0x30;
  *(undefined4 *)(param_1 + 0x490) = 0xd;
  lVar1 = *(long *)(param_1 + 0x498);
  if (*(char *)(lVar1 + 0x7c) != '\0') {
    **(undefined2 **)(lVar1 + 0x58) = 0;
    *(undefined2 *)(lVar1 + 0x7a) = 0;
  }
  return;
}


