/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244dc0; name: _INIT_976
 */


void _INIT_976(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439580 & 1) == 0) {
    DAT_04439570 = 0;
    DAT_04439578 = 0;
    DAT_0444ac08 = &DAT_04439560;
    DAT_04439560 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439568 = &DAT_04314050;
    DAT_04439580 = 1;
  }
  return;
}


