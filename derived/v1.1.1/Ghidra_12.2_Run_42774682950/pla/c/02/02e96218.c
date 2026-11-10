/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96218; name: FUN_02e96218
 */


undefined4
FUN_02e96218(void *param_1,int param_2,void *param_3,undefined4 param_4,ulong param_5,uint param_6,
            undefined2 param_7,long param_8)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined4 uVar6;
  ulong __n;
  undefined8 uVar7;
  
  __n = (ulong)param_6;
  sVar2 = **(short **)(param_8 + 8);
  uVar6 = 0x40001;
  if (sVar2 != -1) {
    if (sVar2 == 0x3041) {
      uVar6 = 0x140001;
    }
    else if (sVar2 == 0x3040) {
      uVar6 = 0x130001;
    }
    else {
      uVar6 = 1;
    }
  }
  plVar5 = (long *)FUN_02eacbf0(uVar6);
  if (plVar5 == (long *)0x0) {
    uVar4 = 0x34;
  }
  else {
    memcpy(param_1,param_3,__n);
    puVar1 = (undefined2 *)((long)param_1 + (param_5 & 0xffffffff));
    *puVar1 = 0xfffe;
    puVar1[6] = param_7;
    puVar1[7] = 0x10;
    if ((param_6 & 3) != 0) {
      uVar7 = *(undefined8 *)((long)param_1 + (__n - 8));
      uVar3 = 4 - (param_6 & 3);
      *(undefined4 *)((long)param_1 + (__n - 8)) = 0x4b4e554a;
      *(uint *)((long)param_1 + (__n - 4)) = uVar3;
      memset((void *)((long)param_1 + __n + 8),0,(ulong)uVar3);
      param_6 = (param_6 - (param_6 & 3)) + 0xc;
      __n = (ulong)param_6;
      *(undefined8 *)((long)param_1 + (__n - 8)) = uVar7;
    }
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    uVar4 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,(long)param_1 + __n,param_2 - param_6,param_3,param_4,
                       (long)param_1 + __n + -4);
    FUN_02eacc68(uVar6,plVar5);
    nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  }
  return uVar4;
}


