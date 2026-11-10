/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ede458; name: FUN_02ede458
 */


void FUN_02ede458(undefined8 *param_1,int param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  piVar4 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar2 = piVar4;
  if (uVar1 == 0) {
LAB_02ede498:
    if (piVar2 == piVar4 + (ulong)uVar1 * 10) goto LAB_02ede50c;
    piVar2 = piVar2 + 4;
  }
  else {
    lVar5 = (ulong)uVar1 * 0x28;
    do {
      if ((*piVar2 == param_2) && (*(long *)(piVar2 + 2) == param_4)) goto LAB_02ede498;
      lVar5 = lVar5 + -0x28;
      piVar2 = piVar2 + 10;
    } while (lVar5 != 0);
LAB_02ede50c:
    piVar2 = (int *)FUN_02ede538(param_1,param_2,param_4);
    if (piVar2 == (int *)0x0) goto LAB_02ede4bc;
    if (*(int *)(param_1 + 1) != 0) {
      uVar3 = nn::os::GetSystemTick();
      param_1[8] = uVar3;
    }
  }
  uVar3 = param_3[1];
  *(undefined8 *)(piVar2 + 2) = *param_3;
  *(undefined8 *)(piVar2 + 4) = uVar3;
  *(undefined8 *)piVar2 = param_1[8];
LAB_02ede4bc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


