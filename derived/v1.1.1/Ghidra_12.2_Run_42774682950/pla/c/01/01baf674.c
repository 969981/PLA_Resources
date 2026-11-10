/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01baf674; name: FUN_01baf674
 */


uint FUN_01baf674(long param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 *local_18;
  
  if (*(char *)(param_1 + 0xb90) == '\0') {
    uVar2 = 0;
  }
  else {
    local_18 = &DAT_cbf29ce484222645;
    bVar1 = *param_2;
    while (bVar1 != 0) {
      param_2 = param_2 + 1;
      local_18 = (undefined1 *)(((ulong)local_18 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *param_2;
    }
    uVar2 = FUN_01baf6e4(param_1,&local_18);
  }
  return uVar2 & 1;
}


