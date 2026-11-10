/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94e64; name: FUN_02e94e64
 */


void FUN_02e94e64(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = DAT_0440a120;
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  nn::os::LockMutex((MutexType *)(lVar1 + 0xa8));
  if (*(int *)(lVar1 + 0xd0) != 0) {
    plVar2 = (long *)**(undefined8 **)(lVar1 + 200);
    if (plVar2 == (long *)0x0) {
      uVar4 = 0;
      do {
        if (*(int *)(lVar1 + 0xd0) - 1 == uVar4) goto LAB_02e94fd0;
        uVar4 = uVar4 + 1;
        plVar2 = (long *)(*(undefined8 **)(lVar1 + 200))[uVar4 & 0xffffffff];
      } while (plVar2 == (long *)0x0);
    }
    else {
      uVar4 = 0;
    }
    if ((int)plVar2[4] != 0) goto LAB_02e94f08;
    while (plVar2 = (long *)plVar2[1], plVar2 != (long *)0x0) {
      if (plVar2 == (long *)0x0) goto LAB_02e94fd0;
      while ((int)plVar2[4] != 0) {
LAB_02e94f08:
        (**(code **)(*plVar2 + 0x10))(plVar2);
        if ((int)plVar2[4] != 0) {
          *(undefined4 *)(plVar2 + 4) = 0;
          FUN_02e94d58(param_1,plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        plVar5 = (long *)plVar2[1];
        if (plVar5 == (long *)0x0) {
          uVar3 = (uint)uVar4;
          do {
            uVar3 = uVar3 + 1;
            uVar4 = (ulong)uVar3;
            if (*(uint *)(lVar1 + 0xd0) <= uVar3) {
              plVar5 = (long *)0x0;
              break;
            }
            plVar5 = *(long **)(*(long *)(lVar1 + 200) + uVar4 * 8);
          } while (plVar5 == (long *)0x0);
        }
        (**(code **)(*plVar2 + 0x18))(plVar2);
        plVar2 = plVar5;
joined_r0x02e94fcc:
        if (plVar2 == (long *)0x0) goto LAB_02e94fd0;
      }
    }
    while( true ) {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
      if (*(uint *)(lVar1 + 0xd0) <= uVar3) break;
      plVar2 = *(long **)(*(long *)(lVar1 + 200) + (ulong)uVar3 * 8);
      if (plVar2 != (long *)0x0) goto joined_r0x02e94fcc;
    }
  }
LAB_02e94fd0:
  nn::os::UnlockMutex((MutexType *)(lVar1 + 0xa8));
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  return;
}


