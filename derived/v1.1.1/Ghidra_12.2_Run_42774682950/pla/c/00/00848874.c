/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00848874; name: FUN_00848874
 */


undefined8 FUN_00848874(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(short *)(param_1 + 0x60) == 0) {
    return 0;
  }
  plVar1 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined2 *)(param_1 + 0x60));
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
  }
  return uVar3;
}


