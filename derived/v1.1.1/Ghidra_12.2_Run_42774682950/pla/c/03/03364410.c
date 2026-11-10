/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364410; name: _INIT_1789
 */


void _INIT_1789(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444f7a0 & 1) == 0) {
    DAT_0444f790 = 0;
    DAT_0444f798 = 0;
    DAT_0444ac08 = &DAT_0444f780;
    DAT_0444f780 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f788 = &DAT_04368878;
    DAT_0444f7a0 = 1;
  }
  return;
}


