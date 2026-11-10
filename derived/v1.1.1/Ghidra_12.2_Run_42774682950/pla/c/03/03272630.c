/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272630; name: _INIT_1299
 */


void _INIT_1299(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d4c0 & 1) == 0) {
    DAT_0443d4b0 = 0;
    DAT_0443d4b8 = 0;
    DAT_0444ac08 = &DAT_0443d4a0;
    DAT_0443d4a0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d4a8 = &DAT_04330458;
    DAT_0443d4c0 = 1;
  }
  return;
}


