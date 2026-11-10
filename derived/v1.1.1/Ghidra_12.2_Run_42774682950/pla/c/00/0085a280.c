/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085a280; name: FUN_0085a280
 */


void FUN_0085a280(undefined8 param_1)

{
  long *plVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((DAT_043a5829 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else if ((DAT_043a582a & 1) == 0) {
    local_30[0] = 0x10408;
  }
  else {
    plVar1 = (long *)FUN_007e336c();
    (**(code **)(*plVar1 + 0x28))();
    FUN_007e33c4();
    DAT_043a582a = 0;
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


