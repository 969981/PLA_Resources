/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031298b0; name: _INIT_499
 */


void _INIT_499(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431a70 & 1) == 0) {
    DAT_04431a60 = 0;
    DAT_04431a68 = 0;
    DAT_0444ac08 = &DAT_04431a50;
    DAT_04431a50 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431a58 = &DAT_042db8a0;
    DAT_04431a70 = 1;
  }
  return;
}


