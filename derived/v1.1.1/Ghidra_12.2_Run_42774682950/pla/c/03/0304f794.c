/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304f794; name: FUN_0304f794
 */


void FUN_0304f794(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  lVar8 = *(long *)(*param_1 + 0x488);
  lVar10 = *(long *)(lVar8 + 8);
  if (*(int *)(lVar8 + 0x28) == 0) {
    return;
  }
  uVar1 = *(int *)(lVar8 + 0x2c) + 1;
  if (*(int *)(lVar10 + 0x30) == 0x7fffffff) {
    uVar11 = 0;
    do {
      uVar11 = uVar11 + 1;
      if (uVar1 <= uVar11) {
        return;
      }
    } while (*(int *)(lVar10 + (ulong)uVar11 * 0x68 + 0x30) == 0x7fffffff);
  }
  else {
    uVar11 = 0;
  }
  do {
    if ((*(byte *)(lVar10 + (ulong)uVar11 * 0x68 + 0x42) >> 2 & 1) != 0) {
      lVar8 = lVar10 + (ulong)uVar11 * 0x68;
      uVar9 = *(ulong *)(lVar8 + 8);
      uVar7 = (uint)uVar9;
      uVar2 = uVar7 & 0xffffff;
      if (uVar2 != 0xffffff) {
        uVar4 = *(uint *)(*param_1 + 0x40);
        if ((uVar2 < uVar4) &&
           (lVar6 = *(long *)(*param_1 + 0x38),
           (*(byte *)(lVar6 + (ulong)uVar2 * 0xc0 + 0x54) & 3) != 0)) {
          uVar5 = *(uint *)(lVar8 + 0x18);
          uVar3 = uVar5 & 0xffffff;
          if ((((*(uint *)(lVar6 + (ulong)uVar2 * 0xc0 + 0x50) == uVar7 && uVar3 != 0xffffff) &&
                uVar3 < uVar4) &&
              ((((*(byte *)(lVar6 + (ulong)uVar3 * 0xc0 + 0x54) & 3) != 0 &&
                (*(uint *)(lVar6 + (ulong)uVar3 * 0xc0 + 0x50) == uVar5)) &&
               (uVar9 = uVar9 & 0xffffff, (*(byte *)(lVar6 + uVar9 * 0xc0 + 0x88) & 1) != 0)))) &&
             ((((*(byte *)(lVar6 + ((ulong)uVar5 & 0xffffff) * 0xc0 + 0x88) & 1) != 0 &&
               ((*(byte *)(lVar6 + uVar9 * 0xc0 + 0x54) >> 3 & 1) == 0)) &&
              ((*(byte *)(lVar6 + ((ulong)uVar5 & 0xffffff) * 0xc0 + 0x54) >> 3 & 1) == 0)))) {
            FUN_0304f924(param_1);
          }
        }
      }
    }
    do {
      uVar11 = uVar11 + 1;
      if (uVar1 <= uVar11) {
        return;
      }
    } while (*(int *)(lVar10 + (ulong)uVar11 * 0x68 + 0x30) == 0x7fffffff);
  } while( true );
}


