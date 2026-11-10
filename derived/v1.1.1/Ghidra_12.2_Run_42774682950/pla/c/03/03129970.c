/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03129970; name: _INIT_502
 */


void _INIT_502(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431ae8 & 1) == 0) {
    DAT_04431ad8 = 0;
    DAT_04431ae0 = 0;
    DAT_0444ac08 = &DAT_04431ac8;
    DAT_04431ac8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431ad0 = &DAT_042dbc78;
    DAT_04431ae8 = 1;
  }
  return;
}


