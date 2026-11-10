/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03129bd0; name: _INIT_511
 */


void _INIT_511(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431c50 & 1) == 0) {
    DAT_04431c40 = 0;
    DAT_04431c48 = 0;
    DAT_0444ac08 = &DAT_04431c30;
    DAT_04431c30 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431c38 = &DAT_042dc490;
    DAT_04431c50 = 1;
  }
  return;
}


