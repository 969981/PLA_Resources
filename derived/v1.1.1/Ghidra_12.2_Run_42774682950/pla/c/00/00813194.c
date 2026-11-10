/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00813194; name: FUN_00813194
 */


void FUN_00813194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6,uint param_7,short *param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  undefined4 local_a0 [4];
  undefined4 local_90 [6];
  short local_78;
  int local_70 [4];
  
  local_70[0] = 0;
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_90);
  uVar1 = (param_7 - param_6 & 0xffff) + 1;
  if (uVar1 >> 0x10 == 0) {
    uVar5 = 0;
    bVar4 = false;
    do {
      FUN_007eb6ec(local_90,param_3,2,2,0x11);
      FUN_007ee660(local_70,local_90);
      if (local_70[0] != 0) {
        local_90[0] = 0x10408;
        local_a0[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_a0);
        goto LAB_00813310;
      }
      uVar2 = uVar1;
      if ((uVar5 + param_5 & 0xffff) <= (param_7 & 0xffff)) {
        uVar2 = 0;
      }
      sVar3 = (short)(uVar5 + param_5) - (short)uVar2;
      FUN_007e3400(local_90);
      local_78 = sVar3;
      FUN_007eb968(local_a0,param_3,local_90,0xffffffff,param_9 & 1);
      FUN_007ee660(local_70,local_a0);
      if (local_70[0] == 0) {
        bVar4 = true;
        FUN_007e34a4(local_90);
        break;
      }
      FUN_007eb8b0(local_a0,param_3);
      FUN_007ee660(local_70,local_a0);
      FUN_007e34a4(local_90);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffff) < (uVar1 & 0xffff));
    if (bVar4) {
      *param_8 = sVar3;
      local_90[0] = 0;
      goto LAB_00813300;
    }
  }
  local_90[0] = 0x10408;
LAB_00813300:
  local_a0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_a0);
LAB_00813310:
  FUN_007ee578(param_1,local_90);
  return;
}


