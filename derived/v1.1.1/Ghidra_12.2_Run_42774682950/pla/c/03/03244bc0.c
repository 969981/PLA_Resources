/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244bc0; name: _INIT_968
 */


void _INIT_968(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439440 & 1) == 0) {
    DAT_04439430 = 0;
    DAT_04439438 = 0;
    DAT_0444ac08 = &DAT_04439420;
    DAT_04439420 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439428 = &DAT_04313688;
    DAT_04439440 = 1;
  }
  return;
}


