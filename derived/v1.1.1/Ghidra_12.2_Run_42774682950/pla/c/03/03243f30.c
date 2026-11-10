/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243f30; name: _INIT_933
 */


void _INIT_933(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438ec8 & 1) == 0) {
    DAT_04438eb8 = 0;
    DAT_04438ec0 = 0;
    DAT_0444ac08 = &DAT_04438ea8;
    DAT_04438ea8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438eb0 = &DAT_043110b8;
    DAT_04438ec8 = 1;
  }
  return;
}


