/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1c1c; name: FUN_007f1c1c
 */


void FUN_007f1c1c(undefined8 param_1,long *param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  puVar2 = PTR_LAB_04377540;
  puVar1 = PTR_LAB_04377538;
  if ((param_3 == 0) || (param_4 == 0)) {
    local_30[0] = 0x10407;
  }
  else if (param_2[0xe] == 0) {
    local_30[0] = 0x10408;
  }
  else {
    *param_2 = param_3;
    *(int *)(param_2 + 1) = param_4;
    param_2[8] = (long)puVar1;
    param_2[9] = (long)puVar2;
    param_2[10] = (long)param_2;
    iVar3 = FUN_00213020(param_2,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if (iVar3 == -4) {
      local_30[0] = 0x10401;
    }
    else if (iVar3 == 0) {
      local_30[0] = 0;
    }
    else {
      local_30[0] = 0xc0b;
    }
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


