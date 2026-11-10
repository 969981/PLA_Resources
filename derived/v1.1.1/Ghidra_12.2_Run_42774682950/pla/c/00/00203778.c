/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203778; name: FUN_00203778
 */


undefined8 FUN_00203778(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
        (((*(byte *)((long)param_2 + 0x79) ^ *(byte *)((long)param_1 + 0x79)) & 7) == 0)) &&
       ((iVar1 = FUN_001f8bd0(param_1[2],param_2[2]), iVar1 != 0 &&
        (iVar1 = FUN_001f8bd0(param_1[3],param_2[3]), iVar1 != 0)))) &&
      ((iVar1 = FUN_001f8bd0(param_1[4],param_2[4]), iVar1 != 0 &&
       ((iVar1 = FUN_001f8bd0(param_1[5],param_2[5]), iVar1 != 0 &&
        (iVar1 = FUN_001f8bd0(param_1[6],param_2[6]), iVar1 != 0)))))) &&
     ((iVar1 = FUN_001f8bd0(param_1[7],param_2[7]), iVar1 != 0 &&
      (iVar1 = FUN_001f8bd0(param_1[8],param_2[8]), iVar1 != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


