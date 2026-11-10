/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2d098; name: FUN_02c2d098
 */


undefined8 FUN_02c2d098(undefined8 param_1,ushort *param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar1 = 2;
  puVar2 = param_2 + 1;
  if (*param_2 != 0x1b && 9 < *param_2 - 0x11) {
    lVar1 = 0;
    puVar2 = param_2;
  }
  uVar4 = *(ushort *)((long)param_2 + lVar1);
  if (uVar4 != 0) {
    uVar3 = puVar2[1];
    uVar8 = (uint)uVar4;
    if (uVar4 < 0x100) {
      uVar9 = (ulong)(uVar4 >> 5);
      uVar5 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(&DAT_03888900 + uVar9 * 4) & uVar5) != 0) {
        return 3;
      }
      if ((*(uint *)(&DAT_038888a0 + uVar9 * 4) & uVar5) != 0) {
        return 4;
      }
      if ((*(uint *)(&DAT_038884e0 + uVar9 * 4) & uVar5) != 0) {
        return 1;
      }
    }
    uVar5 = uVar8 - 0x58;
    uVar7 = (uint)uVar3;
    if (uVar5 < 0x23) {
      if ((1L << ((ulong)uVar5 & 0x3f) & 0x500000005U) != 0) {
        return 2;
      }
      if ((1L << ((ulong)uVar5 & 0x3f) & 0x200000002U) != 0) {
        if (uVar3 == 0) {
          return 2;
        }
        if (uVar3 == 0x59) {
          return 2;
        }
        if (uVar3 == 0x79) {
          return 2;
        }
        if (0xff < uVar3) {
          return 1;
        }
        if ((*(uint *)(&DAT_038884e0 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar7 & 0x1f)) == 0)
        {
          return 1;
        }
        return 2;
      }
    }
    if (uVar7 != 0) {
      uVar6 = 1;
      switch(uVar4) {
      case 0x47:
      case 0x67:
        if ((uVar7 | 0x20) == 0x6e) {
          return 2;
        }
        uVar6 = 1;
        switch(uVar4) {
        case 0x48:
          goto switchD_02c2d1c4_caseD_48;
        case 0x50:
          goto switchD_02c2d1c4_caseD_50;
        case 0x53:
          goto switchD_02c2d1c4_caseD_53;
        case 0x54:
          goto switchD_02c2d1c4_caseD_54;
        }
        break;
      case 0x48:
      case 0x68:
        goto switchD_02c2d1c4_caseD_48;
      case 0x50:
      case 0x70:
switchD_02c2d1c4_caseD_50:
        if ((uVar7 | 0x20) == 0x6e) {
          return 2;
        }
        uVar6 = 1;
        switch(uVar8) {
        case 0x50:
        case 0x70:
          if ((uVar7 | 0x20) == 0x73) {
            return 2;
          }
          if (uVar8 == 0x53) goto switchD_02c2d1c4_caseD_53;
          if (uVar8 == 0x68) {
            return 1;
          }
          if (uVar8 == 0x54) goto switchD_02c2d1c4_caseD_54;
          break;
        case 0x53:
          goto switchD_02c2d1c4_caseD_53;
        case 0x54:
          goto switchD_02c2d1c4_caseD_54;
        case 0x68:
          goto switchD_02c2d1c4_caseD_48;
        }
        break;
      case 0x53:
      case 0x73:
switchD_02c2d1c4_caseD_53:
        if (((uVar7 | 0x20) != 0x79) &&
           ((0xff < uVar7 ||
            ((*(uint *)(&DAT_038884e0 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar7 & 0x1f)) == 0)
            ))) {
          return 2;
        }
        break;
      case 0x54:
      case 0x74:
switchD_02c2d1c4_caseD_54:
        if ((uVar7 | 0x20) == 0x73) {
          return 2;
        }
        if (uVar8 == 0x68) {
          return 1;
        }
        if (uVar8 == 0x73) goto switchD_02c2d1c4_caseD_53;
      }
    }
  }
  uVar6 = 0;
switchD_02c2d1c4_caseD_48:
  return uVar6;
}


