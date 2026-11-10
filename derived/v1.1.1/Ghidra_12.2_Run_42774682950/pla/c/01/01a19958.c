/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a19958; name: FUN_01a19958
 */


void FUN_01a19958(long param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0xedc8) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xece8) = *(undefined4 *)(param_1 + 0xecec);
  FUN_01a1656c(*(undefined4 *)(param_1 + 0x360),0xbf800000,0,param_1,0,0,param_2 & 1);
  return;
}


