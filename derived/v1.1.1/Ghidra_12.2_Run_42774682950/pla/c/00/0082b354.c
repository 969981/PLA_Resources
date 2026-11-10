/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b354; name: FUN_0082b354
 */


void FUN_0082b354(long param_1,undefined4 *param_2)

{
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 0x45c) = *param_2;
  memcpy((void *)(param_1 + 0x460),param_2 + 1,0x10);
  FUN_00854ad8(auStack_20,*(undefined8 *)PTR_DAT_043773c0,param_1 + 0x45c);
  return;
}


