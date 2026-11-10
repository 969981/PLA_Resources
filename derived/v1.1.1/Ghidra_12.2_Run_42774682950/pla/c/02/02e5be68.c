/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5be68; name: FUN_02e5be68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02e5be68(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (DAT_042a5ca8 != 0) {
    if (*(uint *)(*(long *)(param_1 + 8) + 0x40) < 6) {
      lVar1 = 0;
      lVar2 = _DAT_000000e0;
    }
    else {
      lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x28);
      lVar2 = *(long *)(lVar1 + 0xe0);
    }
    if ((lVar2 != 0) && (0.0 < *(float *)(lVar1 + 0xa4))) {
      if (*(int *)(lVar1 + 0xe8) < 1) {
        return *(int *)(lVar1 + 0xa0) != 0;
      }
      return true;
    }
  }
  return false;
}


