/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a147e8; name: FUN_02a147e8
 */


void FUN_02a147e8(long param_1,byte param_2,char param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  if ((*(char *)(lVar1 + 0x2dc) != param_3) && (*(char *)(lVar1 + 0x2dd) != param_3)) {
    *(char *)(lVar1 + 0x2de) = param_3;
    *(undefined4 *)(lVar1 + 0x2e0) = param_4;
  }
  return;
}


