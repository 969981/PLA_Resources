/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03277f90; name: _INIT_1443
 */


void _INIT_1443(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443eb40 & 1) == 0) {
    DAT_0443eb30 = 0;
    DAT_0443eb38 = 0;
    DAT_0444ac08 = &DAT_0443eb20;
    DAT_0443eb20 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443eb28 = &DAT_043399d0;
    DAT_0443eb40 = 1;
  }
  return;
}


