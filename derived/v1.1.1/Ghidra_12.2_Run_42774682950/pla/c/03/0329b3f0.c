/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b3f0; name: _INIT_1508
 */


void _INIT_1508(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fe98 & 1) == 0) {
    DAT_0443fe88 = 0;
    DAT_0443fe90 = 0;
    DAT_0444ac08 = &DAT_0443fe78;
    DAT_0443fe78 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fe80 = &DAT_043441d0;
    DAT_0443fe98 = 1;
  }
  return;
}


