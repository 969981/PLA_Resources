/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00836fb4; name: FUN_00836fb4
 */


void FUN_00836fb4(undefined8 param_1,long param_2,ulong *param_3,uint param_4,int *param_5)

{
  long lVar1;
  ulong uVar2;
  Result *pRVar3;
  undefined4 *puVar4;
  undefined4 local_78 [4];
  undefined4 local_68 [8];
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (ulong *)0x0) || (param_5 == (int *)0x0)) || (param_4 < 0x15)) {
    pRVar3 = (Result *)local_48;
    local_48[0] = 0;
  }
  else {
    uVar2 = (*param_3 & 0xff00ff00ff00ff00) >> 8 | (*param_3 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x88) = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar2 = (param_3[1] & 0xff00ff00ff00ff00) >> 8 | (param_3[1] & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x90) = uVar2 >> 0x20 | uVar2 << 0x20;
    FUN_007e8444(local_48,param_2,param_3 + 2,param_4 - 0x10);
    uVar2 = FUN_007e844c(param_2);
    if (local_48[0] == 0) {
      lVar1 = (long)(param_3 + 2) + (uVar2 & 0xffffffff);
      FUN_007e844c(param_2);
      FUN_007ec5c4(local_68,lVar1);
      *param_5 = (int)lVar1 - (int)param_3;
      local_78[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_38);
      puVar4 = local_78;
      goto LAB_00837000;
    }
    local_78[0] = 0;
    pRVar3 = (Result *)local_78;
  }
  local_68[0] = 0x10407;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),pRVar3);
  puVar4 = local_68;
LAB_00837000:
  FUN_007ee578(param_1,puVar4);
  return;
}


