/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867618; name: FUN_00867618
 */


void FUN_00867618(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  int local_90 [4];
  undefined1 auStack_80 [16];
  undefined4 local_70 [4];
  int local_60 [4];
  undefined4 local_50 [4];
  undefined1 auStack_40 [16];
  undefined4 local_28 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) == 0) {
    FUN_00867504(param_1);
  }
  else if (param_2 == 2) {
    local_60[0] = 0xc406;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_50);
    FUN_007ee578(local_50,local_60);
    if ((*(char *)(param_1 + 0x48) != '\0') || (*(char *)(param_1 + 0x4a) != '\0')) {
      FUN_007e8b38(local_60,*(undefined8 *)PTR_DAT_04377458);
      plVar3 = *(long **)(param_1 + 8);
      if (local_60[0] == 0) {
        local_70[0] = 0xc406;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_28);
        uVar1 = FUN_007f00c8(local_70);
        (**(code **)(*plVar3 + 0x38))(plVar3,uVar1);
      }
      else {
        uVar1 = FUN_007f00c8(local_60);
        (**(code **)(*plVar3 + 0x38))(plVar3,uVar1);
        FUN_007ee660(local_50,local_60);
      }
    }
    FUN_007ee578(auStack_80,local_50);
    FUN_008677ac(param_1);
    lVar2 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
    FUN_007ee578(local_90,local_50);
    if (*(int *)(lVar2 + 0x1a8) != local_90[0]) {
      FUN_007ee660(lVar2 + 0x1a8,local_90);
    }
  }
  else {
    local_50[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    FUN_007ee578(auStack_40,local_50);
    FUN_008677ac(param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


