/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364ad0; name: _INIT_1816
 */


void _INIT_1816(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fba8 & 1) == 0) {
    DAT_0444fb98 = 0;
    DAT_0444fba0 = 0;
    DAT_0444ac08 = &DAT_0444fb88;
    DAT_0444fb88 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fb90 = &DAT_0436a408;
    DAT_0444fba8 = 1;
  }
  return;
}


