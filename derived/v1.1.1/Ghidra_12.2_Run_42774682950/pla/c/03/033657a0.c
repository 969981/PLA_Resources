/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033657a0; name: _INIT_1866
 */


void _INIT_1866(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450378 & 1) == 0) {
    DAT_04450368 = 0;
    DAT_04450370 = 0;
    DAT_0444ac08 = &DAT_04450358;
    DAT_04450358 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450360 = &DAT_0436dc20;
    DAT_04450378 = 1;
  }
  return;
}


