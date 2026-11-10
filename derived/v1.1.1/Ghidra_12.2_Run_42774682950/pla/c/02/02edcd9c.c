/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edcd9c; name: FUN_02edcd9c
 */


void FUN_02edcd9c(long *param_1,uint param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  uint local_48;
  undefined4 uStack_44;
  
  if ((*(int *)(param_3 + 0x20) != 0) || (*(int *)(param_3 + 0x24) != 0)) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    return;
  }
  uVar10 = *(uint *)(param_3 + 0x60);
  if ((uVar10 >> 0x16 & 1) != 0) {
    FUN_02ede5cc(DAT_0440a178,param_2);
    uVar10 = *(uint *)(param_3 + 0x60);
  }
  pcVar1 = *(code **)(param_3 + 0x50);
  local_58 = *(undefined8 *)(param_3 + 0x58);
  local_50 = *(long *)(param_3 + 0x30);
  uStack_44 = *(undefined4 *)(param_3 + 0x28);
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = local_50;
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_2 / uVar2;
    }
    plVar8 = (long *)(*param_1 + (ulong)(param_2 - uVar4 * uVar2) * 8);
    lVar7 = *plVar8;
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x4c) != param_2) {
        do {
          lVar9 = lVar7;
          lVar7 = *(long *)(lVar9 + 0x68);
          if (lVar7 == 0) goto LAB_02edce4c;
        } while (*(uint *)(lVar7 + 0x4c) != param_2);
        plVar8 = (long *)(lVar9 + 0x68);
      }
      *plVar8 = *(long *)(lVar7 + 0x68);
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      lVar5 = *(long *)(param_3 + 0x30);
    }
  }
LAB_02edce4c:
  local_88 = (undefined8 *)0x0;
  local_78 = 0;
  local_70 = 0xff;
  local_68 = 0xff;
  local_60 = 0;
  local_80 = *(undefined4 *)(param_3 + 0x4c);
  uVar2 = *(uint *)(DAT_0440a140 + 0x38);
  local_48 = param_2;
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = (uint)lVar5 / uVar2;
    }
    for (plVar8 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                            (ulong)((uint)lVar5 - uVar4 * uVar2) * 8); plVar8 != (long *)0x0;
        plVar8 = (long *)*plVar8) {
      if (plVar8[1] == lVar5) {
        *(int *)(plVar8[2] + 0x50) = *(int *)(plVar8[2] + 0x50) + 1;
        puVar6 = (undefined8 *)plVar8[2];
        if ((puVar6 != (undefined8 *)0x0) &&
           (iVar3 = *(int *)(puVar6 + 10), *(int *)(puVar6 + 10) = iVar3 + -1, local_88 = puVar6,
           iVar3 + -1 == 0)) {
          (**(code **)*puVar6)(puVar6);
          (*DAT_0442d150)(4,puVar6);
        }
        break;
      }
    }
  }
  FUN_02ef4594(param_3,&local_88);
  if (*(long *)(param_3 + 0x38) != 0) {
    FUN_02e771a8();
  }
  (*DAT_0442d150)(0,param_3);
  if ((uVar10 & 1) == 0) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  }
  else {
    nn::os::ClearEvent((EventType *)(param_1 + 7));
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    (*pcVar1)(1,&local_58);
    nn::os::SignalEvent((EventType *)(param_1 + 7));
  }
  return;
}


