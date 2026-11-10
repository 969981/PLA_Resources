/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242360; name: _INIT_877
 */


void _INIT_877(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438608 & 1) == 0) {
    DAT_044385f8 = 0;
    DAT_04438600 = 0;
    DAT_0444ac08 = &DAT_044385e8;
    DAT_044385e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044385f0 = &DAT_0430db50;
    DAT_04438608 = 1;
  }
  return;
}


