/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b90c; name: FUN_0020b90c
 */


undefined8 FUN_0020b90c(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00205cf4();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xa0);
  }
  return uVar2;
}


