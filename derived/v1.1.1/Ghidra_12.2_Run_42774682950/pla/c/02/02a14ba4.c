/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14ba4; name: FUN_02a14ba4
 */


void FUN_02a14ba4(long param_1,byte param_2,undefined2 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  *(undefined2 *)(lVar1 + 0x496) = param_3;
  *(undefined8 *)(lVar1 + 0xe0) = 0xf8;
  *(undefined1 *)(lVar1 + 0x242) = 0;
  return;
}


