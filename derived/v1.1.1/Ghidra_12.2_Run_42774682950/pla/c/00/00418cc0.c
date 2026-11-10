/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00418cc0; name: FUN_00418cc0
 */


undefined8 FUN_00418cc0(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_38;
  
  local_38 = 0;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      lVar3 = FUN_00427470(0,0,*(undefined8 *)(param_1 + 0x68));
      *(long *)(param_1 + 0x28) = lVar3;
      if (lVar3 != 0) goto LAB_00418ce8;
    }
LAB_00418d7c:
    uVar4 = 0;
  }
  else {
LAB_00418ce8:
    uVar4 = FUN_004279a0(lVar3,&local_38);
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = *(ulong *)(param_1 + 0x38);
      if (param_3 <= *(ulong *)(param_1 + 0x38)) {
        uVar1 = param_3;
      }
      iVar2 = FUN_00418a90(param_1,param_2,uVar1,0,local_38,uVar4);
      if (iVar2 == 0) goto LAB_00418d7c;
      param_2 = param_2 + uVar1;
    }
    uVar4 = 1;
  }
  if (local_38 != 0) {
    FUN_004279f0(*(undefined8 *)(param_1 + 0x28));
  }
  return uVar4;
}


