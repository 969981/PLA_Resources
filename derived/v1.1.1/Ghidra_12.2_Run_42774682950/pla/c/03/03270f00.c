/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03270f00; name: _INIT_1259
 */


void _INIT_1259(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ce80 & 1) == 0) {
    DAT_0443ce70 = 0;
    DAT_0443ce78 = 0;
    DAT_0444ac08 = &DAT_0443ce60;
    DAT_0443ce60 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ce68 = &DAT_0432d328;
    DAT_0443ce80 = 1;
  }
  return;
}


