/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031311a0; name: _INIT_747
 */


void _INIT_747(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434120 & 1) == 0) {
    DAT_04434110 = 0;
    DAT_04434118 = 0;
    DAT_0444ac08 = &DAT_04434100;
    DAT_04434100 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434108 = &DAT_042eacb0;
    DAT_04434120 = 1;
  }
  return;
}


