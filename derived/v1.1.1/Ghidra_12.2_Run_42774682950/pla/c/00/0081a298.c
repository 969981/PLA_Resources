/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081a298; name: FUN_0081a298
 */


void FUN_0081a298(long *param_1)

{
  undefined *puVar1;
  
  FUN_00807118();
  puVar1 = PTR_DAT_04377af8;
  *(undefined1 *)((long)param_1 + 10) = 10;
  *param_1 = (long)(puVar1 + 0x10);
  memset(param_1 + 0x15,0,0x20);
  return;
}


