/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03275630; name: _INIT_1400
 */


void _INIT_1400(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e488 & 1) == 0) {
    DAT_0443e478 = 0;
    DAT_0443e480 = 0;
    DAT_0444ac08 = &DAT_0443e468;
    DAT_0443e468 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e470 = &DAT_04337178;
    DAT_0443e488 = 1;
  }
  return;
}


