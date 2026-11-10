/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e97e4; name: FUN_001e97e4
 */


int FUN_001e97e4(long *param_1,int param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *param3;
  int *piVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined8 local_78;
  long local_70;
  int local_64;
  
  lVar22 = param_1[0xcb];
  if (lVar22 == 0) {
    lVar22 = FUN_00204504(1,0x4028);
    if (lVar22 == 0) {
      return 0x1b;
    }
    FUN_001f3934(*param_1,"allocate connect buffer!\n");
    param_1[0xcb] = lVar22;
    *(undefined4 *)(lVar22 + 0x4020) = 0;
    *(undefined4 *)(lVar22 + 0x4004) = 1;
    *(long *)(lVar22 + 0x4008) = lVar22;
    *(long *)(lVar22 + 0x4010) = lVar22;
    *(undefined8 *)(lVar22 + 0x4018) = 0;
    *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) & 0xfd;
    lVar22 = param_1[0xcb];
  }
  local_64 = 0;
  if ((lVar22 != 0) && (piVar2 = (int *)(lVar22 + 0x4000), *(int *)(lVar22 + 0x4020) != 2)) {
    puVar1 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 600);
    uVar9 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600);
    lVar21 = *param_1;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xff7fffff;
    param3 = (int *)(lVar21 + 0x180);
    plVar3 = (long *)(lVar22 + 0x4018);
    do {
      if (*(int *)(lVar22 + 0x4020) == 0) {
        FUN_001f3934(lVar21,"Establish HTTP proxy tunnel to %s:%d\n",param_3,param_4);
        FUN_002044d4(*(undefined8 *)(lVar21 + 0x1d0));
        *(undefined8 *)(lVar21 + 0x1d0) = 0;
        local_70 = FUN_001ec820();
        if (local_70 == 0) {
LAB_001ea228:
          iVar12 = 0x1b;
        }
        else {
          lVar14 = FUN_001e6534("%s:%d",param_3,param_4);
          if (lVar14 == 0) {
LAB_001ea2a0:
            iVar12 = 0x1b;
          }
          else {
            iVar12 = FUN_001ec25c(param_1,"CONNECT",lVar14,1);
            FUN_002044d4(lVar14);
            if (iVar12 == 0) {
              puVar4 = &UNK_0392dc03;
              if ((int)param_1[0x2f] != 1) {
                puVar4 = &DAT_038d028b;
              }
              if ((char *)param_1[0x1a] == param_3) {
                bVar11 = (bool)(*(byte *)((long)param_1 + 0x3fd) >> 1 & 1);
              }
              else {
                pcVar15 = strchr(param_3,0x3a);
                bVar11 = pcVar15 != (char *)0x0;
              }
              puVar5 = &DAT_038aa492;
              if (bVar11 == false) {
                puVar5 = &DAT_03996322;
              }
              puVar6 = &DAT_03904308;
              if (bVar11 == false) {
                puVar6 = &DAT_03996322;
              }
              lVar14 = FUN_001e6534("%s%s%s:%d",puVar5,param_3,puVar6,param_4);
              if (lVar14 == 0) goto LAB_001ea2a0;
              lVar16 = FUN_001ebd28(param_1,&DAT_038e4937);
              if (lVar16 == 0) {
                puVar23 = (undefined1 *)FUN_001e6534("Host: %s\r\n",lVar14);
                if (puVar23 == (undefined1 *)0x0) {
                  FUN_002044d4(lVar14);
                  goto LAB_001ea2a0;
                }
              }
              else {
                puVar23 = (undefined1 *)0x0;
              }
              lVar16 = FUN_001ebd28(param_1,"Proxy-Connection");
              pcVar15 = "Proxy-Connection: Keep-Alive\r\n";
              if (lVar16 != 0) {
                pcVar15 = "";
              }
              lVar16 = FUN_001ebd28(param_1,"User-Agent");
              puVar18 = &DAT_03996322;
              if (lVar16 == 0) {
                if (*(long *)(lVar21 + 0xdb0) == 0) {
                  puVar18 = &DAT_03996322;
                }
                else {
                  puVar18 = (undefined1 *)param_1[0x8c];
                }
              }
              puVar7 = puVar23;
              if (puVar23 == (undefined1 *)0x0) {
                puVar7 = &DAT_03996322;
              }
              puVar8 = &DAT_03996322;
              if ((undefined1 *)param_1[0x8b] != (undefined1 *)0x0) {
                puVar8 = (undefined1 *)param_1[0x8b];
              }
              iVar12 = FUN_001ecb14(&local_70,"CONNECT %s HTTP/%s\r\n%s%s%s%s",lVar14,puVar4,puVar7,
                                    puVar8,puVar18,pcVar15);
              if (puVar23 != (undefined1 *)0x0) {
                FUN_002044d4(puVar23);
              }
              FUN_002044d4(lVar14);
              if (((iVar12 == 0) && (iVar12 = FUN_001ece94(param_1,1,local_70), iVar12 == 0)) &&
                 (iVar12 = FUN_001ecb14(&local_70,&DAT_038a006b), iVar12 == 0)) {
                iVar12 = FUN_001ec864(&local_70,param_1,lVar21 + 0x1618,0,param_2);
                local_70 = 0;
                if (iVar12 == 0) {
                  FUN_001ec82c(&local_70);
                  *(undefined4 *)(lVar22 + 0x4020) = 1;
                  *piVar2 = 0;
                  goto LAB_001e9b44;
                }
              }
              local_70 = 0;
              FUN_001f3ae0(lVar21,"Failed sending CONNECT to proxy");
            }
          }
          FUN_001ec82c(&local_70);
        }
        goto LAB_001ea0c0;
      }
LAB_001e9b44:
      iVar12 = FUN_001ddbec(lVar21,0,1);
      if (iVar12 < 1) {
        FUN_001f3ae0(lVar21,"Proxy CONNECT aborted due to timeout");
        iVar12 = 0x1c;
        goto LAB_001ea0c0;
      }
      uVar17 = FUN_001dee54(param_1,param_2);
      if ((uVar17 & 1) == 0) goto LAB_001e988c;
LAB_001e9b6c:
      do {
        if (*(int *)(lVar22 + 0x4004) == 0) {
          bVar11 = false;
          goto LAB_001ea010;
        }
        if (piVar2 <= *(int **)(lVar22 + 0x4010)) {
          FUN_001f3ae0(lVar21,"CONNECT response too large!");
          goto LAB_001ea124;
        }
        iVar12 = FUN_001f416c(param_1,uVar9,*(int **)(lVar22 + 0x4010),1,&local_70);
        if (iVar12 == 0x51) goto LAB_001e988c;
        iVar13 = FUN_001f27f0(param_1);
        if (iVar13 != 0) goto LAB_001ea10c;
        if (iVar12 != 0) {
LAB_001e9ff0:
          bVar11 = false;
LAB_001ea00c:
          *(undefined4 *)(lVar22 + 0x4004) = 0;
          goto LAB_001ea010;
        }
        if (local_70 < 1) {
          if ((*(long *)(lVar21 + 0x6b8) != 0) && (*(long *)(lVar21 + 0x1278) != 0)) {
            *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x800000;
            FUN_001f3934(lVar21,"Proxy CONNECT connection closed\n");
            goto LAB_001e9ff0;
          }
          FUN_001f3ae0(lVar21,"Proxy CONNECT aborted");
          bVar11 = true;
          goto LAB_001ea00c;
        }
        if (*(int *)(lVar22 + 0x4004) < 2) {
          *piVar2 = *piVar2 + 1;
          if (**(char **)(lVar22 + 0x4010) == '\n') {
            uVar17 = *(ulong *)(lVar21 + 0xf40);
            if (((uint)uVar17 >> 0x1a & 1) != 0) {
              FUN_001f3a38(lVar21,1,*(undefined8 *)(lVar22 + 0x4008));
              uVar17 = *(ulong *)(lVar21 + 0xf40);
            }
            if ((uVar17 >> 0x32 & 1) == 0) {
              uVar19 = 2;
              if ((uVar17 & 0x200000) != 0) {
                uVar19 = 3;
              }
              iVar12 = FUN_001f3df8(param_1,uVar19,*(undefined8 *)(lVar22 + 0x4008),(long)*piVar2);
              if (iVar12 != 0) goto LAB_001ea0c0;
            }
            *(long *)(lVar21 + 0x1610) = *(long *)(lVar21 + 0x1610) + (long)*piVar2;
            *(long *)(lVar21 + 0x110) = *(long *)(lVar21 + 0x110) + (long)*piVar2;
            cVar10 = **(char **)(lVar22 + 0x4008);
            if ((cVar10 == '\r') || (cVar10 == '\n')) {
              *(long *)(lVar22 + 0x4010) = lVar22;
              if ((*param3 == 0x197) && ((*(byte *)(lVar21 + 0x15a4) >> 5 & 1) == 0)) {
                *(undefined4 *)(lVar22 + 0x4004) = 2;
                if (*plVar3 == 0) {
                  if ((*(byte *)(lVar22 + 0x4024) & 1) == 0) goto LAB_001e9df0;
                  FUN_001f3934(lVar21,"Ignore chunked response-body\n");
                  *(ushort *)(lVar21 + 0x660) = *(ushort *)(lVar21 + 0x660) | 8;
                  pcVar20 = *(char **)(lVar22 + 0x4008) + 1;
                  pcVar15 = *(char **)(lVar22 + 0x4008);
                  if (*pcVar20 == '\n') {
                    *(char **)(lVar22 + 0x4008) = pcVar20;
                    pcVar15 = pcVar20;
                  }
                  iVar12 = FUN_001eeffc(param_1,pcVar15 + 1,1,&local_70);
                  if (iVar12 == -1) {
                    FUN_001f3934(lVar21,"chunk reading DONE\n");
                    *(undefined4 *)(lVar22 + 0x4004) = 0;
                    *(undefined4 *)(lVar22 + 0x4020) = 2;
                  }
                }
                else {
                  FUN_001f3934(lVar21,"Ignore %ld bytes of response-body\n");
                }
              }
              else {
LAB_001e9df0:
                *(undefined4 *)(lVar22 + 0x4004) = 0;
              }
              if (*plVar3 == 0) {
LAB_001e9e00:
                *(undefined4 *)(lVar22 + 0x4020) = 2;
              }
            }
            else {
              (*(char **)(lVar22 + 0x4008))[*piVar2] = '\0';
              iVar12 = thunk_FUN_001f8bec("WWW-Authenticate:",*(undefined8 *)(lVar22 + 0x4008),0x11)
              ;
              if (((iVar12 == 0) || (iVar12 = 0x191, *param3 != 0x191)) &&
                 ((iVar12 = thunk_FUN_001f8bec("Proxy-authenticate:",
                                               *(undefined8 *)(lVar22 + 0x4008),0x13), iVar12 == 0
                  || (iVar12 = 0x197, *param3 != 0x197)))) {
                iVar12 = thunk_FUN_001f8bec("Content-Length:",*(undefined8 *)(lVar22 + 0x4008),0xf);
                if (iVar12 == 0) {
                  uVar17 = FUN_001ecccc(*(undefined8 *)(lVar22 + 0x4008),"Connection:","close");
                  if ((uVar17 & 1) == 0) {
                    iVar12 = thunk_FUN_001f8bec("Transfer-Encoding:",
                                                *(undefined8 *)(lVar22 + 0x4008),0x12);
                    if (iVar12 == 0) {
                      uVar17 = FUN_001ecccc(*(undefined8 *)(lVar22 + 0x4008),"Proxy-Connection:",
                                            "close");
                      if ((uVar17 & 1) == 0) {
                        iVar12 = sscanf(*(char **)(lVar22 + 0x4008),"HTTP/1.%d %d",&local_64,param3)
                        ;
                        if (iVar12 == 2) {
                          *(undefined4 *)(lVar21 + 0x15fc) = *(undefined4 *)(lVar21 + 0x180);
                        }
                      }
                      else {
                        *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) | 2;
                      }
                    }
                    else if (*param3 - 200U < 100) {
                      FUN_001f3934(lVar21,"Ignoring Transfer-Encoding in CONNECT %03d response\n");
                    }
                    else {
                      uVar17 = FUN_001ecccc(*(undefined8 *)(lVar22 + 0x4008),"Transfer-Encoding:",
                                            "chunked");
                      if ((uVar17 & 1) != 0) {
                        FUN_001f3934(lVar21,"CONNECT responded chunked\n");
                        *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) | 1;
                        FUN_001eeff0(param_1);
                      }
                    }
                  }
                  else {
                    *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) | 2;
                  }
                }
                else if (*param3 - 200U < 100) {
                  FUN_001f3934(lVar21,"Ignoring Content-Length in CONNECT %03d response\n");
                }
                else {
                  FUN_001f8ee4(*(long *)(lVar22 + 0x4008) + 0xf,0,10,plVar3);
                }
              }
              else {
                lVar14 = FUN_001ebdb8(*(undefined8 *)(lVar22 + 0x4008));
                if (lVar14 == 0) goto LAB_001ea228;
                iVar12 = FUN_001ec658(param_1,iVar12 == 0x197,lVar14);
                FUN_002044d4(lVar14);
                if (iVar12 != 0) goto LAB_001ea0c0;
              }
              *piVar2 = 0;
              *(long *)(lVar22 + 0x4010) = lVar22;
              *(long *)(lVar22 + 0x4008) = lVar22;
            }
          }
          else {
            *(char **)(lVar22 + 0x4010) = *(char **)(lVar22 + 0x4010) + 1;
          }
          goto LAB_001e9b6c;
        }
        lVar14 = *(long *)(lVar22 + 0x4018);
        *(long *)(lVar22 + 0x4010) = lVar22;
        if (lVar14 == 0) {
          local_78 = 0;
          iVar12 = FUN_001eeffc(param_1,lVar22,1,&local_78);
          if (iVar12 == -1) {
            FUN_001f3934(lVar21,"chunk reading DONE\n");
            *(undefined4 *)(lVar22 + 0x4004) = 0;
            goto LAB_001e9e00;
          }
          goto LAB_001e9b6c;
        }
        *plVar3 = lVar14 + -1;
      } while (lVar14 + -1 != 0 && 0 < lVar14);
      bVar11 = false;
      *(undefined4 *)(lVar22 + 0x4004) = 0;
      *(undefined4 *)(lVar22 + 0x4020) = 2;
