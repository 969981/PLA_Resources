/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7d7c; name: FUN_02ec7d7c
 */


void FUN_02ec7d7c(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x160) != param_2) {
    *(int *)(param_1 + 0x160) = param_2;
    uVar1 = FUN_02e74ed0();
    if ((uVar1 & 1) != 0) {
      nn::os::SignalEvent((EventType *)&DAT_0440b270);
      return;
    }
  }
  return;
}


