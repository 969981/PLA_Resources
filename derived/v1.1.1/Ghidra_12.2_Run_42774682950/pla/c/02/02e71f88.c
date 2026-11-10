/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71f88; name: FUN_02e71f88
 */


undefined8 FUN_02e71f88(undefined4 param_1,long param_2)

{
  undefined1 auStack_14 [4];
  
  *(undefined4 *)(param_2 + 0x84) = param_1;
  FUN_02e44d58(&DAT_0440a0e8,*(undefined8 *)(*(long *)(param_2 + 8) + 0x48),auStack_14);
  return 1;
}


