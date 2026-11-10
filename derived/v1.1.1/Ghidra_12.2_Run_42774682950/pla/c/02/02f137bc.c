/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f137bc; name: FUN_02f137bc
 */


void FUN_02f137bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_02f59e30(0,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_042abe50;
    puVar1[1] = 0;
  }
  return;
}


