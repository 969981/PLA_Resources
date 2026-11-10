/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244690; name: _INIT_948
 */


void _INIT_948(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439120 & 1) == 0) {
    DAT_04439110 = 0;
    DAT_04439118 = 0;
    DAT_0444ac08 = &DAT_04439100;
    DAT_04439100 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439108 = &DAT_04311fe8;
    DAT_04439120 = 1;
  }
  return;
}


