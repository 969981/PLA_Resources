/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153520; name: FUN_00153520
 */


long FUN_00153520(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_0016da60();
  plVar2 = *(long **)(param_1 + 0x10);
  *plVar2 = lVar1;
  *(undefined4 *)(plVar2 + 1) = 0x47;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0015dc70(param_1);
  }
  return lVar1 + 0x28;
}


