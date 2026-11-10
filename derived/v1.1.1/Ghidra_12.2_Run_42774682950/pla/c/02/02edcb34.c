/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edcb34; name: FUN_02edcb34
 */


undefined4 FUN_02edcb34(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  nn::os::InitializeEvent((EventType *)(param_1 + 0x38),0,0);
  nn::os::SignalEvent((EventType *)(param_1 + 0x38));
  DAT_0440a188 = param_1 + 0x60;
  uVar1 = FUN_02edcb8c(param_1);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


