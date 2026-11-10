/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03373638; name: FUN_03373638
 */


void FUN_03373638(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_60;
  ulong uStack_58;
  
  uVar9 = *param_2;
  uVar8 = param_2[1];
  if (uVar8 == 0 && uVar9 == 0) {
    uVar9 = *param_3;
    uVar8 = param_3[1];
  }
  else {
    uVar10 = *param_3;
    uVar7 = param_3[1];
    if (uVar7 != 0 || uVar10 != 0) {
      uVar6 = FUN_03372ea0(param_2);
      uVar5 = (uint)uVar6;
      uVar4 = FUN_03372ea0(param_3);
      uVar1 = uVar5;
      if ((int)uVar4 <= (int)uVar5) {
        uVar1 = uVar4;
      }
      if (uVar5 < 0x80) {
        if (uVar5 != 0) {
          uVar4 = uVar5 - 0x40;
          uVar3 = uVar8;
          if (uVar5 < 0x40) {
            uVar4 = uVar5;
            uVar3 = uVar9;
          }
          uVar9 = 0;
          if (uVar5 < 0x40) {
            uVar9 = uVar8;
          }
          uVar9 = uVar9 << ((ulong)-uVar4 & 0x3f) | uVar3 >> ((ulong)uVar4 & 0x3f);
        }
      }
      else {
        uVar9 = 0;
      }
      uVar8 = uVar8 >> (uVar6 & 0x3f);
      if (uVar1 < 0x80) {
        if (uVar1 != 0) {
          uVar5 = uVar1 - 0x40;
          uVar6 = uVar7;
          if (uVar1 < 0x40) {
            uVar5 = uVar1;
            uVar6 = uVar10;
          }
          uVar10 = 0;
          if (uVar1 < 0x40) {
            uVar10 = uVar7;
          }
          uVar10 = uVar10 << ((ulong)-uVar5 & 0x3f) | uVar6 >> ((ulong)uVar5 & 0x3f);
        }
      }
      else {
        uVar10 = 0;
      }
      uStack_58 = uVar7 >> ((ulong)uVar1 & 0x3f);
      local_60 = uVar10;
      do {
        uVar7 = uStack_58;
        uVar10 = local_60;
        uVar6 = FUN_03372ea0(&local_60);
        uVar5 = (uint)uVar6;
        if (uVar5 < 0x80) {
          uVar4 = uVar5 - 0x40;
          uVar3 = uVar7;
          if (uVar5 < 0x40) {
            uVar4 = uVar5;
            uVar3 = uVar10;
          }
          uVar2 = 0;
          if (uVar5 < 0x40) {
            uVar2 = uVar7;
          }
          if (uVar5 != 0) {
            uVar10 = uVar2 << ((ulong)-uVar4 & 0x3f) | uVar3 >> ((ulong)uVar4 & 0x3f);
          }
        }
        else {
          uVar10 = 0;
        }
        uVar3 = uVar10 - uVar9;
        uVar7 = uVar7 >> (uVar6 & 0x3f);
        uVar6 = (uVar7 - (uVar10 < uVar9)) - uVar8;
        uStack_58 = -uVar6;
        if (~uVar3 <= -uVar3) {
          uStack_58 = ~uVar6;
        }
        local_60 = -uVar3;
        if ((uVar6 & 0x8000000000000000) == 0) {
          uVar10 = uVar9;
          uStack_58 = uVar6;
          local_60 = uVar3;
        }
        else {
          uVar8 = uVar7;
        }
        uVar9 = uVar10;
      } while (uStack_58 != 0 || local_60 != 0);
      if (uVar1 < 0x40) {
        if (uVar1 != 0) {
          uVar8 = uVar10 >> ((ulong)-uVar1 & 0x3f) | uVar8 << ((ulong)uVar1 & 0x3f);
        }
        param_1[1] = uVar8;
        uVar9 = uVar10 << ((ulong)uVar1 & 0x3f);
      }
      else {
        uVar9 = 0;
        param_1[1] = uVar10 << ((ulong)uVar1 & 0x3f);
      }
      *param_1 = uVar9;
      return;
    }
    uVar9 = *param_2;
    uVar8 = param_2[1];
  }
  *param_1 = uVar9;
  param_1[1] = uVar8;
  return;
}


