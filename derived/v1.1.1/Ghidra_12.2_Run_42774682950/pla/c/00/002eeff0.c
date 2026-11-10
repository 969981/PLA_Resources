/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eeff0; name: FUN_002eeff0
 */


undefined1  [16] FUN_002eeff0(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == 0x8000000000000000) {
    auVar3._8_8_ = param_2 << 0x20;
    auVar3._0_8_ = 0x8000000000000000;
    return auVar3;
  }
  if (param_1 == 0x7fffffffffffffff) {
    auVar2._8_8_ = param_2 << 0x20;
    auVar2._0_8_ = 0x7fffffffffffffff;
    return auVar2;
  }
  uVar1 = param_1 / 1000000;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar1 = ~((long)~param_1 / 1000000);
  }
  auVar4._8_8_ = (param_1 + uVar1 * -1000000) * 1000 & 0xfffffff8 | param_2 << 0x20;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


