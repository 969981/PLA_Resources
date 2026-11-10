/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fc1a4; name: FUN_007fc1a4
 */


void FUN_007fc1a4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined4 local_78;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f));
  nn::os::LockMutex((MutexType *)(param_1 + 0x4a));
  uVar3 = (**(code **)(*param_1 + 0x178))(param_1);
  puVar1 = PTR_DAT_04377550;
  lVar6 = 0x270;
  if ((uVar3 & 1) == 0) {
    lVar6 = 0x118;
  }
  plVar5 = *(long **)((long)param_1 + lVar6);
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar3 = 0;
    iVar7 = -1;
    do {
      uVar4 = FUN_007f0ee4(*(long *)(param_1[0x11] + uVar3 * 8) + 0x10);
      if ((uVar4 & 1) == 0) {
LAB_007fc248:
        iVar2 = iVar7;
      }
      else {
        if (*(short *)((long)param_1 + 0x114e) != 0) {
          uVar8 = 0;
          do {
            uVar4 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar8);
            if ((uVar4 & 1) != 0) {
              FUN_007f0ce0(&local_80);
              (**(code **)(*plVar5 + 0x48))(plVar5,uVar8,&local_80);
              uVar4 = FUN_007f0ee4(&local_80);
              if (((uVar4 & 1) != 0) &&
                 (uVar4 = FUN_007f0f48(*(long *)(param_1[0x11] + uVar3 * 8) + 0x10,&local_80),
                 (uVar4 & 1) != 0)) goto LAB_007fc248;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)((long)param_1 + 0x114e));
        }
        uVar4 = FUN_007f0f48(param_1 + 0x13,*(long *)(param_1[0x11] + uVar3 * 8) + 0x10);
        iVar2 = (int)uVar3;
        if ((uVar4 & 1) == 0) {
          FUN_007f0d08(auStack_a0,*(long *)(param_1[0x11] + uVar3 * 8) + 0x10);
          lVar6 = *(long *)puVar1;
          if ((lVar6 != 0) && ((char)param_1[0x22a] != '\0')) {
            FUN_0082afc8(lVar6,auStack_a0);
            FUN_0082abd8(lVar6,auStack_a0,0xffffffff);
          }
          lVar6 = *(long *)(param_1[0x11] + uVar3 * 8);
          *(undefined2 *)(lVar6 + 8) = 0xff00;
          *(undefined1 *)(lVar6 + 10) = 0;
          FUN_007f0d58(lVar6 + 0x10);
          goto LAB_007fc248;
        }
      }
      iVar7 = iVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((long)param_1 + 0x114e));
    if ((-1 < iVar7) &&
       (uVar3 = FUN_007f0ee4(*(long *)(param_1[0x11] + (long)iVar7 * 8) + 0x10), (uVar3 & 1) != 0))
    {
      FUN_007f0d08(auStack_c0,*(long *)(param_1[0x11] + (long)iVar7 * 8) + 0x10);
      lVar6 = *(long *)puVar1;
      if ((lVar6 != 0) && ((char)param_1[0x22a] != '\0')) {
        FUN_0082afc8(lVar6,auStack_c0);
        FUN_0082abd8(lVar6,auStack_c0,0xffffffff);
      }
      lVar6 = *(long *)(param_1[0x11] + (long)iVar7 * 8);
      *(undefined2 *)(lVar6 + 8) = 0xff00;
      *(undefined1 *)(lVar6 + 10) = 0;
      FUN_007f0d58(lVar6 + 0x10);
    }
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  local_78 = 0;
  local_80 = 0x40;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_80);
  *(undefined1 *)((long)param_1 + 0x24d) = 0;
  *(undefined1 *)((long)param_1 + 0x24b) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4a));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f));
  return;
}


