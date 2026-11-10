/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7544; name: FUN_02ea7544
 */


void FUN_02ea7544(undefined4 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_02ea7390();
  if (*(int *)(param_2 + 0x40) != 0) {
    lVar2 = *(long *)(param_2 + 0x38);
    do {
      *(undefined4 *)(lVar2 + 0x10) = param_1;
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *(long *)(param_2 + 0x38) + (ulong)*(uint *)(param_2 + 0x40) * 0x18);
  }
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_02ea7404(param_2);
  return;
}


