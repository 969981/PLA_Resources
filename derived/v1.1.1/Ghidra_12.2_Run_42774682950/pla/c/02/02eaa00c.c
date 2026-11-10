/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa00c; name: FUN_02eaa00c
 */


undefined8 FUN_02eaa00c(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar1 + 1, lVar2 = DAT_0440a128,
     iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(DAT_0440a128 + 0x78);
    FUN_02e82ec4(lVar2,*(undefined4 *)(param_1 + 0x6c));
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (plVar3 = (long *)FUN_02e7d2ec(DAT_0440a120,*(int *)(param_1 + 0x78),0),
       plVar3 != (long *)0x0)) {
      FUN_02ed5130(plVar3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((*(int *)(param_1 + 0x90) != 0) &&
       (plVar3 = (long *)FUN_02e7d2ec(DAT_0440a120,*(int *)(param_1 + 0x90),0),
       plVar3 != (long *)0x0)) {
      FUN_02ed5130(plVar3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return 1;
}


