/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272830; name: _INIT_1307
 */


void _INIT_1307(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d600 & 1) == 0) {
    DAT_0443d5f0 = 0;
    DAT_0443d5f8 = 0;
    DAT_0444ac08 = &DAT_0443d5e0;
    DAT_0443d5e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d5e8 = &DAT_04330de8;
    DAT_0443d600 = 1;
  }
  return;
}


