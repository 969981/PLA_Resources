/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272270; name: _INIT_1284
 */


void _INIT_1284(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d268 & 1) == 0) {
    DAT_0443d258 = 0;
    DAT_0443d260 = 0;
    DAT_0444ac08 = &DAT_0443d248;
    DAT_0443d248 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d250 = &DAT_0432f258;
    DAT_0443d268 = 1;
  }
  return;
}


