/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328c9f0; name: _INIT_1458
 */


void _INIT_1458(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443efd0 & 1) == 0) {
    DAT_0443efc0 = 0;
    DAT_0443efc8 = 0;
    DAT_0444ac08 = &DAT_0443efb0;
    DAT_0443efb0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443efb8 = &DAT_0433cb30;
    DAT_0443efd0 = 1;
  }
  return;
}


