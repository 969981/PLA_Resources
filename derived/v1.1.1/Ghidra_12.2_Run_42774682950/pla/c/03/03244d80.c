/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244d80; name: _INIT_975
 */


void _INIT_975(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439558 & 1) == 0) {
    DAT_04439548 = 0;
    DAT_04439550 = 0;
    DAT_0444ac08 = &DAT_04439538;
    DAT_04439538 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439540 = &DAT_04313eb8;
    DAT_04439558 = 1;
  }
  return;
}