LAB_001ea010:
      iVar12 = FUN_001f27f0(param_1);
      if (iVar12 != 0) {
LAB_001ea10c:
        iVar12 = 0x2a;
        goto LAB_001ea0c0;
      }
      if (bVar11) goto LAB_001ea124;
      if (99 < *(int *)(lVar21 + 0x15fc) - 200U) {
        iVar12 = FUN_001ebea0(param_1);
        if (iVar12 != 0) goto LAB_001ea0c0;
        if ((*(byte *)((long)param_1 + 0x3fc) & 1) != 0) {
          *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) | 2;
        }
      }
      lVar14 = *(long *)(lVar21 + 0x1d0);
      if ((*(byte *)(lVar22 + 0x4024) >> 1 & 1) != 0) {
        if (lVar14 != 0) {
          FUN_001de484(param_1,*puVar1);
          *puVar1 = 0xffffffff;
        }
        break;
      }
      if (lVar14 == 0) break;
      if (*(int *)(lVar22 + 0x4020) == 2) {
        lVar14 = param_1[0xcb];
        *(undefined4 *)(lVar14 + 0x4020) = 0;
        *(undefined4 *)(lVar14 + 0x4004) = 1;
        *(long *)(lVar14 + 0x4008) = lVar14;
        *(long *)(lVar14 + 0x4010) = lVar14;
        *(undefined8 *)(lVar14 + 0x4018) = 0;
        *(byte *)(lVar14 + 0x4024) = *(byte *)(lVar14 + 0x4024) & 0xfd;
        lVar14 = *(long *)(lVar21 + 0x1d0);
      }
    } while (lVar14 != 0);
    if (*(int *)(lVar21 + 0x15fc) - 200U < 100) {
      *(undefined4 *)(lVar22 + 0x4020) = 2;
      FUN_002044d4(param_1[0x8b]);
      param_1[0x8b] = 0;
      *(byte *)(lVar21 + 0x1280) = *(byte *)(lVar21 + 0x1280) | 1;
      FUN_001f3934(lVar21,"Proxy replied %d to CONNECT request\n",*(undefined4 *)(lVar21 + 0x15fc));
      *(ushort *)(lVar21 + 0x660) = *(ushort *)(lVar21 + 0x660) & 0xfff7;
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xfffeffff;
    }
    else {
      if (((*(byte *)(lVar22 + 0x4024) >> 1 & 1) == 0) || (*(long *)(lVar21 + 0x1d0) == 0)) {
        FUN_002044d4();
        *(undefined8 *)(lVar21 + 0x1d0) = 0;
        FUN_001dee08(param_1,2);
        FUN_001de484(param_1,*puVar1);
        *puVar1 = 0xffffffff;
      }
      else {
        *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x800000;
        FUN_001f3934(lVar21,"Connect me again please\n");
        *(undefined4 *)(param_1[0xcb] + 0x4020) = 2;
        FUN_001f3934(*param_1,"CONNECT phase completed!\n");
      }
      *(undefined4 *)(lVar22 + 0x4020) = 0;
      if (-1 < *(char *)((long)param_1 + 0x3fe)) {
        FUN_001f3ae0(lVar21,"Received HTTP code %d from proxy after CONNECT",
                     *(undefined4 *)(lVar21 + 0x180));
LAB_001ea124:
        iVar12 = 0x38;
        goto LAB_001ea0c0;
      }
    }
  }
LAB_001e988c:
  if (param_1[0xcb] == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    if (*(int *)(param_1[0xcb] + 0x4020) != 2) {
      return 0;
    }
  }
LAB_001ea0c0:
  *(undefined4 *)(param_1[0xcb] + 0x4020) = 2;
  FUN_001f3934(*param_1,"CONNECT phase completed!\n");
  return iVar12;
}


