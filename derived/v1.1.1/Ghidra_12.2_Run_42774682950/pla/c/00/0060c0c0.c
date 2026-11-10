/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060c0c0; name: FUN_0060c0c0
 */


long FUN_0060c0c0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  do {
    if (plVar1 == *(long **)(param_1 + 0x30)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(ushort *)(lVar2 + 8) != param_2);
  return lVar2;
}


