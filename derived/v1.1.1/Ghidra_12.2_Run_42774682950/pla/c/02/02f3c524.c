/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c524; name: FUN_02f3c524
 */


void FUN_02f3c524(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x30) == 0) {
    *(long *)(lVar1 + 0x30) = param_1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *(long *)(param_1 + 8) = *(long *)(lVar1 + 0x30);
    *(long *)(lVar1 + 0x30) = param_1;
  }
  *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
  return;
}


