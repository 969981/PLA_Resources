/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239358; name: FUN_00239358
 */


void FUN_00239358(long *param_1)

{
  undefined *puVar1;
  
  FUN_0022776c();
  puVar1 = PTR_DAT_04372c40;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


