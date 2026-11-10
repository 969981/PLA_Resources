/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03129c10; name: _INIT_512
 */


void _INIT_512(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431c78 & 1) == 0) {
    DAT_04431c68 = 0;
    DAT_04431c70 = 0;
    DAT_0444ac08 = &DAT_04431c58;
    DAT_04431c58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431c60 = &DAT_042dc548;
    DAT_04431c78 = 1;
  }
  return;
}


