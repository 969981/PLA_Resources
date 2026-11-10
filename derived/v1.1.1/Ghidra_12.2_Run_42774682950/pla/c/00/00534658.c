/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00534658; name: FUN_00534658
 */


void FUN_00534658(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  FUN_003d3bc0(*plVar1 + 0xd8,plVar1[1]);
  FUN_003c9ce0(*(undefined8 *)(*plVar1 + 0x10),"ConnectivityWatcherRemover");
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  return;
}


