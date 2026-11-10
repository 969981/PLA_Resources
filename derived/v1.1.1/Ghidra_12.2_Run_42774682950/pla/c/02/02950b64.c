/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02950b64; name: FUN_02950b64
 */


bool FUN_02950b64(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  uVar2 = FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
  bVar1 = false;
  if (((uVar2 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    bVar1 = *(short *)(param_1 + 0x74) != 0;
  }
  return bVar1;
}


