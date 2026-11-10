/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f370; name: _INIT_630
 */


void _INIT_630(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432ed8 & 1) == 0) {
    DAT_04432ec8 = 0;
    DAT_04432ed0 = 0;
    DAT_0444ac08 = &DAT_04432eb8;
    DAT_04432eb8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432ec0 = &DAT_042e37a8;
    DAT_04432ed8 = 1;
  }
  return;
}


