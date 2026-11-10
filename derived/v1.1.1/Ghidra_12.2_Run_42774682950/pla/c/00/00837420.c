/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00837420; name: FUN_00837420
 */


void FUN_00837420(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_640 [16];
  undefined1 auStack_630 [32];
  undefined4 local_610;
  uint5 uStack_60c;
  undefined2 local_607;
  undefined1 local_605;
  undefined1 local_604;
  undefined1 local_603;
  undefined1 local_602;
  undefined1 local_601;
  undefined1 local_600;
  undefined1 local_5ff;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  undefined2 local_5fb;
  undefined1 local_5f9;
  undefined1 local_5f8;
  undefined4 local_50 [4];
  
  local_50[0] = 0;
  local_610 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_610);
  lVar5 = *(long *)PTR_DAT_04377550;
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined2 *)(param_2 + 0x30);
  local_610 = CONCAT31(local_610._1_3_,1);
  uVar4 = FUN_0083fd98(lVar5 + 0x178);
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar2 = uVar4 & 0xffff0000ffff;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | uVar2 << 0x10;
  uStack_60c = (uint5)(byte)(uVar2 >> 0x28) | (uint5)((uVar4 << 0x20) >> 0x18);
  local_610._1_3_ = (undefined3)(uVar4 >> 0x20);
  uVar3 = FUN_0083fda0(lVar5 + 0x178);
  local_603 = (undefined1)((ulong)uVar6 >> 0x38);
  local_602 = (undefined1)((ulong)uVar6 >> 0x30);
  local_601 = (undefined1)((ulong)uVar6 >> 0x28);
  local_600 = (undefined1)((ulong)uVar6 >> 0x20);
  local_5ff = (undefined1)((ulong)uVar6 >> 0x18);
  local_5fe = (undefined1)((ulong)uVar6 >> 0x10);
  local_604 = (undefined1)uVar3;
  local_605 = (undefined1)((ushort)uVar3 >> 8);
  local_5fc = (undefined1)uVar6;
  local_5fb = 0;
  local_5fd = (undefined1)((ulong)uVar6 >> 8);
  local_607 = 0;
  local_5f8 = (undefined1)uVar1;
  local_5f9 = (undefined1)((ushort)uVar1 >> 8);
  FUN_007f0d08(auStack_630,param_2 + 8);
  FUN_00835fb0(auStack_640,param_1,auStack_630,&local_610,0x19,1);
  FUN_007ee660(local_50,auStack_640);
  return;
}


