/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031313d0; name: _INIT_755
 */


void _INIT_755(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434260 & 1) == 0) {
    DAT_04434250 = 0;
    DAT_04434258 = 0;
    DAT_0444ac08 = &DAT_04434240;
    DAT_04434240 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434248 = &DAT_042eb828;
    DAT_04434260 = 1;
  }
  return;
}


