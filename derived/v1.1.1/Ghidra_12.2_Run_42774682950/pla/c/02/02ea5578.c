/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5578; name: FUN_02ea5578
 */


undefined8 FUN_02ea5578(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  piVar3 = *(int **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 == 0) || (*piVar3 == param_2)) {
    piVar4 = piVar3;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x18;
    piVar6 = piVar3;
    do {
      lVar5 = lVar5 + -0x18;
      if (lVar5 == 0) goto LAB_02ea5628;
      piVar4 = piVar6 + 6;
      piVar1 = piVar6 + 6;
      piVar6 = piVar4;
    } while (*piVar1 != param_2);
  }
  if (piVar4 == piVar3 + (ulong)uVar2 * 6) {
LAB_02ea5628:
    uVar7 = 0;
  }
  else {
    (**(code **)(piVar4 + 2))(param_3,param_4,piVar4[4]);
    uVar7 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return uVar7;
}


