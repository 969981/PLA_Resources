/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e520; name: _INIT_574
 */


void _INIT_574(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432618 & 1) == 0) {
    DAT_04432608 = 0;
    DAT_04432610 = 0;
    DAT_0444ac08 = &DAT_044325f8;
    DAT_044325f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432600 = &DAT_042e01b0;
    DAT_04432618 = 1;
  }
  return;
}


