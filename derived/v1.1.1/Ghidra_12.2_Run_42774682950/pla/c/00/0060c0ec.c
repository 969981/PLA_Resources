/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060c0ec; name: FUN_0060c0ec
 */


int FUN_0060c0ec(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  do {
    if (plVar1 == *(long **)(param_1 + 0x30)) {
      return 600;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(short *)(lVar2 + 8) != 9);
  if (lVar2 == 0) {
    return 600;
  }
  return (uint)*(byte *)(lVar2 + 0xd) + (uint)*(byte *)(lVar2 + 0xc) * 100;
}


