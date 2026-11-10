/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00466260; name: FUN_00466260
 */


undefined8
FUN_00466260(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
            undefined8 param_5,long param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  if (((param_3 < 0) || (uVar1 = FUN_00420ad0(*param_1,(long)param_3), (int)uVar1 != 0)) &&
     (uVar1 = FUN_00446a60(param_1[1],param_2,param_4,param_5), (int)uVar1 != 0)) {
    if (param_6 != 0) {
      FUN_0040a510(param_1[2],param_6,param_7);
    }
    uVar1 = 1;
  }
  return uVar1;
}


