/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154a20; name: FUN_00154a20
 */


undefined1  [16] FUN_00154a20(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int local_24;
  
  auVar2 = FUN_00150a90(param_1,param_2,&local_24);
  uVar3 = auVar2._8_8_;
  if (local_24 == 0) {
    uVar1 = FUN_001503f0(param_1,3);
    FUN_00154670(param_1,param_2 & 0xffffffff,uVar1);
  }
  auVar2._8_8_ = uVar3;
  return auVar2;
}


