/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00209480; name: FUN_00209480
 */


/* WARNING: Removing unreachable block (ram,0x0020a5c8) */
/* WARNING: Removing unreachable block (ram,0x0020a808) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00209480(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  uint *puVar9;
  ulong *puVar10;
  void *pvVar11;
  size_t __n;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  undefined2 uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  char *pcVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  int *piVar29;
  long lVar30;
  long *plVar31;
  int *piVar32;
  void *pvVar33;
  ulong uVar34;
  void *__s2;
  ulong local_e8;
  long local_98;
  int local_90;
  char local_8c;
  byte local_8b;
  undefined8 local_88;
  long lStack_80;
  undefined1 local_74;
  uint local_6c [3];
  
  iVar17 = FUN_00206e78();
  if (iVar17 < -900) {
LAB_0020af68:
    param_3 = (ulong)iVar17;
switchD_0020955c_caseD_f:
    return param_3;
  }
  iVar17 = FUN_0020af90(param_1);
  if (iVar17 == 0) {
    return param_3;
  }
  lVar1 = param_1 + 0x890;
  lVar2 = param_1 + 0x1a0;
  lVar3 = param_1 + 0x230;
  pbVar4 = (byte *)(param_1 + 0x1ad);
  plVar5 = (long *)(param_1 + 0x228);
  lVar6 = param_1 + 0x208;
  plVar7 = (long *)(param_1 + 0x260);
  pvVar11 = (void *)((long)param_2 + param_3);
  puVar8 = (ulong *)(param_1 + 0x1a0);
  puVar9 = (uint *)(param_1 + 0x280);
  puVar10 = (ulong *)(param_1 + 0x270);
  local_e8 = 0xfffffc7a;
  __s2 = param_2;
LAB_00209544:
  pvVar33 = __s2;
  switch(*puVar9) {
  case 0:
    uVar26 = *puVar10;
    __n = param_3;
    if (uVar26 <= param_3) {
      __n = uVar26;
    }
    iVar17 = memcmp("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n" + (0x18 - uVar26),__s2,__n);
    if (iVar17 != 0) {
      return 0xfffffffffffffc79;
    }
    pvVar33 = (void *)((long)__s2 + __n);
    *puVar10 = uVar26 - __n;
    if (uVar26 - __n == 0) {
      FUN_002063c4(param_1);
      bVar14 = false;
      *(undefined4 *)(param_1 + 0x280) = 1;
    }
    else {
      bVar14 = false;
    }
    goto joined_r0x0020aa40;
  case 1:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar19 = FUN_00205b90(*(long *)(param_1 + 0x220),__s2,uVar26);
    *(long *)(param_1 + 0x220) = lVar19;
    lVar30 = *(long *)(param_1 + 0x228);
    pvVar33 = (void *)((long)__s2 + uVar26);
    if (lVar30 != lVar19) goto LAB_0020ae20;
    if ((*(char *)(*(long *)(param_1 + 0x218) + 3) == '\x04') &&
       ((*(byte *)(*(long *)(param_1 + 0x218) + 4) & 1) == 0)) {
      *puVar9 = 2;
      lVar19 = lVar30;
      goto LAB_0020972c;
    }
    iVar17 = FUN_0020afe8(param_1,0xfffffde8,
                          "Remote peer returned unexpected data while we expected SETTINGS frame.  Perhaps, peer does not support HTTP/2 properly."
                         );
    if (-0x385 < iVar17) {
      uVar23 = *(undefined4 *)(param_1 + 0x93c);
      pcVar24 = "SETTINGS expected";
      goto LAB_0020aeac;
    }
    goto LAB_0020af68;
  case 2:
    lVar30 = *(long *)(param_1 + 0x220);
    lVar19 = *(long *)(param_1 + 0x228);
LAB_0020972c:
    uVar26 = (long)pvVar11 - (long)pvVar33;
    if ((ulong)(lVar19 - lVar30) <= (ulong)((long)pvVar11 - (long)pvVar33)) {
      uVar26 = lVar19 - lVar30;
    }
    lVar19 = FUN_00205b90(lVar30,pvVar33,uVar26);
    pvVar33 = (void *)((long)pvVar33 + uVar26);
    *(long *)(param_1 + 0x220) = lVar19;
    if (*(long *)(param_1 + 0x228) != lVar19) {
LAB_0020ae20:
      return (long)pvVar33 - (long)param_2;
    }
    FUN_0020c7f0(puVar8,*(undefined8 *)(param_1 + 0x218));
    uVar26 = *(ulong *)(param_1 + 0x1a0);
    *(ulong *)(param_1 + 0x270) = uVar26;
    if (*(uint *)(param_1 + 0x990) < uVar26) {
      uVar23 = *(undefined4 *)(param_1 + 0x93c);
      pcVar24 = "too large frame size";
      uVar20 = 6;
      goto LAB_0020aeb4;
    }
    bVar12 = *(byte *)(param_1 + 0x1ac);
    switch(bVar12) {
    case 0:
      uVar25 = *(uint *)(param_1 + 0x1a8);
      *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) & 9;
      if (uVar25 == 0) {
        uVar20 = 1;
        pcVar24 = "DATA: stream_id == 0";
LAB_0020aafc:
        iVar17 = FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),uVar20,pcVar24);
        iVar18 = -0x68;
        if (iVar17 < -900) {
          iVar18 = iVar17;
        }
      }
      else {
        if ((uVar25 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar17 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar17 = *(int *)(param_1 + 0x938);
        }
        if (iVar17 < (int)uVar25) {
          uVar20 = 1;
          pcVar24 = "DATA: stream in idle";
          goto LAB_0020aafc;
        }
        lVar19 = FUN_00205cf4(param_1,uVar25);
        if (lVar19 != 0) {
          if ((*(byte *)(lVar19 + 0xe5) & 1) == 0) {
            iVar17 = *(int *)(lVar19 + 0xdc);
            if ((uVar25 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
              if (iVar17 == 3) goto LAB_0020ac5c;
              if (iVar17 == 2) goto LAB_0020ac54;
              uVar20 = 1;
              pcVar24 = "DATA: stream not opened";
            }
            else {
              if (iVar17 == 3) {
LAB_0020ac5c:
                iVar18 = -0x68;
                goto LAB_0020ab14;
              }
              if (iVar17 != 4) {
LAB_0020ac54:
                iVar18 = 0;
                goto LAB_0020ab14;
              }
              uVar20 = 1;
              pcVar24 = "DATA: stream in reserved";
            }
          }
          else {
            pcVar24 = "DATA: stream in half-closed(remote)";
LAB_0020aaf8:
            uVar20 = 5;
          }
          goto LAB_0020aafc;
        }
        lVar19 = FUN_00211270(param_1,uVar25);
        if (lVar19 == 0) goto LAB_0020ac5c;
        iVar18 = -0x68;
        if ((*(byte *)(lVar19 + 0xe5) & 1) != 0) {
          pcVar24 = "DATA: stream closed";
          goto LAB_0020aaf8;
        }
      }
LAB_0020ab14:
      if (*puVar9 == 0xf) {
        return param_3;
      }
      if (iVar18 == -0x68) goto LAB_0020ab28;
      if (iVar18 < -900) {
LAB_0020ae18:
        return (long)iVar18;
      }
      if ((*pbVar4 >> 3 & 1) == 0) {
        bVar14 = true;
        uVar25 = 0xd;
      }
      else {
        if (*puVar8 == 0) {
          uVar23 = *(undefined4 *)(param_1 + 0x93c);
          pcVar24 = "DATA: insufficient padding space";
          goto LAB_0020aeac;
        }
        FUN_0020c24c(lVar6);
        bVar14 = true;
        *plVar5 = *plVar5 + 1;
        uVar25 = 0xc;
      }
      goto LAB_0020a79c;
    case 1:
      bVar12 = *pbVar4;
      *pbVar4 = bVar12 & 0x2d;
      if ((bVar12 >> 3 & 1) != 0) {
        if (uVar26 != 0) {
LAB_0020a77c:
          FUN_0020c24c(lVar6);
          bVar14 = false;
          *plVar5 = *plVar5 + 1;
          uVar25 = 3;
          goto LAB_0020a79c;
        }
        uVar23 = *(undefined4 *)(param_1 + 0x93c);
        pcVar24 = "HEADERS: insufficient padding space";
        goto LAB_0020aeac;
      }
      uVar26 = FUN_0020ca74();
      if (uVar26 == 0) {
        if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
           (iVar17 = (**(code **)(param_1 + 0x858))(param_1,puVar8,*(undefined8 *)(param_1 + 0x8b8))
           , iVar17 != 0)) {
          return 0xfffffffffffffc7a;
        }
        goto LAB_0020ac6c;
      }
      if (*puVar10 < uVar26) break;
      *puVar9 = 3;
      FUN_0020c24c(lVar6);
      bVar14 = false;
      lVar19 = *plVar5 + uVar26;
LAB_0020a3bc:
      *plVar5 = lVar19;
LAB_0020a3c0:
      if ((*puVar9 < 0x10) && ((1 << (ulong)(*puVar9 & 0x1f) & 0xc0e0U) != 0))
      goto joined_r0x0020aa40;
      goto LAB_0020a7a0;
    case 2:
      *pbVar4 = 0;
      if (uVar26 == 5) {
        *puVar9 = 3;
        FUN_0020c24c(lVar6);
        bVar14 = false;
        lVar19 = *plVar5 + 5;
        goto LAB_0020a3bc;
      }
      break;
    case 3:
    case 8:
      *pbVar4 = 0;
      if (uVar26 == 4) {
LAB_0020a34c:
        *puVar9 = 3;
        FUN_0020c24c(lVar6);
        bVar14 = false;
        lVar19 = *plVar5 + 4;
        goto LAB_0020a3bc;
      }
      break;
    case 4:
      bVar12 = *pbVar4;
      *pbVar4 = bVar12 & 1;
      if (uVar26 % 6 == 0) {
        if ((bVar12 & 1) == 0) {
          *puVar9 = 8;
          if (uVar26 == 0) goto LAB_0020a9a0;
          lVar19 = uVar26 / 6 + 1;
          *(long *)(param_1 + 0x268) = lVar19;
          lVar19 = FUN_0020c738(lVar1,lVar19 * 8);
          *(long *)(param_1 + 0x200) = lVar19;
          if (lVar19 == 0) {
            return 0xfffffffffffffc7b;
          }
          *(undefined8 *)(lVar19 + *(long *)(param_1 + 0x268) * 8 + -8) = 0xffffffff00000001;
          FUN_0020c24c(lVar6);
          bVar14 = false;
          *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 6;
        }
        else {
          if (uVar26 != 0) break;
          *puVar9 = 8;
LAB_0020a9a0:
          FUN_0020c24c(lVar6);
          bVar14 = true;
        }
        goto LAB_0020a3c0;
      }
      break;
    case 5:
      bVar12 = *pbVar4;
      *pbVar4 = bVar12 & 0xc;
      if ((bVar12 >> 3 & 1) == 0) {
        if (3 < uVar26) goto LAB_0020a34c;
        break;
      }
      if (uVar26 != 0) goto LAB_0020a77c;
      uVar23 = *(undefined4 *)(param_1 + 0x93c);
      pcVar24 = "PUSH_PROMISE: insufficient padding space";
      goto LAB_0020aeac;
    case 6:
      *pbVar4 = *pbVar4 & 1;
      if (uVar26 == 8) {
LAB_0020a39c:
        *puVar9 = 3;
        FUN_0020c24c(lVar6);
        bVar14 = false;
        lVar19 = *plVar5 + 8;
        goto LAB_0020a3bc;
      }
      break;
    case 7:
      *pbVar4 = 0;
      if (7 < uVar26) goto LAB_0020a39c;
      break;
    case 9:
      uVar23 = *(undefined4 *)(param_1 + 0x93c);
      pcVar24 = "CONTINUATION: unexpected";
      goto LAB_0020aeac;
    default:
      uVar25 = (uint)bVar12;
      if ((1 << (ulong)(uVar25 & 7) & (uint)*(byte *)(param_1 + (ulong)(bVar12 >> 3) + 0x9ad)) != 0)
      {
        if (*(long *)(param_1 + 0x870) == 0) goto LAB_0020aa80;
        bVar14 = true;
        uVar25 = 0x12;
LAB_0020a79c:
        *puVar9 = uVar25;
LAB_0020a7a0:
        if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
           (iVar17 = (**(code **)(param_1 + 0x858))(param_1,puVar8,*(undefined8 *)(param_1 + 0x8b8))
           , iVar17 != 0)) {
          return 0xfffffffffffffc7a;
        }
        goto joined_r0x0020aa40;
      }
      if (uVar25 == 0xc) {
        if (((((*(byte *)(param_1 + 0x9a4) >> 1 & 1) != 0) &&
             (*(long *)(param_1 + 0x1b0) = param_1 + 0x1e0, *(char *)(param_1 + 0x9aa) == '\0')) &&
            (*(int *)(param_1 + 0x1a8) == 0)) && (*pbVar4 < 0x10)) {
          *pbVar4 = 0;
          if (uVar26 == 0) {
            bVar14 = true;
          }
          else {
            lVar19 = FUN_0020c738(lVar1);
            *(long *)(param_1 + 600) = lVar19;
            if (lVar19 == 0) {
              return 0xfffffffffffffc7b;
            }
            FUN_0020c25c(lVar3,lVar19,*puVar10);
            bVar14 = false;
          }
          uVar25 = 0x11;
          goto LAB_0020a79c;
        }
      }
      else if ((uVar25 == 10) && ((*(byte *)(param_1 + 0x9a4) & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x1ad) = 0;
        *(long *)(param_1 + 0x1b0) = param_1 + 0x1e0;
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          if (uVar26 < 2) break;
          *puVar9 = 3;
          FUN_0020c24c(lVar6);
          bVar14 = true;
          lVar19 = *plVar5 + 2;
          goto LAB_0020a3bc;
        }
      }
LAB_0020aa80:
      *puVar9 = 6;
      __s2 = pvVar33;
      goto LAB_00209544;
    }
LAB_0020aae8:
    uVar25 = 7;
    goto LAB_0020acb4;
  case 3:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar19 = FUN_00205b90(*(long *)(param_1 + 0x220),__s2,uVar26);
    pvVar33 = (void *)((long)__s2 + uVar26);
    uVar26 = *(long *)(param_1 + 0x270) - uVar26;
    *(long *)(param_1 + 0x220) = lVar19;
    *(ulong *)(param_1 + 0x270) = uVar26;
    if (*(long *)(param_1 + 0x228) != lVar19) goto LAB_0020ae20;
    switch(*(undefined1 *)(param_1 + 0x1ac)) {
    case 1:
      if ((*(long *)(param_1 + 0x278) == 0) && ((*pbVar4 >> 3 & 1) != 0)) {
        uVar26 = FUN_0020ca74();
        uVar27 = *(ulong *)(param_1 + 0x270);
        if (**(byte **)(param_1 + 0x218) <= uVar27) {
          lVar19 = (ulong)**(byte **)(param_1 + 0x218) + 1;
          *(long *)(param_1 + 0x278) = lVar19;
          if (lVar19 + uVar26 <= uVar27 + 1) {
            *(long *)(param_1 + 0x1b0) = lVar19;
            if (uVar26 != 0) {
              if (uVar26 <= uVar27) {
                *puVar9 = 3;
                FUN_0020c24c(lVar6);
                lVar19 = *plVar5 + uVar26;
                goto LAB_0020a800;
              }
              goto LAB_0020aae8;
            }
            FUN_0020c24c(lVar6);
            goto LAB_0020ac6c;
          }
        }
        uVar23 = *(undefined4 *)(param_1 + 0x93c);
        pcVar24 = "HEADERS: invalid padding";
        goto LAB_0020aeac;
      }
LAB_0020ac6c:
      iVar17 = FUN_0020b168(param_1);
      if (iVar17 < -900) goto LAB_0020af68;
      if (*puVar9 == 0xf) {
        return param_3;
      }
      if (iVar17 == -0x67) goto LAB_0020acb0;
      if (iVar17 == -0x209) {
        uVar23 = *(undefined4 *)(param_1 + 0x1a8);
        goto LAB_0020ac9c;
      }
LAB_0020acc4:
      uVar25 = 4;
      break;
    case 2:
      FUN_0020cd54(puVar8,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_002082d0(param_1,puVar8);
      goto LAB_0020aa20;
    case 3:
      FUN_0020cda8(puVar8,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_0020849c(param_1,puVar8);
      goto LAB_0020aa20;
    default:
      goto switchD_0020981c_caseD_4;
    case 5:
      if ((*(long *)(param_1 + 0x278) == 0) && ((*pbVar4 >> 3 & 1) != 0)) {
        uVar27 = (ulong)**(byte **)(param_1 + 0x218);
        if (uVar27 <= uVar26) {
          *(ulong *)(param_1 + 0x278) = uVar27 + 1;
          if (uVar27 + 5 <= uVar26 + 1) {
            *(ulong *)(param_1 + 0x1b0) = uVar27 + 1;
            if (3 < uVar26) {
              *puVar9 = 3;
              FUN_0020c24c(lVar6);
              lVar19 = *plVar5 + 4;
              goto LAB_0020a800;
            }
            goto LAB_0020aae8;
          }
        }
        uVar23 = *(undefined4 *)(param_1 + 0x93c);
        pcVar24 = "PUSH_PROMISE: invalid padding";
        goto LAB_0020aeac;
      }
      iVar17 = FUN_0020d06c(puVar8,*(undefined8 *)(param_1 + 0x218));
      if (iVar17 == 0) {
        iVar17 = FUN_00208ca8(param_1,puVar8);
      }
      else {
        iVar17 = FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                              "PUSH_PROMISE: could not unpack");
      }
      if (iVar17 < -900) goto LAB_0020af68;
      if (*puVar9 == 0xf) {
        return param_3;
      }
      if (iVar17 == -0x67) goto LAB_0020acb0;
      if (iVar17 != -0x209) goto LAB_0020acc4;
      uVar23 = *(undefined4 *)(param_1 + 0x1c8);
LAB_0020ac9c:
      iVar17 = FUN_00206aec(param_1,uVar23,2);
      if (iVar17 < -900) goto LAB_0020af68;
LAB_0020acb0:
      uVar25 = 5;
      break;
    case 6:
      FUN_0020d0e8(puVar8,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_00208e8c(param_1,puVar8);
      goto LAB_0020aa20;
    case 7:
      lVar19 = *puVar8 - 8;
      if (lVar19 != 0) {
        lVar30 = FUN_0020c738(lVar1,lVar19);
        *(long *)(param_1 + 600) = lVar30;
        if (lVar30 == 0) {
          return 0xfffffffffffffc7b;
        }
        FUN_0020c25c(lVar3,lVar30,lVar19);
      }
      uVar25 = 9;
      break;
    case 8:
      FUN_0020d210(puVar8,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_00209148(param_1,puVar8);
LAB_0020aa20:
      if (-0x385 < iVar17) {
LAB_0020aa28:
        if (*puVar9 == 0xf) {
          return param_3;
        }
switchD_0020981c_caseD_4:
        FUN_002063c4(param_1);
        goto switchD_0020955c_default;
      }
      goto LAB_0020af68;
    case 10:
      uVar16 = FUN_00205740(*(undefined8 *)(param_1 + 0x218));
      if (*(ulong *)(param_1 + 0x270) < (ulong)uVar16) goto LAB_0020aae8;
      if (2 < *puVar8) {
        lVar19 = FUN_0020c738(lVar1,*puVar8 - 2);
        *(long *)(param_1 + 600) = lVar19;
        if (lVar19 == 0) {
          return 0xfffffffffffffc7b;
        }
        FUN_0020c25c(lVar3,lVar19,*puVar8);
      }
      uVar25 = 0x10;
    }
LAB_0020acb4:
    *puVar9 = uVar25;
    __s2 = pvVar33;
    goto LAB_00209544;
  case 4:
  case 5:
    uVar27 = *(ulong *)(param_1 + 0x270);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar22 = FUN_0020c9fc(puVar8,*(undefined8 *)(param_1 + 0x278));
    uVar34 = uVar22 - (uVar27 - uVar26);
    uVar21 = uVar26 - uVar34;
    if (uVar26 < uVar34) {
      uVar21 = 0xffffffffffffffff;
    }
    uVar34 = uVar26;
    if (uVar27 - uVar26 < uVar22) {
      uVar34 = uVar21;
    }
    uVar27 = 0;
    if (uVar34 != 0xffffffffffffffff) {
      uVar27 = uVar34;
    }
    lVar19 = FUN_0020c9fc(puVar8,*(undefined8 *)(param_1 + 0x278));
    if ((*(byte *)(param_1 + 0x1ad) >> 2 & 1) == 0) {
      bVar14 = false;
    }
    else {
      bVar14 = *puVar10 - uVar27 == lVar19;
    }
    if ((0 < (long)uVar27) || ((uVar27 == 0 & bVar14) != 0)) {
      iVar17 = *(int *)(param_1 + 0x280);
      lVar19 = FUN_00205cf4(param_1,*(undefined4 *)(param_1 + 0x1a8));
      if (*(char *)(param_1 + 0x1ac) == '\x05') {
        lVar19 = FUN_00205cf4(param_1,*(undefined4 *)(param_1 + 0x1c8));
        bVar13 = false;
      }
      else {
        bVar13 = false;
        if ((lVar19 != 0) && (*(char *)(param_1 + 0x1ac) == '\x01')) {
          bVar13 = *(char *)(param_1 + 0x9aa) != '\0' && *(int *)(param_1 + 0x1d8) == 3;
          if ((*(char *)(param_1 + 0x9aa) == '\0') && (*(int *)(param_1 + 0x1d8) == 3)) {
            bVar13 = (*(byte *)(lVar19 + 0xe3) & 0x40) == 0;
          }
        }
      }
      lVar30 = 0;
      do {
        local_6c[0] = 0;
        uVar21 = FUN_0020e220(param_1 + 0x6e8,&local_88,local_6c,pvVar33,uVar27,bVar14);
        if ((int)uVar21 < -900) {
          local_e8 = uVar21;
LAB_0020ae14:
          iVar18 = (int)local_e8;
          goto LAB_0020ae18;
        }
        if ((long)uVar21 < 0) {
          if ((((lVar19 == 0) || (*puVar9 != 4)) || (*(int *)(lVar19 + 0xdc) == 3)) ||
             (uVar22 = FUN_00206aec(param_1,*(undefined4 *)(lVar19 + 0xb8),9), -0x385 < (int)uVar22)
             ) {
            uVar27 = FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),9,0);
            uVar22 = uVar27 & 0xffffffff;
            iVar18 = -0x20b;
            if (-0x385 < (int)uVar27) goto LAB_0020a044;
          }
          else {
LAB_0020aeec:
            uVar22 = uVar22 & 0xffffffff;
          }
LAB_0020aef4:
          local_e8 = uVar22;
          goto LAB_0020ae14;
        }
        lVar30 = uVar21 + lVar30;
        if (((iVar17 == 4) && (lVar19 != 0)) && ((local_6c[0] >> 1 & 1) != 0)) {
          if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
            iVar18 = FUN_002104a4(param_1,lVar19,puVar8,&local_88,bVar13);
            if (iVar18 == -0x69) {
              if (*(code **)(param_1 + 0x840) == (code *)0x0) {
                if (*(code **)(param_1 + 0x838) == (code *)0x0) goto LAB_0020abb0;
                iVar18 = (**(code **)(param_1 + 0x838))
                                   (param_1,puVar8,*(undefined8 *)(local_88 + 0x10),
                                    *(undefined8 *)(local_88 + 0x18),
                                    *(undefined8 *)(lStack_80 + 0x10),
                                    *(undefined8 *)(lStack_80 + 0x18),local_74,
                                    *(undefined8 *)(param_1 + 0x8b8));
              }
              else {
                iVar18 = (**(code **)(param_1 + 0x840))
                                   (param_1,puVar8,local_88,lStack_80,local_74,
                                    *(undefined8 *)(param_1 + 0x8b8));
              }
              if (iVar18 != 0) {
                if (iVar18 != -0x20e) {
                  if (iVar18 != -0x209) goto LAB_0020ae14;
LAB_0020abb0:
                  uVar22 = FUN_0020afe8(param_1,0xfffffded,
                                        "Invalid HTTP header field was received: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                        ,*(undefined1 *)(param_1 + 0x1ac),
                                        *(undefined4 *)(param_1 + 0x1a8),
                                        *(undefined4 *)(local_88 + 0x18),
                                        *(undefined8 *)(local_88 + 0x10),
                                        *(undefined4 *)(lStack_80 + 0x18),
                                        *(undefined8 *)(lStack_80 + 0x10));
                  if ((int)uVar22 < -900) goto LAB_0020aeec;
                  uVar27 = FUN_0020be38(param_1,*(undefined4 *)(lVar19 + 0xb8),puVar8,0xfffffded);
                  uVar22 = uVar27 & 0xffffffff;
                  iVar18 = -0x209;
                  if ((int)uVar27 < -900) goto LAB_0020aef4;
                }
                goto LAB_0020a044;
              }
              uVar22 = FUN_0020afe8(param_1,0xfffffded,
                                    "Ignoring received invalid HTTP header field: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                    ,*(undefined1 *)(param_1 + 0x1ac),
                                    *(undefined4 *)(param_1 + 0x1a8),
                                    *(undefined4 *)(local_88 + 0x18),
                                    *(undefined8 *)(local_88 + 0x10),
                                    *(undefined4 *)(lStack_80 + 0x18),
                                    *(undefined8 *)(lStack_80 + 0x10));
              if ((int)uVar22 < -900) goto LAB_0020aeec;
            }
            else {
              if (iVar18 == 0) goto LAB_00209e90;
              if (iVar18 == -0x213) goto LAB_0020abb0;
            }
          }
          else {
LAB_00209e90:
            if (*(code **)(param_1 + 0x830) == (code *)0x0) {
              if (*(code **)(param_1 + 0x828) == (code *)0x0) goto LAB_00209f78;
              iVar18 = (**(code **)(param_1 + 0x828))
                                 (param_1,puVar8,*(undefined8 *)(local_88 + 0x10),
                                  *(undefined8 *)(local_88 + 0x18),*(undefined8 *)(lStack_80 + 0x10)
                                  ,*(undefined8 *)(lStack_80 + 0x18),local_74,
                                  *(undefined8 *)(param_1 + 0x8b8));
            }
            else {
              iVar18 = (**(code **)(param_1 + 0x830))
                                 (param_1,puVar8,local_88,lStack_80,local_74,
                                  *(undefined8 *)(param_1 + 0x8b8));
            }
            if (iVar18 != 0) {
              if ((iVar18 != -0x20e) && (iVar18 != -0x209)) goto LAB_0020ae14;
              goto LAB_0020a044;
            }
          }
        }
LAB_00209f78:
        if ((local_6c[0] & 1) != 0) {
          FUN_0020eae0(param_1 + 0x6e8);
          break;
        }
        pvVar33 = (void *)((long)pvVar33 + uVar21);
        uVar27 = uVar27 - uVar21;
      } while ((uVar27 != 0) || ((local_6c[0] >> 1 & 1) != 0));
      iVar18 = 0;
LAB_0020a044:
      if (*puVar9 == 0xf) {
        return param_3;
      }
      if (iVar18 != -0x209) {
        if (iVar18 == -0x20e) {
          *puVar10 = *puVar10 - lVar30;
          return (long)__s2 + (lVar30 - (long)param_2);
        }
        pvVar33 = (void *)((long)__s2 + uVar26);
        uVar27 = *puVar10 - uVar26;
        *puVar10 = uVar27;
        if (iVar18 != -0x20b) {
          if (uVar27 == 0) goto LAB_00209d40;
          break;
        }
        if (uVar27 == 0) goto switchD_0020981c_caseD_4;
        goto LAB_0020aa80;
      }
      *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) - lVar30;
      lVar19 = 0x1c8;
      if (*(char *)(param_1 + 0x1ac) != '\x05') {
        lVar19 = 0x1a8;
      }
      iVar17 = FUN_00206aec(param_1,*(undefined4 *)(param_1 + lVar19),2);
      if (-0x385 < iVar17) {
        pvVar33 = (void *)((long)__s2 + lVar30);
        uVar25 = 5;
        bVar14 = true;
LAB_0020a5d4:
        *puVar9 = uVar25;
        goto joined_r0x0020aa40;
      }
      goto LAB_0020af68;
    }
    pvVar33 = (void *)((long)__s2 + uVar26);
    uVar27 = *puVar10;
    *puVar10 = uVar27 - uVar26;
    if (uVar27 - uVar26 != 0) break;
LAB_00209d40:
    pvVar33 = (void *)((long)__s2 + uVar26);
    if ((*pbVar4 >> 2 & 1) == 0) {
      FUN_0020c24c(lVar6);
      *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 9;
      *(undefined8 *)(param_1 + 0x278) = 0;
      if (*(int *)(param_1 + 0x280) == 4) {
        uVar25 = 10;
      }
      else {
        uVar25 = 0xb;
      }
      bVar14 = false;
      goto LAB_0020a5d4;
    }
    if (((*puVar9 != 4) ||
        (lVar19 = FUN_00205cf4(param_1,*(undefined4 *)(param_1 + 0x1a8)), lVar19 == 0)) ||
       (*(int *)(lVar19 + 0xdc) == 3)) goto switchD_0020981c_caseD_4;
    if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
      if (*(char *)(param_1 + 0x1ac) == '\x05') {
        lVar30 = FUN_00205cf4(param_1,*(undefined4 *)(param_1 + 0x1c8));
        if (lVar30 == 0) goto LAB_0020ad50;
        iVar17 = FUN_00210cc0(lVar30,lVar2);
joined_r0x0020a15c:
        if (iVar17 == 0) goto LAB_0020ad50;
      }
      else {
        iVar17 = *(int *)(param_1 + 0x1d8);
        if (1 < iVar17 - 1U) {
          if (iVar17 == 3) {
            if ((*(byte *)(lVar19 + 0xe3) >> 6 & 1) != 0) goto LAB_0020acf8;
            iVar17 = FUN_00210e10(lVar19,lVar2);
            goto joined_r0x0020ad00;
          }
          if (iVar17 == 0) {
            iVar17 = FUN_00210cc0(lVar19,lVar2);
            goto joined_r0x0020ad00;
          }
LAB_0020ad04:
          if ((*pbVar4 & 1) == 0) goto LAB_0020ad50;
          iVar17 = FUN_00210e20(lVar19);
          goto joined_r0x0020a15c;
        }
LAB_0020acf8:
        iVar17 = FUN_00210d70(lVar19);
joined_r0x0020ad00:
        if (iVar17 == 0) goto LAB_0020ad04;
      }
      lVar30 = 0x1c8;
      if (*(char *)(param_1 + 0x1ac) != '\x05') {
        lVar30 = 0x1a8;
      }
      iVar17 = FUN_0020be38(param_1,*(undefined4 *)(param_1 + lVar30),lVar2,0xfffffdec);
      if (iVar17 < -900) goto LAB_0020af68;
    }
    else {
LAB_0020ad50:
      if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
         (iVar17 = (**(code **)(param_1 + 0x7e8))(param_1,lVar2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar17 != 0)) {
        iVar17 = -0x386;
        goto LAB_0020af68;
      }
    }
    if (((*(char *)(param_1 + 0x1ac) == '\x01') && ((*pbVar4 & 1) != 0)) &&
       (FUN_00211820(lVar19,1), (~*(byte *)(lVar19 + 0xe5) & 3) == 0)) {
      iVar17 = FUN_00206c04(param_1,*(undefined4 *)(lVar19 + 0xb8),0);
      goto LAB_00209fcc;
    }
    goto switchD_0020981c_caseD_4;
  case 6:
    uVar27 = *puVar10;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    pvVar33 = (void *)((long)__s2 + uVar26);
    *puVar10 = uVar27 - uVar26;
    if (uVar27 - uVar26 == 0) {
      if ((*(byte *)(param_1 + 0x1ac) < 10) &&
         ((1 << (ulong)(*(byte *)(param_1 + 0x1ac) & 0x1f) & 0x222U) != 0)) {
        *(undefined1 *)(param_1 + 0x724) = 1;
      }
      goto switchD_0020981c_caseD_4;
    }
    break;
  case 7:
    uVar23 = *(undefined4 *)(param_1 + 0x93c);
    uVar20 = 6;
    pcVar24 = (char *)0x0;
    goto LAB_0020aeb4;
  case 8:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar19 = FUN_00205b90(*(long *)(param_1 + 0x220),__s2,uVar26);
    uVar27 = *(long *)(param_1 + 0x270) - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *(long *)(param_1 + 0x220) = lVar19;
    *(ulong *)(param_1 + 0x270) = uVar27;
    if (*(long *)(param_1 + 0x228) != lVar19) break;
    if (uVar26 != 0) {
      FUN_0020cea8(&local_88,*(undefined8 *)(param_1 + 0x218));
      if (((int)local_88 - 1U < 6) || ((int)local_88 == 8)) {
        lVar19 = *plVar7;
        if (lVar19 != 0) {
          plVar31 = *(long **)(param_1 + 0x200);
          lVar30 = 0;
          do {
            if ((int)*plVar31 == (int)local_88) {
              *plVar31 = local_88;
              lVar19 = *plVar7;
              if (lVar19 != lVar30) goto LAB_0020a740;
              break;
            }
            lVar30 = lVar30 + 1;
            plVar31 = plVar31 + 1;
          } while (lVar19 != lVar30);
        }
        *(long *)(param_1 + 0x260) = lVar19 + 1;
        *(long *)(*(long *)(param_1 + 0x200) + lVar19 * 8) = local_88;
LAB_0020a740:
        if ((int)local_88 == 1) {
          puVar28 = (uint *)(*(long *)(param_1 + 0x200) + *(long *)(param_1 + 0x268) * 8 + -4);
          if (local_88._4_4_ < *puVar28) {
            *puVar28 = local_88._4_4_;
          }
        }
      }
      else {
        lVar19 = *(long *)(param_1 + 0x260);
        *(long *)(param_1 + 0x260) = lVar19 + 1;
        *(long *)(*(long *)(param_1 + 0x200) + lVar19 * 8) = local_88;
      }
      uVar27 = *puVar10;
    }
    if (uVar27 == 0) {
      lVar19 = *(long *)(param_1 + 0x268);
      if (lVar19 != 0) {
        piVar29 = *(int **)(param_1 + 0x200);
        iVar17 = piVar29[lVar19 * 2 + -1];
        if (iVar17 != -1) {
          iVar18 = piVar29[lVar19 * 2 + -2];
          lVar19 = *plVar7;
          if (lVar19 == 0) {
            lVar30 = 0;
          }
          else {
            lVar30 = 0;
            piVar32 = piVar29;
            do {
              if (*piVar32 == 1) goto LAB_0020a9c8;
              lVar30 = lVar30 + 1;
              piVar32 = piVar32 + 2;
            } while (lVar19 != lVar30);
            lVar30 = lVar19;
          }
LAB_0020a9c8:
          if (iVar17 != piVar29[lVar30 * 2 + 1]) {
            *(long *)(param_1 + 0x260) = lVar19 + 1;
            *(undefined8 *)(piVar29 + lVar19 * 2) = *(undefined8 *)(piVar29 + lVar30 * 2);
            piVar29 = (int *)(*(long *)(param_1 + 0x200) + lVar30 * 8);
            *piVar29 = iVar18;
            piVar29[1] = iVar17;
          }
        }
      }
      FUN_0020cea0(puVar8,*(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x260));
      *(undefined8 *)(param_1 + 0x200) = 0;
      *plVar7 = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      iVar17 = FUN_002086f0(param_1,puVar8,0);
      goto LAB_0020aa20;
    }
    FUN_0020c24c(lVar6);
    lVar19 = *plVar5 + 6;
LAB_0020a800:
    *plVar5 = lVar19;
    goto LAB_0020aa44;
  case 9:
    uVar27 = *puVar10;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    if (uVar26 != 0) {
      uVar20 = FUN_00205b90(*(undefined8 *)(param_1 + 0x248),__s2,uVar26);
      uVar27 = *(long *)(param_1 + 0x270) - uVar26;
      pvVar33 = (void *)((long)__s2 + uVar26);
      *(undefined8 *)(param_1 + 0x248) = uVar20;
      *(ulong *)(param_1 + 0x270) = uVar27;
    }
    if (uVar27 == 0) {
      FUN_0020d174(puVar8,*(undefined8 *)(param_1 + 0x218),*(long *)(param_1 + 0x240),
                   *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240));
      FUN_0020c25c(lVar3,0,0);
      iVar17 = FUN_00208ff4(param_1,puVar8);
      goto LAB_0020aa20;
    }
    break;
  case 10:
  case 0xb:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar19 = FUN_00205b90(*(long *)(param_1 + 0x220),__s2,uVar26);
    pvVar33 = (void *)((long)__s2 + uVar26);
    *(long *)(param_1 + 0x220) = lVar19;
    if (*(long *)(param_1 + 0x228) != lVar19) goto LAB_0020ae20;
    FUN_0020c7f0(&local_98,*(undefined8 *)(param_1 + 0x218));
    *(long *)(param_1 + 0x270) = local_98;
    if ((local_8c != '\t') || (local_90 != *(int *)(param_1 + 0x1a8))) {
      uVar23 = *(undefined4 *)(param_1 + 0x93c);
      pcVar24 = "unexpected non-CONTINUATION frame or stream_id is invalid";
      goto LAB_0020aeac;
    }
    *pbVar4 = local_8b & 4 | *pbVar4;
    *puVar8 = *puVar8 + local_98;
    if (*puVar9 != 10) goto LAB_0020acb0;
    *(undefined4 *)(param_1 + 0x280) = 4;
    __s2 = pvVar33;
    if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
       (iVar17 = (**(code **)(param_1 + 0x858))(param_1,&local_98,*(undefined8 *)(param_1 + 0x8b8)),
       iVar17 != 0)) {
      return 0xfffffffffffffc7a;
    }
    goto LAB_00209544;
  case 0xc:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar19 = FUN_00205b90(*(long *)(param_1 + 0x220),__s2,uVar26);
    *(ulong *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *(long *)(param_1 + 0x220) = lVar19;
    if (*(long *)(param_1 + 0x228) != lVar19) goto LAB_0020ae20;
    iVar17 = FUN_0020b260(param_1,uVar26);
    if (iVar17 < -900) goto LAB_0020af68;
    if (*puVar9 == 0xf) {
      return param_3;
    }
    iVar17 = FUN_0020b2fc(param_1,*(undefined4 *)(param_1 + 0x1a8),uVar26);
    if (iVar17 < -900) goto LAB_0020af68;
    if (*puVar9 == 0xf) {
      return param_3;
    }
    lVar19 = FUN_00205cf4(param_1,*(undefined4 *)(param_1 + 0x1a8));
    if (lVar19 != 0) {
      if (*puVar10 == 0) {
        bVar14 = (*pbVar4 & 1) == 0;
      }
      else {
        bVar14 = true;
      }
      iVar17 = FUN_0020b3a4(param_1,lVar19,uVar26,bVar14);
      if (iVar17 < -900) goto LAB_0020af68;
    }
    if (*(ulong *)(param_1 + 0x270) < (ulong)**(byte **)(param_1 + 0x218)) {
      uVar23 = *(undefined4 *)(param_1 + 0x93c);
      pcVar24 = "DATA: invalid padding";
LAB_0020aeac:
      uVar20 = 1;
LAB_0020aeb4:
      iVar17 = FUN_00205c6c(param_1,uVar23,uVar20,pcVar24);
      if (iVar17 < -900) {
        param_3 = (long)iVar17;
      }
      return param_3;
    }
    lVar19 = (ulong)**(byte **)(param_1 + 0x218) + 1;
    *(long *)(param_1 + 0x278) = lVar19;
    *(long *)(param_1 + 0x1b0) = lVar19;
    *(undefined4 *)(param_1 + 0x280) = 0xd;
    __s2 = pvVar33;
    goto LAB_00209544;
  case 0xd:
    lVar19 = FUN_00205cf4(param_1,*(undefined4 *)(param_1 + 0x1a8));
    if (lVar19 == 0) {
LAB_0020ab28:
      uVar25 = 0xe;
      goto LAB_0020acb4;
    }
    uVar27 = *puVar10;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar27 = uVar27 - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *puVar10 = uVar27;
    if (uVar26 != 0) {
      iVar17 = FUN_0020b260(param_1,uVar26);
      if (iVar17 < -900) goto LAB_0020af68;
      if (*puVar9 == 0xf) {
        return param_3;
      }
      if (*puVar10 == 0) {
        bVar14 = (*pbVar4 & 1) == 0;
      }
      else {
        bVar14 = true;
      }
      iVar17 = FUN_0020b3a4(param_1,lVar19,uVar26,bVar14);
      if (iVar17 < -900) goto LAB_0020af68;
      uVar34 = *(ulong *)(param_1 + 0x270);
      uVar22 = FUN_0020c9fc(puVar8,*(undefined8 *)(param_1 + 0x278));
      uVar21 = uVar22 - uVar34;
      uVar27 = uVar26;
      if ((uVar34 <= uVar22 && uVar21 != 0) && (uVar27 = uVar26 - uVar21, uVar26 < uVar21)) {
        uVar27 = 0xffffffffffffffff;
      }
      uVar21 = 0;
      if (uVar27 != 0xffffffffffffffff) {
        uVar21 = uVar27;
      }
      if (0 < (long)(uVar26 - uVar21)) {
        iVar17 = FUN_0020b2fc(param_1,*(undefined4 *)(param_1 + 0x1a8));
        if (iVar17 < -900) goto LAB_0020af68;
        if (*puVar9 == 0xf) {
          return param_3;
        }
      }
      if (0 < (long)uVar21) {
        if (((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) &&
           (iVar17 = FUN_00210e50(lVar19,uVar21), iVar17 != 0)) {
          if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
            iVar17 = FUN_0020c094(param_1,param_1 + 0x954,param_1 + 0x950,
                                  *(undefined1 *)(param_1 + 0x9ac),0,uVar21,
                                  *(undefined4 *)(param_1 + 0x95c));
            if (iVar17 < -900) goto LAB_0020af68;
            if (*puVar9 == 0xe) {
              return param_3;
            }
          }
          iVar17 = FUN_00206aec(param_1,*(undefined4 *)(param_1 + 0x1a8),1);
          if (iVar17 < -900) goto LAB_0020af68;
          *puVar9 = 0xe;
          __s2 = pvVar33;
          goto LAB_00209544;
        }
        if (*(code **)(param_1 + 0x7f8) != (code *)0x0) {
          iVar17 = (**(code **)(param_1 + 0x7f8))
                             (param_1,*(undefined1 *)(param_1 + 0x1ad),
                              *(undefined4 *)(param_1 + 0x1a8),__s2,uVar21,
                              *(undefined8 *)(param_1 + 0x8b8));
          if (iVar17 == -0x20e) {
            return (long)pvVar33 - (long)param_2;
          }
          if (iVar17 < -900) {
            return 0xfffffffffffffc7a;
          }
        }
      }
      uVar27 = *puVar10;
    }
    if (uVar27 != 0) goto LAB_0020aa44;
    iVar17 = FUN_002093a0(param_1,lVar2);
LAB_00209fcc:
    if (-0x385 < iVar17) goto switchD_0020981c_caseD_4;
    goto LAB_0020af68;
  case 0xe:
    uVar27 = *puVar10;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar27 = uVar27 - uVar26;
    *puVar10 = uVar27;
    if (uVar26 != 0) {
      iVar17 = FUN_0020b260(param_1,uVar26);
      if (iVar17 < -900) goto LAB_0020af68;
      if (*puVar9 == 0xf) {
        return param_3;
      }
      if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
        iVar17 = FUN_0020c094(param_1,param_1 + 0x954,param_1 + 0x950,
                              *(undefined1 *)(param_1 + 0x9ac),0,uVar26,
                              *(undefined4 *)(param_1 + 0x95c));
        if (iVar17 < -900) goto LAB_0020af68;
        if (*puVar9 == 0xf) {
          return param_3;
        }
      }
      uVar27 = *puVar10;
    }
    pvVar33 = (void *)((long)__s2 + uVar26);
    if (uVar27 == 0) goto switchD_0020981c_caseD_4;
    break;
  case 0xf:
    goto switchD_0020955c_caseD_f;
  case 0x10:
    uVar27 = *puVar10;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    if (uVar26 != 0) {
      uVar20 = FUN_00205b90(*(undefined8 *)(param_1 + 0x248),__s2,uVar26);
      uVar27 = *(long *)(param_1 + 0x270) - uVar26;
      pvVar33 = (void *)((long)__s2 + uVar26);
      *(undefined8 *)(param_1 + 0x248) = uVar20;
      *(ulong *)(param_1 + 0x270) = uVar27;
    }
    if (uVar27 == 0) {
      uVar15 = FUN_00205740(*(undefined8 *)(param_1 + 0x218));
      FUN_0020d2ac(puVar8,uVar15,*(long *)(param_1 + 0x240),
                   *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240));
      FUN_0020c25c(lVar3,0,0);
      iVar17 = FUN_002092f0(param_1,puVar8);
      goto LAB_00209fcc;
    }
    break;
  case 0x11:
    uVar27 = *puVar10;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    if (uVar26 != 0) {
      uVar20 = FUN_00205b90(*(undefined8 *)(param_1 + 0x248),__s2,uVar26);
      uVar27 = *(long *)(param_1 + 0x270) - uVar26;
      pvVar33 = (void *)((long)__s2 + uVar26);
      *(undefined8 *)(param_1 + 0x248) = uVar20;
      *(ulong *)(param_1 + 0x270) = uVar27;
    }
    if (uVar27 != 0) break;
    iVar17 = FUN_0020d37c(puVar8,*(long *)(param_1 + 0x240),
                          *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240),lVar1);
    if (iVar17 != 0) goto LAB_0020aa20;
    if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
       (iVar17 = (**(code **)(param_1 + 0x7e8))(param_1,puVar8,*(undefined8 *)(param_1 + 0x8b8)),
       iVar17 != 0)) {
      return 0xfffffffffffffc7a;
    }
    goto LAB_0020aa28;
  case 0x12:
    uVar27 = *puVar10;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar27 = uVar27 - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *puVar10 = uVar27;
    if ((uVar26 != 0) && (*(code **)(param_1 + 0x878) != (code *)0x0)) {
      iVar18 = (**(code **)(param_1 + 0x878))
                         (param_1,lVar2,__s2,uVar26,*(undefined8 *)(param_1 + 0x8b8));
      iVar17 = 0;
      if (iVar18 != 0) {
        iVar17 = -0x386;
      }
      if (iVar18 != -0x217) {
        iVar18 = iVar17;
      }
      if (iVar18 < -900) goto LAB_0020ae18;
      if (iVar18 != 0) {
        *puVar9 = 6;
        bVar14 = true;
        goto joined_r0x0020aa40;
      }
      uVar27 = *puVar10;
    }
    if (uVar27 == 0) {
      local_88 = 0;
      iVar17 = (**(code **)(param_1 + 0x870))
                         (param_1,&local_88,lVar2,*(undefined8 *)(param_1 + 0x8b8));
      if (iVar17 != -0x217) {
        if (iVar17 != 0) {
          return 0xfffffffffffffc7a;
        }
        *(long *)(param_1 + 0x1b0) = local_88;
        if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
           (iVar17 = (**(code **)(param_1 + 0x7e8))(param_1,lVar2,*(undefined8 *)(param_1 + 0x8b8)),
           iVar17 != 0)) {
          return 0xfffffffffffffc7a;
        }
      }
      FUN_002063c4(param_1);
    }
    bVar14 = false;
    goto joined_r0x0020aa40;
  }
switchD_0020955c_default:
  bVar14 = false;
joined_r0x0020aa40:
  __s2 = pvVar33;
  if (!bVar14) {
LAB_0020aa44:
    __s2 = pvVar33;
    if (pvVar33 == pvVar11) {
      return param_3;
    }
  }
  goto LAB_00209544;
}


