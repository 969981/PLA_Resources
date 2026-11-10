/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b470; name: _INIT_1510
 */


void _INIT_1510(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fee8 & 1) == 0) {
    DAT_0443fed8 = 0;
    DAT_0443fee0 = 0;
    DAT_0444ac08 = &DAT_0443fec8;
    DAT_0443fec8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fed0 = &DAT_04344420;
    DAT_0443fee8 = 1;
  }
  return;
}


