/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032780d0; name: _INIT_1448
 */


void _INIT_1448(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ec08 & 1) == 0) {
    DAT_0443ebf8 = 0;
    DAT_0443ec00 = 0;
    DAT_0444ac08 = &DAT_0443ebe8;
    DAT_0443ebe8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ebf0 = &DAT_04339f88;
    DAT_0443ec08 = 1;
  }
  return;
}


