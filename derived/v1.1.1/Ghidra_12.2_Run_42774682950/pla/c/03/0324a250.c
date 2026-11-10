/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a250; name: _INIT_1228
 */


void _INIT_1228(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443bce0 & 1) == 0) {
    DAT_0443bcd0 = 0;
    DAT_0443bcd8 = 0;
    DAT_0444ac08 = &DAT_0443bcc0;
    DAT_0443bcc0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443bcc8 = &DAT_04323c60;
    DAT_0443bce0 = 1;
  }
  return;
}


