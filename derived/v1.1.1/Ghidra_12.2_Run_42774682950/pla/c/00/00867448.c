/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867448; name: FUN_00867448
 */


void FUN_00867448(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  
  puVar1 = PTR_DAT_043780f8;
  lVar2 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x1378));
  *(uint *)(param_1 + 0x38) = param_2;
  lVar3 = thunk_FUN_007f3f6c(*(undefined8 *)puVar1);
  *(ulong *)(*(long *)(lVar3 + 0x1308) + 0x18) = (ulong)param_2;
  lVar3 = thunk_FUN_007f3f6c(*(undefined8 *)puVar1);
  uVar4 = thunk_FUN_007f3f6c(*(undefined8 *)puVar1);
  FUN_0085c5b0(auStack_50,uVar4,(ulong)param_2);
  uVar5 = FUN_007f0f48(lVar3 + 0x98,auStack_50);
  if ((uVar5 & 1) == 0) {
    FUN_007f0f88(lVar3 + 0x98,auStack_50);
  }
  thunk_FUN_007f3f6c(*(undefined8 *)puVar1);
  FUN_007fcaf4();
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x1378));
  return;
}


