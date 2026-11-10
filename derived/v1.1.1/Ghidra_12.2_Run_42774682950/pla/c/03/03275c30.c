/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03275c30; name: _INIT_1404
 */


void _INIT_1404(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e528 & 1) == 0) {
    DAT_0443e518 = 0;
    DAT_0443e520 = 0;
    DAT_0444ac08 = &DAT_0443e508;
    DAT_0443e508 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e510 = &DAT_043374f0;
    DAT_0443e528 = 1;
  }
  return;
}


