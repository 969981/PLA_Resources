/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00814800; name: FUN_00814800
 */


void FUN_00814800(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  ulong local_68;
  undefined4 local_60;
  int local_58 [4];
  undefined4 local_48 [2];
  
  FUN_007f7c0c(local_58);
  if (local_58[0] == 0) {
    nn::os::LockMutex((MutexType *)(param_2 + 0x1f8));
    plVar2 = *(long **)(param_2 + 0x218);
    uVar1 = FUN_007f0d7c(plVar2 + 0x57);
    FUN_007fd7cc(param_3,param_2 + 0xc40,uVar1);
    FUN_007f0e44(&local_68,plVar2 + 0x57,param_2 + 0xc40,uVar1);
    local_60 = 0;
    local_68 = 0x8000000;
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_68);
    local_68 = local_68 & 0xffffffff00000000;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
    FUN_007ee578(param_1,&local_68);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x1f8));
  }
  else {
    FUN_007ee578(param_1,local_58);
  }
  return;
}


