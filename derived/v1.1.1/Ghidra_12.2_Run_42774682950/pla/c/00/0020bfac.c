/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020bfac; name: FUN_0020bfac
 */


undefined8 FUN_0020bfac(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00211ad4(param_1,*(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_00206aec(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(int *)(param_1 + 0xbc) < 1) || (iVar1 = FUN_00211ab8(param_1), iVar1 == 0)) ||
     (uVar2 = FUN_00211a6c(param_1,4), -0x385 < (int)uVar2)) {
    uVar2 = 0;
  }
  return uVar2;
}


