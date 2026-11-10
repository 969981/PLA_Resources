/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02913904; name: FUN_02913904
 */


bool FUN_02913904(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0xb8))
                    (plVar2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_3 + 8));
  return iVar1 == 1;
}


