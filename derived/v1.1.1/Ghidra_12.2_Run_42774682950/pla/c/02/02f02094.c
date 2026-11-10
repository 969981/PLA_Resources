/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f02094; name: FUN_02f02094
 */


void FUN_02f02094(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xb8) & 0x30) == 0) {
    iVar1 = FUN_02f024c0();
    if (iVar1 == 0x11) {
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
    }
  }
  return;
}


