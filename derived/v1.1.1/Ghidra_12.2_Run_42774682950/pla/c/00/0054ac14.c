/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054ac14; name: FUN_0054ac14
 */


bool FUN_0054ac14(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  while (lVar1 = lVar2, lVar1 != 0) {
    param_1 = lVar1;
    lVar2 = *(long *)(lVar1 + 0x30);
  }
  lVar1 = FUN_0054b2a0(param_1 + 0x28,0xfffffffffffffc18,0,*(undefined8 *)(param_1 + 0x18));
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
  return lVar2 >> 1 < lVar1;
}


