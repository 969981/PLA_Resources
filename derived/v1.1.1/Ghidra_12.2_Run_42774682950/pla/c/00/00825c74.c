/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825c74; name: FUN_00825c74
 */


void FUN_00825c74(long param_1)

{
  undefined1 auStack_50 [64];
  
  FUN_00850b20();
  FUN_0083fbc0(auStack_50);
  FUN_0083fc48(param_1 + 0x98,auStack_50);
  FUN_0083fc40(auStack_50);
  *(undefined2 *)(param_1 + 0x90) = 0xfdfd;
  *(undefined1 *)(param_1 + 0x362) = 0;
  *(undefined2 *)(param_1 + 0xf8) = 0xffff;
  return;
}


