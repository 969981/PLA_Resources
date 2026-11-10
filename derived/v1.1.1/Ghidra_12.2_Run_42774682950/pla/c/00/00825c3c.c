/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825c3c; name: FUN_00825c3c
 */


undefined8 FUN_00825c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00850a34(param_1,param_2,0,0xfd,param_3);
  *(undefined2 *)(param_1 + 0x90) = 0xfdfd;
  *(undefined1 *)(param_1 + 0x362) = 0;
  *(undefined2 *)(param_1 + 0xf8) = 0xffff;
  return 1;
}


