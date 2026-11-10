/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eb1c0; name: FUN_002eb1c0
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_002eb1c0(byte *param_1,byte *param_2,int *param_3,int *param_4)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  
  if (-1 < *param_4) {
    if (param_1 == param_2) {
      return (byte *)0x0;
    }
    pbVar5 = param_1 + 1;
    bVar15 = *param_1;
    uVar4 = (ulong)bVar15;
    if ((*(byte *)(param_3 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("conv->flags.basic",
                    "external/com_google_absl/absl/strings/internal/str_format/parser.cc",0x78,
                    "ConsumeConversion");
    }
    if (bVar15 < 0x41) {
      bVar7 = *(byte *)(param_3 + 3) & 0xfe;
      *(byte *)(param_3 + 3) = bVar7;
      while (uVar3 = (uint)uVar4, bVar15 < 0x31) {
        bVar15 = 2;
        switch(uVar3) {
        case 0x20:
          bVar7 = bVar7 | 8;
          *(byte *)(param_3 + 3) = bVar7;
          break;
        default:
          goto switchD_002eb238_caseD_21;
        case 0x23:
          bVar15 = 0x10;
        case 0x2d:
          bVar7 = bVar7 | bVar15;
          *(byte *)(param_3 + 3) = bVar7;
          break;
        case 0x2a:
          if (param_2 == pbVar5) {
            return (byte *)0x0;
          }
          iVar8 = *param_4;
          uVar4 = (ulong)*pbVar5;
          *param_4 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_002eb610;
          pbVar5 = pbVar5 + 1;
          iVar8 = -2 - iVar8;
          goto LAB_002eb36c;
        case 0x2b:
          bVar7 = bVar7 | 4;
          *(byte *)(param_3 + 3) = bVar7;
          if (param_2 == pbVar5) {
            return (byte *)0x0;
          }
          goto LAB_002eb250;
        case 0x30:
          bVar7 = bVar7 | 0x20;
          *(byte *)(param_3 + 3) = bVar7;
        }
        if (param_2 == pbVar5) {
          return (byte *)0x0;
        }
LAB_002eb250:
        bVar15 = *pbVar5;
        uVar4 = (ulong)bVar15;
        pbVar5 = pbVar5 + 1;
      }
      if (uVar3 < 0x3a) {
        iVar8 = uVar3 - 0x30;
        if (pbVar5 == param_2) {
          pbVar5 = param_2;
        }
        else {
          iVar10 = -8;
          do {
            pbVar14 = pbVar5 + 1;
            bVar15 = *pbVar5;
            uVar4 = (ulong)bVar15;
            uVar3 = bVar15 - 0x30;
            if ((9 < uVar3) || (iVar10 == 0)) {
              pbVar5 = pbVar5 + 1;
              if (bVar15 != 0x24) goto LAB_002eb300;
              goto LAB_002eb314;
            }
            iVar8 = uVar3 + iVar8 * 10;
            iVar10 = iVar10 + 1;
            pbVar5 = pbVar14;
          } while (param_2 != pbVar14);
          pbVar5 = param_2;
          if (bVar15 == 0x24) {
LAB_002eb314:
            if (*param_4 != 0) {
              return (byte *)0x0;
            }
            *param_4 = -1;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_002eb32c;
          }
LAB_002eb300:
          if (iVar8 < 0) goto LAB_002eb5f0;
        }
LAB_002eb36c:
        param_3[1] = iVar8;
switchD_002eb238_caseD_21:
        if ((int)uVar4 == 0x2e) {
          if (pbVar5 == param_2) {
            return (byte *)0x0;
          }
          pbVar14 = pbVar5 + 1;
          bVar15 = *pbVar5;
          uVar4 = (ulong)bVar15;
          uVar3 = bVar15 - 0x30;
          if (uVar3 < 10) {
            if (pbVar14 == param_2) {
              pbVar5 = param_2;
            }
            else {
              iVar8 = -8;
              do {
                pbVar6 = pbVar14 + 1;
                uVar4 = (ulong)*pbVar14;
                uVar9 = *pbVar14 - 0x30;
                if ((9 < uVar9) || (iVar8 == 0)) {
                  pbVar5 = pbVar14 + 1;
                  break;
                }
                uVar3 = uVar9 + uVar3 * 10;
                iVar8 = iVar8 + 1;
                pbVar14 = pbVar6;
                pbVar5 = param_2;
              } while (param_2 != pbVar6);
              if ((int)uVar3 < 0) {
LAB_002eb5f0:
                    /* WARNING: Subroutine does not return */
                __assert_fail("value >= 0",
                              "external/com_google_absl\\absl/strings/internal/str_format/parser.h",
                              0x26,"set_value");
              }
            }
            param_3[2] = uVar3;
          }
          else if (bVar15 == 0x2a) {
            if (pbVar14 == param_2) {
              return (byte *)0x0;
            }
            iVar8 = *param_4;
            uVar4 = (ulong)*pbVar14;
            *param_4 = iVar8 + 1;
            if (iVar8 < 0) {
LAB_002eb610:
                    /* WARNING: Subroutine does not return */
              __assert_fail("value > 0",
                            "external/com_google_absl\\absl/strings/internal/str_format/parser.h",
                            0x31,"set_from_arg");
            }
            param_3[2] = -2 - iVar8;
            pbVar5 = pbVar5 + 2;
          }
          else {
            param_3[2] = 0;
            pbVar5 = pbVar14;
          }
        }
      }
    }
    puVar1 = PTR_DAT_043737f0;
    bVar15 = PTR_DAT_043737f0[uVar4];
    if ((char)bVar15 < '\0') {
      if (bVar15 == 0x80) {
        return (byte *)0x0;
      }
      if (pbVar5 == param_2) {
        return (byte *)0x0;
      }
      bVar7 = *pbVar5;
      if (((int)uVar4 == 0x68) && (bVar7 == 0x68)) {
        *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x002eb590:
        if (pbVar5 + 1 == param_2) {
          return (byte *)0x0;
        }
        pbVar14 = pbVar5 + 1;
        pbVar5 = pbVar5 + 2;
        bVar15 = puVar1[*pbVar14];
      }
      else {
        if (((int)uVar4 == 0x6c) && (bVar7 == 0x6c)) {
          *(undefined1 *)((long)param_3 + 0xd) = 3;
          goto joined_r0x002eb590;
        }
        *(byte *)((long)param_3 + 0xd) = ~bVar15;
        bVar15 = puVar1[bVar7];
        pbVar5 = pbVar5 + 1;
      }
      if ((char)bVar15 < '\0') {
        return (byte *)0x0;
      }
    }
    bVar7 = *(byte *)(param_3 + 3);
    if (((bVar7 & 0x3e) == 0) && (param_3[1] == -1)) {
      bVar2 = param_3[2] == -1;
      uVar3 = bVar7 & 1;
      if (bVar2 == uVar3) goto LAB_002eb430;
    }
    else {
      bVar2 = false;
      uVar3 = bVar7 & 1;
      if ((bVar7 & 1) == 0) goto LAB_002eb430;
    }
    fprintf(*(FILE **)PTR_stderr_04372330,
            "basic=%d left=%d show_pos=%d sign_col=%d alt=%d zero=%d width=%d precision=%d\n",uVar3,
            bVar7 >> 1 & 1,bVar7 >> 2 & 1,bVar7 >> 3 & 1,bVar7 >> 4 & 1,bVar7 >> 5 & 1,param_3[1],
            param_3[2]);
    if (bVar2 != (bool)(*(byte *)(param_3 + 3) & 1)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("CheckFastPathSetting(*conv)",
                    "external/com_google_absl/absl/strings/internal/str_format/parser.cc",0xde,
                    "ConsumeConversion");
    }
LAB_002eb430:
    *(byte *)((long)param_3 + 0xe) = bVar15;
    iVar8 = *param_4;
    *param_4 = iVar8 + 1;
    *param_3 = iVar8 + 1;
    return pbVar5;
  }
LAB_002eb32c:
  if (param_1 == param_2) {
    return (byte *)0x0;
  }
  pbVar5 = param_1 + 1;
  if (8 < *param_1 - 0x31) {
    return (byte *)0x0;
  }
  iVar8 = *param_1 - 0x30;
  if (pbVar5 == param_2) {
    *param_3 = iVar8;
    return (byte *)0x0;
  }
  pbVar14 = (byte *)0x0;
  do {
    pbVar6 = pbVar14;
    pbVar13 = param_1 + (long)pbVar6;
    bVar15 = pbVar13[1];
    uVar3 = bVar15 - 0x30;
    if (9 < uVar3) {
      pbVar5 = pbVar13 + 2;
LAB_002eb6ec:
      *param_3 = iVar8;
      goto joined_r0x002eb6f4;
    }
    pbVar5 = pbVar5 + 1;
    if ((int)pbVar6 == 8) goto LAB_002eb6ec;
    iVar8 = uVar3 + iVar8 * 10;
    pbVar14 = pbVar6 + 1;
  } while (param_2 + ~(ulong)param_1 != pbVar6 + 1);
  *param_3 = iVar8;
  pbVar5 = param_2;
joined_r0x002eb6f4:
  if (iVar8 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("conv->arg_position > 0",
                  "external/com_google_absl/absl/strings/internal/str_format/parser.cc",0x71,
                  "ConsumeConversion");
  }
  if (pbVar5 == param_2) {
    return (byte *)0x0;
  }
  if (bVar15 != 0x24) {
    return (byte *)0x0;
  }
  bVar15 = *(byte *)(param_3 + 3);
  uVar3 = (uint)bVar15;
  if ((bVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("conv->flags.basic",
                  "external/com_google_absl/absl/strings/internal/str_format/parser.cc",0x78,
                  "ConsumeConversion");
  }
  bVar7 = *pbVar5;
  uVar4 = (ulong)bVar7;
  pbVar13 = pbVar13 + 3;
  if (bVar7 < 0x41) {
    uVar3 = bVar15 & 0xfe;
    *(char *)(param_3 + 3) = (char)uVar3;
    pbVar5 = param_2;
    if (bVar7 < 0x31) {
      pbVar14 = param_2 + (-3 - (long)param_1);
      do {
        uVar9 = (uint)uVar4;
        pbVar13 = param_1 + (long)pbVar6;
        uVar12 = 2;
        switch(uVar9) {
        case 0x20:
          uVar3 = uVar3 | 8;
          *(char *)(param_3 + 3) = (char)uVar3;
          break;
        default:
          pbVar5 = pbVar13 + 3;
          goto joined_r0x002eb934;
        case 0x23:
          uVar12 = 0x10;
        case 0x2d:
          uVar3 = uVar3 | uVar12;
          *(char *)(param_3 + 3) = (char)uVar3;
          break;
        case 0x2a:
          if (pbVar14 == pbVar6) {
            return (byte *)0x0;
          }
          bVar15 = pbVar13[3];
          if (8 < bVar15 - 0x31) {
            return (byte *)0x0;
          }
          if (param_2 + (-4 - (long)param_1) == pbVar6) {
            param_3[1] = 0x2f - (uint)bVar15;
            return (byte *)0x0;
          }
          lVar11 = (long)(param_2 + (-4 - (long)param_1)) - (long)pbVar6;
          pbVar14 = pbVar13 + 4;
          uVar9 = bVar15 - 0x30;
          iVar8 = -8;
          pbVar6 = pbVar13 + 6;
          goto LAB_002eb970;
        case 0x2b:
          uVar3 = uVar3 | 4;
          *(char *)(param_3 + 3) = (char)uVar3;
          if (pbVar14 == pbVar6) {
            return (byte *)0x0;
          }
          goto LAB_002eb77c;
        case 0x30:
          uVar3 = uVar3 | 0x20;
          *(char *)(param_3 + 3) = (char)uVar3;
        }
        if (pbVar14 == pbVar6) {
          return (byte *)0x0;
        }
LAB_002eb77c:
        uVar4 = (ulong)pbVar13[3];
        pbVar6 = pbVar6 + 1;
      } while (pbVar13[3] < 0x31);
      pbVar13 = param_1 + (long)pbVar6 + 3;
    }
    uVar9 = (uint)uVar4;
    if (uVar9 < 0x3a) {
      iVar8 = uVar9 - 0x30;
      if (pbVar13 == param_2) {
        param_3[1] = iVar8;
      }
      else {
        iVar10 = -8;
        do {
          pbVar14 = pbVar13 + 1;
          uVar4 = (ulong)*pbVar13;
          uVar9 = (uint)*pbVar13;
          if ((9 < uVar9 - 0x30) || (iVar10 == 0)) {
            pbVar5 = pbVar13 + 1;
            break;
          }
          iVar8 = (uVar9 - 0x30) + iVar8 * 10;
          iVar10 = iVar10 + 1;
          pbVar13 = pbVar14;
        } while (param_2 != pbVar14);
        if (iVar8 < 0) goto LAB_002ebc10;
        param_3[1] = iVar8;
      }
joined_r0x002eb934:
      if (uVar9 == 0x2e) goto LAB_002eb84c;
      goto LAB_002eb9e8;
    }
  }
  goto LAB_002eb9ec;
  while( true ) {
    pbVar14 = pbVar14 + 1;
    pbVar13 = pbVar14;
    if (iVar8 == 0) break;
    uVar9 = uVar12 + uVar9 * 10;
    lVar11 = lVar11 + -1;
    iVar8 = iVar8 + 1;
    pbVar6 = pbVar5 + 1;
    pbVar13 = param_2;
    if (lVar11 == 0) break;
LAB_002eb970:
    pbVar5 = pbVar6;
    bVar15 = pbVar5[-2];
    uVar12 = bVar15 - 0x30;
    if (9 < uVar12) {
      pbVar13 = pbVar5 + -1;
      break;
    }
  }
  if ((int)uVar9 < 1) goto LAB_002ebc30;
  param_3[1] = ~uVar9;
  if (pbVar13 == param_2) {
    return (byte *)0x0;
  }
  if (bVar15 != 0x24) {
    return (byte *)0x0;
  }
  uVar4 = (ulong)*pbVar13;
  if (*pbVar13 == 0x2e) {
LAB_002eb84c:
    if (pbVar5 == param_2) {
      return (byte *)0x0;
    }
    pbVar13 = pbVar5 + 1;
    bVar15 = *pbVar5;
    uVar4 = (ulong)bVar15;
    uVar9 = bVar15 - 0x30;
    if (9 < uVar9) {
      if (bVar15 == 0x2a) {
        if (pbVar13 == param_2) {
          return (byte *)0x0;
        }
        bVar15 = pbVar5[1];
        if (8 < bVar15 - 0x31) {
          return (byte *)0x0;
        }
        if (pbVar5 + 2 == param_2) {
          param_3[2] = 0x2f - (uint)bVar15;
          return (byte *)0x0;
        }
        uVar9 = bVar15 - 0x30;
        iVar8 = -8;
        pbVar5 = pbVar5 + 2;
        do {
          pbVar13 = pbVar5;
          bVar15 = *pbVar13;
          uVar12 = bVar15 - 0x30;
          if ((9 < uVar12) || (iVar8 == 0)) {
            pbVar14 = pbVar13 + 1;
            break;
          }
          uVar9 = uVar12 + uVar9 * 10;
          iVar8 = iVar8 + 1;
          pbVar5 = pbVar13 + 1;
          pbVar14 = param_2;
        } while (param_2 != pbVar13 + 1);
        if ((int)uVar9 < 1) {
LAB_002ebc30:
                    /* WARNING: Subroutine does not return */
          __assert_fail("value > 0",
                        "external/com_google_absl\\absl/strings/internal/str_format/parser.h",0x31,
                        "set_from_arg");
        }
        param_3[2] = ~uVar9;
        if (pbVar14 == param_2) {
          return (byte *)0x0;
        }
        if (bVar15 != 0x24) {
          return (byte *)0x0;
        }
        uVar4 = (ulong)*pbVar14;
        pbVar13 = pbVar13 + 2;
      }
      else {
        param_3[2] = 0;
      }
      goto LAB_002eb9ec;
    }
    if (pbVar13 == param_2) {
      pbVar5 = param_2;
    }
    else {
      iVar8 = -8;
      do {
        pbVar14 = pbVar13 + 1;
        uVar4 = (ulong)*pbVar13;
        uVar12 = *pbVar13 - 0x30;
        if ((9 < uVar12) || (iVar8 == 0)) {
          pbVar5 = pbVar13 + 1;
          break;
        }
        uVar9 = uVar12 + uVar9 * 10;
        iVar8 = iVar8 + 1;
        pbVar13 = pbVar14;
        pbVar5 = param_2;
      } while (param_2 != pbVar14);
      if ((int)uVar9 < 0) {
LAB_002ebc10:
                    /* WARNING: Subroutine does not return */
        __assert_fail("value >= 0",
                      "external/com_google_absl\\absl/strings/internal/str_format/parser.h",0x26,
                      "set_value");
      }
    }
    param_3[2] = uVar9;
  }
LAB_002eb9e8:
  pbVar13 = pbVar5;
LAB_002eb9ec:
  puVar1 = PTR_DAT_043737f0;
  bVar15 = PTR_DAT_043737f0[uVar4];
  if ((char)bVar15 < '\0') {
    if (bVar15 == 0x80) {
      return (byte *)0x0;
    }
    if (pbVar13 == param_2) {
      return (byte *)0x0;
    }
    bVar7 = *pbVar13;
    if (((int)uVar4 == 0x68) && (bVar7 == 0x68)) {
      *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x002ebb78:
      if (pbVar13 + 1 == param_2) {
        return (byte *)0x0;
      }
      pbVar5 = pbVar13 + 1;
      pbVar13 = pbVar13 + 2;
      bVar15 = puVar1[*pbVar5];
    }
    else {
      if (((int)uVar4 == 0x6c) && (bVar7 == 0x6c)) {
        *(undefined1 *)((long)param_3 + 0xd) = 3;
        goto joined_r0x002ebb78;
      }
      *(byte *)((long)param_3 + 0xd) = ~bVar15;
      bVar15 = puVar1[bVar7];
      pbVar13 = pbVar13 + 1;
    }
    if ((char)bVar15 < '\0') {
      return (byte *)0x0;
    }
  }
  if (((uVar3 & 0x3e) == 0) && (param_3[1] == -1)) {
    bVar2 = param_3[2] == -1;
    if ((uint)bVar2 == (uVar3 & 1)) goto LAB_002eba30;
  }
  else {
    bVar2 = false;
    if ((uVar3 & 1) == 0) goto LAB_002eba30;
  }
  fprintf(*(FILE **)PTR_stderr_04372330,
          "basic=%d left=%d show_pos=%d sign_col=%d alt=%d zero=%d width=%d precision=%d\n",
          uVar3 & 1,uVar3 >> 1 & 1,uVar3 >> 2 & 1,uVar3 >> 3 & 1,uVar3 >> 4 & 1,uVar3 >> 5 & 1,
          param_3[1],param_3[2]);
  if (bVar2 != (bool)(*(byte *)(param_3 + 3) & 1)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("CheckFastPathSetting(*conv)",
                  "external/com_google_absl/absl/strings/internal/str_format/parser.cc",0xde,
                  "ConsumeConversion");
  }
LAB_002eba30:
  *(byte *)((long)param_3 + 0xe) = bVar15;
  return pbVar13;
}


