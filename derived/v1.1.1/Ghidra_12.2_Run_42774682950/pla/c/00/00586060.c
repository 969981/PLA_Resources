/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00586060; name: FUN_00586060
 */


void FUN_00586060(long param_1,long param_2,long param_3,ulong param_4,ulong param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_6 < 0x3c) {
    if (param_5 < 0x3c) {
      if (param_4 < 0x18) {
        if ((param_2 - 1U < 0xc) && (param_3 - 1U < 0x1c)) {
          return;
        }
        if (param_2 != 0xc) {
          lVar4 = param_2 / 0xc;
          param_2 = param_2 % 0xc;
          param_1 = lVar4 + param_1;
          if (param_2 < 1) {
            param_1 = param_1 + -1;
            param_2 = param_2 + 0xc;
          }
        }
        lVar4 = 0;
      }
      else {
        lVar4 = (long)param_4 / 0x18;
        lVar8 = (long)param_4 % 0x18;
        lVar1 = param_2 / 0xc + param_1;
        lVar6 = param_2 % 0xc;
        uVar2 = (uint)lVar8 + 0x18;
        if (-1 < lVar8) {
          uVar2 = (uint)lVar8;
        }
        param_4 = (ulong)uVar2;
        lVar5 = lVar6;
        if (lVar6 < 1) {
          lVar5 = lVar6 + 0xc;
        }
        lVar4 = lVar4 + (lVar8 >> 0x3f);
        if (lVar6 < 1) {
          lVar1 = lVar1 + -1;
        }
        bVar3 = param_2 != 0xc;
        param_2 = 0xc;
        if (bVar3) {
          param_1 = lVar1;
          param_2 = lVar5;
        }
      }
    }
    else {
      lVar5 = (long)param_5 % 0x3c;
      lVar6 = (long)param_4 / 0x18;
      lVar4 = (long)param_5 / 0x3c + (lVar5 >> 0x3f);
      lVar1 = lVar4 % 0x18 + (long)param_4 % 0x18;
      lVar8 = lVar1 % 0x18;
      uVar2 = (uint)lVar5 + 0x3c;
      if (-1 < lVar5) {
        uVar2 = (uint)lVar5;
      }
      param_5 = (ulong)uVar2;
      lVar5 = param_2 / 0xc + param_1;
      lVar7 = param_2 % 0xc;
      uVar2 = (uint)lVar8 + 0x18;
      if (-1 < lVar8) {
        uVar2 = (uint)lVar8;
      }
      param_4 = (ulong)uVar2;
      if (lVar7 < 1) {
        lVar5 = lVar5 + -1;
        lVar7 = lVar7 + 0xc;
      }
      bVar3 = param_2 != 0xc;
      lVar4 = lVar4 / 0x18 + lVar6 + lVar1 / 0x18 + (lVar8 >> 0x3f);
      param_2 = 0xc;
      if (bVar3) {
        param_1 = lVar5;
        param_2 = lVar7;
      }
    }
  }
  else {
    lVar8 = (long)param_6 % 0x3c;
    lVar4 = (long)param_6 / 0x3c + (lVar8 >> 0x3f);
    lVar1 = lVar4 % 0x3c + (long)param_5 % 0x3c;
    lVar6 = lVar1 % 0x3c;
    lVar4 = lVar4 / 0x3c + (long)param_5 / 0x3c + lVar1 / 0x3c + (lVar6 >> 0x3f);
    lVar1 = (long)param_4 / 0x18;
    uVar2 = (uint)lVar8 + 0x3c;
    if (-1 < lVar8) {
      uVar2 = (uint)lVar8;
    }
    param_6 = (ulong)uVar2;
    lVar8 = lVar4 % 0x18 + (long)param_4 % 0x18;
    lVar5 = lVar8 % 0x18;
    uVar2 = (uint)lVar6 + 0x3c;
    if (-1 < lVar6) {
      uVar2 = (uint)lVar6;
    }
    param_5 = (ulong)uVar2;
    uVar2 = (uint)lVar5 + 0x18;
    if (-1 < lVar5) {
      uVar2 = (uint)lVar5;
    }
    param_4 = (ulong)uVar2;
    lVar7 = param_2 % 0xc;
    lVar6 = param_2 / 0xc + param_1;
    if (lVar7 < 1) {
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + 0xc;
    }
    bVar3 = param_2 != 0xc;
    lVar4 = lVar4 / 0x18 + lVar1 + lVar8 / 0x18 + (lVar5 >> 0x3f);
    if (bVar3) {
      param_1 = lVar6;
    }
    param_2 = 0xc;
    if (bVar3) {
      param_2 = lVar7;
    }
  }
  FUN_005863a0(param_1,param_2,param_3,lVar4,param_4,param_5,param_6);
  return;
}


