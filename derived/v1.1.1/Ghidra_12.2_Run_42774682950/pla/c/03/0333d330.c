/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d330; name: thunk_FUN_0333d334
 */


void thunk_FUN_0333d334(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  nn::os::AllocateTlsSlot((TlsSlot *)&DAT_04350fb8,(_func_void_ulong *)&LAB_0333d654);
  plVar1 = (long *)FUN_032d49a4();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x60))();
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x78,0);
  FUN_0333d6f8();
  DAT_04350fd0 = uVar2;
  DAT_04350fd8 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,0x10,0);
  *DAT_04350fd8 = 0;
  DAT_04350fd8[1] = 0;
  DAT_04350fc0 = 1;
  DAT_04350fc8 = FUN_0333d16c(param_1,0);
  return;
}


