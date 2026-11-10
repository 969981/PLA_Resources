/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01083e14; name: FUN_01083e14
 */


void FUN_01083e14(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 uint *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_38;
  
  local_38 = 0;
  uVar3 = FUN_01083ed0(param_2,param_3,param_4,&local_38);
  if ((uVar3 & 1) == 0) {
    iVar2 = FUN_00150310(param_2,param_3);
    *param_5 = (uint)(iVar2 != -1);
    uVar1 = param_5[1];
    if (iVar2 != -1) {
      uVar1 = uVar1 + 1;
    }
    param_5[1] = uVar1;
    *param_1 = 0;
  }
  else {
    lVar4 = FUN_001511d0(param_2,param_3);
    *param_5 = 1;
    param_5[1] = param_5[1] + 1;
    *param_1 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  }
  return;
}


