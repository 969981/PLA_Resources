/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e968c8; name: FUN_02e968c8
 */


void FUN_02e968c8(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    uVar4 = (ulong)(param_2 - uVar3 * uVar1);
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar4 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      if (*(uint *)(puVar6 + 1) == param_2) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        do {
          puVar5 = puVar6;
          puVar6 = (undefined8 *)*puVar5;
          if (puVar6 == (undefined8 *)0x0) goto LAB_02e96938;
        } while (*(uint *)(puVar6 + 1) != param_2);
      }
      iVar2 = *(int *)(puVar6 + 6);
      *(int *)(puVar6 + 6) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        if (puVar6[2] != 0) {
          (*DAT_0442d158)(*(undefined4 *)((long)puVar6 + 0x1c));
          puVar6[2] = 0;
          puVar6[3] = 0xffffffff00000000;
          if (*(int *)(puVar6 + 6) != 0) goto LAB_02e96938;
        }
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar4 * 8);
        }
        *puVar5 = *puVar6;
        if (puVar6[4] != 0) {
          *(undefined4 *)(puVar6 + 5) = 0;
          (*DAT_0442d150)(0);
          puVar6[4] = 0;
          *(undefined4 *)((long)puVar6 + 0x2c) = 0;
        }
        (*DAT_0442d150)(0,puVar6);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
      }
    }
  }
LAB_02e96938:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  return;
}


