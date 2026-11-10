/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002104a4; name: FUN_002104a4
 */


undefined8 FUN_002104a4(long param_1,long param_2,long param_3,long *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  
  iVar4 = FUN_00205b18(*(undefined8 *)(*param_4 + 0x10),*(undefined8 *)(*param_4 + 0x18));
  if (iVar4 == 0) {
    lVar12 = *param_4;
    lVar9 = *(long *)(lVar12 + 0x18);
    if (lVar9 != 0) {
      if (**(char **)(lVar12 + 0x10) == ':') {
        return 0xfffffded;
      }
      pbVar11 = *(byte **)(lVar12 + 0x10);
      do {
        if (*pbVar11 - 0x41 < 0x1a) {
          return 0xfffffded;
        }
        lVar9 = lVar9 + -1;
        pbVar11 = pbVar11 + 1;
      } while (lVar9 != 0);
    }
    goto LAB_00210618;
  }
  iVar4 = (int)param_4[2];
  if ((iVar4 == 0x25) || (iVar4 == 0)) {
    lVar9 = *(long *)(param_4[1] + 0x18);
    if (lVar9 != 0) {
      pbVar11 = *(byte **)(param_4[1] + 0x10);
      do {
        if ((&DAT_039cc06c)[*pbVar11] == '\0') goto LAB_00210604;
        lVar9 = lVar9 + -1;
        pbVar11 = pbVar11 + 1;
      } while (lVar9 != 0);
    }
  }
  else {
    pbVar11 = *(byte **)(param_4[1] + 0x10);
    lVar9 = *(long *)(param_4[1] + 0x18);
    if (iVar4 == 5) {
      if ((lVar9 == 0) || (0x19 < (byte)((*pbVar11 & 0xdf) + 0xbf))) goto LAB_00210604;
      lVar9 = lVar9 + -1;
      if (lVar9 != 0) {
        do {
          pbVar11 = pbVar11 + 1;
          bVar1 = *pbVar11;
          if ((9 < bVar1 - 0x30 && 0x19 < ((bVar1 & 0xffffffdf) - 0x41 & 0xff)) &&
             ((0x2e < bVar1 || ((1L << ((ulong)bVar1 & 0x3f) & 0x680000000000U) == 0))))
          goto LAB_00210604;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    else {
      iVar4 = FUN_00205b60();
      if (iVar4 == 0) {
LAB_00210604:
        if (**(char **)(*param_4 + 0x10) == ':') {
          return 0xfffffded;
        }
LAB_00210618:
        *(ushort *)(param_2 + 0xe2) = *(ushort *)(param_2 + 0xe2) | 0x40;
        return 0xffffff97;
      }
    }
  }
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(char *)(param_3 + 0xc) == '\x05') {
      bVar3 = false;
      goto LAB_0021063c;
    }
    cVar6 = **(char **)(*param_4 + 0x10);
    if (cVar6 == ':') {
      if (param_5 != 0) {
        return 0xfffffded;
      }
      if ((*(byte *)(param_2 + 0xe2) >> 6 & 1) != 0) {
        return 0xfffffded;
      }
    }
    iVar4 = (int)param_4[2];
    if (iVar4 < 0x3d) {
      if (iVar4 == 7) {
        iVar4 = FUN_00210f88(param_2,param_4,0x20);
        if (iVar4 == 0) {
          return 0xfffffded;
        }
        if (*(long *)(param_4[1] + 0x18) != 3) {
          return 0xfffffded;
        }
        lVar9 = 0;
        lVar12 = 0;
        do {
          if (((0xccccccccccccccc < lVar12) ||
              (bVar1 = *(byte *)(*(long *)(param_4[1] + 0x10) + lVar9), 9 < (byte)(bVar1 - 0x30)))
             || ((long)(-0x7fffffffffffffd1 - (ulong)bVar1) < lVar12 * 10)) {
            *(undefined2 *)(param_2 + 0xe0) = 0xffff;
            return 0xfffffded;
          }
          lVar9 = lVar9 + 1;
          lVar12 = lVar12 * 10 + (ulong)bVar1 + -0x30;
        } while (lVar9 != 3);
        uVar8 = (uint)lVar12 & 0xffff;
        *(short *)(param_2 + 0xe0) = (short)lVar12;
        if (uVar8 == 0x65) {
          return 0xfffffded;
        }
        if (uVar8 == 0xffff) {
          return 0xfffffded;
        }
        goto LAB_00210c34;
      }
      if (iVar4 != 0x1b) {
        if (iVar4 == 0x38) {
          return 0xfffffded;
        }
        goto switchD_0021068c_caseD_39;
      }
      uVar7 = *(ushort *)(param_2 + 0xe0);
      if (uVar7 == 0xcc) {
        if (*(long *)(param_2 + 0x40) != -1) {
          return 0xfffffded;
        }
        if (*(long *)(param_4[1] + 0x18) != 1) {
          return 0xfffffded;
        }
        bVar1 = **(byte **)(param_4[1] + 0x10);
        uVar8 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar8 = (uint)bVar1;
        }
        if ((uVar8 & 0xff) == 0x30) {
          *(undefined8 *)(param_2 + 0x40) = 0;
          return 0xffffff96;
        }
        return 0xfffffded;
      }
      if (uVar7 - 100 < 100) {
        return 0xfffffded;
      }
      if ((uVar7 - 200 < 100) && (*(char *)(param_2 + 0xe2) < '\0')) {
        return 0xffffff96;
      }
      if (*(long *)(param_2 + 0x40) != -1) {
        return 0xfffffded;
      }
      lVar9 = *(long *)(param_4[1] + 0x18);
      if (lVar9 == 0) goto LAB_00210b78;
      pbVar11 = *(byte **)(param_4[1] + 0x10);
      lVar12 = 0;
      do {
        if (((0xccccccccccccccc < lVar12) || (bVar1 = *pbVar11, 9 < (byte)(bVar1 - 0x30))) ||
           ((long)(-0x7fffffffffffffd1 - (ulong)bVar1) < lVar12 * 10)) goto LAB_00210b78;
        lVar12 = lVar12 * 10 + (ulong)bVar1 + -0x30;
        lVar9 = lVar9 + -1;
        pbVar11 = pbVar11 + 1;
      } while (lVar9 != 0);
LAB_002109b4:
      *(long *)(param_2 + 0x40) = lVar12;
      if (lVar12 == -1) {
        return 0xfffffded;
      }
      goto LAB_00210c34;
    }
    if (iVar4 - 0x3eU < 4) {
      return 0xfffffded;
    }
    if (iVar4 == 0x3d) {
      if (*(long *)(param_4[1] + 0x18) != 8) {
        return 0xfffffded;
      }
      lVar9 = 0;
      do {
        bVar1 = "trailers"[lVar9];
        bVar2 = *(byte *)(*(long *)(param_4[1] + 0x10) + lVar9);
        uVar8 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar8 = (uint)bVar1;
        }
        uVar13 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar13 = (uint)bVar2;
        }
        if ((uVar8 & 0xff) != (uVar13 & 0xff)) {
          return 0xfffffded;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
      goto LAB_00210c34;
    }
switchD_0021068c_caseD_39:
    if (cVar6 == ':') {
      return 0xfffffded;
    }
    goto LAB_00210c34;
  }
  bVar3 = *(char *)(param_1 + 0x9a9) != '\0';
LAB_0021063c:
  cVar6 = **(char **)(*param_4 + 0x10);
  if (cVar6 == ':') {
    if (param_5 != 0) {
      return 0xfffffded;
    }
    if ((*(byte *)(param_2 + 0xe2) >> 6 & 1) != 0) {
      return 0xfffffded;
    }
  }
  iVar4 = (int)param_4[2];
  if (0x37 < iVar4) {
    switch(iVar4) {
    case 0x38:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
      return 0xfffffded;
    default:
      goto switchD_0021068c_caseD_39;
    case 0x3d:
      if (*(long *)(param_4[1] + 0x18) != 8) {
        return 0xfffffded;
      }
      lVar9 = 0;
      do {
        bVar1 = "trailers"[lVar9];
        bVar2 = *(byte *)(*(long *)(param_4[1] + 0x10) + lVar9);
        uVar8 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar8 = (uint)bVar1;
        }
        uVar13 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar13 = (uint)bVar2;
        }
        if ((uVar8 & 0xff) != (uVar13 & 0xff)) {
          return 0xfffffded;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
      goto LAB_00210c34;
    case 0x42:
      if (!bVar3) {
        return 0xfffffded;
      }
      uVar5 = 0x8000;
    }
    goto LAB_00210934;
  }
  switch(iVar4) {
  case 0:
    uVar5 = 1;
    goto LAB_00210934;
  case 1:
    iVar4 = FUN_00210f88(param_2,param_4,4);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    lVar9 = param_4[1];
    if (*(long *)(lVar9 + 0x18) == 7) {
      piVar10 = *(int **)(lVar9 + 0x10);
      if (*(char *)((long)piVar10 + 6) == 'S') {
        if (*piVar10 != 0x4954504f || *(int *)((long)piVar10 + 3) != 0x534e4f49) goto LAB_00210c34;
        uVar7 = *(ushort *)(param_2 + 0xe2) | 0x200;
      }
      else {
        if ((*(char *)((long)piVar10 + 6) != 'T') ||
           (*piVar10 != 0x4e4e4f43 || *(int *)((long)piVar10 + 3) != 0x5443454e)) goto LAB_00210c34;
        if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
          return 0xfffffded;
        }
        uVar7 = *(ushort *)(param_2 + 0xe2) | 0x80;
      }
    }
    else {
      if ((*(long *)(lVar9 + 0x18) != 4) || (**(int **)(lVar9 + 0x10) != 0x44414548))
      goto LAB_00210c34;
      uVar7 = *(ushort *)(param_2 + 0xe2) | 0x100;
    }
    break;
  case 2:
  case 4:
    goto switchD_0021068c_caseD_39;
  case 3:
    iVar4 = FUN_00210f88(param_2,param_4,2);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    cVar6 = **(char **)(param_4[1] + 0x10);
    if (cVar6 == '/') {
      uVar7 = *(ushort *)(param_2 + 0xe2) | 0x800;
    }
    else {
      if ((cVar6 != '*') || (*(long *)(param_4[1] + 0x18) != 1)) goto LAB_00210c34;
      uVar7 = *(ushort *)(param_2 + 0xe2) | 0x1000;
    }
    break;
  case 5:
    iVar4 = FUN_00210f88(param_2,param_4,8);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    lVar9 = param_4[1];
    if (*(long *)(lVar9 + 0x18) == 5) {
      lVar12 = 0;
      do {
        bVar1 = (&DAT_038a00d4)[lVar12];
        bVar2 = *(byte *)(*(long *)(lVar9 + 0x10) + lVar12);
        uVar8 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar8 = (uint)bVar1;
        }
        uVar13 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar13 = (uint)bVar2;
        }
        if ((uVar8 & 0xff) != (uVar13 & 0xff)) goto LAB_00210c34;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 5);
    }
    else {
      if (*(long *)(lVar9 + 0x18) != 4) goto LAB_00210c34;
      lVar12 = 0;
      do {
        bVar1 = (&DAT_0395cbe4)[lVar12];
        bVar2 = *(byte *)(*(long *)(lVar9 + 0x10) + lVar12);
        uVar8 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar8 = (uint)bVar1;
        }
        uVar13 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar13 = (uint)bVar2;
        }
        if ((uVar8 & 0xff) != (uVar13 & 0xff)) goto LAB_00210c34;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 4);
    }
    uVar7 = *(ushort *)(param_2 + 0xe2) | 0x2000;
    break;
  default:
    if (iVar4 == 0x1b) {
      if (*(long *)(param_2 + 0x40) != -1) {
        return 0xfffffded;
      }
      lVar9 = *(long *)(param_4[1] + 0x18);
      if (lVar9 == 0) {
LAB_00210b78:
        *(undefined8 *)(param_2 + 0x40) = 0xffffffffffffffff;
        return 0xfffffded;
      }
      pbVar11 = *(byte **)(param_4[1] + 0x10);
      lVar12 = 0;
      do {
        if (((0xccccccccccccccc < lVar12) || (bVar1 = *pbVar11, 9 < (byte)(bVar1 - 0x30))) ||
           ((long)(-0x7fffffffffffffd1 - (ulong)bVar1) < lVar12 * 10)) goto LAB_00210b78;
        lVar12 = lVar12 * 10 + (ulong)bVar1 + -0x30;
        lVar9 = lVar9 + -1;
        pbVar11 = pbVar11 + 1;
      } while (lVar9 != 0);
      goto LAB_002109b4;
    }
    if (iVar4 != 0x25) goto switchD_0021068c_caseD_39;
    uVar5 = 0x10;
LAB_00210934:
    iVar4 = FUN_00210f88(param_2,param_4,uVar5);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    goto LAB_00210c34;
  }
  *(ushort *)(param_2 + 0xe2) = uVar7;
LAB_00210c34:
  if (**(char **)(*param_4 + 0x10) == ':') {
    return 0;
  }
  *(ushort *)(param_2 + 0xe2) = *(ushort *)(param_2 + 0xe2) | 0x40;
  return 0;
}


