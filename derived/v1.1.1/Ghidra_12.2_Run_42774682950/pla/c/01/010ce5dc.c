/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ce5dc; name: FUN_010ce5dc
 */


undefined8 FUN_010ce5dc(long param_1,long *param_2)

{
  MutexType *pMVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  pMVar1 = (MutexType *)(param_1 + 0xa0);
  nn::os::LockMutex(pMVar1);
  *(undefined1 *)(param_1 + 0xc1) = 1;
  uVar4 = FUN_010ce508(param_1);
  plVar5 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
  uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,uVar4,plVar5[1]);
  if ((uVar7 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc1) = 0;
    nn::os::UnlockMutex(pMVar1);
    uVar4 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    for (lVar8 = *(long *)(param_1 + 8); lVar8 != lVar9; lVar8 = lVar8 + 0x30) {
      if (((*(char *)(lVar8 + 0x28) != '\0') && (*(void **)(lVar8 + 8) != (void *)0x0)) &&
         (*(void **)(lVar8 + 0x10) != (void *)0x0)) {
        memcpy(*(void **)(lVar8 + 0x10),*(void **)(lVar8 + 8),*(size_t *)(lVar8 + 0x20));
        *(undefined1 *)(lVar8 + 0x28) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0xc1) = 0;
    nn::os::UnlockMutex(pMVar1);
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    for (puVar2 = *(undefined4 **)(param_1 + 8); puVar2 != puVar3; puVar2 = puVar2 + 0xc) {
      local_44 = *puVar2;
      plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
      uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,4,plVar5[1]);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_44,4,0);
      }
      lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 4;
      lVar9 = *(long *)(puVar2 + 4);
      lVar8 = *(long *)(puVar2 + 8);
      plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      if (lVar9 != 0) {
        plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
        uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,plVar5[1]);
        if ((uVar7 & 1) != 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8,0);
        }
      }
      lVar9 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + lVar8;
    }
    uVar4 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return uVar4;
}


