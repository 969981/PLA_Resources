/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00204448; name: FUN_00204448
 */


undefined8 FUN_00204448(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_strdup_043727e0;
  puVar3 = PTR_realloc_043727d8;
  puVar2 = PTR_free_043727d0;
  puVar1 = PTR_DAT_043727c0;
  *(undefined **)PTR_DAT_043727c0 = PTR_malloc_043727c8;
  *(undefined **)(puVar1 + 8) = puVar2;
  puVar2 = PTR_calloc_043727e8;
  *(undefined **)(puVar1 + 0x10) = puVar3;
  *(undefined **)(puVar1 + 0x18) = puVar4;
  *(undefined **)(puVar1 + 0x20) = puVar2;
  return 1;
}


