/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e70d08; name: FUN_02e70d08
 */


undefined8 FUN_02e70d08(long param_1,long param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (((param_2 == 0) || (param_3 != 1)) || ((*(byte *)(param_2 + 0x14) & 7) == 2)) {
    uVar2 = 0;
    if (param_2 != 0) goto LAB_02e70d60;
LAB_02e70e04:
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xb8) != param_2) {
      bVar1 = *(byte *)(param_2 + 0x14) & 0xf8;
      if ((param_4 & 1) == 0) {
        bVar1 = bVar1 | 3;
      }
      else {
        bVar1 = bVar1 | 1;
      }
      uVar2 = 0;
      *(byte *)(param_2 + 0x14) = bVar1;
      goto LAB_02e70dc0;
    }
    uVar2 = 1;
    if (param_2 == 0) goto LAB_02e70e04;
LAB_02e70d60:
    FUN_02e71054(param_1,param_2,uVar2);
    if (((param_4 & 1) == 0) && ((*(byte *)(param_2 + 0x14) & 7) != 2)) {
      *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xf8 | 3;
    }
    FUN_02e6a918(param_1,param_2,uVar2);
    FUN_02e70fe8(param_1);
    uVar2 = 1;
  }
  FUN_02e6aa44(param_1,param_3);
  FUN_02e71a48(*(undefined8 *)(param_1 + 0x50));
LAB_02e70dc0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return uVar2;
}


