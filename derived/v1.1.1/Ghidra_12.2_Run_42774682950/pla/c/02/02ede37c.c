/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ede37c; name: FUN_02ede37c
 */


void FUN_02ede37c(undefined8 *param_1,int param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  piVar1 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar4 = piVar1 + (ulong)uVar2 * 10;
  if (uVar2 == 0) {
LAB_02ede3b8:
    if (piVar4 != piVar1) {
      if (piVar1 < piVar4 + -10) {
        do {
          piVar3 = piVar1 + 10;
          *(undefined8 *)piVar1 = *(undefined8 *)piVar3;
          *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(piVar1 + 0xc);
          *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar1 + 0x12);
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(piVar1 + 0xe);
          *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(piVar1 + 0x10);
          piVar1 = piVar3;
        } while (piVar3 < piVar4 + -10);
        uVar2 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar2 - 1;
    }
  }
  else {
    lVar5 = (ulong)uVar2 * 0x28;
    do {
      if ((*piVar1 == param_2) && (*(long *)(piVar1 + 2) == param_3)) goto LAB_02ede3b8;
      lVar5 = lVar5 + -0x28;
      piVar1 = piVar1 + 10;
    } while (lVar5 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


