/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7c0c; name: FUN_007f7c0c
 */


void FUN_007f7c0c(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar1 = (**(code **)(*param_2 + 0x348))();
  if ((uVar1 & 1) == 0) {
    local_40[0] = 0x1043e;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    FUN_007ee578(param_1,local_40);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_2 + 0x3f));
    lVar2 = param_2[0x43];
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_3 + 0x38);
    *(undefined2 *)(lVar2 + 0x18) = *(undefined2 *)(param_3 + 0x30);
    *(undefined2 *)(lVar2 + 0x1a) = *(undefined2 *)(param_3 + 0x32);
    *(bool *)(lVar2 + 0x1e) = *(char *)(param_3 + 0x40) != '\x02';
    *(undefined1 *)(lVar2 + 0x1f) = *(undefined1 *)(param_3 + 0x41);
    *(int *)(lVar2 + 0x28) = *(int *)(param_3 + 0x48) + *(int *)(param_3 + 0x44);
    FUN_007fd7cc(param_3,*(undefined8 *)(lVar2 + 0x20));
    *(ushort *)(param_2[0x43] + 0x1c) = (ushort)*(byte *)(*(long *)(param_2[0x43] + 0x20) + 0x16);
    *(undefined4 *)((long)param_2 + 100) = *(undefined4 *)(param_3 + 0x24);
    local_40[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    FUN_007ee578(param_1,local_40);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x3f));
  }
  return;
}


