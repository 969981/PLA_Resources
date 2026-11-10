/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085ce14; name: FUN_0085ce14
 */


void FUN_0085ce14(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_043773c0;
  piVar4 = local_50;
  if (((*(long *)PTR_DAT_043773c0 == 0) || (lVar2 = FUN_00854f4c(), lVar2 == 0)) ||
     (lVar3 = FUN_00854f34(*(undefined8 *)puVar1), lVar3 == 0)) {
    local_40[0] = 0x10408;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  else {
    local_40[0] = 0;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    FUN_007f029c(local_50,lVar2 + 8,*(undefined8 *)(param_2 + 0x13b0));
    FUN_007ee660(local_40,local_50);
    if (local_40[0] == 0) {
      FUN_007f029c(local_50,lVar3 + 8,*(undefined8 *)(param_2 + 0x13b0));
      FUN_007ee660(local_40,local_50);
      if (local_40[0] == 0) {
        FUN_007f0250(local_50,lVar2 + 8);
        FUN_007ee660(local_40,local_50);
        if (local_40[0] == 0) {
          FUN_007f0250(local_50,lVar3 + 8);
          FUN_007ee660(local_40,local_50);
          if (local_40[0] == 0) {
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
            goto LAB_0085cf44;
          }
        }
      }
    }
  }
  piVar4 = local_40;
LAB_0085cf44:
  FUN_007ee578(param_1,piVar4);
  return;
}


