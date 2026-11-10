/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b2b0; name: _INIT_1503
 */


void _INIT_1503(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fdd0 & 1) == 0) {
    DAT_0443fdc0 = 0;
    DAT_0443fdc8 = 0;
    DAT_0444ac08 = &DAT_0443fdb0;
    DAT_0443fdb0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fdb8 = &DAT_04343ca8;
    DAT_0443fdd0 = 1;
  }
  return;
}


