/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031299f0; name: _INIT_504
 */


void _INIT_504(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431b38 & 1) == 0) {
    DAT_04431b28 = 0;
    DAT_04431b30 = 0;
    DAT_0444ac08 = &DAT_04431b18;
    DAT_04431b18 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431b20 = &DAT_042dbed0;
    DAT_04431b38 = 1;
  }
  return;
}


