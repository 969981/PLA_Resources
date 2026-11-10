/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242420; name: _INIT_880
 */


void _INIT_880(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438680 & 1) == 0) {
    DAT_04438670 = 0;
    DAT_04438678 = 0;
    DAT_0444ac08 = &DAT_04438660;
    DAT_04438660 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438668 = &DAT_0430def8;
    DAT_04438680 = 1;
  }
  return;
}


