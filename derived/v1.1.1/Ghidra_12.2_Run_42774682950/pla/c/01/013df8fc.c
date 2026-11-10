/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013df8fc; name: FUN_013df8fc
 */


bool FUN_013df8fc(undefined8 *param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                 uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = FUN_0112ecd0(*(undefined8 *)*param_1);
  uVar2 = FUN_0112ecd0(*(undefined8 *)*param_1,param_4);
  return uVar1 < uVar2 || param_3 < param_5 && uVar1 == uVar2;
}


