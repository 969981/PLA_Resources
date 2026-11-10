/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fc82c; name: FUN_001fc82c
 */


void FUN_001fc82c(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    FUN_002044d4(*(undefined8 *)(param_1 + 0xc80 + lVar2));
    *(undefined8 *)(param_1 + 0xc80 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x1f0);
  bVar1 = *(byte *)(param_1 + 0xf68);
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_002044d4(*(undefined8 *)(param_1 + 0xf50));
    bVar1 = *(byte *)(param_1 + 0xf68) & 0xfd;
    *(undefined8 *)(param_1 + 0xf50) = 0;
    *(byte *)(param_1 + 0xf68) = bVar1;
  }
  *(undefined8 *)(param_1 + 0xf50) = 0;
  if ((bVar1 & 1) != 0) {
    FUN_002044d4(*(undefined8 *)(param_1 + 0xf48));
    *(undefined8 *)(param_1 + 0xf48) = 0;
    *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
  }
  *(undefined8 *)(param_1 + 0xf48) = 0;
  FUN_001e3920(param_1 + 0x820);
  return;
}


