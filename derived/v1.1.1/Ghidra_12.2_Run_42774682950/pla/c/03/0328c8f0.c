/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328c8f0; name: _INIT_1454
 */


void _INIT_1454(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ef30 & 1) == 0) {
    DAT_0443ef20 = 0;
    DAT_0443ef28 = 0;
    DAT_0444ac08 = &DAT_0443ef10;
    DAT_0443ef10 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ef18 = &DAT_0433c590;
    DAT_0443ef30 = 1;
  }
  return;
}


