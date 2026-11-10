/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ee0dc; name: FUN_007ee0dc
 */


void FUN_007ee0dc(undefined8 param_1,long *param_2,long param_3,int param_4,uint param_5,
                 uint param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  puVar2 = PTR_LAB_04377508;
  puVar1 = PTR_LAB_04377500;
  if ((((param_3 == 0) || (param_4 == 0)) || (9 < param_5)) ||
     (((param_6 & 0xfffffff8) != 8 || (8 < param_7 - 1U)))) {
    local_48[0] = 0x10407;
  }
  else if (((int)param_2[2] == 0) && (*param_2 != 0)) {
    param_2[0xe] = (long)param_2;
    param_2[0xc] = (long)puVar1;
    param_2[0xd] = (long)puVar2;
    iVar3 = FUN_00216450(param_2 + 4,param_5,8,param_6,param_7,0,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if (iVar3 == -4) {
      local_48[0] = 0x10401;
    }
    else if (iVar3 == 0) {
      lVar4 = FUN_00218440(param_2 + 4,0x80);
      param_2[7] = param_3;
      *(int *)(param_2 + 8) = param_4;
      param_2[3] = lVar4 + -0x80;
      local_48[0] = 0;
    }
    else {
      local_48[0] = 0xc0b;
    }
  }
  else {
    local_48[0] = 0x10408;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


