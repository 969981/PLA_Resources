/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6c890; name: FUN_02e6c890
 */


undefined4 FUN_02e6c890(long param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0xc3) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    if (*(char *)(param_1 + 0x69) == '\0') {
      uVar4 = 0x2e;
    }
    else {
      do {
        *param_2 = 0;
        uVar3 = (uint)*(byte *)(param_1 + 0xc0);
        puVar2 = *(undefined8 **)(param_1 + 0xb8);
        if (*(byte *)(param_1 + 0xc0) != 0) {
          do {
            puVar2 = (undefined8 *)*puVar2;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        uVar3 = 0;
        if (puVar2 == (undefined8 *)0x0) {
          uVar4 = 0x2e;
        }
        else {
          do {
            uVar4 = 0x2d;
            uVar3 = (*(int *)(puVar2[1] + 0x18) - *(int *)(puVar2 + 2)) + uVar3;
            *param_2 = uVar3;
            puVar2 = (undefined8 *)*puVar2;
          } while (puVar2 != (undefined8 *)0x0);
        }
        if ((*(char *)(param_1 + 0x6a) == '\0') && (*(uint *)(param_1 + 0x98) <= uVar3))
        goto LAB_02e6c95c;
        uVar1 = (**(code **)(**(long **)(param_1 + 0x50) + 0x58))
                          (*(long **)(param_1 + 0x50),param_1);
      } while ((uVar1 & 1) != 0);
      if (*(char *)(*(long *)(param_1 + 0x50) + 0x218) != '\0') {
LAB_02e6c95c:
        uVar4 = 0x11;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


