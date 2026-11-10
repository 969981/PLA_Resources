/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e6aac; name: FUN_007e6aac
 */


void FUN_007e6aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 void *param_5,uint param_6,int *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_2b0 [4];
  undefined4 local_2a0 [44];
  undefined4 local_1f0 [2];
  undefined4 *local_1e8;
  undefined *puStack_1e0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_68 [2];
  
  if (*param_7 == 1) {
    local_1f0[0] = 0;
    local_178 = 0;
    local_170 = 0;
    local_1e8 = (undefined4 *)0x0;
    puStack_1e0 = (undefined *)0x0;
    local_188 = 0;
    uStack_180 = 0;
    if (param_7[8] == 0x10) {
      uVar2 = *(undefined8 *)(param_7 + 2);
      iVar1 = param_7[4];
      FUN_007e79dc(local_2a0,*(undefined8 *)(param_7 + 6),0x10,1);
      puStack_1e0 = PTR_LAB_04377478;
      local_1e8 = local_2a0;
      FUN_007e7878(local_1f0);
      local_1f0[0] = 1;
      FUN_007e6ce4(local_1f0,uVar2,iVar1);
      if ((param_4 & 0xf) == 0) {
        FUN_007e73f0(local_1f0,param_2,param_4,param_3,param_4);
        if ((param_5 != (void *)0x0) && (param_6 < 0x11)) {
          FUN_007e765c(local_1f0,local_2b0,0x10);
          iVar1 = memcmp(param_5,local_2b0,(ulong)param_6);
          if (iVar1 != 0) {
            local_2b0[0] = 0x2c03;
            goto LAB_007e6b84;
          }
        }
        FUN_007e6cd8(local_1f0);
        FUN_007e79d4(local_2a0);
        local_2a0[0] = 0;
        goto LAB_007e6bb8;
      }
      local_2b0[0] = 0x10407;
LAB_007e6b84:
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_2b0 | 4),(Result *)local_68);
      FUN_007ee578(param_1,local_2b0);
    }
    else {
      local_2b0[0] = 0x10407;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_2b0 | 4),(Result *)local_68);
      FUN_007ee578(param_1,local_2b0);
    }
    FUN_007e6cd8(local_1f0);
    FUN_007e79d4(local_2a0);
  }
  else {
    if (*param_7 == 0) {
      local_2a0[0] = 0;
    }
    else {
      local_2a0[0] = 0x10407;
    }
LAB_007e6bb8:
    local_2b0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_2a0 | 4),(Result *)local_2b0);
    FUN_007ee578(param_1,local_2a0);
  }
  return;
}


