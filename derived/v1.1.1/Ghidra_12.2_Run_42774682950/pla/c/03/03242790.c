/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242790; name: _INIT_887
 */


void _INIT_887(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438798 & 1) == 0) {
    DAT_04438788 = 0;
    DAT_04438790 = 0;
    DAT_0444ac08 = &DAT_04438778;
    DAT_04438778 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438780 = &DAT_0430e5c0;
    DAT_04438798 = 1;
  }
  return;
}


