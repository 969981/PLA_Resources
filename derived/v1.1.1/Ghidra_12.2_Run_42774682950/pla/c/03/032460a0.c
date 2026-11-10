/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032460a0; name: _INIT_1035
 */


void _INIT_1035(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439eb8 & 1) == 0) {
    DAT_04439ea8 = 0;
    DAT_04439eb0 = 0;
    DAT_0444ac08 = &DAT_04439e98;
    DAT_04439e98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439ea0 = &DAT_04317b00;
    DAT_04439eb8 = 1;
  }
  return;
}


