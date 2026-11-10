/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0228a380; name: FUN_0228a380
 */


undefined8 FUN_0228a380(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00150310(param_1,1);
  if ((int)uVar1 == 0) {
    *param_3 = 1;
    param_3[1] = param_3[1] + 1;
    return 1;
  }
  uVar2 = FUN_00b482e8(uVar1,param_1,1,uVar1 & 0xffffffff,param_2,param_3);
  return uVar2;
}


