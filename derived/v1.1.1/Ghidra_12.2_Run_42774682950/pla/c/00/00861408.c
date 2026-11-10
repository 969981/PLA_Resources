/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00861408; name: FUN_00861408
 */


void FUN_00861408(undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  ulong uVar1;
  int *piVar2;
  bool bVar3;
  int local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  piVar2 = local_60;
  if ((param_4 - 3U < 2) &&
     (uVar1 = FUN_0085f934(param_2,*(undefined8 *)(param_3 + 0x10)), (uVar1 & 1) != 0)) {
    local_50[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    local_50[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    if (0 < param_5) {
      bVar3 = false;
      do {
        while( true ) {
          FUN_0086126c(local_60,param_2,param_3,param_4);
          if (local_60[0] != 0) break;
          bVar3 = true;
          param_5 = param_5 + -1;
          if (param_5 == 0) goto LAB_008614cc;
        }
        FUN_007ee660(local_50,local_60);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
LAB_008614cc:
      if (bVar3) {
        local_60[0] = 0;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
        goto LAB_008614f4;
      }
    }
  }
  piVar2 = local_50;
LAB_008614f4:
  FUN_007ee578(param_1,piVar2);
  return;
}


