/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ad30; name: _INIT_1481
 */


void _INIT_1481(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fa60 & 1) == 0) {
    DAT_0443fa50 = 0;
    DAT_0443fa58 = 0;
    DAT_0444ac08 = &DAT_0443fa40;
    DAT_0443fa40 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fa48 = &DAT_043422e8;
    DAT_0443fa60 = 1;
  }
  return;
}


