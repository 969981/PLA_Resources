/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347f10; name: _INIT_1756
 */


void _INIT_1756(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e898 & 1) == 0) {
    DAT_0444e888 = 0;
    DAT_0444e890 = 0;
    DAT_0444ac08 = &DAT_0444e878;
    DAT_0444e878 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e880 = &DAT_04362628;
    DAT_0444e898 = 1;
  }
  return;
}


