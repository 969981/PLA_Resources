/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050beac; name: FUN_0050beac
 */


void FUN_0050beac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        lVar1 = lVar1 + -0x50;
        FUN_0050beac(lVar1);
      } while (lVar2 != lVar1);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x40) = lVar2;
    FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  }
  FUN_003e9f80(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x18));
  return;
}


