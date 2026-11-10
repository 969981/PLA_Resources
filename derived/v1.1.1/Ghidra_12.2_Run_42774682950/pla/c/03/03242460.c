/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242460; name: _INIT_881
 */


void _INIT_881(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044386a8 & 1) == 0) {
    DAT_04438698 = 0;
    DAT_044386a0 = 0;
    DAT_0444ac08 = &DAT_04438688;
    DAT_04438688 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438690 = &DAT_0430e000;
    DAT_044386a8 = 1;
  }
  return;
}


