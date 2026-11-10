/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b5f0; name: _INIT_1516
 */


void _INIT_1516(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ffd8 & 1) == 0) {
    DAT_0443ffc8 = 0;
    DAT_0443ffd0 = 0;
    DAT_0444ac08 = &DAT_0443ffb8;
    DAT_0443ffb8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ffc0 = &DAT_04344c40;
    DAT_0443ffd8 = 1;
  }
  return;
}


