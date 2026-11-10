/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085eb58; name: FUN_0085eb58
 */


void FUN_0085eb58(long param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_007f20bc();
  FUN_007ec6ec(auStack_30,param_1 + 0xb8,param_2 + 0xb8);
  memcpy((void *)(param_1 + 0x1e8),(void *)(param_2 + 0x1e8),0x200);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return;
}


