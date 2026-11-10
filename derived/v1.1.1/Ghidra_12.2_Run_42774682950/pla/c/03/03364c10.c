/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364c10; name: _INIT_1821
 */


void _INIT_1821(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fc70 & 1) == 0) {
    DAT_0444fc60 = 0;
    DAT_0444fc68 = 0;
    DAT_0444ac08 = &DAT_0444fc50;
    DAT_0444fc50 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fc58 = &DAT_0436a9d0;
    DAT_0444fc70 = 1;
  }
  return;
}


