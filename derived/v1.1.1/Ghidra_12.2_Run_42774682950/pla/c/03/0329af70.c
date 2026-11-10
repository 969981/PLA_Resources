/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329af70; name: _INIT_1490
 */


void _INIT_1490(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fbc8 & 1) == 0) {
    DAT_0443fbb8 = 0;
    DAT_0443fbc0 = 0;
    DAT_0444ac08 = &DAT_0443fba8;
    DAT_0443fba8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fbb0 = &DAT_04342e98;
    DAT_0443fbc8 = 1;
  }
  return;
}


