/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a570; name: FUN_0044a570
 */


ulong FUN_0044a570(undefined8 *param_1,uint param_2,char *param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  
  uVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    sVar4 = param_4 & 0xffffffff;
    if ((param_3 == (char *)0x0) && ((int)param_4 != 0)) {
      return 0;
    }
    if ((0 < (int)param_2) && ((param_2 >> 0xc & 1) != 0)) {
      uVar1 = FUN_00407f40(*param_1);
      lVar2 = FUN_0044a840(param_1 + 1,param_3,sVar4,param_2,uVar1);
      return (ulong)(lVar2 != 0);
    }
    if ((int)param_4 < 0) {
      sVar4 = strlen(param_3);
    }
    uVar3 = FUN_0040a280(param_1[1],param_3,sVar4 & 0xffffffff);
    if ((int)uVar3 != 0) {
      if (param_2 != 0xffffffff) {
        if (param_2 == 0xfffffffe) {
          uVar1 = FUN_0044a680(param_3,sVar4 & 0xffffffff);
          *(undefined4 *)(param_1[1] + 4) = uVar1;
        }
        else {
          *(uint *)(param_1[1] + 4) = param_2;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


