/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131410; name: _INIT_756
 */


void _INIT_756(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434288 & 1) == 0) {
    DAT_04434278 = 0;
    DAT_04434280 = 0;
    DAT_0444ac08 = &DAT_04434268;
    DAT_04434268 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434270 = &DAT_042eb9c0;
    DAT_04434288 = 1;
  }
  return;
}


