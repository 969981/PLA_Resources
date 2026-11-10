/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f41358; name: FUN_02f41358
 */


void FUN_02f41358(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x310);
  if (*(long *)(lVar1 + 0x30) == 0) {
    *(long *)(lVar1 + 0x30) = param_1 + 0x300;
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  else {
    *(long *)(param_1 + 0x308) = *(long *)(lVar1 + 0x30);
    *(long *)(lVar1 + 0x30) = param_1 + 0x300;
  }
  *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
  FUN_02ecb224();
  return;
}


