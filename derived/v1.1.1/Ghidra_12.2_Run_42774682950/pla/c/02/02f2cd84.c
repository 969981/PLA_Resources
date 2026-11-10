/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2cd84; name: FUN_02f2cd84
 */


ulong FUN_02f2cd84(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  plVar6 = *(long **)(param_1 + 0x130);
  lVar7 = plVar6[3];
  iVar2 = *(int *)(lVar7 + 0x2c0);
  if (0 < iVar2) {
    fVar9 = *(float *)(lVar7 + 0x24c) *
            (float)((uint)*(ushort *)(param_2 + 0x10) - (uint)*(ushort *)(param_2 + 0x12));
    fVar10 = 0.5;
    if (fVar9 <= 0.0) {
      fVar10 = -0.5;
    }
    iVar5 = (int)(fVar10 + fVar9);
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
    *(int *)(lVar7 + 0x2c0) = iVar2 - iVar5;
    return 0x11;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
  if ((*(byte *)(plVar6 + 4) & 1) == 0) {
    iVar2 = (**(code **)(*plVar6 + 0x70))
                      (plVar6,*(undefined8 *)(lVar7 + 0x2c8),*(undefined4 *)(lVar7 + 0x2d0));
    if (iVar2 != 1) {
      if (iVar2 == 0x3f) {
        return 0x11;
      }
      return 2;
    }
    *(byte *)(plVar6 + 4) = *(byte *)(plVar6 + 4) | 1;
  }
  if (((*(int *)(lVar8 + 0x244) != *(int *)(lVar7 + 0x244)) ||
      (lVar8 = *(long *)(param_1 + 0x138),
      bVar1 = (**(code **)(**(long **)(param_1 + 0x130) + 0xb8))(), ((lVar8 == 0 ^ bVar1) & 1) != 0)
      ) || ((*(long *)(param_1 + 0x138) == 0 &&
            (iVar2 = (**(code **)(**(long **)(param_1 + 0x128) + 0xc0))
                               (*(long **)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130)),
            iVar2 != 1)))) {
    return 0x11;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x130) + 0x60))();
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  plVar6 = (long *)(lVar7 + 0x18);
  if ((*(ushort *)(lVar7 + 0x198) & 1) == 0) {
    (**(code **)(*plVar6 + 0x50))(plVar6,0);
  }
  else if ((*(ushort *)(lVar7 + 0x198) >> 4 & 1) != 0) {
    (**(code **)(*plVar6 + 0x58))();
  }
  FUN_02f2cf24(param_1);
  uVar4 = 0x2d;
  if (*(short *)(param_2 + 0x12) != *(short *)(param_2 + 0x10)) {
    uVar4 = 0x2b;
  }
  return (ulong)uVar4;
}


