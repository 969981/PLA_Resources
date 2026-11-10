/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302eb64; name: FUN_0302eb64
 */


void FUN_0302eb64(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float local_54;
  
  uVar1 = *(uint *)(param_2 + 0x48);
  uVar6 = (ulong)uVar1 & 0xffffff;
  lVar5 = param_1[7];
  lVar3 = (**(code **)(*param_1 + 0xb0))();
  if ((*(byte *)(lVar3 + (ulong)*(byte *)(lVar5 + uVar6 * 0xc0 + 0x89) * 0x40 + 0x42) & 1) != 0) {
    local_54 = 1.8446726e+19;
    lVar3 = *(long *)(lVar5 + uVar6 * 0xc0 + 0x78);
    if (lVar3 != 0) {
      iVar2 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0x30))
                        (lVar3,&local_54);
      fVar7 = 1.8446726e+19;
      if ((-1 < iVar2) && (local_54 < 1.8446726e+19)) {
        local_54 = local_54 * 0.5;
        if (local_54 <= 0.05) {
          local_54 = 0.05;
        }
        fVar7 = local_54;
        if (1.8446726e+19 < local_54) {
          fVar7 = 1.8446726e+19;
        }
      }
      goto LAB_0302ebc8;
    }
  }
  fVar7 = 1.8446726e+19;
LAB_0302ebc8:
  lVar3 = param_1[7];
  uVar4 = *(uint *)(lVar3 + uVar6 * 0xc0 + 0x84);
  if (uVar4 != uVar1) {
    do {
      uVar6 = (ulong)(uVar4 & 0xffffff);
      lVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
      if ((*(byte *)(lVar5 + (ulong)*(byte *)(lVar3 + uVar6 * 0xc0 + 0x89) * 0x40 + 0x42) & 1) != 0)
      {
        local_54 = 1.8446726e+19;
        lVar3 = *(long *)(lVar3 + uVar6 * 0xc0 + 0x78);
        if (((lVar3 != 0) &&
            (iVar2 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0x30))
                               (lVar3,&local_54), -1 < iVar2)) && (local_54 < 1.8446726e+19)) {
          local_54 = local_54 * 0.5;
          if (local_54 <= 0.05) {
            local_54 = 0.05;
          }
          if (local_54 <= fVar7) {
            fVar7 = local_54;
          }
        }
      }
      lVar3 = param_1[7];
      uVar4 = *(uint *)(lVar3 + uVar6 * 0xc0 + 0x84);
    } while (uVar4 != uVar1);
  }
  *(short *)(param_2 + 0x5c) = (short)((uint)fVar7 >> 0x10);
  return;
}


