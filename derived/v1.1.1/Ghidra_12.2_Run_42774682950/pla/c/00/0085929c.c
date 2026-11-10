/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085929c; name: FUN_0085929c
 */


void FUN_0085929c(long param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_007f25f4();
  FUN_007ec6ec(auStack_30,param_1 + 0x10,param_2 + 0x10);
  FUN_007ec6ec(auStack_30,param_1 + 0x148,param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  return;
}


