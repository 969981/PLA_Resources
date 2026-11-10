/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245260; name: _INIT_994
 */


void _INIT_994(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439850 & 1) == 0) {
    DAT_04439840 = 0;
    DAT_04439848 = 0;
    DAT_0444ac08 = &DAT_04439830;
    DAT_04439830 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439838 = &DAT_04315240;
    DAT_04439850 = 1;
  }
  return;
}


