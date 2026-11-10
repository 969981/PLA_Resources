/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00861174; name: FUN_00861174
 */


void FUN_00861174(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int local_a0 [4];
  undefined2 local_90 [4];
  int local_88 [4];
  undefined4 local_78;
  undefined1 auStack_74 [60];
  undefined4 local_38 [2];
  
  piVar4 = local_a0;
  local_78 = 0;
  uVar1 = 0;
  if ((int)param_3[1] == 7 || (int)param_3[1] == 2) {
    uVar1 = param_5;
  }
  (**(code **)(*param_3 + 0x10))(local_88,param_3,auStack_74,&local_78,0x3a);
  if (local_88[0] == 0) {
    local_90[0] = 0x100;
    uVar2 = FUN_00847424(param_2);
    local_a0[0] = -0x54000000;
    lVar3 = FUN_008469d8(uVar2,local_a0,param_4,local_78,local_90,0x1000100000000,0);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x76c) = uVar1;
      uVar2 = FUN_00847424(param_2);
      FUN_0084695c(local_a0,uVar2,auStack_74);
    }
    local_a0[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_38);
  }
  else {
    piVar4 = local_88;
  }
  FUN_007ee578(param_1,piVar4);
  return;
}


