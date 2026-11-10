/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03270f40; name: _INIT_1260
 */


void _INIT_1260(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443cea8 & 1) == 0) {
    DAT_0443ce98 = 0;
    DAT_0443cea0 = 0;
    DAT_0444ac08 = &DAT_0443ce88;
    DAT_0443ce88 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ce90 = &DAT_0432d4c0;
    DAT_0443cea8 = 1;
  }
  return;
}


