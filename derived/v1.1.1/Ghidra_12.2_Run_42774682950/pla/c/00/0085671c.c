/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085671c; name: FUN_0085671c
 */


void FUN_0085671c(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined8 param_7,uint param_8)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_2 + 0x700) == 0) {
    if (param_3 == 0) {
      local_38[0] = 0x10407;
      goto LAB_0085673c;
    }
    FUN_00857c68(local_38,param_2,"Pia ReceiveThreadStream",param_5,param_6,param_4,param_7,0x19,
                 param_8 & 1);
    if (local_38[0] == 0) {
      if (*(long *)(param_2 + 200) != 0) {
        FUN_00855c64(*(long *)(param_2 + 200),param_3);
      }
      *(long *)(param_2 + 0x700) = param_3;
      *(undefined4 *)(param_2 + 0x708) = 0;
      *(undefined8 *)(param_2 + 0x710) = 0;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar1 = local_48;
      goto LAB_00856758;
    }
  }
  else {
    local_38[0] = 0x10402;
LAB_0085673c:
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  piVar1 = local_38;
LAB_00856758:
  FUN_007ee578(param_1,piVar1);
  return;
}


