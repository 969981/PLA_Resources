/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c3b51c; name: FUN_00c3b51c
 */


void FUN_00c3b51c(long param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_cbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_2;
  }
  *(undefined1 **)(param_1 + 0x98) = puVar2;
  return;
}


