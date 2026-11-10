/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329adf0; name: _INIT_1484
 */


void _INIT_1484(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fad8 & 1) == 0) {
    DAT_0443fac8 = 0;
    DAT_0443fad0 = 0;
    DAT_0444ac08 = &DAT_0443fab8;
    DAT_0443fab8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fac0 = &DAT_043427b0;
    DAT_0443fad8 = 1;
  }
  return;
}


