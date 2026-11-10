/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5a774; name: FUN_02f5a774
 */


void FUN_02f5a774(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  void *__dest;
  MutexType *pMVar5;
  void *__src;
  long lVar6;
  long lVar7;
  MutexType *pMVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)(param_1 + 8);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0x100,0);
  if (*(long *)(param_1 + 8) == 0) {
    __src = (void *)0x0;
  }
  else {
    __src = (void *)(*(long *)(param_1 + 8) + (long)puVar9);
  }
  memcpy(__dest,__src,(long)*(int *)(param_1 + 0x10) << 7);
  if ((int)*(uint *)(param_1 + 0x14) < 0) {
    uVar2 = *(uint *)(param_1 + 0x14) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x10)) {
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (long)puVar9;
    }
    lVar7 = *(long *)(lVar3 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar7;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,(ulong)uVar2 << 7);
  }
  if (__dest == (void *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (long)__dest - (long)puVar9;
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x14) = 0x80000002;
  *(long *)(param_1 + 8) = lVar6;
  puVar1 = (undefined8 *)(lVar6 + (long)puVar9);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[1] = 0x7f7fffee7f7fffee;
  *puVar1 = 0x7f7fffee7f7fffee;
  puVar1[3] = 0xff7fffeeff7fffee;
  puVar1[2] = 0xff7fffeeff7fffee;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  puVar1[5] = 0x7f7fffee7f7fffee;
  puVar1[4] = 0x7f7fffee7f7fffee;
  puVar1[7] = 0xff7fffeeff7fffee;
  puVar1[6] = 0xff7fffeeff7fffee;
  puVar1[9] = 0x7f7fffee7f7fffee;
  puVar1[8] = 0x7f7fffee7f7fffee;
  puVar1[0xb] = 0xff7fffeeff7fffee;
  puVar1[10] = 0xff7fffeeff7fffee;
  lVar6 = *(long *)(param_1 + 8);
  *(undefined2 *)((long)puVar9 + lVar6 + 0xf0) = 0;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xe0) = 0;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xe8) = 0;
  *(undefined8 *)((long)puVar9 + lVar6 + 0x88) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0x98) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xa8) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xb8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 200) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xd8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar9 + lVar6 + 0xd0) = 0xff7fffeeff7fffee;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined ***)(param_1 + 0x28) = &PTR_LAB_04363a18;
  *(undefined8 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x1878) = 0;
  *(long *)(param_1 + 0x1890) = param_1 + 0x18a0;
  *(undefined4 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x189c) = 0x80000010;
  *(long *)(param_1 + 0x1960) = param_1 + 0x1970;
  *(undefined4 *)(param_1 + 0x1968) = 0;
  *(undefined4 *)(param_1 + 0x196c) = 0x80000010;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(long *)(param_1 + 0x19b8) = param_1 + 0x19c8;
  *(undefined4 *)(param_1 + 0x19c0) = 0;
  *(undefined4 *)(param_1 + 0x19c4) = 0x80000020;
  *(undefined8 *)(param_1 + 0x1ac8) = 0;
  *(undefined1 *)(param_1 + 0x1ae0) = 0;
  *(undefined4 *)(param_1 + 0x1ae4) = 0;
  *(undefined2 *)(param_1 + 0x1ae8) = 0x101;
  *(undefined8 *)(param_1 + 0x1bf8) = 0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  pMVar5 = (MutexType *)(**(code **)(*plVar4 + 0x10))(plVar4,0x20,0);
  nn::os::InitializeMutex(pMVar5,true,0);
  pMVar8 = *(MutexType **)(param_1 + 0x1bf8);
  *(MutexType **)(param_1 + 0x1bf8) = pMVar5;
  if (pMVar8 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar8);
    lVar6 = *(long *)(lVar3 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,pMVar8,0x20);
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


