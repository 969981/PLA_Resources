/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246810; name: _INIT_1058
 */


void _INIT_1058(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a250 & 1) == 0) {
    DAT_0443a240 = 0;
    DAT_0443a248 = 0;
    DAT_0444ac08 = &DAT_0443a230;
    DAT_0443a230 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a238 = &DAT_04319110;
    DAT_0443a250 = 1;
  }
  return;
}


