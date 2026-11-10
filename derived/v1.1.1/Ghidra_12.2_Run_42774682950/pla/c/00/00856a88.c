/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00856a88; name: FUN_00856a88
 */


void FUN_00856a88(long *param_1)

{
  undefined *puVar1;
  
  FUN_008471b4();
  puVar1 = PTR_DAT_043780b8;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


