/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154b90; name: FUN_00154b90
 */


undefined8 FUN_00154b90(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_24;
  
  iVar1 = FUN_00150310();
  if (0 < iVar1) {
    param_3 = FUN_00150ba0(param_1,param_2,&local_24);
    if (local_24 == 0) {
      iVar1 = FUN_001505a0(param_1,param_2);
      if (iVar1 == 0) {
        uVar2 = FUN_001503f0(param_1,3);
        FUN_00154670(param_1,param_2,uVar2);
      }
      else {
        FUN_00154010(param_1,param_2,"number has no integer representation");
      }
    }
  }
  return param_3;
}


