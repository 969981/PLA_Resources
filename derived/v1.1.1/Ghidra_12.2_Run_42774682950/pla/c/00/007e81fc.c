/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e81fc; name: FUN_007e81fc
 */


void FUN_007e81fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int local_130 [8];
  int local_110 [4];
  int local_100 [16];
  undefined *local_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [88];
  undefined4 local_38 [2];
  
  piVar5 = local_130;
  local_a8 = 0;
  local_c0 = PTR_DAT_04377498 + 0x10;
  local_a0 = PTR_DAT_04377498 + 0x68;
  local_b8 = auStack_98;
  uStack_b0 = 0x50;
  uVar3 = FUN_007ec6d4(param_3);
  uVar1 = FUN_007ec6dc(param_3);
  uVar2 = FUN_007ec9c8(param_3);
  FUN_02cbc3b0(local_100,&local_c0,uVar3,uVar1,uVar2);
  FUN_007e835c(local_100,&local_c0);
  FUN_007ec6e4(&local_c0);
  uVar4 = FUN_00821a58();
  if ((uVar4 & 1) == 0) {
    local_100[0] = 0x10407;
    local_130[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_100 | 4),(Result *)local_130);
    piVar5 = local_100;
  }
  else {
    local_100[0xc] = 0;
    local_100[0xd] = 0;
    local_100[0xe] = 0;
    local_100[0xf] = 0;
    local_100[8] = 0;
    local_100[9] = 0;
    local_100[10] = 0;
    local_100[0xb] = 0;
    local_100[4] = 0;
    local_100[5] = 0;
    local_100[6] = 0;
    local_100[7] = 0;
    local_100[0] = 0;
    local_100[1] = 0;
    local_100[2] = 0;
    local_100[3] = 0;
    uVar3 = FUN_007ec6e4(&local_c0);
    FUN_00821b04(local_100,0x40,uVar3,0xffffffffffffffff);
    FUN_007ec5c4(local_130,local_100);
    FUN_007ec6ec(local_110,param_2 + 8,local_130);
    if (local_110[0] == 0) {
      local_130[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_130 | 4),(Result *)local_38);
    }
    else {
      piVar5 = local_110;
    }
  }
  FUN_007ee578(param_1,piVar5);
  return;
}


