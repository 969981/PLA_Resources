/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364dd0; name: _INIT_1828
 */


void _INIT_1828(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fd88 & 1) == 0) {
    DAT_0444fd78 = 0;
    DAT_0444fd80 = 0;
    DAT_0444ac08 = &DAT_0444fd68;
    DAT_0444fd68 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fd70 = &DAT_0436b068;
    DAT_0444fd88 = 1;
  }
  return;
}


