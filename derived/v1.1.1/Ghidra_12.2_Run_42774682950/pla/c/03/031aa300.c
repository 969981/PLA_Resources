/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031aa300; name: _INIT_824
 */


void _INIT_824(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434d98 & 1) == 0) {
    DAT_04434d88 = 0;
    DAT_04434d90 = 0;
    DAT_0444ac08 = &DAT_04434d78;
    DAT_04434d78 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434d80 = &DAT_042f0aa0;
    DAT_04434d98 = 1;
  }
  return;
}


