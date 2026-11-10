/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ecb00; name: FUN_003ecb00
 */


ulong FUN_003ecb00(ulong param_1,int param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1 + 3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = SUB168(auVar3 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  return uVar1 + (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2 | 1;
}


