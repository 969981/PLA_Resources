/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9818; name: FUN_02ea9818
 */


int FUN_02ea9818(long param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    iVar2 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    piVar3 = (int *)(param_1 + 0x90);
    *piVar3 = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar2 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        puVar1 = (undefined8 *)(param_1 + 0x18);
        do {
          piVar4 = (int *)*puVar1;
          *param_3 = *(undefined8 *)(piVar4 + 2);
          if (*piVar4 != 0) {
            FUN_02ea9988(piVar3,piVar4);
            *param_2 = piVar4[1];
            FUN_02ea9918(puVar1);
            iVar2 = *piVar3;
            goto joined_r0x02ea9910;
          }
          FUN_02ea9918(puVar1);
          FUN_02edcfc4(DAT_0440a170,*(undefined4 *)(param_1 + 0x6c),0,*param_3);
        } while (*(int *)(param_1 + 0x20) != 0);
      }
      iVar2 = *piVar3;
joined_r0x02ea9910:
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 2;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  return iVar2;
}


