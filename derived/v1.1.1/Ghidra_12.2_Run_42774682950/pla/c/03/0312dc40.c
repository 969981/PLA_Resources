/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312dc40; name: _INIT_541
 */


void _INIT_541(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432100 & 1) == 0) {
    DAT_044320f0 = 0;
    DAT_044320f8 = 0;
    DAT_0444ac08 = &DAT_044320e0;
    DAT_044320e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044320e8 = &DAT_042de000;
    DAT_04432100 = 1;
  }
  return;
}


