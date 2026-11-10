/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364e50; name: _INIT_1830
 */


void _INIT_1830(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fdd8 & 1) == 0) {
    DAT_0444fdc8 = 0;
    DAT_0444fdd0 = 0;
    DAT_0444ac08 = &DAT_0444fdb8;
    DAT_0444fdb8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fdc0 = &DAT_0436b228;
    DAT_0444fdd8 = 1;
  }
  return;
}


