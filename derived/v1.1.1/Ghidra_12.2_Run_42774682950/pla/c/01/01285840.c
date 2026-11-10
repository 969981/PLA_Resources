/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01285840; name: FUN_01285840
 */


void FUN_01285840(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00d5ea78(*(undefined8 *)(param_1 + 0x1a8));
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_01283b84(param_1), lVar2 == 0)) {
    return;
  }
  lVar2 = FUN_012827f8();
  FUN_0128602c(param_1,*(undefined4 *)(lVar2 + 0xc));
  return;
}


