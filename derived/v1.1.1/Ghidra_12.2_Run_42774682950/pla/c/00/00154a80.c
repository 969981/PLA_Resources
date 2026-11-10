/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154a80; name: FUN_00154a80
 */


undefined1  [16] FUN_00154a80(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  int local_24;
  
  uVar4 = param_1._8_8_;
  iVar1 = FUN_00150310();
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = param_1._0_8_;
  if (0 < iVar1) {
    auVar3 = FUN_00150a90(param_2,param_3,&local_24);
    uVar5 = auVar3._8_8_;
    uVar4 = auVar3._0_8_;
    if (local_24 == 0) {
      uVar2 = FUN_001503f0(param_2,3);
      FUN_00154670(param_2,param_3,uVar2);
      auVar3._8_8_ = uVar5;
      auVar3._0_8_ = uVar4;
    }
  }
  return auVar3;
}


