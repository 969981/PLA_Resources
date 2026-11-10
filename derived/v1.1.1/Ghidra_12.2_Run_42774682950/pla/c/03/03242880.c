/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242880; name: _INIT_890
 */


void _INIT_890(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438810 & 1) == 0) {
    DAT_04438800 = 0;
    DAT_04438808 = 0;
    DAT_0444ac08 = &DAT_044387f0;
    DAT_044387f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044387f8 = &DAT_0430e878;
    DAT_04438810 = 1;
  }
  return;
}


