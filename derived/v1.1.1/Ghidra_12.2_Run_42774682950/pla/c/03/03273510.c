/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03273510; name: _INIT_1321
 */


void _INIT_1321(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d830 & 1) == 0) {
    DAT_0443d820 = 0;
    DAT_0443d828 = 0;
    DAT_0444ac08 = &DAT_0443d810;
    DAT_0443d810 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d818 = &DAT_04331ca8;
    DAT_0443d830 = 1;
  }
  return;
}


