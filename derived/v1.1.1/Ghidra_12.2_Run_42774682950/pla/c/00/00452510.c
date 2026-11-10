/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452510; name: FUN_00452510
 */


undefined8
FUN_00452510(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) ||
     (iVar1 = *(int *)*param_1, iVar1 == 0x390 || iVar1 == 6)) {
    uVar2 = FUN_00422a60(param_1,0xffffffff,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0xffffffff;
}


