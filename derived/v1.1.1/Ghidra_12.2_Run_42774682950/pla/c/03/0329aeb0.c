/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329aeb0; name: _INIT_1487
 */


void _INIT_1487(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fb50 & 1) == 0) {
    DAT_0443fb40 = 0;
    DAT_0443fb48 = 0;
    DAT_0444ac08 = &DAT_0443fb30;
    DAT_0443fb30 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fb38 = &DAT_04342a88;
    DAT_0443fb50 = 1;
  }
  return;
}


