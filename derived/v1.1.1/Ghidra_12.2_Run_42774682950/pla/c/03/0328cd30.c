/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328cd30; name: _INIT_1471
 */


void _INIT_1471(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f1d8 & 1) == 0) {
    DAT_0443f1c8 = 0;
    DAT_0443f1d0 = 0;
    DAT_0444ac08 = &DAT_0443f1b8;
    DAT_0443f1b8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f1c0 = &DAT_0433d920;
    DAT_0443f1d8 = 1;
  }
  return;
}


