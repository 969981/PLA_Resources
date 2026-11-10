/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc120; name: FUN_004dc120
 */


ulong FUN_004dc120(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  ushort local_64 [2];
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar7 = 0;
  }
  else {
    if (param_2 == 0xfffffffe) {
      if ((*(byte *)(*(long *)(param_1 + 0x488) + 0x1e) & 3) != 0) {
        iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x18);
        uVar6 = 0x18;
        if (iVar3 != 0x300c02c) {
          uVar6 = 0;
        }
        uVar1 = 0x17;
        if (iVar3 != 0x300c02b) {
          uVar1 = uVar6;
        }
        return (ulong)uVar1;
      }
      param_2 = 0;
    }
    if ((*(byte *)(param_1 + 0x5ce) >> 6 & 1) == 0) {
      puVar8 = *(undefined2 **)(*(long *)(param_1 + 0x508) + 0x248);
      lVar9 = *(long *)(*(long *)(param_1 + 0x508) + 0x240);
      uVar6 = *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) & 0x30000;
      if (uVar6 == 0x30000) {
        lVar11 = 2;
        puVar10 = &DAT_03a280c8;
      }
      else if (uVar6 == 0x20000) {
        lVar11 = 1;
        puVar10 = &DAT_03a280ca;
      }
      else if (uVar6 == 0x10000) {
        lVar11 = 1;
        puVar10 = &DAT_03a280c8;
      }
      else {
        puVar10 = *(ushort **)(param_1 + 0x698);
        if (puVar10 == (ushort *)0x0) {
          lVar11 = 5;
          puVar10 = &DAT_03a280cc;
        }
        else {
          lVar11 = *(long *)(param_1 + 0x690);
        }
      }
    }
    else {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) & 0x30000;
      if (uVar6 == 0x30000) {
        lVar9 = 2;
        puVar8 = &DAT_03a280c8;
      }
      else if (uVar6 == 0x20000) {
        lVar9 = 1;
        puVar8 = &DAT_03a280ca;
      }
      else if (uVar6 == 0x10000) {
        lVar9 = 1;
        puVar8 = &DAT_03a280c8;
      }
      else {
        puVar8 = *(undefined2 **)(param_1 + 0x698);
        if (puVar8 == (undefined2 *)0x0) {
          lVar9 = 5;
          puVar8 = &DAT_03a280cc;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x690);
        }
      }
      puVar10 = *(ushort **)(*(long *)(param_1 + 0x508) + 0x248);
      lVar11 = *(long *)(*(long *)(param_1 + 0x508) + 0x240);
    }
    uVar6 = 0;
    if ((lVar9 != 0) && (uVar6 = 0, lVar11 != 0)) {
      lVar12 = 0;
      do {
        uVar2 = puVar8[lVar12];
        puVar4 = puVar10;
        lVar5 = lVar11;
        do {
          if ((uint)*puVar4 == (uint)uVar2) {
            lVar5 = (ulong)uVar2 * 0xc;
            if (uVar2 - 1 < 0x1e) {
              local_64[0] = uVar2 >> 8 | uVar2 << 8;
              iVar3 = FUN_004e2fc0(param_1,0x20005,
                                   *(undefined4 *)(&switchD_004dcc3c::switchdataD_03a27f58 + lVar5),
                                   *(undefined4 *)(&DAT_03a27f54 + lVar5),local_64);
              if (iVar3 != 0) {
                if (param_2 == uVar6) {
                  return (ulong)uVar2;
                }
                uVar6 = uVar6 + 1;
              }
            }
            break;
          }
          lVar5 = lVar5 + -1;
          puVar4 = puVar4 + 1;
        } while (lVar5 != 0);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar9);
    }
    if (param_2 != 0xffffffff) {
      uVar6 = 0;
    }
    uVar7 = (ulong)uVar6;
  }
  return uVar7;
}


