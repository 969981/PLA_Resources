/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249cf0; name: _INIT_1212
 */


void _INIT_1212(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ba60 & 1) == 0) {
    DAT_0443ba50 = 0;
    DAT_0443ba58 = 0;
    DAT_0444ac08 = &DAT_0443ba40;
    DAT_0443ba40 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ba48 = &DAT_04322b48;
    DAT_0443ba60 = 1;
  }
  return;
}


