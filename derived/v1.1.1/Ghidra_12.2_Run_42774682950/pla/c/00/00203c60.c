/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203c60; name: FUN_00203c60
 */


undefined8 FUN_00203c60(undefined8 *param_1,int param_2,char *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(char *)((long)param_1 + (long)param_2 + 0x3f8) == '\0') ||
     (uVar2 = FUN_00203b60(param_1,param_2), (int)uVar2 == 0)) {
    uVar3 = FUN_00203c08(*param_1);
    puVar1 = PTR_PTR_04372758;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0x23;
    }
    else {
      *(byte *)(param_1 + (long)param_2 * 3 + 0x54) =
           *(byte *)(param_1 + (long)param_2 * 3 + 0x54) | 1;
      uVar2 = (**(code **)(*(long *)puVar1 + 0x68))(param_1,param_2,param_3);
      if ((int)uVar2 == 0) {
        if (*param_3 != '\0') {
          FUN_001f2dcc(*param_1,5);
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


