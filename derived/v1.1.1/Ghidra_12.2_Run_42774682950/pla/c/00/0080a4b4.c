/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080a4b4; name: FUN_0080a4b4
 */


void FUN_0080a4b4(int *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  puVar1 = PTR_DAT_043773c0;
  if (*(long *)PTR_DAT_043773c0 != 0) {
    lVar2 = FUN_00854f34();
    if (lVar2 != 0) {
      FUN_007f0294(lVar2 + 8);
    }
    lVar2 = FUN_00854f4c(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      FUN_007f0294(lVar2 + 8);
    }
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x1240));
  if (((*(long *)(param_2 + 0x1238) == 0) || (*(int *)(*(long *)(param_2 + 0x1238) + 4) < 1)) ||
     (FUN_007eb8b0(param_1), *param_1 == 0)) {
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    FUN_007ee578(param_1,local_48);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1240));
  return;
}


