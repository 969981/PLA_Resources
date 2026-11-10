/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02208830; name: FUN_02208830
 */


undefined8
FUN_02208830(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00150310();
  if ((int)uVar1 == 0) {
    *param_4 = 1;
    param_4[1] = param_4[1] + 1;
    return 1;
  }
  uVar2 = FUN_022088a4(uVar1,param_1,param_2,uVar1 & 0xffffffff,param_3,param_4);
  return uVar2;
}


