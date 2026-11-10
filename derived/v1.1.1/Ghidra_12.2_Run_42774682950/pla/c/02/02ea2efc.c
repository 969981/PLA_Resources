/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea2efc; name: FUN_02ea2efc
 */


void FUN_02ea2efc(long *param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *local_30;
  undefined1 local_28;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a398);
  uVar3 = DAT_0440a378;
  if ((*(byte *)((long)param_1 + 0x184) >> 6 & 1) == 0) {
    if (DAT_0440a37c <= DAT_0440a378) {
      iVar1 = DAT_0440a37c + (DAT_0440a37c >> 1);
      if (DAT_0440a37c == 0) {
        iVar1 = 1;
      }
      uVar4 = FUN_02e96dd4(&DAT_0440a370,iVar1);
      if ((uVar4 & 1) == 0) goto LAB_02ea2fa8;
    }
    if (uVar3 < DAT_0440a37c) {
      uVar4 = (ulong)DAT_0440a378;
      DAT_0440a378 = DAT_0440a378 + 1;
      plVar2 = (long *)(DAT_0440a370 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        *plVar2 = (long)param_1;
        *(byte *)((long)param_1 + 0x184) = *(byte *)((long)param_1 + 0x184) | 0x40;
        if (DAT_0440a390 == '\x01') {
          local_28 = 0x59;
          local_30 = param_1;
          (**(code **)(*param_1 + 0xd0))(0,param_1,&local_30,1);
        }
      }
    }
  }
LAB_02ea2fa8:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a398);
  return;
}


