/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128f6d4; name: FUN_0128f6d4
 */


void FUN_0128f6d4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = FUN_00d606e0(param_1,*(undefined4 *)(param_1 + 0x6d8));
  puVar1 = &DAT_03a7a630;
  if ((uVar2 & 1) == 0) {
    puVar1 = &DAT_03a7a600;
  }
  FUN_0128eecc(param_1,puVar1,3);
  return;
}


