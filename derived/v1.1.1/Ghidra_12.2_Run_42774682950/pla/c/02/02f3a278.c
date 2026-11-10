/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3a278; name: FUN_02f3a278
 */


void FUN_02f3a278(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0xf8);
  if ((plVar1 != (long *)0x0) && ((int)plVar1[1] != 0)) {
    lVar2 = *plVar1;
    do {
      FUN_02ed53a8(*(undefined4 *)(lVar2 + 4));
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x18);
  }
  return;
}


