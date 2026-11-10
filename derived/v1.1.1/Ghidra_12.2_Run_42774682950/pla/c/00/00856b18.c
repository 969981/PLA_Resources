/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00856b18; name: FUN_00856b18
 */


void FUN_00856b18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined2 local_60 [4];
  undefined4 local_58 [8];
  undefined4 local_38 [2];
  
  puVar3 = local_80;
  if (*(char *)(param_2 + 0x5a) == '\0') {
    local_58[0] = 0;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_70);
    puVar3 = local_58;
  }
  else {
    uVar1 = FUN_00847424();
    FUN_007f0ce0(local_58);
    FUN_007f105c(local_58,param_3);
    local_60[0] = 0x101;
    local_70[0] = 0xa4000000;
    lVar2 = FUN_008469d8(uVar1,local_70,local_58,param_5,local_60,0x1010100000000,0);
    if (lVar2 == 0) {
      local_80[0] = 0;
      local_70[0] = 0x4c0d;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
      puVar3 = local_70;
    }
    else {
      FUN_0084695c(local_70,uVar1,param_4);
      local_80[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_38);
    }
  }
  FUN_007ee578(param_1,puVar3);
  return;
}


