/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ed3a4; name: FUN_001ed3a4
 */


/* WARNING: Removing unreachable block (ram,0x001ed82c) */
/* WARNING: Removing unreachable block (ram,0x001ed878) */
/* WARNING: Type propagation algorithm not settling */

int FUN_001ed3a4(long param_1,long param_2,size_t *param_3,char *param_4)

{
  int *param3;
  long *plVar1;
  long *plVar2;
  int *param5;
  int *param3_00;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  size_t sVar16;
  undefined4 *puVar17;
  char *pcVar18;
  long lVar19;
  long local_70;
  uchar local_68 [4];
  int local_64;
  
  sVar16 = *param_3;
  pcVar18 = *(char **)(param_1 + 0x158);
  param3 = (int *)(param_2 + 0x234);
  plVar1 = (long *)(param_1 + 0xf0);
  plVar2 = (long *)(param_1 + 0x170);
  param5 = (int *)(param_1 + 0x180);
  param3_00 = (int *)(param_2 + 0x230);
  pcVar12 = pcVar18;
  do {
    *(char **)(param_1 + 0x160) = pcVar12;
    pvVar9 = memchr(pcVar12,10,*param_3);
    *(void **)(param_1 + 0x168) = pvVar9;
    if (pvVar9 == (void *)0x0) {
      iVar7 = FUN_001ee27c(param_1,plVar1,*param_3);
      if (iVar7 != 0) {
        return iVar7;
      }
      if (*(int *)(param_1 + 0x144) != 0) {
        return 0;
      }
      iVar7 = FUN_001ee36c(param_1,*(undefined8 *)(param_1 + 0x1120),
                           *(undefined8 *)(param_1 + 0x150));
      if (iVar7 != 2) {
        return 0;
      }
      *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
      *(undefined4 *)(param_1 + 0x140) = 2;
      FUN_001dee08(param_2,2);
      if ((*(byte *)(param_1 + 0xf47) >> 2 & 1) != 0) {
        return 0;
      }
LAB_001ee078:
      pcVar12 = "Received HTTP/0.9 when not allowed\n";
      goto LAB_001ee1b4;
    }
    *param_3 = (size_t)(pcVar12 + *param_3 + ~(ulong)pvVar9);
    lVar19 = *(long *)(param_1 + 0x168) + 1;
    *(long *)(param_1 + 0x158) = lVar19;
    iVar7 = FUN_001ee27c(param_1,plVar1,lVar19 - *(long *)(param_1 + 0x160));
    if (iVar7 != 0) {
      return iVar7;
    }
    pcVar12 = *(char **)(param_1 + 0x1120);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x148);
    *(char **)(param_1 + 0x170) = pcVar12;
    if (*(int *)(param_1 + 0x144) == 0) {
      iVar7 = FUN_001ee36c(param_1,pcVar12,*(undefined8 *)(param_1 + 0x150));
      if (iVar7 == 2) {
        FUN_001dee08(param_2,2);
        if ((*(byte *)(param_1 + 0xf47) >> 2 & 1) != 0) {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          if (*param_3 == 0) {
            *(undefined4 *)(param_1 + 0x140) = 2;
            *param_3 = sVar16;
            *(char **)(param_1 + 0x158) = pcVar18;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x140) = 1;
          return 0;
        }
        goto LAB_001ee078;
      }
      pcVar12 = (char *)*plVar2;
    }
    pcVar13 = pcVar12;
    if (*pcVar12 == '\n') {
LAB_001ed4b4:
      *plVar2 = (long)(pcVar13 + 1);
LAB_001ed4bc:
      iVar7 = *param5;
      if (iVar7 - 100U < 100) {
        if (iVar7 == 0x65) {
          if (*(int *)(param_1 + 0x19c) == 1) {
            FUN_001f3934(param_1,"Received 101\n");
            *(undefined4 *)(param_1 + 0x19c) = 2;
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
            *(undefined4 *)(param_1 + 0x144) = 0;
            iVar7 = FUN_001efd44(param_2,*(undefined8 *)(param_1 + 0x158),*param_3);
            if (iVar7 != 0) {
              return iVar7;
            }
            *param_3 = 0;
          }
          else {
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          }
        }
        else if (iVar7 == 100) {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          *(undefined4 *)(param_1 + 0x144) = 0;
          if (*(int *)(param_1 + 0x198) != 0) {
            *(undefined4 *)(param_1 + 0x198) = 0;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            thunk_FUN_001e9574(param_1,0);
          }
        }
        else {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          *(undefined4 *)(param_1 + 0x144) = 0;
        }
      }
      else {
        uVar5 = *(ushort *)(param_1 + 0x660);
        *(ushort *)(param_1 + 0x660) = uVar5 & 0xfffe;
        if ((((((uVar5 >> 5 & 1) == 0) && (*(long *)(param_1 + 0xf0) == -1)) &&
             ((*(byte *)(param_2 + 0x3fc) & 1) == 0)) &&
            ((*param3_00 == 0xb && ((*(byte *)(*(long *)(param_2 + 0x420) + 0x82) >> 2 & 1) == 0))))
           && (*(int *)(param_1 + 0xa38) != 6)) {
          FUN_001f3934(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          FUN_001dee08(param_2,2);
        }
      }
      iVar7 = FUN_001ec204(param_2);
      if (iVar7 != 0) {
        iVar7 = *(int *)(param_1 + 0x180);
LAB_001ee03c:
        FUN_001f3ae0(param_1,"The requested URL returned error: %d",iVar7);
        return 0x16;
      }
      uVar15 = 2;
      if ((*(ulong *)(param_1 + 0xf40) & 0x200000) != 0) {
        uVar15 = 3;
      }
      lVar19 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x1120);
      iVar7 = FUN_001f3df8(param_2,uVar15,*(long *)(param_1 + 0x1120),lVar19);
      if (iVar7 != 0) {
        return iVar7;
      }
      *(long *)(param_1 + 0x1610) = *(long *)(param_1 + 0x1610) + lVar19;
      lVar3 = *(long *)(param_1 + 0x110) + lVar19;
      *(long *)(param_1 + 0x110) = lVar3;
      if (99 < *(int *)(param_1 + 0x180) - 100U) {
        lVar3 = 0;
      }
      *(long *)(param_1 + 0x118) = lVar3;
      iVar7 = FUN_001ebea0(param_2);
      if (iVar7 != 0) {
        return iVar7;
      }
      if (299 < *param5) {
        if ((((*(uint *)(param_2 + 0x3fc) & 0x18001) == 0) && (*(int *)(param_1 + 0xa38) - 2U < 4))
           && (thunk_FUN_001e9574(param_1,0), (*(byte *)(param_1 + 0x660) >> 2 & 1) == 0)) {
          if ((*(byte *)(param_1 + 0xf42) >> 1 & 1) == 0) {
            FUN_001f3934(param_1,"HTTP error before end of send, stop sending\n");
            FUN_001dee08(param_2,2);
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 4;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffd;
            if ((*(byte *)(param_1 + 0x15a5) & 1) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 3;
            }
          }
          else {
            FUN_001f3934(param_1,"HTTP error before end of send, keep sending\n");
            if (*(int *)(param_1 + 0x198) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 0;
              *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            }
          }
        }
        if ((*(byte *)(param_2 + 0x3fe) & 1) != 0) {
          FUN_001f3934(param_1,"Keep sending data to get tossed away!\n");
          *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
        }
      }
      if ((*(ushort *)(param_1 + 0x660) & 1) != 0) goto LAB_001edcfc;
      if ((*(byte *)(param_1 + 0xf43) & 1) == 0) {
        if ((*(ushort *)(param_1 + 0x660) >> 5 & 1) != 0) {
          *plVar1 = -1;
          *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
        }
      }
      else {
        *param_4 = '\x01';
      }
      if (*plVar1 == -1) {
        if (*(long *)(param_1 + 0xf8) == 0) goto LAB_001ee0bc;
LAB_001ee0d8:
        if (*param_4 == '\0') goto LAB_001ee138;
      }
      else {
        FUN_001f2d7c(param_1);
        *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
        if (*(long *)(param_1 + 0xf0) != 0) goto LAB_001ee0d8;
LAB_001ee0bc:
        if (((*(byte *)(*(long *)(param_2 + 0x420) + 0x80) & 3) != 0) && (*param3_00 == 0x14))
        goto LAB_001ee0d8;
        *param_4 = '\x01';
      }
      *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffe;
LAB_001ee138:
      if ((*(byte *)(param_1 + 0xf43) >> 2 & 1) == 0) {
        return 0;
      }
      FUN_001f3a38(param_1,1,*(undefined8 *)(param_1 + 0x160),lVar19);
      return 0;
    }
    if (*pcVar12 == '\r') {
      pcVar13 = pcVar12 + 1;
      *plVar2 = (long)pcVar13;
      if (pcVar12[1] == '\n') goto LAB_001ed4b4;
      goto LAB_001ed4bc;
    }
    iVar7 = *(int *)(param_1 + 0x144);
    *(int *)(param_1 + 0x144) = iVar7 + 1;
    if (iVar7 == 0) {
      uVar4 = *(uint *)(*(long *)(param_2 + 0x420) + 0x80);
      if ((uVar4 & 3) == 0) {
        if ((uVar4 >> 0x12 & 1) == 0) goto LAB_001ee110;
        iVar7 = sscanf(pcVar12," RTSP/%1d.%1d%c%3d",&local_64,param3,local_68,param5);
        iVar8 = 0;
        if ((iVar7 != 4) || (local_68[0] != ' ')) goto LAB_001ed8d8;
        *param3 = *param3 + local_64 * 10;
        *param3_00 = 0xb;
      }
      else {
        iVar7 = sscanf(pcVar12," HTTP/%1d.%1d%c%3d",(int *)&local_70,param3_00,local_68,param5);
        if ((iVar7 == 1) && ((int)local_70 == 2)) {
          iVar7 = sscanf((char *)*plVar2," HTTP/2 %d",param5);
          if (iVar7 == 1) {
            iVar7 = 4;
            *param3_00 = 0;
            local_68[0] = ' ';
            goto LAB_001ed7dc;
          }
LAB_001ee1ac:
          pcVar12 = "Unsupported HTTP version in response\n";
LAB_001ee1b4:
          FUN_001f3ae0(param_1,pcVar12);
          return 1;
        }
LAB_001ed7dc:
        if ((iVar7 == 4) && (local_68[0] == ' ')) {
          iVar8 = 1;
          iVar7 = *param3_00 + (int)local_70 * 10;
          *param3_00 = iVar7;
          if ((iVar7 != 0x14) && (*(int *)(param_1 + 0x19c) == 2)) {
            FUN_001f3934(param_1,"Lying server, not serving HTTP/2\n");
            goto LAB_001ed8dc;
          }
        }
        else {
          if (iVar7 != 0) goto LAB_001ee1ac;
          iVar8 = sscanf((char *)*plVar2," HTTP %3d",param5);
          *param3_00 = 10;
          if (iVar8 == 0) {
            iVar7 = FUN_001ee36c(param_1,*(undefined8 *)(param_1 + 0x170),
                                 *(undefined8 *)(param_1 + 0x150));
            if (iVar7 == 1) {
              *param5 = 200;
              *param3_00 = 10;
              goto LAB_001ed8dc;
            }
            iVar8 = 0;
          }
        }
LAB_001ed8d8:
        if (iVar8 == 0) {
LAB_001ee110:
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          return 0;
        }
      }
LAB_001ed8dc:
      iVar7 = *(int *)(param_1 + 0x180);
      *(int *)(param_1 + 0x15f8) = iVar7;
      *(int *)(param_1 + 0x1600) = *param3_00;
      if ((*(int *)(param_1 + 0x14e0) == 0) || (*param3_00 < *(int *)(param_1 + 0x14e0))) {
        *(int *)(param_1 + 0x14e0) = *param3_00;
      }
      if (((*(long *)(param_1 + 0x14f8) == 0) || (iVar7 != 0x1a0)) ||
         (*(int *)(param_1 + 0xa38) != 1)) {
        if ((399 < iVar7) && (((uint)*(undefined8 *)(param_1 + 0xf40) >> 0x10 & 1) != 0)) {
          if (iVar7 == 0x197) {
            if ((*(byte *)(param_2 + 0x3fd) & 1) == 0) goto LAB_001ee17c;
          }
          else if ((iVar7 != 0x191) || (-1 < *(char *)(param_2 + 0x3fc))) {
LAB_001ee17c:
            pcVar12 = (char *)*plVar2;
            iVar8 = strncmp(pcVar12,"HTTP",4);
            if ((iVar8 == 0) &&
               ((pcVar12 = strchr(pcVar12,0x20), pcVar12 != (char *)0x0 &&
                (pcVar12 = pcVar12 + 1, *pcVar12 != '\0')))) {
              cVar6 = '\r';
              pcVar18 = strchr(pcVar12,0xd);
              if (pcVar18 == (char *)0x0) {
                cVar6 = '\n';
                pcVar18 = strchr(pcVar12,10);
                if (pcVar18 == (char *)0x0) goto LAB_001ee03c;
              }
              *pcVar18 = '\0';
              FUN_001f3ae0(param_1,"The requested URL returned error: %s",pcVar12);
              *pcVar18 = cVar6;
              return 0x16;
            }
            goto LAB_001ee03c;
          }
        }
      }
      else {
        *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 8;
      }
      iVar8 = *param3_00;
      if (iVar8 == 0x14) {
LAB_001ed9ac:
        puVar17 = *(undefined4 **)(param_2 + 0x660);
        uVar15 = 2;
LAB_001ed9b4:
        *puVar17 = uVar15;
      }
      else {
        if (iVar8 != 10) {
          if ((iVar7 == 0x65) && (*(int *)(param_1 + 0x19c) == 1)) goto LAB_001ed9ac;
          if ((((iVar8 < 0xb) || ((*(byte *)(param_2 + 0x3fc) & 1) != 0)) ||
              (*(long *)(param_2 + 0x660) == 0)) ||
             (uVar10 = FUN_001f2400(param_1,param_2), (uVar10 & 1) != 0)) goto LAB_001ed9b8;
          puVar17 = *(undefined4 **)(param_2 + 0x660);
          uVar15 = 1;
          goto LAB_001ed9b4;
        }
        FUN_001f3934(param_1,"HTTP 1.0, assume close after body\n");
        FUN_001dee08(param_2,1);
      }
LAB_001ed9b8:
      if (*param5 != 0xcc) {
        if (*param5 != 0x130) goto LAB_001ed9f4;
        if (*(int *)(param_1 + 0xa28) != 0) {
          *(byte *)(param_1 + 0x16d8) = *(byte *)(param_1 + 0x16d8) | 1;
        }
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 0x10;
    }
LAB_001ed9f4:
    if ((((*(byte *)(param_1 + 0x660) >> 4 & 1) == 0) &&
        ((*(byte *)(param_1 + 0xf44) >> 4 & 1) == 0)) &&
       (iVar7 = thunk_FUN_001f8bec("Content-Length:",*plVar2,0xf), iVar7 != 0)) {
      iVar7 = FUN_001f8ee4(*plVar2 + 0xf,0,10,&local_70);
      if (iVar7 == 1) {
        if (*(long *)(param_1 + 0xc38) == 0) {
          FUN_001dee08(param_2,2);
          pcVar12 = "Overflow Content-Length: value!\n";
LAB_001edc3c:
          FUN_001f3934(param_1,pcVar12);
          goto LAB_001edca0;
        }
      }
      else {
        if (iVar7 != 0) {
          iVar7 = 8;
          pcVar12 = "Invalid Content-Length: value";
          goto LAB_001ee200;
        }
        if ((*(long *)(param_1 + 0xc38) == 0) || (local_70 <= *(long *)(param_1 + 0xc38))) {
          *(long *)(param_1 + 0xf0) = local_70;
          *(long *)(param_1 + 0xf8) = local_70;
          FUN_001f2d7c(param_1);
          goto LAB_001edca0;
        }
      }
      iVar7 = 0x3f;
      pcVar12 = "Maximum file size exceeded";
LAB_001ee200:
      FUN_001f3ae0(param_1,pcVar12);
      return iVar7;
    }
    iVar7 = thunk_FUN_001f8bec("Content-Type:",*plVar2,0xd);
    if (iVar7 == 0) {
      iVar8 = thunk_FUN_001f8bec("Server:",*plVar2,7);
      iVar7 = *param3_00;
      if (iVar8 == 0) {
        if (iVar7 == 10) {
          if ((*(byte *)(param_2 + 0x3fc) >> 5 & 1) != 0) {
            uVar10 = FUN_001ecccc(*plVar2,"Proxy-Connection:","keep-alive");
            if ((uVar10 & 1) != 0) {
              FUN_001dee08(param_2,0);
              pcVar12 = "HTTP/1.0 proxy connection set to keep alive!\n";
              goto LAB_001edc3c;
            }
            iVar7 = *param3_00;
            goto LAB_001edbb4;
          }
LAB_001edc08:
          uVar10 = FUN_001ecccc(*plVar2,"Connection:","keep-alive");
          if ((uVar10 & 1) != 0) {
            FUN_001dee08(param_2,0);
            pcVar12 = "HTTP/1.0 connection set to keep alive!\n";
            goto LAB_001edc3c;
          }
        }
        else {
LAB_001edbb4:
          if (iVar7 == 0xb) {
            if ((*(byte *)(param_2 + 0x3fc) >> 5 & 1) != 0) {
              uVar10 = FUN_001ecccc(*plVar2,"Proxy-Connection:","close");
              if ((uVar10 & 1) != 0) {
                FUN_001dee08(param_2,1);
                pcVar12 = "HTTP/1.1 proxy connection set close!\n";
                goto LAB_001edc3c;
              }
              iVar7 = *param3_00;
              goto LAB_001edc00;
            }
          }
          else {
LAB_001edc00:
            if (iVar7 == 10) goto LAB_001edc08;
          }
        }
        uVar10 = FUN_001ecccc(*plVar2,"Connection:","close");
        if ((uVar10 & 1) == 0) {
          iVar7 = thunk_FUN_001f8bec("Transfer-Encoding:",*plVar2,0x12);
          if (iVar7 == 0) {
            iVar7 = thunk_FUN_001f8bec("Content-Encoding:",*plVar2,0x11);
            if ((iVar7 != 0) && (*(long *)(param_1 + 0xcc8) != 0)) {
              lVar19 = *plVar2 + 0x11;
              uVar14 = 0;
              goto LAB_001edc98;
            }
            iVar7 = thunk_FUN_001f8bec("Content-Range:",*plVar2,0xe);
            if (iVar7 != 0) {
              pcVar12 = (char *)(*plVar2 + 0xe);
              cVar6 = *pcVar12;
              while (cVar6 != '\0') {
                iVar7 = FUN_001e3418(cVar6);
                cVar6 = *pcVar12;
                if ((iVar7 != 0) || (cVar6 == '*')) goto LAB_001edd90;
                pcVar12 = pcVar12 + 1;
                cVar6 = *pcVar12;
              }
              cVar6 = '\0';
LAB_001edd90:
              iVar7 = FUN_001e3418(cVar6);
              if (iVar7 == 0) {
                *(undefined8 *)(param_1 + 0x14f8) = 0;
              }
              else {
                iVar7 = FUN_001f8ee4(pcVar12,0,10,param_1 + 0x178);
                if ((iVar7 == 0) && (*(long *)(param_1 + 0x14f8) == *(long *)(param_1 + 0x178))) {
                  *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 2;
                }
              }
              goto LAB_001edca0;
            }
            if ((*(long *)(param_1 + 0xf70) != 0) &&
               (iVar7 = thunk_FUN_001f8bec("Set-Cookie:",*plVar2,0xb), iVar7 != 0)) {
              FUN_001f43b0(param_1,2,2);
              lVar19 = *(long *)(param_2 + 0x490);
              if (lVar19 == 0) {
                lVar19 = *(long *)(param_2 + 0xd0);
              }
              FUN_001dc210(param_1,*(undefined8 *)(param_1 + 0xf70),1,0,
                           *(long *)(param_1 + 0x170) + 0xb,lVar19,*(undefined8 *)(param_1 + 0x1580)
                           ,*(uint *)(*(long *)(param_2 + 0x420) + 0x80) >> 1 & 1);
              FUN_001f43f8(param_1,2);
              goto LAB_001edca0;
            }
            iVar7 = thunk_FUN_001f8bec("Last-Modified:",*plVar2,0xe);
            if ((iVar7 != 0) &&
               ((*(int *)(param_1 + 0xa28) != 0 || ((*(byte *)(param_1 + 0xf41) >> 1 & 1) != 0)))) {
              local_70 = FUN_002053bc(0);
              uVar14 = FUN_001f1c0c(*(long *)(param_1 + 0x170) + 0xe,&local_70);
              *(undefined8 *)(param_1 + 0x1a8) = uVar14;
              if ((*(byte *)(param_1 + 0xf41) >> 1 & 1) != 0) {
                *(undefined8 *)(param_1 + 0x1608) = uVar14;
              }
              goto LAB_001edca0;
            }
            iVar7 = thunk_FUN_001f8bec("WWW-Authenticate:",*plVar2,0x11);
            if ((iVar7 != 0) && (iVar7 = 0x191, *param5 == 0x191)) {
LAB_001edec8:
              pcVar12 = (char *)FUN_001ebdb8(*plVar2);
              if (pcVar12 == (char *)0x0) {
                return 0x1b;
              }
              FUN_001ec658(param_2,iVar7 == 0x197,pcVar12);
              goto LAB_001edb08;
            }
            iVar7 = thunk_FUN_001f8bec("Proxy-authenticate:",*plVar2,0x13);
            if ((iVar7 != 0) && (iVar7 = 0x197, *param5 == 0x197)) goto LAB_001edec8;
            if (((99 < *param5 - 300U) ||
                (iVar7 = thunk_FUN_001f8bec("Location:",*plVar2,9), iVar7 == 0)) ||
               (*(long *)(param_1 + 0x1c8) != 0)) {
              if ((*(byte *)(*(long *)(param_2 + 0x420) + 0x82) >> 2 & 1) != 0) {
                return 4;
              }
              goto LAB_001edca0;
            }
            pcVar12 = (char *)FUN_001ebdb8(*plVar2);
            if (pcVar12 == (char *)0x0) {
              return 0x1b;
            }
            if (*pcVar12 == '\0') goto LAB_001edb08;
            *(char **)(param_1 + 0x1c8) = pcVar12;
            if ((*(byte *)(param_1 + 0xf42) >> 2 & 1) == 0) goto LAB_001edca0;
            if (*(char *)(param_1 + 0x6c1) == '\0') {
              uVar14 = FUN_00205068();
              uVar11 = FUN_002044f4();
              *(undefined8 *)(param_1 + 0x1d0) = uVar11;
              FUN_002044d4(uVar14);
              lVar19 = *(long *)(param_1 + 0x1d0);
            }
            else {
              lVar19 = FUN_002044f4();
              *(long *)(param_1 + 0x1d0) = lVar19;
            }
            if (lVar19 == 0) {
              return 0x1b;
            }
            iVar7 = FUN_001ec120(param_2);
          }
          else {
            lVar19 = *plVar2 + 0x12;
            uVar14 = 1;
LAB_001edc98:
            iVar7 = FUN_001ee580(param_2,lVar19,uVar14);
          }
          if (iVar7 != 0) {
            return iVar7;
          }
        }
        else {
          FUN_001dee08(param_2,2);
        }
      }
      else if (iVar7 < 0x14) {
        pcVar12 = (char *)FUN_001ebdb8(*plVar2);
        if (((*(int **)(param_2 + 0x660) != (int *)0x0) && (**(int **)(param_2 + 0x660) == 1)) &&
           (uVar10 = FUN_001f2584(param_1,pcVar12), (uVar10 & 1) != 0)) {
          **(undefined4 **)(param_2 + 0x660) = 0xffffffff;
        }
        goto LAB_001edb08;
      }
    }
    else {
      pcVar12 = (char *)FUN_001ebdb8(*plVar2);
      if (pcVar12 == (char *)0x0) {
        return 0x1b;
      }
      if (*pcVar12 != '\0') {
        FUN_002044d4(*(undefined8 *)(param_1 + 0x1638));
        *(char **)(param_1 + 0x1638) = pcVar12;
        goto LAB_001edca0;
      }
LAB_001edb08:
      FUN_002044d4(pcVar12);
    }
LAB_001edca0:
    uVar15 = 2;
    if ((*(ulong *)(param_1 + 0xf40) & 0x200000) != 0) {
      uVar15 = 3;
    }
    if (((uint)*(ulong *)(param_1 + 0xf40) >> 0x1a & 1) != 0) {
      FUN_001f3a38(param_1,1,*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x150));
    }
    iVar7 = FUN_001f3df8(param_2,uVar15,*(undefined8 *)(param_1 + 0x170),
                         *(undefined8 *)(param_1 + 0x150));
    if (iVar7 != 0) {
      return iVar7;
    }
    *(long *)(param_1 + 0x1610) = *(long *)(param_1 + 0x1610) + *(long *)(param_1 + 0x150);
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x150);
LAB_001edcfc:
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1120);
    *(undefined8 *)(param_1 + 0x150) = 0;
    pcVar12 = *(char **)(param_1 + 0x158);
    if (*pcVar12 == '\0') {
      return 0;
    }
  } while( true );
}


