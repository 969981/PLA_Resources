/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d6d0; name: _INIT_520
 */


void _INIT_520(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431db8 & 1) == 0) {
    DAT_04431da8 = 0;
    DAT_04431db0 = 0;
    DAT_0444ac08 = &DAT_04431d98;
    DAT_04431d98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431da0 = &DAT_042dcc30;
    DAT_04431db8 = 1;
  }
  return;
}


