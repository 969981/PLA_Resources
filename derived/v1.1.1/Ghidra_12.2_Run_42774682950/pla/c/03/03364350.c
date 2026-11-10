/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364350; name: _INIT_1786
 */


void _INIT_1786(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444f728 & 1) == 0) {
    DAT_0444f718 = 0;
    DAT_0444f720 = 0;
    DAT_0444ac08 = &DAT_0444f708;
    DAT_0444f708 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f710 = &DAT_04368560;
    DAT_0444f728 = 1;
  }
  return;
}


