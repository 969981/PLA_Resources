/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080d040; name: FUN_0080d040
 */


void FUN_0080d040(long param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  plVar4 = (long *)FUN_00809564(*(undefined8 *)(param_1 + 0x218));
  (**(code **)(*param_2 + 0x10))(param_2);
  param_2[1] = (ulong)*(ushort *)((long)plVar4 + 10);
  *(short *)(param_2 + 2) = (short)*(char *)((long)plVar4 + 0x66);
  if (*(int *)(param_1 + 100) == 0) {
    uVar1 = *(char *)((long)plVar4 + 0x62) == '\0';
  }
  else {
    uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x218) + 0x1e);
  }
  *(undefined1 *)((long)param_2 + 0x24) = uVar1;
  param_2[7] = *plVar4;
  memcpy((void *)((long)param_2 + 0x25),(void *)(param_1 + 0x220),0x10);
  memcpy(param_2 + 8,(void *)(param_1 + 0x12e0),(ulong)*(byte *)(param_1 + 0x1320));
  *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 0x1320);
  FUN_007f1fe8(param_2);
  memcpy((void *)((long)param_2 + 0x81),(void *)((long)plVar4 + 0x26c),0x180);
  iVar2 = FUN_007f21a8(*(undefined8 *)(param_1 + 0x218));
  iVar3 = FUN_007f2110(*(undefined8 *)(param_1 + 0x218));
  *(int *)(param_2 + 4) = iVar3 + iVar2;
  *(short *)((long)param_2 + 0x202) = (short)plVar4[9];
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


