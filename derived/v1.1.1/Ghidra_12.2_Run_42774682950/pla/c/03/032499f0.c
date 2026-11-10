/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032499f0; name: _INIT_1200
 */


void _INIT_1200(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b880 & 1) == 0) {
    DAT_0443b870 = 0;
    DAT_0443b878 = 0;
    DAT_0444ac08 = &DAT_0443b860;
    DAT_0443b860 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b868 = &DAT_04321e28;
    DAT_0443b880 = 1;
  }
  return;
}


