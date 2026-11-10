/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d940; name: _INIT_529
 */


void _INIT_529(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431f20 & 1) == 0) {
    DAT_04431f10 = 0;
    DAT_04431f18 = 0;
    DAT_0444ac08 = &DAT_04431f00;
    DAT_04431f00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431f08 = &DAT_042dd4f8;
    DAT_04431f20 = 1;
  }
  return;
}


