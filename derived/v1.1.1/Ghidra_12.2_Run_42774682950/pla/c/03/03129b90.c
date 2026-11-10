/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03129b90; name: _INIT_510
 */


void _INIT_510(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431c28 & 1) == 0) {
    DAT_04431c18 = 0;
    DAT_04431c20 = 0;
    DAT_0444ac08 = &DAT_04431c08;
    DAT_04431c08 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431c10 = &DAT_042dc3d8;
    DAT_04431c28 = 1;
  }
  return;
}


