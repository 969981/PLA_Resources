/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084d3cc; name: FUN_0084d3cc
 */


void FUN_0084d3cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                 uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined *local_618;
  undefined8 local_610;
  byte local_608;
  uint local_604;
  undefined1 auStack_600 [1440];
  ulong local_60 [2];
  undefined4 local_48 [2];
  
  puVar5 = &local_630;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((int)param_2[0xa3] == 0) {
    local_630._0_4_ = 0x10408;
    local_60[0] = local_60[0] & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_630 | 4),(Result *)local_60);
    goto LAB_0084d608;
  }
  local_618 = PTR_DAT_04377fb0 + 0x10;
  memset(&local_604,0,4);
  local_610 = 0;
  local_608 = 0;
  memset(&local_604,0,4);
  local_630._0_4_ = (uint)local_630._2_2_ << 0x10;
  local_628 = 0;
  local_620 = 0;
  local_610 = 0;
  local_608 = 0;
  memset(&local_604,0,4);
  uVar2 = local_610;
  local_610 = CONCAT71(local_610._1_7_,0x40);
  uVar3 = local_610;
  local_610._6_2_ = SUB82(uVar2,6);
  local_610._0_6_ = CONCAT24(0xffff,(int)uVar3);
  local_610._0_2_ = CONCAT11(*(undefined1 *)((long)param_2 + 0x36),0x40);
  lVar6 = param_2[0x7f];
  uVar4 = 0;
  while( true ) {
    if (lVar6 != 0) {
      uVar7 = uVar4 >> 5 & 7;
      uVar1 = 1 << (ulong)((uint)uVar4 & 0x1f);
      if ((*(uint *)((long)param_2 + uVar7 * 4 + 0x518) & uVar1) != 0) {
        lVar6 = uVar7 * 4;
        *(uint *)(auStack_600 + lVar6 + -4) = *(uint *)(auStack_600 + lVar6 + -4) | uVar1;
      }
    }
    if (uVar4 == 0x17) break;
    lVar6 = param_2[uVar4 + 0x80];
    uVar4 = uVar4 + 1;
  }
  local_608 = (**(code **)(*param_2 + 0x38))(param_2);
  local_48[0] = 0;
  FUN_00843160(local_60,&local_618,auStack_600,local_48,0x5a0);
  uVar1 = (local_608 + 0x1f >> 3 & 0x3c) + 9;
  local_620 = CONCAT44(local_620._4_4_,uVar1);
  if (param_5 < uVar1) {
LAB_0084d5bc:
    local_60[0] = CONCAT44(local_60[0]._4_4_,0x4c0d);
  }
  else {
    memset(local_60,0,4);
    memset(local_60,0xff,4);
    local_60[0] = local_60[0] & 0xffffffff00ffffff;
    uVar4 = (**(code **)(*param_2 + 0x50))(param_2,local_60,param_3,&local_630,0);
    if ((uVar4 & 1) == 0) goto LAB_0084d5bc;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (undefined4)local_620;
    }
    local_60[0] = 0;
    FUN_007ecf14(local_60);
    param_2[0xa2] = local_60[0];
    local_60[0] = local_60[0] & 0xffffffff00000000;
  }
  puVar5 = local_60;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)puVar5 | 4),(Result *)local_48);
LAB_0084d608:
  FUN_007ee578(param_1,puVar5);
  return;
}


