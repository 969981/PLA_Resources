/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f5700; name: FUN_002f5700
 */


long FUN_002f5700(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0438f7f0 == &DAT_0438f7e8) {
    return 0;
  }
  lVar1 = 0;
  puVar2 = DAT_0438f7f0;
  do {
    puVar2 = (undefined8 *)puVar2[1];
    lVar1 = lVar1 + 1;
  } while (puVar2 != &DAT_0438f7e8);
  return lVar1;
}


