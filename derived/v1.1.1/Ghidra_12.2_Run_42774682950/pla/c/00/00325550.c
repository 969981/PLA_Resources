/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00325550; name: FUN_00325550
 */


byte * FUN_00325550(long *param_1,int param_2,byte *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  
  pbVar6 = param_3 + 1;
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    uVar1 = (uVar1 + (uint)*pbVar6 * 0x80) - 0x80;
    if ((char)*pbVar6 < '\0') {
      uVar1 = (uVar1 + (uint)param_3[2] * 0x4000) - 0x4000;
      if ((char)param_3[2] < '\0') {
        uVar1 = (uVar1 + (uint)param_3[3] * 0x200000) - 0x200000;
        if ((char)param_3[3] < '\0') {
          if ((7 < param_3[4]) ||
             (uVar1 = uVar1 + (uint)param_3[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar1)) {
            return (byte *)0x0;
          }
          pbVar6 = param_3 + 5;
          lVar7 = *param_1;
        }
        else {
          pbVar6 = param_3 + 4;
          lVar7 = *param_1;
        }
      }
      else {
        pbVar6 = param_3 + 3;
        lVar7 = *param_1;
      }
    }
    else {
      pbVar6 = param_3 + 2;
      lVar7 = *param_1;
    }
  }
  else {
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    if ((*(long *)(param_4 + 8) - (long)pbVar6) + 0x10 < (long)(int)uVar1) {
      pbVar6 = (byte *)FUN_003229a8(param_4,pbVar6,uVar1);
      return pbVar6;
    }
  }
  else {
    uVar2 = param_2 << 3 | 2;
    uVar3 = (ulong)uVar2;
    if (0x7f < uVar2) {
      uVar8 = (ulong)uVar2;
      do {
        FUN_002e6a9c(lVar7,(uint)uVar8 | 0xffffff80);
        uVar3 = uVar8 >> 7;
        uVar5 = uVar8 >> 0xe;
        uVar8 = uVar3;
      } while (uVar5 != 0);
    }
    FUN_002e6a9c(lVar7,uVar3);
    lVar7 = *param_1;
    uVar8 = (ulong)(int)uVar1;
    uVar3 = (ulong)uVar1;
    if (0x7f < uVar1) {
      uVar3 = (ulong)uVar1;
      uVar5 = uVar8;
      do {
        FUN_002e6a9c(lVar7,(uint)uVar3 | 0xffffff80);
        uVar3 = uVar5 >> 7;
        uVar4 = uVar5 >> 0xe;
        uVar5 = uVar3;
      } while (uVar4 != 0);
    }
    FUN_002e6a9c(lVar7,uVar3);
    if ((*(long *)(param_4 + 8) - (long)pbVar6) + 0x10 < (long)uVar8) {
      pbVar6 = (byte *)FUN_00322c40(param_4,pbVar6,uVar1);
      return pbVar6;
    }
    FUN_002e4094(*param_1,pbVar6,uVar8);
  }
  return pbVar6 + (int)uVar1;
}


