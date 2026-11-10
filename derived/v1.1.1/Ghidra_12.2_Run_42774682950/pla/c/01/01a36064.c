/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a36064; name: FUN_01a36064
 */


void FUN_01a36064(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0xe2d0);
  if ((*(char *)(lVar1 + 8) != '\0') && (auVar2 = FUN_01a4b7e0(), *(char *)(lVar1 + 8) != '\0')) {
    *(undefined1 (*) [16])(lVar1 + 0x20) = auVar2;
  }
  return;
}


