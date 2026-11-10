/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00836cec; name: FUN_00836cec
 */


void FUN_00836cec(undefined8 param_1,long *param_2,int param_3,ulong param_4,ulong param_5,
                 undefined1 param_6,undefined1 param_7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  undefined1 auStack_680 [16];
  undefined1 auStack_670 [32];
  int local_650 [4];
  undefined1 auStack_640 [32];
  undefined4 local_620;
  undefined1 local_61c;
  undefined1 local_61b;
  undefined1 local_61a;
  undefined1 local_619;
  uint local_618;
  ulong local_614;
  undefined2 local_60c;
  undefined1 local_60a;
  undefined1 local_609;
  undefined1 local_608;
  undefined1 local_607;
  undefined1 local_606;
  undefined1 local_605;
  undefined1 local_604;
  undefined1 local_603;
  undefined1 local_602;
  undefined1 local_601;
  undefined2 local_600;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  undefined1 local_5fb;
  undefined1 local_5fa;
  undefined1 local_5f9;
  undefined1 local_5f8;
  undefined1 local_5f7;
  undefined1 local_5f6;
  
  lVar9 = *param_2;
  param_5 = param_5 & 0xffffffff;
  if ((param_3 != 1) ||
     (((lVar9 != 0 && (*(char *)(lVar9 + 0x90) != -3)) && (*(char *)(lVar9 + 0x91) != -3)))) {
    lVar10 = *(long *)PTR_DAT_04377550;
    FUN_007f0ce0(auStack_640);
    uVar11 = *PTR_DAT_04377cd0;
    uVar8 = PTR_DAT_04377cd0[1];
    local_650[0] = 0;
    local_620 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_650 | 4),(Result *)&local_620);
    if (lVar9 == 0) {
      lVar12 = param_2[5];
      uVar3 = (undefined2)param_2[6];
      FUN_007f0f88(auStack_640,param_2 + 1);
      local_5f9 = 0;
      uVar1 = 0xfd;
      uVar2 = 0;
    }
    else {
      FUN_0083fbc0(&local_620);
      FUN_00825dcc(auStack_670,lVar9,&local_620);
      FUN_007ee660(local_650,auStack_670);
      if (local_650[0] != 0) {
        FUN_0083fc40(&local_620);
        return;
      }
      lVar12 = *(long *)(lVar9 + 0x30);
      uVar3 = FUN_0083fda0(&local_620);
      FUN_0083fd74(auStack_670,&local_620);
      FUN_007f0f88(auStack_640,auStack_670);
      uVar11 = *(undefined1 *)(lVar9 + 0x90);
      uVar1 = *(undefined1 *)(lVar9 + 0x28);
      uVar8 = *(undefined1 *)(lVar9 + 0x91);
      uVar2 = *(undefined2 *)(lVar9 + 0xf8);
      FUN_0083fc40(&local_620);
      local_5f9 = (undefined1)((ushort)uVar2 >> 8);
    }
    local_61c = (undefined1)(param_5 >> 0x18);
    local_61b = (undefined1)(param_5 >> 0x10);
    local_620 = CONCAT13((char)param_3,CONCAT12(param_7,CONCAT11(param_6,2)));
    local_61a = (undefined1)(param_5 >> 8);
    local_619 = (undefined1)param_5;
    FUN_00821b80(auStack_670);
    uVar5 = FUN_00821c5c(auStack_670);
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_618 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar6 = FUN_0083fd98(lVar10 + 0x178);
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_614 = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar4 = FUN_0083fda0(lVar10 + 0x178);
    local_608 = (undefined1)((ulong)lVar12 >> 0x38);
    local_607 = (undefined1)((ulong)lVar12 >> 0x30);
    local_606 = (undefined1)((ulong)lVar12 >> 0x28);
    local_605 = (undefined1)((ulong)lVar12 >> 0x20);
    local_604 = (undefined1)((ulong)lVar12 >> 0x18);
    local_603 = (undefined1)((ulong)lVar12 >> 0x10);
    local_602 = (undefined1)((ulong)lVar12 >> 8);
    local_60a = (undefined1)((ushort)uVar4 >> 8);
    local_601 = (undefined1)lVar12;
    local_600 = 0;
    local_5fd = (undefined1)uVar3;
    local_5f8 = (undefined1)uVar2;
    local_5f7 = (undefined1)((param_4 & 0xffffffff) >> 8);
    local_60c = 0;
    local_609 = (undefined1)uVar4;
    local_5f6 = (undefined1)(param_4 & 0xffffffff);
    if ((param_3 == 1) && (lVar9 != 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    local_5fe = (char)((ushort)uVar3 >> 8);
    local_5fc = uVar11;
    local_5fb = uVar8;
    local_5fa = uVar1;
    FUN_00835fb0(auStack_680,param_1,auStack_640,&local_620,0x2b,uVar7);
    FUN_007ee660(local_650,auStack_680);
  }
  return;
}


