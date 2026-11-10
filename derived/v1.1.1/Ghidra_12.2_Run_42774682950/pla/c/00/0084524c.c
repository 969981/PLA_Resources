/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084524c; name: FUN_0084524c
 */


void FUN_0084524c(undefined8 param_1,void *param_2,void *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong local_48 [2];
  undefined4 local_38 [2];
  
  if (param_3 == (void *)0x0) {
    local_48[0] = CONCAT44(local_48[0]._4_4_,0x10407);
  }
  else {
    nn::os::LockMutex((MutexType *)((long)param_2 + 0x1910));
    memcpy(param_3,param_2,0x1910);
    nn::os::UnlockMutex((MutexType *)((long)param_2 + 0x1910));
    if (*(ulong **)PTR_DAT_043773c0 == (ulong *)0x0) {
      local_48[0] = 0;
      FUN_007ecf14(local_48);
    }
    else {
      local_48[0] = **(ulong **)PTR_DAT_043773c0;
    }
    lVar3 = local_48[0] - *(long *)((long)param_2 + 0x1930);
    plVar2 = (long *)FUN_007ecfa4();
    uVar1 = 0;
    if (*plVar2 != 0) {
      uVar1 = (undefined4)(lVar3 / *plVar2);
    }
    *(undefined4 *)((long)param_3 + 0x1804) = uVar1;
    local_48[0] = local_48[0] & 0xffffffff00000000;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


