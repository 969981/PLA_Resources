/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8c940; name: FUN_01a8c940
 */


undefined1  [16] FUN_01a8c940(long *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = (**(code **)(*param_1 + 0x1a0))();
  if ((uVar1 & 1) == 0) {
    local_50 = 0;
    uStack_48 = 0;
  }
  else {
    FUN_01a88b48(auStack_60,param_1);
  }
  auVar2._8_8_ = uStack_48;
  auVar2._0_8_ = local_50;
  return auVar2;
}


