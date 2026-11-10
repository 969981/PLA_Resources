/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022a7a4; name: FUN_0022a7a4
 */


void FUN_0022a7a4(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (0x1b < param_2) {
    return;
  }
  iVar3 = param_2 + 3;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  uVar2 = iVar3 >> 2;
  if (uVar2 < 2) {
    uVar5 = (undefined1)param_3;
    switch(param_2 % 4) {
    case 0:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 8) = uVar5;
      return;
    case 1:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 9) = uVar5;
      return;
    case 2:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 10) = uVar5;
      return;
    case 3:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 0xb) = uVar5;
      return;
    default:
      return;
    }
  }
  if (6 < uVar2) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 0x10 & 1) != 0) {
    uVar2 = uVar2 - 2;
    lVar1 = *(long *)(param_1 + 0x18) +
            ((ulong)(uVar4 >> 4) & 0x1c) + ((ulong)(uVar4 >> 8) & 0xc) + ((ulong)(uVar4 >> 0xc) & 8)
            + ((ulong)(uVar4 >> 0xc) & 1) * 0xc +
            (((ulong)(uVar4 << 4) & 0x30) + ((ulong)uVar4 & 0x30) | (ulong)(uVar4 >> 6) & 8) +
            (((ulong)(uVar4 >> 0xd) & 3) + ((ulong)(uVar4 >> 2) & 3)) * 0x14;
    uVar4 = *(uint *)(lVar1 + (ulong)(uVar2 % 5) * 4 + 4);
    uVar9 = uVar4 >> 8;
    uVar8 = uVar4 >> 0x10;
    uVar7 = uVar4 >> 0x18;
    switch(param_2 % 4) {
    case 0:
      if (4 < uVar2) {
        return;
      }
      goto LAB_0022aa18;
    case 1:
      uVar9 = param_3;
      break;
    case 2:
      uVar8 = param_3;
      break;
    case 3:
      uVar7 = param_3;
    default:
    }
    param_3 = uVar4;
    if (4 < uVar2) {
      return;
    }
LAB_0022aa18:
    *(uint *)(lVar1 + (ulong)uVar2 * 4 + 4) =
         param_3 & 0xff | (uVar9 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | uVar7 << 0x18;
    return;
  }
  if ((uVar4 >> 0x11 & 1) == 0) {
    return;
  }
  uVar6 = uVar2 - 2;
  lVar1 = *(long *)(param_1 + 0x18) +
          (long)(int)((uVar4 >> 4 & 0x1c) + (uVar4 >> 8 & 0xc) + (uVar4 >> 0xc & 8) +
                      (uVar4 >> 0xc & 1) * 0xc + (uVar4 >> 0x10 & 1) * 0x1c +
                      (uVar4 >> 0xc & 0x10) * (uVar4 >> 6 & 7) +
                      ((uVar4 & 3) * 0x10 + (uVar4 & 0x30) | uVar4 >> 6 & 8) +
                     ((uVar4 >> 0xd & 3) + (uVar4 >> 2 & 3)) * 0x14);
  uVar4 = *(uint *)(lVar1 + (ulong)(uVar6 % 5) * 4 + 0x60);
  uVar9 = uVar4 >> 8;
  uVar8 = uVar4 >> 0x10;
  uVar7 = uVar4 >> 0x18;
  switch(param_2 + uVar2 * -4) {
  case 0:
    goto switchD_0022a8e0_caseD_0;
  case 1:
    uVar9 = param_3;
    break;
  case 2:
    uVar8 = param_3;
    break;
  case 3:
    uVar7 = param_3;
  }
  param_3 = uVar4;
switchD_0022a8e0_caseD_0:
  if (uVar6 < 5) {
    *(uint *)(lVar1 + (ulong)uVar6 * 4 + 0x60) =
         uVar7 << 0x18 | (uVar8 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | param_3 & 0xff;
  }
  return;
}


