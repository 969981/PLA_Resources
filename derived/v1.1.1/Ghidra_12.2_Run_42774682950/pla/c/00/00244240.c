/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00244240; name: FUN_00244240
 */


undefined8 FUN_00244240(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar2 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  return *(undefined8 *)
          (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 +
                                            (long)*(char *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)
                                                  uVar2 + 4) + uVar2) + 0xc) * 4) + uVar2) + 8);
}


