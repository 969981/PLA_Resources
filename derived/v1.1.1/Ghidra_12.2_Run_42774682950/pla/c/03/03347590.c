/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347590; name: _INIT_1718
 */


void _INIT_1718(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e2a8 & 1) == 0) {
    DAT_0444e298 = 0;
    DAT_0444e2a0 = 0;
    DAT_0444ac08 = &DAT_0444e288;
    DAT_0444e288 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e290 = &DAT_043602d0;
    DAT_0444e2a8 = 1;
  }
  return;
}


