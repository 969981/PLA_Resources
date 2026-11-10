/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03278010; name: _INIT_1445
 */


void _INIT_1445(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443eb90 & 1) == 0) {
    DAT_0443eb80 = 0;
    DAT_0443eb88 = 0;
    DAT_0444ac08 = &DAT_0443eb70;
    DAT_0443eb70 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443eb78 = &DAT_04339be0;
    DAT_0443eb90 = 1;
  }
  return;
}


