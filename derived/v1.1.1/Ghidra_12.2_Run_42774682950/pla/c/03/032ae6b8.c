/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ae6b8; name: FUN_032ae6b8
 */


long FUN_032ae6b8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = DAT_04440870;
  while ((lVar2 != 0 && (uVar1 = FUN_032ae6fc(lVar2,param_1), (uVar1 & 1) == 0))) {
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}


