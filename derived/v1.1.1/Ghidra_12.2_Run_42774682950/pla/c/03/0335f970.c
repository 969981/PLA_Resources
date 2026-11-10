/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335f970; name: FUN_0335f970
 */


undefined1  [16] FUN_0335f970(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0x8000000000000000;
  FUN_001bb028(param_2,0,&local_40);
  auVar3 = FUN_0335eac0(param_1,local_40,local_38 & 0xffffffff,param_2);
  uVar1 = local_38;
  uVar4 = auVar3._8_8_;
  uVar2 = local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < (long)uVar1) && (local_40 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_40,0x10,uVar2 & 0x3fffffff);
  }
  auVar3._8_8_ = uVar4;
  return auVar3;
}


