/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293e2a0; name: FUN_0293e2a0
 */


ulong FUN_0293e2a0(byte param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar5 = param_2 & 0x1f;
  uVar3 = (param_2 & 0xffff) >> 5 & 0x1f;
  uVar4 = 7;
  if ((param_1 != 0x12) && (uVar5 != 0x12)) {
    uVar4 = 7;
    switch((&DAT_03a84908)[(ulong)uVar5 + (ulong)param_1 * 0x12]) {
    case 0:
      uVar4 = (ulong)(DAT_043ecde8 != '\0') << 3;
      break;
    default:
      uVar4 = 0;
      break;
    case 2:
      uVar6 = 8;
      if (DAT_043ecde8 == '\0') {
        uVar6 = 6;
      }
      uVar4 = (ulong)uVar6;
      break;
    case 4:
      break;
    case 8:
      uVar6 = 6;
      if (DAT_043ecde8 == '\0') {
        uVar6 = 8;
      }
      uVar4 = (ulong)uVar6;
    }
  }
  uVar6 = (param_2 & 0xffff) >> 10 & 0x1f;
  if ((uVar3 != 0x12) && (uVar3 != uVar5)) {
    if (param_1 == 0x12) {
      uVar8 = 7;
    }
    else {
      uVar8 = 7;
      switch((&DAT_03a84908)[(ulong)uVar3 + (ulong)param_1 * 0x12]) {
      case 0:
        uVar8 = (ulong)(DAT_043ecde8 != '\0') << 3;
        break;
      default:
        uVar8 = 0;
        break;
      case 2:
        uVar7 = 8;
        if (DAT_043ecde8 == '\0') {
          uVar7 = 6;
        }
        uVar8 = (ulong)uVar7;
        break;
      case 4:
        break;
      case 8:
        uVar7 = 6;
        if (DAT_043ecde8 == '\0') {
          uVar7 = 8;
        }
        uVar8 = (ulong)uVar7;
      }
    }
    uVar7 = (uint)((&DAT_03a84a4c)[uVar8] * (&DAT_03a84a4c)[uVar4]) >> 6;
    if (0xfff < uVar7) {
      uVar7 = 0x1000;
    }
    iVar2 = (int)uVar4;
    uVar4 = 0;
    if ((uVar7 == 0 && iVar2 != 0) && (int)uVar8 != 0) {
      uVar7 = 1;
    }
    do {
      uVar1 = (uint)uVar4;
      if (uVar1 == 0x20) {
        uVar4 = 0;
        goto joined_r0x0293e42c;
      }
      uVar4 = (ulong)(uVar1 + 1);
    } while ((1 << (ulong)(uVar1 & 0x1f) & uVar7) == 0);
    if (0xc < uVar1 + 1) {
      uVar4 = 0xd;
    }
  }
joined_r0x0293e42c:
  if (((uVar6 != uVar3) && (uVar6 != 0x12)) && (uVar6 != uVar5)) {
    if (param_1 == 0x12) {
      uVar8 = 7;
    }
    else {
      uVar8 = 7;
      switch((&DAT_03a84908)[(ulong)uVar6 + (ulong)param_1 * 0x12]) {
      case 0:
        uVar8 = (ulong)(DAT_043ecde8 != '\0') << 3;
        break;
      default:
        uVar8 = 0;
        break;
      case 2:
        uVar5 = 8;
        if (DAT_043ecde8 == '\0') {
          uVar5 = 6;
        }
        uVar8 = (ulong)uVar5;
        break;
      case 4:
        break;
      case 8:
        uVar5 = 6;
        if (DAT_043ecde8 == '\0') {
          uVar5 = 8;
        }
        uVar8 = (ulong)uVar5;
      }
    }
    iVar2 = (int)uVar4;
    uVar5 = (uint)((&DAT_03a84a4c)[uVar8] * (&DAT_03a84a4c)[iVar2]) >> 6;
    if (0xfff < uVar5) {
      uVar5 = 0x1000;
    }
    uVar4 = 0;
    if ((uVar5 == 0 && iVar2 != 0) && (int)uVar8 != 0) {
      uVar5 = 1;
    }
    do {
      uVar3 = (uint)uVar4;
      if (uVar3 == 0x20) {
        return 0;
      }
      uVar4 = (ulong)(uVar3 + 1);
    } while ((1 << (ulong)(uVar3 & 0x1f) & uVar5) == 0);
    if (0xc < uVar3 + 1) {
      uVar4 = 0xd;
    }
  }
  return uVar4;
}


