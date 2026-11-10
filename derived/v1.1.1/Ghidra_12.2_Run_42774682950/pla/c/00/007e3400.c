/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3400; name: FUN_007e3400
 */


void FUN_007e3400(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377418 + 0x10;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = (long)puVar1;
  memset(param_1 + 1,0,0x10);
  return;
}


