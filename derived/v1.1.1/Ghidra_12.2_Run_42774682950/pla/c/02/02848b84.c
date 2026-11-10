/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02848b84; name: FUN_02848b84
 */


undefined8 FUN_02848b84(long param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if ((((uVar1 < *(uint *)(*(long *)(param_1 + 0x70) + 0x278)) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 600),
       *(char *)(lVar2 + (ulong)uVar1 * 0x48 + 8) != '\0')) &&
      (*(char *)(lVar2 + (ulong)uVar1 * 0x48 + 0xb) != '\0')) &&
     (fVar3 = (float)FUN_02c443ec(), 1.0 <= fVar3)) {
    return 1;
  }
  return 0;
}


