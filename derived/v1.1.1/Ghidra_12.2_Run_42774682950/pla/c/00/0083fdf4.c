/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083fdf4; name: FUN_0083fdf4
 */


void FUN_0083fdf4(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_48;
  undefined1 auStack_44 [4];
  
  puVar3 = local_70;
  if ((param_3 == (undefined1 *)0x0) || (param_4 == (int *)0x0)) {
    local_60[0] = 0x10407;
  }
  else {
    uVar2 = FUN_007f0d7c(param_2 + 0x18);
    if (uVar2 + 0xc <= param_5) {
      local_70[0] = 0;
      local_60[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_60);
      FUN_007ee578(local_60,local_70);
      *param_3 = (char)uVar2;
      FUN_007f0d84(local_70,param_2 + 0x18,param_3 + 1,auStack_44,uVar2);
      FUN_007ee660(local_60,local_70);
      puVar1 = param_3 + 1 + uVar2;
      FUN_007ed360(puVar1,*(undefined8 *)(param_2 + 8));
      FUN_007ed3a0(puVar1 + 8,*(undefined2 *)(param_2 + 0x10));
      FUN_007ed3c0(puVar1 + 10,*(undefined1 *)(param_2 + 0x38));
      *param_4 = ((int)(puVar1 + 10) - (int)param_3) + 1;
      local_70[0] = 0;
      local_48 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_48);
      goto LAB_0083ff18;
    }
    local_60[0] = 0x4c0d;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  puVar3 = local_60;
LAB_0083ff18:
  FUN_007ee578(param_1,puVar3);
  return;
}


