/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14df8; name: FUN_02a14df8
 */


void FUN_02a14df8(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x10) + 0x28);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[0x10] = 0x1f;
  return;
}


