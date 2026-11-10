/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01349a0c; name: FUN_01349a0c
 */


void FUN_01349a0c(long param_1,uint param_2)

{
  FUN_01349a84();
  FUN_00d42690(param_1,1,1);
  *(undefined8 *)(param_1 + 0x5b4) = 1;
  *(undefined1 *)(param_1 + 0x98c) = 1;
  FUN_01349acc(param_1,0,param_1 + 0x980,0);
  FUN_01349b74(param_1,param_2 & 1);
  FUN_0131b918(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x78),0);
  return;
}


