/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084acf0; name: FUN_0084acf0
 */


void FUN_0084acf0(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  long lVar2;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  if (*(int *)PTR_DAT_043779d0 == param_5) {
    local_40[0] = 0x10407;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    piVar1 = local_40;
  }
  else {
    *(int *)(param_2 + 0x4c8) = param_5;
    local_40[0] = 0;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    FUN_00841dfc(local_50,param_2 + 0x18,param_3);
    FUN_007ee660(local_40,local_50);
    if (local_40[0] == 0) {
      FUN_00841f30(local_50,param_2 + 0x38,param_4);
      FUN_007ee660(local_40,local_50);
      if (local_40[0] == 0) {
        local_50[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x20);
        if (lVar2 != 0) {
          FUN_0081a840(lVar2);
          FUN_0081a800(lVar2);
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        *(undefined2 *)(param_2 + 0x28) = 0;
        piVar1 = local_40;
      }
    }
    else {
      piVar1 = local_40;
    }
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


