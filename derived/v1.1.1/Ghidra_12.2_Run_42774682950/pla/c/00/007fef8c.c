/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fef8c; name: FUN_007fef8c
 */


undefined8 FUN_007fef8c(long param_1)

{
  ulong uVar1;
  int local_58 [4];
  undefined *local_48 [6];
  undefined1 local_14;
  undefined2 local_12;
  
  uVar1 = FUN_007fe558();
  if (((uVar1 & 1) != 0) && (0x28 < *(uint *)(param_1 + 0x10))) {
    local_48[0] = PTR_DAT_04377668 + 0x10;
    FUN_007ff004(local_58,local_48,*(undefined8 *)(param_1 + 8));
    if (local_58[0] == 0) {
      *(undefined1 *)(param_1 + 0x58) = local_14;
      *(undefined2 *)(param_1 + 0x5a) = local_12;
      return 1;
    }
  }
  return 0;
}


