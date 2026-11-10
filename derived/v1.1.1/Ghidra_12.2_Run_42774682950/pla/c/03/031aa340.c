/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031aa340; name: _INIT_825
 */


void _INIT_825(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434dc0 & 1) == 0) {
    DAT_04434db0 = 0;
    DAT_04434db8 = 0;
    DAT_0444ac08 = &DAT_04434da0;
    DAT_04434da0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434da8 = &DAT_042f0880;
    DAT_04434dc0 = 1;
  }
  return;
}


