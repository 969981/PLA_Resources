/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eca70; name: FUN_003eca70
 */


undefined8 FUN_003eca70(undefined8 param_1,ulong param_2,undefined4 param_3,int param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2 + 3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = SUB168(auVar3 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  uVar4 = FUN_002ebd50(uVar1 + (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe)
                               * 2 | 1);
  FUN_003ecb50(uVar4,param_1,param_2,param_3,param_4);
  return uVar4;
}


