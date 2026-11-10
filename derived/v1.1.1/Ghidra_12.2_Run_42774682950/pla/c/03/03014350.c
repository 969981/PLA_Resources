/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03014350; name: FUN_03014350
 */


ulong FUN_03014350(long param_1,ulong *param_2)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x40));
  uVar2 = (ulong)(ushort)param_2[2];
  if (((uVar2 == 0xffff) || (*(int *)(param_1 + 0x50) <= (int)(uint)(ushort)param_2[2])) ||
     (*(float *)(*(long *)(param_1 + 0x48) + uVar2 * 0x50 + 0x28) < 0.0)) {
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
    __s = (char *)(*param_2 & 0xfffffffffffffffe);
    if (((__s == (char *)0x0) || (sVar1 = strlen(__s), (int)sVar1 < 1)) ||
       (uVar2 = FUN_03014118(param_1,__s), (~(uint)uVar2 & 0xffff) == 0)) {
      if (param_2[1] == 0) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = FUN_030131f8(param_1,param_2[1] + 0x20);
      }
    }
  }
  else {
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
  }
  return uVar2 & 0xffff;
}


