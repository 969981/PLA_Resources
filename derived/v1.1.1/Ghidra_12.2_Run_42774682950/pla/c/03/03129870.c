/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03129870; name: _INIT_498
 */


void _INIT_498(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431a48 & 1) == 0) {
    DAT_04431a38 = 0;
    DAT_04431a40 = 0;
    DAT_0444ac08 = &DAT_04431a28;
    DAT_04431a28 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431a30 = &DAT_042db790;
    DAT_04431a48 = 1;
  }
  return;
}


