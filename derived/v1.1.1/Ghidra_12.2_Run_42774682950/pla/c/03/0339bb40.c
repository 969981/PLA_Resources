/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339bb40; name: _INIT_1891
 */


void _INIT_1891(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450db0 & 1) == 0) {
    DAT_04450da0 = 0;
    DAT_04450da8 = 0;
    DAT_0444ac08 = &DAT_04450d90;
    DAT_04450d90 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450d98 = &DAT_04370360;
    DAT_04450db0 = 1;
  }
  return;
}


