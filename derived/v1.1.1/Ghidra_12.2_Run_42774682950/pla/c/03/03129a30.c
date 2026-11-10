/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03129a30; name: _INIT_505
 */


void _INIT_505(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431b60 & 1) == 0) {
    DAT_04431b50 = 0;
    DAT_04431b58 = 0;
    DAT_0444ac08 = &DAT_04431b40;
    DAT_04431b40 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431b48 = &DAT_042dbfe0;
    DAT_04431b60 = 1;
  }
  return;
}


