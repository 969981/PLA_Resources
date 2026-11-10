/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6c990; name: FUN_02e6c990
 */


undefined4 FUN_02e6c990(long param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_1 + 0x53) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + -0x48));
    if (*(char *)(param_1 + -7) == '\0') {
      uVar7 = 0x2e;
    }
    else {
      do {
        *param_2 = 0;
        bVar1 = *(byte *)(param_1 + 0x50);
        puVar4 = *(undefined8 **)(param_1 + 0x48);
        if (bVar1 != 0) {
          uVar5 = bVar1 & 7;
          if (6 < bVar1 - 1) {
            iVar6 = uVar5 - bVar1;
            do {
              iVar6 = iVar6 + 8;
              puVar4 = *(undefined8 **)**(undefined8 **)**(undefined8 **)**(undefined8 **)*puVar4;
            } while (iVar6 != 0);
          }
          if ((bVar1 & 7) != 0) {
            do {
              puVar4 = (undefined8 *)*puVar4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        uVar5 = 0;
        if (puVar4 == (undefined8 *)0x0) {
          uVar7 = 0x2e;
          cVar2 = *(char *)(param_1 + -6);
        }
        else {
          do {
            uVar7 = 0x2d;
            uVar5 = (*(int *)(puVar4[1] + 0x18) - *(int *)(puVar4 + 2)) + uVar5;
            *param_2 = uVar5;
            puVar4 = (undefined8 *)*puVar4;
          } while (puVar4 != (undefined8 *)0x0);
          cVar2 = *(char *)(param_1 + -6);
        }
        if ((cVar2 == '\0') && (*(uint *)(param_1 + 0x28) <= uVar5)) goto LAB_02e6caa0;
        uVar3 = (**(code **)(**(long **)(param_1 + -0x20) + 0x58))
                          (*(long **)(param_1 + -0x20),param_1 + -0x70);
      } while ((uVar3 & 1) != 0);
      if (*(char *)(*(long *)(param_1 + -0x20) + 0x218) != '\0') {
LAB_02e6caa0:
        uVar7 = 0x11;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + -0x48));
  }
  else {
    uVar7 = 2;
  }
  return uVar7;
}


