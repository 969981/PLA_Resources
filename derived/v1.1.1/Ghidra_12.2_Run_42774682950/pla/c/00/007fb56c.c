/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fb56c; name: FUN_007fb56c
 */


void FUN_007fb56c(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  int *piVar1;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  FUN_007fa3fc(local_50,param_2,*(undefined8 *)(param_2 + 0x150));
  if (local_50[0] == 0) {
    if (param_3 == 0) {
      local_60[0] = 0x10407;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_007fb5b0;
    }
    if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
      FUN_007e5bd8(param_2 + 0x1118);
      *(undefined4 *)(param_2 + 0x1148) = 0;
    }
    FUN_00805f48(local_60,*(undefined8 *)(param_2 + 0x150),param_2 + 0x1118,param_3,param_4,param_5,
                 param_6);
    FUN_007ee660(local_50,local_60);
    if (local_50[0] == 0) {
      FUN_007e5e70(*(undefined8 *)(param_2 + 0x150),0);
      *(undefined4 *)(param_2 + 0x1148) = 4;
    }
  }
  piVar1 = local_50;
LAB_007fb5b0:
  FUN_007ee578(param_1,piVar1);
  return;
}


