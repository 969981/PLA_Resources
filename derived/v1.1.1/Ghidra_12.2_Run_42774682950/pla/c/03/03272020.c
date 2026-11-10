/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272020; name: _INIT_1275
 */


void _INIT_1275(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d100 & 1) == 0) {
    DAT_0443d0f0 = 0;
    DAT_0443d0f8 = 0;
    DAT_0444ac08 = &DAT_0443d0e0;
    DAT_0443d0e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d0e8 = &DAT_0432e650;
    DAT_0443d100 = 1;
  }
  return;
}


