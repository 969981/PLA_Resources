/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00859380; name: FUN_00859380
 */


void FUN_00859380(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((char)param_2[1] == '\0') {
    FUN_0085a160(local_38);
    if (local_38[0] == 0) {
      FUN_0085a320(local_48);
      FUN_007ee660(local_38,local_48);
      if (local_38[0] == 0) {
        uVar1 = FUN_007e336c();
        lVar2 = FUN_0081a750(0x14,uVar1);
        if (lVar2 != 0) {
          FUN_007eb6cc(lVar2);
        }
        param_2[0x191] = lVar2;
        uVar1 = FUN_007e336c();
        lVar2 = FUN_0081a750(0xf38,uVar1);
        if (lVar2 != 0) {
          FUN_0086d03c(lVar2);
        }
        param_2[4] = lVar2;
        FUN_0085a280(local_48);
        FUN_007ee660(local_38,local_48);
        if (local_38[0] == 0) {
          *(undefined2 *)(param_2 + 1) = 1;
          local_48[0] = 0;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
          piVar3 = local_48;
          goto LAB_00859468;
        }
      }
    }
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  else {
    local_38[0] = 0x10402;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  piVar3 = local_38;
LAB_00859468:
  FUN_007ee578(param_1,piVar3);
  return;
}


