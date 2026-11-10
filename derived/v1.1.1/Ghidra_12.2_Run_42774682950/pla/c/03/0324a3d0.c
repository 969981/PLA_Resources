/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a3d0; name: _INIT_1234
 */


void _INIT_1234(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443bdd0 & 1) == 0) {
    DAT_0443bdc0 = 0;
    DAT_0443bdc8 = 0;
    DAT_0444ac08 = &DAT_0443bdb0;
    DAT_0443bdb0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443bdb8 = &DAT_043240e0;
    DAT_0443bdd0 = 1;
  }
  return;
}


