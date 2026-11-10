/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7cac; name: FUN_001e7cac
 */


undefined8 FUN_001e7cac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  byte local_94 [4];
  long local_90;
  int local_88;
  char local_84 [4];
  char local_80 [4];
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_7c[0] = '\0';
  local_80[0] = '\0';
  local_84[0] = '\0';
  if (param_4 == 0) {
    uVar13 = 2;
  }
  else {
    uVar13 = 2;
    if (*(int *)(param_4 + 0x16f0) == -0x3f212453) {
      iVar8 = 0;
      plVar1 = (long *)(param_4 + 0x10);
      puVar2 = (uint *)(param_4 + 0x60);
      local_70 = param_2;
      uStack_68 = param_3;
      do {
        if ((*plVar1 == 0) && (*puVar2 - 3 < 0xd)) {
          FUN_001f3ae0(param_4,"In state %d with no conn, bail out!\n");
          return 4;
        }
        cVar3 = *(char *)(param_1 + 0xf0);
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (cVar3 != '\0') {
          FUN_001e9640(param_1);
        }
        if (((long *)*plVar1 != (long *)0x0) &&
           ((0xd < *puVar2 - 3 || (*(long *)*plVar1 = param_4, *(long *)(param_4 + 0x10) != 0)))) {
          uVar11 = *puVar2;
          if (0xe < uVar11 - 2) goto LAB_001e7dac;
          iVar5 = FUN_001ddbec(param_4,&local_70,uVar11 < 9);
          if (-1 < iVar5) goto LAB_001e7da8;
          if (*puVar2 == 4) {
            uVar6 = FUN_001f8fe0(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                 *(undefined8 *)(param_4 + 0x1010));
            pcVar10 = "Connection timed out after %d milliseconds";
LAB_001e8284:
            FUN_001f3ae0(param_4,pcVar10,uVar6);
          }
          else {
            if (*puVar2 == 3) {
              uVar6 = FUN_001f8fe0(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                   *(undefined8 *)(param_4 + 0x1010));
              pcVar10 = "Resolving timed out after %d milliseconds";
              goto LAB_001e8284;
            }
            lVar15 = *(long *)(param_4 + 0xf0);
            uVar6 = FUN_001f8fe0(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                 *(undefined8 *)(param_4 + 0x1010));
            if (lVar15 == -1) {
              FUN_001f3ae0(param_4,
                           "Operation timed out after %d milliseconds with %ld bytes received",uVar6
                           ,*(undefined8 *)(param_4 + 0x100));
            }
            else {
              FUN_001f3ae0(param_4,
                           "Operation timed out after %d milliseconds with %ld out of %ld bytes received"
                           ,uVar6,*(undefined8 *)(param_4 + 0x100),*(undefined8 *)(param_4 + 0xf0));
            }
          }
          bVar4 = 9 < *puVar2;
          if (bVar4) {
            FUN_001dee08(*plVar1,2);
          }
          iVar8 = 0x1c;
          goto LAB_001e85c4;
        }
LAB_001e7da8:
        uVar11 = *puVar2;
LAB_001e7dac:
        bVar4 = false;
        iVar5 = 0;
        switch(uVar11) {
        case 0:
          iVar8 = FUN_001fa4f0(param_4);
          if (iVar8 == 0) {
            if (*puVar2 != 2) {
              *(undefined4 *)(param_4 + 0x60) = 2;
              FUN_001fa4dc(param_4);
            }
            FUN_001f2dcc(param_4,1);
LAB_001e8654:
            iVar8 = 0;
LAB_001e867c:
            bVar4 = false;
            iVar5 = -1;
            break;
          }
          goto LAB_001e838c;
        case 1:
        case 0x11:
          break;
        case 2:
          FUN_001f2dcc(param_4,2);
          if (*(long *)(param_4 + 0x7a8) != 0) {
            FUN_001e6b54(param_4,*(long *)(param_4 + 0x7a8),8);
          }
          if (*(long *)(param_4 + 0x7b0) != 0) {
            FUN_001e6b54(param_4,*(long *)(param_4 + 0x7b0),2);
          }
          iVar8 = FUN_001fd860(param_4,local_78,local_7c);
          if (iVar8 != 0) {
            if (iVar8 == 0x59) {
              if (*puVar2 != 1) {
                *puVar2 = 1;
              }
              FUN_001e3718(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48),param_4,param_4 + 0x18);
              goto LAB_001e8970;
            }
            goto LAB_001e838c;
          }
          iVar8 = FUN_001f22f8(param_4,*(undefined8 *)(param_4 + 0x10));
          if (iVar8 != 0) goto LAB_001e8100;
          if (local_78[0] != '\0') {
            if (*puVar2 == 3) goto LAB_001e7fa8;
            uVar11 = 3;
            goto LAB_001e8568;
          }
          if (local_7c[0] != '\0') goto LAB_001e7fcc;
          uVar9 = FUN_001ea2d4(*plVar1);
          if ((uVar9 & 1) == 0) {
            iVar5 = -1;
            if (*puVar2 != 4) {
              uVar11 = 4;
              goto LAB_001e833c;
            }
          }
          else {
            iVar5 = -1;
            if (*puVar2 != 5) {
              uVar11 = 5;
              goto LAB_001e833c;
            }
          }
          goto LAB_001e8ba0;
        case 3:
          local_90 = 0;
          lVar15 = *plVar1;
          if ((*(uint *)(lVar15 + 0x3fc) >> 5 & 1) == 0) {
            if ((*(uint *)(lVar15 + 0x3fc) >> 2 & 1) == 0) {
              puVar12 = (undefined8 *)(lVar15 + 0xd0);
            }
            else {
              puVar12 = (undefined8 *)(lVar15 + 0x100);
            }
          }
          else {
            puVar12 = (undefined8 *)(lVar15 + 0x160);
          }
          uVar13 = *puVar12;
          local_90 = FUN_001e1248(lVar15,uVar13,*(undefined4 *)(lVar15 + 400));
          if (local_90 == 0) {
LAB_001e8510:
            iVar8 = FUN_001e17f4(*plVar1,&local_90);
          }
          else {
            *(long *)(lVar15 + 0x520) = local_90;
            *(byte *)(lVar15 + 0x538) = *(byte *)(lVar15 + 0x538) | 1;
            FUN_001f3934(param_4,"Hostname \'%s\' was found in DNS cache\n",uVar13);
            if (local_90 == 0) goto LAB_001e8510;
            iVar8 = 0;
          }
          FUN_001e727c(param_1,param_4);
          if (local_90 == 0) {
            iVar5 = 0;
            if (iVar8 == 0) goto LAB_001e8954;
          }
          else {
            iVar8 = FUN_001e1d14(*plVar1,local_7c);
            if (iVar8 == 0) {
              if (local_7c[0] == '\0') {
                uVar9 = FUN_001ea2d4(*plVar1);
                if ((uVar9 & 1) == 0) {
                  iVar5 = -1;
                  if (*puVar2 != 4) {
                    uVar11 = 4;
                    goto LAB_001e894c;
                  }
                }
                else {
                  iVar5 = -1;
                  if (*puVar2 != 5) {
                    uVar11 = 5;
LAB_001e894c:
                    *puVar2 = uVar11;
                    goto LAB_001e8950;
                  }
                }
              }
              else {
                uVar6 = 8;
                if ((*(ulong *)(param_1 + 0xe8) & 1) == 0) {
                  uVar6 = 9;
                }
                FUN_001e6b04(param_4,uVar6);
LAB_001e8950:
                iVar5 = -1;
              }
LAB_001e8954:
              iVar8 = 0;
              bVar4 = false;
              break;
            }
            *plVar1 = 0;
          }
          goto LAB_001e8100;
        case 4:
          iVar8 = FUN_001ddfc0(*plVar1,0,local_74);
          if ((iVar8 == 0) && (local_74[0] != '\0')) {
            if (((*(int *)(*plVar1 + 0x178) != 2) || (*(char *)(*plVar1 + 0x3f8) != '\0')) &&
               (uVar9 = FUN_001ea2d4(), (uVar9 & 1) == 0)) {
              bVar4 = (*(uint *)(*(long *)(param_4 + 0x10) + 0x3fc) & 0x4000) == 0;
              iVar8 = 5;
              goto LAB_001e8648;
            }
            if (*puVar2 == 5) goto LAB_001e7fa8;
            uVar11 = 5;
LAB_001e8568:
            iVar5 = 0;
            *puVar2 = uVar11;
            goto LAB_001e8ba0;
          }
          goto LAB_001e825c;
        case 5:
          iVar8 = FUN_001ebb74(*plVar1,local_7c);
          lVar15 = *plVar1;
          if (*(char *)(lVar15 + 0x3fe) < '\0') {
            FUN_001e7044(param_4,0,0);
            iVar5 = -1;
            if (*(int *)(param_4 + 0x60) != 2) {
              *(undefined4 *)(param_4 + 0x60) = 2;
              FUN_001fa4dc(param_4);
              goto LAB_001e8654;
            }
          }
          else {
            if (iVar8 != 0) goto LAB_001e8100;
            if (((*(int *)(lVar15 + 0x178) == 2) && (*(char *)(lVar15 + 0x3f8) == '\0')) ||
               (uVar9 = FUN_001ea2b0(), (uVar9 & 1) == 0)) goto LAB_001e8970;
            iVar5 = -1;
            if (*puVar2 != 6) {
              uVar11 = 6;
              goto LAB_001e833c;
            }
          }
          goto LAB_001e8ba0;
        case 6:
          iVar8 = FUN_001fd3dc(*plVar1,local_7c);
          if ((local_7c[0] == '\0') && (iVar8 == 0)) {
            if (*puVar2 != 7) {
              uVar11 = 7;
              goto LAB_001e8568;
            }
LAB_001e7fa8:
            iVar5 = 0;
            goto LAB_001e8ba0;
          }
          if (iVar8 == 0) {
            uVar6 = 8;
            if ((*(ulong *)(param_1 + 0xe8) & 1) == 0) {
              uVar6 = 9;
            }
            FUN_001e6b04(param_4,uVar6);
            goto LAB_001e867c;
          }
          goto LAB_001e8304;
        case 7:
          iVar8 = FUN_001fd37c(*plVar1,local_7c);
          if ((iVar8 == 0) && (local_7c[0] != '\0')) {
LAB_001e7fcc:
            bVar4 = (*(ulong *)(param_1 + 0xe8) & 1) == 0;
            iVar8 = 8;
LAB_001e8648:
            if (bVar4) {
              iVar8 = iVar8 + 1;
            }
LAB_001e864c:
            FUN_001e6b04(param_4,iVar8);
            goto LAB_001e8654;
          }
LAB_001e825c:
          if (iVar8 == 0) {
LAB_001e838c:
            bVar4 = false;
          }
          else {
LAB_001e8304:
            FUN_001fa6b8(param_4);
            bVar4 = true;
LAB_001e85c4:
            FUN_001e7044(param_4,iVar8,1);
          }
LAB_001e8978:
          iVar5 = 0;
          break;
        case 8:
          uVar9 = FUN_001f2710(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar9 & 1) == 0) goto LAB_001e838c;
          if (*puVar2 != 9) {
            *(undefined4 *)(param_4 + 0x60) = 9;
            FUN_001ea2f8(param_4);
            goto LAB_001e867c;
          }
          goto LAB_001e882c;
        case 9:
          plVar14 = *(long **)(param_4 + 0x10);
          if ((*(byte *)(param_4 + 0xf44) >> 6 & 1) == 0) {
            if (*(code **)(plVar14[0x84] + 0x10) != (code *)0x0) {
              iVar8 = (**(code **)(plVar14[0x84] + 0x10))(plVar14,local_80);
              if (iVar8 == 0x37) {
                if ((*(byte *)(*plVar1 + 0x3fc) >> 1 & 1) != 0) {
                  local_90 = 0;
                  iVar5 = FUN_001fa960(*plVar1,&local_90);
                  bVar4 = iVar5 != 0;
                  iVar8 = 0x37;
                  if (bVar4) {
                    iVar8 = iVar5;
                  }
                  FUN_001fa6b8(param_4);
                  iVar5 = FUN_001e7044(param_4,iVar8,0);
                  if (local_90 == 0) {
                    iVar5 = 0;
                    bVar4 = true;
                  }
                  else if (((iVar5 == 0x37) || (iVar8 = iVar5, iVar5 == 0)) &&
                          (iVar8 = FUN_001fa6c0(param_4,local_90,2), iVar8 == 0)) {
                    if (*puVar2 != 2) {
                      *(undefined4 *)(param_4 + 0x60) = 2;
                      FUN_001fa4dc(param_4);
                    }
                    iVar8 = 0;
                    iVar5 = -1;
                  }
                  else {
                    iVar5 = 0;
                  }
                  FUN_002044d4(local_90);
                  break;
                }
              }
              else if (iVar8 == 0) {
                if (local_80[0] != '\0') {
                  *(ushort *)(*plVar14 + 0x660) = *(ushort *)(*plVar14 + 0x660) & 0xffdf;
                  FUN_001f2dcc(*plVar14,6);
                  goto LAB_001e8064;
                }
                goto LAB_001e8748;
              }
              FUN_001fa6b8(param_4);
              if (*(long *)(param_4 + 0x10) == 0) goto LAB_001e8100;
              goto LAB_001e80ec;
            }
LAB_001e8064:
            if (local_80[0] != '\0') {
              if ((*(byte *)(*plVar1 + 0x3fd) >> 3 & 1) != 0) {
                if (*puVar2 != 0xb) {
                  uVar11 = 0xb;
                  goto LAB_001e8568;
                }
                goto LAB_001e7fa8;
              }
              iVar5 = -1;
              if (*puVar2 != 0xc) {
                uVar11 = 0xc;
                goto LAB_001e833c;
              }
              goto LAB_001e8ba0;
            }
LAB_001e8748:
            if ((-1 < *(char *)(param_4 + 0x15a4)) || ((*(uint *)(param_4 + 0x15a8) | 2) != 7)) {
              if (*puVar2 == 10) goto LAB_001e7fa8;
              uVar11 = 10;
              goto LAB_001e8568;
            }
            FUN_001e7044(param_4,0,0);
            uVar11 = *(uint *)(param_4 + 0x60);
          }
          else {
            FUN_001dee08(plVar14,0);
            uVar11 = *puVar2;
          }
          iVar5 = -1;
          if (uVar11 != 0x10) {
            uVar11 = 0x10;
LAB_001e833c:
            *puVar2 = uVar11;
            iVar5 = -1;
          }
          goto LAB_001e8ba0;
        case 10:
          iVar8 = FUN_001fd3ac(*plVar1,local_80);
          if (iVar8 == 0) {
            if (local_80[0] == '\0') goto LAB_001e8970;
            bVar4 = (*(uint *)(*(long *)(param_4 + 0x10) + 0x3fc) & 0x800) == 0;
            iVar8 = 0xb;
            goto LAB_001e8648;
          }
LAB_001e80e0:
          FUN_001fa6b8(param_4);
LAB_001e80ec:
          FUN_001e7044(param_4,iVar8,0);
LAB_001e8100:
          iVar5 = 0;
          bVar4 = true;
          break;
        case 0xb:
          plVar14 = (long *)*plVar1;
          local_88 = 0;
          if (*(code **)(plVar14[0x84] + 0x20) != (code *)0x0) {
            iVar8 = (**(code **)(plVar14[0x84] + 0x20))(plVar14,&local_88);
            if (iVar8 != 0) goto LAB_001e80e0;
            if (local_88 == 1) {
              *(ushort *)(*plVar14 + 0x660) = *(ushort *)(*plVar14 + 0x660) & 0xffdf;
              FUN_001f2dcc(*plVar14,6);
            }
            if (local_88 == 0) goto LAB_001e8970;
            iVar8 = 0xc;
            if (local_88 != 1) {
              iVar8 = 10;
            }
            goto LAB_001e864c;
          }
LAB_001e8970:
          bVar4 = false;
          iVar8 = 0;
          goto LAB_001e8978;
        case 0xc:
          FUN_001f2384(param_4,*(undefined8 *)(param_4 + 0x10));
          lVar15 = *(long *)(param_4 + 0x10);
          if (((*(byte *)(lVar15 + 0x3ff) >> 2 & 1) != 0) || (*(long *)(lVar15 + 0x4c0) != 0)) {
            FUN_001e9640(param_1);
            lVar15 = *plVar1;
          }
          if ((*(int *)(lVar15 + 0x450) == -1) && (*(int *)(lVar15 + 0x454) == -1)) {
            if ((*(char *)(param_4 + 0x15a4) < '\0') &&
               ((*(byte *)(*(long *)(lVar15 + 0x420) + 0x85) >> 4 & 1) == 0)) {
              *(undefined4 *)(param_4 + 0x15a8) = 7;
            }
            if (*puVar2 != 0x10) {
              uVar11 = 0x10;
              goto LAB_001e8828;
            }
          }
          else if (*puVar2 != 0xd) {
            uVar11 = 0xd;
LAB_001e8828:
            *puVar2 = uVar11;
          }
          goto LAB_001e882c;
        case 0xd:
          uVar9 = FUN_001f274c(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar9 & 1) == 0) goto LAB_001e838c;
          if (*puVar2 != 0xe) {
            uVar11 = 0xe;
            goto LAB_001e8828;
          }
LAB_001e882c:
          bVar4 = false;
          iVar5 = -1;
          goto joined_r0x001e8830;
        case 0xe:
          local_90 = 0;
          local_94[0] = 0;
          if (*(long *)(param_4 + 0x7f0) < 1) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_001f2fc4(*(undefined8 *)(param_4 + 0xf98),*(undefined8 *)(param_4 + 0x1048),
                                 *(long *)(param_4 + 0x7f0),*(undefined8 *)(param_4 + 0x1038),
                                 *(undefined8 *)(param_4 + 0x1040),local_70,uStack_68);
          }
          if (*(long *)(param_4 + 0x7f8) < 1) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_001f2fc4(*(undefined8 *)(param_4 + 0xf90),*(undefined8 *)(param_4 + 0x1060),
                                 *(long *)(param_4 + 0x7f8),*(undefined8 *)(param_4 + 0x1050),
                                 *(undefined8 *)(param_4 + 0x1058),local_70,uStack_68);
          }
          if (iVar7 == 0 && iVar5 == 0) {
            iVar8 = FUN_001f9750(*(undefined8 *)(param_4 + 0x10),param_4,local_84,local_94);
            uVar11 = *(uint *)(param_4 + 0x1c0);
            if ((uVar11 & 1) == 0) {
              FUN_001f2788(*(undefined8 *)(param_4 + 0x10));
              uVar11 = *(uint *)(param_4 + 0x1c0);
            }
            if ((uVar11 >> 1 & 1) == 0) {
              FUN_001f2374(*plVar1);
            }
            if ((iVar8 == 0x38) || (local_84[0] != '\0')) {
              iVar5 = FUN_001fa960(*plVar1,&local_90);
              if (iVar5 == 0) {
                if (local_90 != 0) {
LAB_001e8814:
                  bVar4 = true;
                  local_84[0] = '\x01';
                  goto LAB_001e8a40;
                }
                if (iVar8 == 0) goto LAB_001e8a34;
              }
              else {
                if (iVar8 != 0) {
                  iVar5 = iVar8;
                }
                iVar8 = iVar5;
              }
LAB_001e869c:
              if ((iVar8 != 0x5c) && ((*(uint *)(*(long *)(*plVar1 + 0x420) + 0x84) >> 1 & 1) == 0))
              {
                FUN_001dee08(*plVar1,2);
              }
              FUN_001fa6b8(param_4);
              FUN_001e7044(param_4,iVar8,1);
              goto LAB_001e86d4;
            }
            if (iVar8 != 0) {
              if (iVar8 == 0x5c) {
                uVar9 = FUN_001f0c6c(*plVar1);
                if ((uVar9 & 1) != 0) {
                  iVar8 = FUN_001fa960(*(undefined8 *)(param_4 + 0x10),&local_90);
                  FUN_001f3934(param_4,"Forcing HTTP/1.1 for NTLM");
                  *(undefined8 *)(param_4 + 0xa40) = 2;
                  if (iVar8 == 0) {
                    if (local_90 != 0) goto LAB_001e8814;
                    iVar8 = 0x5c;
                  }
                }
              }
              goto LAB_001e869c;
            }
LAB_001e8a34:
            if (local_84[0] == '\0') {
              bVar4 = false;
              iVar8 = 0;
              iVar5 = -(local_94[0] & 1);
              break;
            }
            bVar4 = false;
LAB_001e8a40:
            FUN_001fa6b8(param_4);
            FUN_001fd0ac(param_4,*(long *)(param_4 + 0x10) + 0x4c8);
            puVar12 = *(undefined8 **)(*(long *)(param_4 + 0x10) + 0x4c8);
            if (puVar12 != (undefined8 *)0x0) {
              FUN_001e6b54(*puVar12,0,6);
            }
            if (!(bool)(*(long *)(param_4 + 0x1d0) == 0 & (bVar4 ^ 1U))) {
              if (bVar4) {
                uVar13 = 2;
              }
              else {
                FUN_002044d4(local_90);
                local_90 = *(long *)(param_4 + 0x1d0);
                uVar13 = 3;
                *(undefined8 *)(param_4 + 0x1d0) = 0;
              }
              iVar8 = FUN_001e7044(param_4,0,0);
              if ((iVar8 == 0) && (iVar8 = FUN_001fa6c0(param_4,local_90,uVar13), iVar8 == 0)) {
                if (*puVar2 != 2) {
                  *(undefined4 *)(param_4 + 0x60) = 2;
                  FUN_001fa4dc(param_4);
                }
                iVar8 = 0;
                iVar5 = -1;
              }
              else {
                iVar5 = 0;
              }
              FUN_002044d4(local_90);
              bVar4 = false;
              break;
            }
            if (*(long *)(param_4 + 0x1c8) == 0) {
LAB_001e8aec:
              bVar4 = false;
LAB_001e8af0:
              if (*puVar2 != 0x10) {
                *puVar2 = 0x10;
              }
              iVar8 = 0;
              iVar5 = -1;
              break;
            }
            FUN_002044d4(local_90);
            local_90 = *(long *)(param_4 + 0x1c8);
            *(undefined8 *)(param_4 + 0x1c8) = 0;
            iVar8 = FUN_001fa6c0(param_4,local_90,1);
            FUN_002044d4(local_90);
            if (iVar8 == 0) goto LAB_001e8aec;
            bVar4 = true;
            iVar8 = FUN_001e7044(param_4,iVar8,1);
            if (iVar8 == 0) goto LAB_001e8af0;
          }
          else {
            FUN_001f2f28(param_4,local_70,uStack_68);
            if (*(int *)(param_4 + 0x60) != 0xf) {
              *puVar2 = 0xf;
            }
            if (iVar5 < iVar7) {
              iVar5 = iVar7;
            }
            FUN_001e6b54(param_4,(long)iVar5,9);
LAB_001e86d4:
            bVar4 = false;
          }
          iVar5 = 0;
          break;
        case 0xf:
          iVar8 = FUN_001f27f0(*plVar1);
          if (iVar8 == 0) {
            iVar8 = FUN_001f86f0(param_4,local_70,uStack_68);
            if (iVar8 == 0) {
              if (*(long *)(param_4 + 0x7f0) < 1) {
                iVar8 = 0;
              }
              else {
                iVar8 = FUN_001f2fc4(*(undefined8 *)(param_4 + 0xf98),
                                     *(undefined8 *)(param_4 + 0x1048),*(long *)(param_4 + 0x7f0),
                                     *(undefined8 *)(param_4 + 0x1038),
                                     *(undefined8 *)(param_4 + 0x1040),local_70,uStack_68);
              }
              if (*(long *)(param_4 + 0x7f8) < 1) {
                iVar5 = 0;
              }
              else {
                iVar5 = FUN_001f2fc4(*(undefined8 *)(param_4 + 0xf90),
                                     *(undefined8 *)(param_4 + 0x1060),*(long *)(param_4 + 0x7f8),
                                     *(undefined8 *)(param_4 + 0x1050),
                                     *(undefined8 *)(param_4 + 0x1058),local_70,uStack_68);
              }
              if (iVar5 == 0 && iVar8 == 0) {
                if (*puVar2 != 0xe) {
                  *puVar2 = 0xe;
                }
                FUN_001f2f28(param_4,local_70,uStack_68);
              }
              else {
                if (iVar8 < iVar5) {
                  iVar8 = iVar5;
                }
                FUN_001e6b54(param_4,(long)iVar8,9);
              }
              goto LAB_001e8970;
            }
            goto LAB_001e838c;
          }
          bVar4 = false;
          iVar5 = 0;
          iVar8 = 0x2a;
          break;
        case 0x10:
          iVar7 = iVar8;
          if (*plVar1 != 0) {
            FUN_001fd0ac(param_4,*plVar1 + 0x4c8);
            if (((*(byte *)(*(long *)(param_4 + 0x10) + 0x3ff) >> 2 & 1) != 0) ||
               (*(long *)(*(long *)(param_4 + 0x10) + 0x4c0) != 0)) {
              FUN_001e9640(param_1);
            }
            iVar7 = FUN_001e7044(param_4,iVar8,0);
            if (iVar8 != 0) {
              iVar7 = iVar8;
            }
            if (*(long *)(param_4 + 0x10) != 0) {
              *plVar1 = 0;
            }
          }
          iVar8 = iVar7;
          if ((*(char *)(param_4 + 0x15a4) < '\0') && (*(int *)(param_4 + 0x15a8) != 7)) {
            if (*puVar2 != 0) {
              *puVar2 = 0;
            }
            goto LAB_001e882c;
          }
          if (*puVar2 != 0x11) {
            *(undefined4 *)(param_4 + 0x60) = 0x11;
            *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
            *(undefined8 *)(param_4 + 0x10) = 0;
            FUN_001e6fb8(param_4);
            goto LAB_001e867c;
          }
          iVar5 = -1;
          goto LAB_001e8bf0;
        case 0x12:
          goto switchD_001e7dcc_caseD_12;
        default:
          return 4;
        }
        uVar11 = *puVar2;
        if (uVar11 < 0x11) {
joined_r0x001e8830:
          if (iVar8 == 0) {
LAB_001e8ba0:
            if ((*plVar1 != 0) && (iVar8 = FUN_001f27f0(), iVar8 != 0)) {
              FUN_001dee08(*(undefined8 *)(param_4 + 0x10),2);
              uVar6 = 0x10;
              if (0xf < *(uint *)(param_4 + 0x60)) {
                uVar6 = 0x11;
              }
              FUN_001e6b04(param_4,uVar6);
              iVar8 = 0x2a;
              goto LAB_001e8bd8;
            }
            iVar8 = 0;
          }
          else {
            FUN_001e9640(param_1);
            if (*plVar1 == 0) {
              uVar11 = *puVar2;
              if (uVar11 == 2) {
                FUN_001fa6b8(param_4);
                goto LAB_001e89fc;
              }
            }
            else {
              FUN_001f2374();
              FUN_001f2788(*(undefined8 *)(param_4 + 0x10));
              FUN_001fd0ac(param_4,*(long *)(param_4 + 0x10) + 0x4a8);
              FUN_001fd0ac(param_4,*(long *)(param_4 + 0x10) + 0x4c8);
              if (bVar4) {
                FUN_001fcddc(param_4,*(undefined8 *)(param_4 + 0x10),iVar8 == 0x1c);
                *(undefined8 *)(param_4 + 0x10) = 0;
              }
LAB_001e89fc:
              uVar11 = *puVar2;
            }
            if (uVar11 != 0x11) {
              *(undefined4 *)(param_4 + 0x60) = 0x11;
              *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
              *(undefined8 *)(param_4 + 0x10) = 0;
              FUN_001e6fb8(param_4);
            }
LAB_001e8bd8:
            iVar5 = -1;
          }
          uVar11 = *puVar2;
        }
        iVar7 = iVar8;
        if (uVar11 == 0x11) {
LAB_001e8bf0:
          if (*(code **)(param_4 + 0xf18) == (code *)0x0) {
            *(undefined4 *)(param_4 + 0x80) = 1;
            *(long *)(param_4 + 0x88) = param_4;
            *(int *)(param_4 + 0x90) = iVar7;
            FUN_001e3718(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4 + 0x68,
                         param_4 + 0x68);
            iVar5 = 0;
          }
          else {
            (**(code **)(param_4 + 0xf18))(param_4,iVar7);
          }
          iVar8 = iVar7;
          if (*puVar2 != 0x12) {
            *puVar2 = 0x12;
          }
        }
      } while ((iVar5 == -1) || (*(char *)(param_1 + 0xf0) != '\0'));
switchD_001e7dcc_caseD_12:
      uVar13 = 0;
      *(int *)(param_4 + 100) = iVar8;
    }
  }
  return uVar13;
}


