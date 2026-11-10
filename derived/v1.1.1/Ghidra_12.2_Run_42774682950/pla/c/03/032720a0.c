/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032720a0; name: _INIT_1277
 */


void _INIT_1277(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d150 & 1) == 0) {
    DAT_0443d140 = 0;
    DAT_0443d148 = 0;
    DAT_0444ac08 = &DAT_0443d130;
    DAT_0443d130 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d138 = &DAT_0432e908;
    DAT_0443d150 = 1;
  }
  return;
}


