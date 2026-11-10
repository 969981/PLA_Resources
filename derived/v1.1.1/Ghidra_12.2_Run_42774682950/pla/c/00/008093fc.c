/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008093fc; name: FUN_008093fc
 */


void FUN_008093fc(long param_1,long param_2)

{
  FUN_007f1e7c();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  memcpy((void *)(param_1 + 0x40),(void *)(param_2 + 0x40),0x40);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined2 *)(param_1 + 0x202) = *(undefined2 *)(param_2 + 0x202);
  return;
}


