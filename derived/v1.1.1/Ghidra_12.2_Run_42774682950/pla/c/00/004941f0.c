/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004941f0; name: FUN_004941f0
 */


uint FUN_004941f0(long param_1,long param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint local_60 [16];
  
  uVar9 = 0;
  uVar7 = 0;
  lVar6 = 0;
  uVar11 = 0;
  param_4 = ~param_4;
  uVar5 = 0;
  do {
    uVar8 = uVar7;
    if ((uint)uVar9 < 0x38) {
      uVar10 = uVar9 & 0xffffffff;
      uVar3 = param_4;
      if ((uint)uVar9 != 0x37) {
        uVar3 = 0xffffffff;
      }
      uVar9 = uVar10 + 1;
      uVar11 = (ulong)(*(byte *)(param_2 + uVar10) & uVar3) << (uVar7 & 0x3f) | uVar11;
      uVar8 = uVar7 + 8;
      if ((uVar8 < 0x1c) && (uVar9 < 0x38)) {
        pbVar1 = (byte *)(param_2 + uVar9);
        uVar3 = param_4;
        if (uVar9 != 0x37) {
          uVar3 = 0xffffffff;
        }
        uVar9 = uVar10 + 2;
        uVar11 = (ulong)(*pbVar1 & uVar3) << (uVar8 & 0x3f) | uVar11;
        uVar8 = uVar7 + 0x10;
        if ((uVar8 < 0x1c) && (uVar9 < 0x38)) {
          pbVar1 = (byte *)(param_2 + uVar9);
          uVar3 = param_4;
          if (uVar9 != 0x37) {
            uVar3 = 0xffffffff;
          }
          uVar9 = uVar10 + 3;
          uVar11 = (ulong)(*pbVar1 & uVar3) << (uVar8 & 0x3f) | uVar11;
          uVar8 = uVar7 + 0x18;
          if ((uVar8 < 0x1c) && (uVar9 < 0x38)) {
            pbVar1 = (byte *)(param_2 + uVar9);
            uVar3 = param_4;
            if (uVar9 != 0x37) {
              uVar3 = 0xffffffff;
            }
            uVar9 = uVar10 + 4;
            uVar11 = (ulong)(*pbVar1 & uVar3) << (uVar8 & 0x3f) | uVar11;
            uVar8 = uVar7 + 0x20;
          }
        }
      }
    }
    do {
      uVar10 = uVar11 & 0xfffffff;
      if (0xe < uVar5) {
        uVar10 = uVar11;
      }
      uVar2 = uVar5 + 1;
      *(int *)(param_1 + uVar5 * 4) = (int)uVar10;
      uVar3 = (int)uVar8 - 0x1c;
      uVar7 = (ulong)uVar3;
      lVar12 = (lVar6 + (uVar10 & 0xffffffff)) - (ulong)(uint)(&DAT_03a1b030)[uVar5];
      uVar11 = uVar11 >> 0x1c;
      lVar6 = lVar12 >> 0x20;
      if (uVar2 == 0x10) {
        if (param_3 == 0) {
          FUN_00494000(local_60,param_1,param_1);
          FUN_00493ce0(local_60);
          uVar3 = (local_60[0] & 1) - 1;
        }
        else {
          uVar3 = 0xffffffff;
        }
        uVar4 = (uint)((ulong)lVar12 >> 0x20);
        return (int)((uint)uVar11 - 1 & ((uint)uVar11 ^ 0xffffffff)) >> 0x1f &
               ((int)(uVar4 - 1 & (uVar4 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU) & uVar3;
      }
      uVar5 = uVar2;
      uVar8 = uVar7;
    } while (0x1b < uVar3);
  } while( true );
}


