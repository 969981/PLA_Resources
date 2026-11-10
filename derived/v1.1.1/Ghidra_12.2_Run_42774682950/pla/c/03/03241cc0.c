/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241cc0; name: _INIT_851
 */


void _INIT_851(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044381f8 & 1) == 0) {
    DAT_044381e8 = 0;
    DAT_044381f0 = 0;
    DAT_0444ac08 = &DAT_044381d8;
    DAT_044381d8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044381e0 = &DAT_0430c138;
    DAT_044381f8 = 1;
  }
  return;
}


