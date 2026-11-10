/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330be90; name: _INIT_1645
 */


void _INIT_1645(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444b050 & 1) == 0) {
    DAT_0444b040 = 0;
    DAT_0444b048 = 0;
    DAT_0444ac08 = &DAT_0444b030;
    DAT_0444b030 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444b038 = &DAT_0434f4b0;
    DAT_0444b050 = 1;
  }
  return;
}


