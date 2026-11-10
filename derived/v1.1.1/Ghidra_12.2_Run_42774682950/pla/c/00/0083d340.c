/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083d340; name: FUN_0083d340
 */


void FUN_0083d340(undefined8 param_1,long *param_2,ulong param_3,long param_4,long *param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if ((param_4 == 0) || (param_5 == (long *)0x0)) {
    local_48[0] = 0x10407;
  }
  else {
    uVar5 = (**(code **)(*param_5 + 0xd8))(param_5);
    if ((uVar5 & 1) == 0) {
      local_48[0] = 0x10408;
    }
    else {
      param_2[0xb] = param_4;
      FUN_007e5c2c(param_4);
      param_2[0x12] = (long)param_5;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      puVar3 = PTR_LAB_04377ef8;
      bVar4 = (param_3 & 1) == 0;
      pcVar1 = "OpenCloseParticipationJob::OpenParticipation";
      if (bVar4) {
        pcVar1 = "OpenCloseParticipationJob::CloseParticipation";
      }
      param_2[8] = (long)pcVar1;
      puVar2 = PTR_FUN_04377f00;
      if (bVar4) {
        puVar2 = puVar3;
      }
      param_2[6] = (long)puVar2;
      param_2[7] = 0;
      local_48[0] = 0;
    }
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


