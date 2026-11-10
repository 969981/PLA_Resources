/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ea00; name: _INIT_593
 */


void _INIT_593(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432910 & 1) == 0) {
    DAT_04432900 = 0;
    DAT_04432908 = 0;
    DAT_0444ac08 = &DAT_044328f0;
    DAT_044328f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044328f8 = &DAT_042e1440;
    DAT_04432910 = 1;
  }
  return;
}


