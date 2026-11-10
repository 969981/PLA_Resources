/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4a63c; name: FUN_02f4a63c
 */


undefined8 FUN_02f4a63c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(uint *)(param_1 + 0xd0) == 0) {
    return 0;
  }
  lVar1 = (ulong)*(uint *)(param_1 + 0xd0) << 4;
  plVar2 = (long *)(*(long *)(param_1 + 200) + 8);
  do {
    if (*(char *)(*plVar2 + 0xc) < '\0') {
      return 1;
    }
    lVar1 = lVar1 + -0x10;
    plVar2 = plVar2 + 2;
  } while (lVar1 != 0);
  return 0;
}


