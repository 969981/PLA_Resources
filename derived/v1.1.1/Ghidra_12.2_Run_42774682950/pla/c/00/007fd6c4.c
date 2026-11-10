/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fd6c4; name: FUN_007fd6c4
 */


undefined8 FUN_007fd6c4(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int local_30 [4];
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  uVar1 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x18))
            (local_30,param_2,*(long *)(param_1 + 8) + (ulong)uVar1,*(int *)(param_1 + 0x10) - uVar1
            );
  if (local_30[0] == 0) {
    iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar2;
    return 1;
  }
  return 0;
}


