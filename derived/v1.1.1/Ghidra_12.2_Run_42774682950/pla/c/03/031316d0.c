/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031316d0; name: _INIT_767
 */


void _INIT_767(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434440 & 1) == 0) {
    DAT_04434430 = 0;
    DAT_04434438 = 0;
    DAT_0444ac08 = &DAT_04434420;
    DAT_04434420 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434428 = &DAT_042ec6d0;
    DAT_04434440 = 1;
  }
  return;
}


