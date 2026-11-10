/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844c20; name: FUN_00844c20
 */


void FUN_00844c20(undefined8 param_1,long param_2)

{
  ulong local_40 [2];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x1938) == '\0') {
    nn::os::LockMutex((MutexType *)(param_2 + 0x1910));
    FUN_00845344(param_2);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x1910));
    if (*(ulong **)PTR_DAT_043773c0 == (ulong *)0x0) {
      local_40[0] = 0;
      FUN_007ecf14(local_40);
    }
    else {
      local_40[0] = **(ulong **)PTR_DAT_043773c0;
    }
    *(ulong *)(param_2 + 0x1930) = local_40[0];
    *(char *)(param_2 + 0x1938) = '\x01';
    local_40[0] = local_40[0] & 0xffffffff00000000;
  }
  else {
    local_40[0] = CONCAT44(local_40[0]._4_4_,0x10408);
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


