/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f13e0; name: FUN_031f13e0
 */


undefined1  [16] FUN_031f13e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = FUN_031f1440(param_2,param_3);
  uVar2 = FUN_031f1490(param_1,param_2,param_3);
  auVar3._0_4_ = (float)uVar1 + (float)uVar2;
  auVar3._4_4_ = (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar2 >> 0x20);
  auVar3._8_8_ = 0;
  return auVar3;
}


