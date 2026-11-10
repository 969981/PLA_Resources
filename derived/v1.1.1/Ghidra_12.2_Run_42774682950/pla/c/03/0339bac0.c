/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339bac0; name: _INIT_1889
 */


void _INIT_1889(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450d60 & 1) == 0) {
    DAT_04450d50 = 0;
    DAT_04450d58 = 0;
    DAT_0444ac08 = &DAT_04450d40;
    DAT_04450d40 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450d48 = &DAT_043700e8;
    DAT_04450d60 = 1;
  }
  return;
}


