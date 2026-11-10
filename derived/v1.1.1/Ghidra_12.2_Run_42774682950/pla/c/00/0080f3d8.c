/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080f3d8; name: FUN_0080f3d8
 */


void FUN_0080f3d8(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_007f4b24(local_38);
  if (local_38[0] == 0) {
    (**(code **)(*param_2 + 0x390))(param_2);
    if (param_2[0x23a] == 0) {
      uVar1 = FUN_007e336c();
      lVar3 = FUN_0081a750(0x68,uVar1);
      if (lVar3 != 0) {
        FUN_00810384(lVar3,param_2);
      }
      param_2[0x23a] = lVar3;
      lVar3 = param_2[0x23b];
    }
    else {
      lVar3 = param_2[0x23b];
    }
    if (lVar3 == 0) {
      uVar1 = FUN_007e336c();
      lVar3 = FUN_0081a750(400,uVar1);
      if (lVar3 != 0) {
        FUN_0080fa84(lVar3,param_2);
      }
      param_2[0x23b] = lVar3;
    }
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar2 = local_48;
  }
  else {
    piVar2 = local_38;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


