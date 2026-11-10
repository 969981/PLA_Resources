/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d91d0; name: FUN_005d91d0
 */


void FUN_005d91d0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*(char *)(*plVar1 + 0x1b1) == '\0') {
    FUN_0050d560(*plVar1 + 0x48,plVar1 + 1);
    *(undefined1 *)(*plVar1 + 0x40) = 1;
    FUN_005d8360();
  }
  FUN_0050ce98(plVar1 + 1);
  FUN_005d7fec(plVar1);
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  return;
}


