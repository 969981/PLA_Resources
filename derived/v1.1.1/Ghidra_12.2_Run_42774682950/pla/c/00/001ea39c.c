/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ea39c; name: FUN_001ea39c
 */


int FUN_001ea39c(long *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  char *__s;
  char *pcVar16;
  size_t sVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  byte bVar21;
  undefined4 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  undefined *puVar27;
  ulong uVar28;
  char *pcVar29;
  ulong *puVar30;
  undefined8 *puVar31;
  char *pcVar32;
  undefined1 *puVar33;
  undefined *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  ulong uVar37;
  long *plVar38;
  long local_88;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  lVar24 = *param_1;
  pcVar29 = *(char **)(lVar24 + 0x1580);
  pcVar32 = *(char **)(lVar24 + 0x1588);
  local_68 = 0;
  local_70 = 0;
  lVar25 = param_1[0x1a];
  iVar12 = *(int *)(lVar24 + 0xa38);
  *param_2 = 1;
  if ((int)param_1[0x46] < 0x14) {
    if (((int)param_1[0xcd] != 2) &&
       (((int)param_1[0xcd] == 3 || (*(long *)(*param_1 + 0xa40) == 5)))) {
      *(undefined4 *)(param_1 + 0x46) = 0x14;
      iVar9 = FUN_001efd44(param_1,0,0);
      goto LAB_001ea438;
    }
  }
  else {
    iVar9 = FUN_001efb64(param_1);
LAB_001ea438:
    if (iVar9 != 0) {
      return iVar9;
    }
  }
  plVar26 = *(long **)(lVar24 + 0x1e8);
  if ((*(byte *)(lVar24 + 0x15a4) >> 1 & 1) == 0) {
    FUN_002044d4(*(undefined8 *)(lVar24 + 0x1148));
    lVar13 = FUN_002044f4(param_1[0x1a]);
    *(long *)(lVar24 + 0x1148) = lVar13;
    if (lVar13 == 0) {
      return 0x1b;
    }
    *(int *)(lVar24 + 0x1150) = (int)param_1[0x33];
  }
  if (((*(byte *)(param_1[0x84] + 0x80) & 7) != 0) && ((*(byte *)(lVar24 + 0xf43) & 2) != 0)) {
    iVar12 = 5;
  }
  puVar34 = *(undefined **)(lVar24 + 0xcb0);
  if (puVar34 == (undefined *)0x0) {
    if ((*(byte *)(lVar24 + 0xf43) & 1) == 0) {
      if (iVar12 - 2U < 6) {
        puVar34 = (&PTR_DAT_0411ce58)[(int)(iVar12 - 2U)];
      }
      else {
        puVar34 = &DAT_0392dc1b;
      }
    }
    else {
      puVar34 = &DAT_038a009a;
    }
  }
  lVar13 = FUN_001f906c(param_1,"User-Agent");
  if (lVar13 != 0) {
    FUN_002044d4(param_1[0x8c]);
    param_1[0x8c] = 0;
  }
  if ((pcVar32 == (char *)0x0) || (*pcVar32 == '\0')) {
    pcVar14 = (char *)0x0;
  }
  else {
    pcVar14 = (char *)FUN_001e6534("%s?%s",pcVar29,pcVar32);
    if (pcVar14 == (char *)0x0) {
      return 0x1b;
    }
  }
  pcVar15 = pcVar29;
  if (pcVar14 != (char *)0x0) {
    pcVar15 = pcVar14;
  }
  iVar9 = FUN_001ec25c(param_1,puVar34,pcVar15,0);
  FUN_002044d4(pcVar14);
  if (iVar9 != 0) {
    return iVar9;
  }
  if (((((*(byte *)(lVar24 + 0x1260) & 3) == 2) || ((*(byte *)(lVar24 + 0x1280) & 3) == 2)) &&
      (iVar12 != 1)) && (iVar12 != 6)) {
    uVar10 = *(uint *)((long)param_1 + 0x3fc) | 0x8000;
  }
  else {
    uVar10 = *(uint *)((long)param_1 + 0x3fc) & 0xffff7fff;
  }
  *(uint *)((long)param_1 + 0x3fc) = uVar10;
  FUN_002044d4(param_1[0x90]);
  param_1[0x90] = 0;
  if ((*(long *)(lVar24 + 0xf50) == 0) || (lVar13 = FUN_001f906c(param_1,"Referer"), lVar13 != 0)) {
    param_1[0x90] = 0;
  }
  else {
    lVar13 = FUN_001e6534("Referer: %s\r\n",*(undefined8 *)(lVar24 + 0xf50));
    param_1[0x90] = lVar13;
    if (lVar13 == 0) {
      return 0x1b;
    }
  }
  if ((*(long *)(lVar24 + 0xca0) == 0) || (lVar13 = FUN_001f906c(param_1,"Cookie"), lVar13 != 0)) {
    local_88 = 0;
  }
  else {
    local_88 = *(long *)(lVar24 + 0xca0);
  }
  lVar13 = FUN_001f906c(param_1,"Accept-Encoding");
  if ((lVar13 == 0) && (*(long *)(lVar24 + 0xcc8) != 0)) {
    FUN_002044d4(param_1[0x8d]);
    param_1[0x8d] = 0;
    lVar13 = FUN_001e6534("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar24 + 0xcc8));
    param_1[0x8d] = lVar13;
    if (lVar13 == 0) {
      return 0x1b;
    }
  }
  else {
    FUN_002044d4(param_1[0x8d]);
    param_1[0x8d] = 0;
  }
  lVar13 = FUN_001f906c(param_1,&DAT_038b2d05);
  if ((lVar13 == 0) && ((*(byte *)(lVar24 + 0xf42) >> 3 & 1) != 0)) {
    lVar13 = FUN_001f906c(param_1,"Connection");
    FUN_002044d4(param_1[0x94]);
    pcVar14 = "";
    param_1[0x94] = 0;
    if (lVar13 == 0) {
      puVar27 = &DAT_03996322;
      pcVar15 = (char *)0x0;
    }
    else {
      pcVar14 = (char *)FUN_001ebdb8(lVar13);
      if (pcVar14 == (char *)0x0) {
        return 0x1b;
      }
      puVar27 = &DAT_03996322;
      if (*pcVar14 != '\0') {
        puVar27 = &DAT_0398d5c8;
      }
      pcVar15 = pcVar14;
    }
    lVar13 = FUN_001e6534("Connection: %s%sTE\r\nTE: gzip\r\n",pcVar14,puVar27);
    param_1[0x94] = lVar13;
    FUN_002044d4(pcVar15);
    if (param_1[0x94] == 0) {
      return 0x1b;
    }
  }
  if (iVar12 == 3) {
    plVar18 = plVar26 + 5;
    FUN_001e3920(plVar18);
    iVar9 = FUN_001ef3ec(lVar24,plVar18,*(undefined8 *)(lVar24 + 0x818),
                         *(undefined8 *)(lVar24 + 0x1528));
    if (iVar9 != 0) {
      return iVar9;
    }
LAB_001ea770:
    *plVar26 = (long)plVar18;
    lVar13 = FUN_001f906c(param_1,"Content-Type");
    *(uint *)(*plVar26 + 0x80) = *(uint *)(*plVar26 + 0x80) | 2;
    if (lVar13 == 0) {
      lVar13 = *plVar26;
      pcVar14 = "multipart/form-data";
      if (*(int *)(lVar13 + 0x18) != 4) {
        pcVar14 = (char *)0x0;
      }
    }
    else {
      pcVar14 = (char *)(lVar13 + 0xc);
      do {
        pcVar14 = pcVar14 + 1;
      } while (*pcVar14 == ' ');
      lVar13 = *plVar26;
    }
    FUN_001e4074(lVar13,*(undefined8 *)(lVar24 + 0x808),0);
    iVar9 = FUN_001e4eb4(*plVar26,pcVar14,0,1);
    FUN_001e4074(*plVar26,0,0);
    if (iVar9 != 0) {
      return iVar9;
    }
    iVar9 = FUN_001e4b94(*plVar26);
    if (iVar9 != 0) {
      return iVar9;
    }
    lVar13 = FUN_001e4c3c(*plVar26);
    plVar26[1] = lVar13;
  }
  else {
    if (iVar12 == 4) {
      plVar18 = (long *)(lVar24 + 0x820);
      goto LAB_001ea770;
    }
    *plVar26 = 0;
  }
  lVar13 = FUN_001f906c(param_1,"Transfer-Encoding");
  if (lVar13 == 0) {
    if (((*(byte *)(param_1[0x84] + 0x80) & 3) == 0) ||
       (((1 < iVar12 - 3U || (-1 < plVar26[1])) &&
        (((*(byte *)(lVar24 + 0xf43) >> 1 & 1) == 0 || (*(long *)(lVar24 + 0x1518) != -1)))))) {
      uVar8 = *(ushort *)(lVar24 + 0x660) & 0xffbf;
LAB_001ea8b4:
      *(ushort *)(lVar24 + 0x660) = uVar8;
    }
    else {
      if (-1 < *(char *)((long)param_1 + 0x3fd)) {
        if (((*(int *)(lVar24 + 0x14e0) == 10) || ((int)param_1[0x46] == 10)) ||
           (((lVar13 = *(long *)(lVar24 + 0xa40), (int)param_1[0x46] < 0xb && (lVar13 == 1)) ||
            ((lVar13 != 0 && (lVar13 < 2)))))) {
          FUN_001f3ae0(lVar24,"Chunky upload is not supported by HTTP 1.0");
          return 0x19;
        }
        uVar8 = *(ushort *)(lVar24 + 0x660) | 0x40;
        goto LAB_001ea8b4;
      }
      uVar8 = *(ushort *)(lVar24 + 0x660);
    }
    pcVar14 = "";
    if ((uVar8 & 0x40) != 0) {
      pcVar14 = "Transfer-Encoding: chunked\r\n";
    }
  }
  else {
    uVar8 = FUN_001ecccc(lVar13,"Transfer-Encoding:","chunked");
    pcVar14 = "";
    *(ushort *)(lVar24 + 0x660) = *(ushort *)(lVar24 + 0x660) & 0xffbf | (uVar8 & 1) << 6;
  }
  FUN_002044d4(param_1[0x91]);
  param_1[0x91] = 0;
  pcVar15 = (char *)FUN_001f906c(param_1,&DAT_038e4937);
  if ((pcVar15 == (char *)0x0) ||
     (((*(byte *)(lVar24 + 0x15a4) >> 1 & 1) != 0 &&
      (iVar9 = FUN_001f8b48(*(undefined8 *)(lVar24 + 0x1148),param_1[0x1a]), iVar9 == 0)))) {
    if ((((*(uint *)(param_1[0x85] + 0x80) >> 1 & 1) == 0) || ((int)param_1[0x33] != 0x1bb)) &&
       (((*(uint *)(param_1[0x85] + 0x80) & 1) == 0 || ((int)param_1[0x33] != 0x50)))) {
      bVar7 = (*(uint *)((long)param_1 + 0x3fc) & 0x200) == 0;
      puVar27 = &DAT_038aa492;
      if (bVar7) {
        puVar27 = &DAT_03996322;
      }
      puVar1 = &DAT_03904308;
      if (bVar7) {
        puVar1 = &DAT_03996322;
      }
      lVar13 = FUN_001e6534("Host: %s%s%s:%d\r\n",puVar27,lVar25,puVar1);
    }
    else {
      bVar7 = (*(uint *)((long)param_1 + 0x3fc) & 0x200) == 0;
      puVar27 = &DAT_038aa492;
      if (bVar7) {
        puVar27 = &DAT_03996322;
      }
      puVar1 = &DAT_03904308;
      if (bVar7) {
        puVar1 = &DAT_03996322;
      }
      lVar13 = FUN_001e6534("Host: %s%s%s\r\n",puVar27,lVar25,puVar1);
    }
LAB_001eaa3c:
    param_1[0x91] = lVar13;
    if (lVar13 == 0) {
      return 0x1b;
    }
  }
  else {
    __s = (char *)FUN_001ebdb8(pcVar15);
    if (__s == (char *)0x0) {
      return 0x1b;
    }
    if (*__s == '[') {
      sVar17 = strlen(__s);
      memmove(__s,__s + 1,sVar17 - 1);
      iVar9 = 0x5d;
LAB_001ea9fc:
      pcVar16 = strchr(__s,iVar9);
      if (pcVar16 != (char *)0x0) {
        *pcVar16 = '\0';
      }
      FUN_002044d4(param_1[0x92]);
      param_1[0x92] = (long)__s;
    }
    else {
      if (*__s != '\0') {
        iVar9 = 0x3a;
        goto LAB_001ea9fc;
      }
      FUN_002044d4(__s);
    }
    iVar9 = strcmp("Host:",pcVar15);
    if (iVar9 != 0) {
      lVar13 = FUN_001e6534("Host:%s\r\n",pcVar15 + 5);
      goto LAB_001eaa3c;
    }
    param_1[0x91] = 0;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    lVar13 = FUN_001fadb8(*(undefined8 *)(lVar24 + 0x1548));
    if (lVar13 == 0) {
      return 0x1b;
    }
    if (((((param_1[0x1b] != param_1[0x1a]) &&
          (iVar9 = FUN_001fb304(lVar13,5,param_1[0x1a],0), iVar9 != 0)) ||
         (iVar9 = FUN_001fb304(lVar13,9,0,0), iVar9 != 0)) ||
        ((iVar9 = FUN_001f8b48(&DAT_0395cbe4,*(undefined8 *)(lVar24 + 0x1550)), iVar9 != 0 &&
         ((iVar9 = FUN_001fb304(lVar13,2,0,0), iVar9 != 0 ||
          (iVar9 = FUN_001fb304(lVar13,3,0,0), iVar9 != 0)))))) ||
       (iVar9 = FUN_001faec0(lVar13,0,&local_78,0), iVar9 != 0)) {
      FUN_001fad24(lVar13);
      return 0x1b;
    }
    bVar21 = *(byte *)(lVar24 + 0xf68);
    if ((bVar21 & 1) != 0) {
      FUN_002044d4(*(undefined8 *)(lVar24 + 0xf48));
      bVar21 = *(byte *)(lVar24 + 0xf68);
    }
    *(long *)(lVar24 + 0xf48) = local_78;
    *(byte *)(lVar24 + 0xf68) = bVar21 | 1;
    FUN_001fad24(lVar13);
    iVar9 = FUN_001f8b48(&DAT_03952f6b,*(undefined8 *)(lVar24 + 0x1550));
    if (iVar9 == 0) goto LAB_001eaab8;
    if ((*(byte *)(lVar24 + 0xf45) >> 1 & 1) != 0) {
      pcVar15 = strstr(pcVar29,";type=");
      if (pcVar15 == (char *)0x0) {
LAB_001eade4:
        if (**(char **)(lVar24 + 0x1580) == '\0') {
          puVar31 = &local_70;
          sVar17 = strlen(pcVar29);
          if (pcVar29[sVar17 - 1] != '/') {
            puVar31 = (undefined8 *)((ulong)puVar31 | 1);
            local_70 = CONCAT71(local_70._1_7_,0x2f);
          }
        }
        else {
          puVar31 = &local_70;
        }
        uVar22 = 0x69;
        if ((*(ulong *)(lVar24 + 0xf40) & 0x800) != 0) {
          uVar22 = 0x61;
        }
        FUN_001e64cc(puVar31,8,";type=%c",uVar22);
      }
      else if ((pcVar15[6] != '\0') && (pcVar15[7] == '\0')) {
        uVar10 = FUN_001f8b30();
        uVar10 = (uVar10 & 0xff) - 0x41;
        if ((8 < uVar10) || ((1 << (ulong)(uVar10 & 0x1f) & 0x109U) == 0)) goto LAB_001eade4;
      }
    }
    bVar7 = (*(uint *)((long)param_1 + 0x3fc) & 0x200080) == 0x80;
  }
  else {
LAB_001eaab8:
    bVar7 = false;
  }
  lVar13 = FUN_001f906c(param_1,"Accept");
  pcVar15 = "Accept: */*\r\n";
  if (lVar13 != 0) {
    pcVar15 = (char *)0x0;
  }
  plVar26[4] = (long)pcVar15;
  if (((iVar12 == 5) || (iVar12 == 2)) && (*(long *)(lVar24 + 0x14f8) != 0)) {
    if (*(long *)(lVar24 + 0x14f8) < 0) {
      *(undefined8 *)(lVar24 + 0x14f8) = 0;
    }
    else if ((*(byte *)(lVar24 + 0x15a4) >> 1 & 1) == 0) {
      if (param_1[0xa0] == 0) {
LAB_001eab58:
        lVar23 = *(long *)(lVar24 + 0x14f8);
        lVar13 = 0;
        do {
          uVar37 = *(ulong *)(lVar24 + 0xc10);
          if (lVar23 - lVar13 <= (long)uVar37) {
            uVar37 = FUN_0020436c();
          }
          lVar23 = (**(code **)(lVar24 + 0x1528))
                             (*(undefined8 *)(lVar24 + 0x1130),1,uVar37,
                              *(undefined8 *)(lVar24 + 0x1530));
          lVar13 = lVar23 + lVar13;
          if (uVar37 <= lVar23 - 1U) {
            FUN_001f3ae0(lVar24,"Could only read %ld bytes from the input",lVar13);
            return 0x1a;
          }
          lVar23 = *(long *)(lVar24 + 0x14f8);
        } while (lVar13 < lVar23);
      }
      else {
        FUN_001e95f0(lVar24,1);
        iVar9 = (*(code *)param_1[0xa0])(param_1[0xa1],*(undefined8 *)(lVar24 + 0x14f8),0);
        FUN_001e95f0(lVar24,0);
        if (iVar9 != 0) {
          if (iVar9 != 2) {
            FUN_001f3ae0(lVar24,"Could not seek stream");
            return 0x1a;
          }
          goto LAB_001eab58;
        }
      }
      if ((0 < *(long *)(lVar24 + 0x1518)) &&
         (lVar13 = *(long *)(lVar24 + 0x1518) - *(long *)(lVar24 + 0x14f8),
         *(long *)(lVar24 + 0x1518) = lVar13, lVar13 < 1)) {
        FUN_001f3ae0(lVar24,"File already completely uploaded");
        return 0x12;
      }
    }
  }
  if ((*(byte *)(lVar24 + 0x15a5) >> 1 & 1) != 0) {
    switch(iVar12) {
    case 1:
    case 6:
      lVar13 = FUN_001f906c(param_1,"Range");
      if (lVar13 == 0) {
        FUN_002044d4(param_1[0x8f]);
        lVar13 = FUN_001e6534("Range: bytes=%s\r\n",*(undefined8 *)(lVar24 + 0x14f0));
        param_1[0x8f] = lVar13;
      }
      else if ((iVar12 == 5) || (iVar12 == 2)) goto switchD_001eac70_caseD_2;
      break;
    case 2:
    case 5:
switchD_001eac70_caseD_2:
      lVar13 = FUN_001f906c(param_1,"Content-Range");
      if (lVar13 == 0) {
        FUN_002044d4(param_1[0x8f]);
        if (*(long *)(lVar24 + 0x800) < 0) {
          lVar23 = *(long *)(lVar24 + 0x1518);
          lVar13 = lVar23 + -1;
          pcVar15 = "Content-Range: bytes 0-%ld/%ld\r\n";
LAB_001eae6c:
          lVar13 = FUN_001e6534(pcVar15,lVar13,lVar23);
        }
        else {
          if (*(long *)(lVar24 + 0x14f8) == 0) {
            lVar13 = *(long *)(lVar24 + 0x14f0);
            pcVar15 = "Content-Range: bytes %s/%ld\r\n";
            lVar23 = *(long *)(lVar24 + 0x1518);
            goto LAB_001eae6c;
          }
          lVar13 = FUN_001e6534("Content-Range: bytes %s%ld/%ld\r\n",
                                *(undefined8 *)(lVar24 + 0x14f0),
                                *(long *)(lVar24 + 0x1518) + *(long *)(lVar24 + 0x14f8) + -1);
        }
        param_1[0x8f] = lVar13;
        if (lVar13 == 0) {
          return 0x1b;
        }
      }
    }
  }
  if (param_1[0xaa] == 0) {
    if ((*(int *)(lVar24 + 0x14e0) == 10) || ((int)param_1[0x46] == 10)) {
      puVar27 = &UNK_0392dc03;
    }
    else {
      lVar13 = *(long *)(lVar24 + 0xa40);
      puVar27 = &UNK_0392dc03;
      if (((10 < (int)param_1[0x46]) || (lVar13 != 1)) &&
         (puVar27 = &DAT_038d028b, lVar13 < 2 && lVar13 != 0)) {
        puVar27 = &UNK_0392dc03;
      }
    }
  }
  else {
    puVar27 = &DAT_039369f2;
  }
  local_78 = FUN_00204504(1,0x18);
  if (local_78 == 0) {
    return 0x1b;
  }
  iVar9 = FUN_001ecb14(&local_78,&DAT_039b96e8,puVar34);
  if (iVar9 != 0) {
    return iVar9;
  }
  pcVar15 = *(char **)(lVar24 + 0xe50);
  if (pcVar15 != (char *)0x0) {
    pcVar29 = pcVar15;
  }
  if (pcVar15 != (char *)0x0) {
    pcVar32 = (char *)0x0;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    pcVar29 = *(char **)(lVar24 + 0xf48);
    sVar17 = strlen(pcVar29);
    iVar9 = FUN_001ecbe4(&local_78,pcVar29,sVar17);
LAB_001eaf44:
    if (iVar9 != 0) {
      return iVar9;
    }
  }
  else {
    if (bVar7) {
      iVar9 = FUN_001ecb14(&local_78,"ftp://%s:%s@%s",param_1[0x42],param_1[0x43],pcVar29 + 6);
      goto LAB_001eaf44;
    }
    sVar17 = strlen(pcVar29);
    iVar9 = FUN_001ecbe4(&local_78,pcVar29,sVar17);
    if (iVar9 != 0) {
      return iVar9;
    }
    if (pcVar32 != (char *)0x0) {
      iVar9 = FUN_001ecb14(&local_78,&DAT_03979501,pcVar32);
      goto LAB_001eaf44;
    }
  }
  puVar20 = &DAT_03996322;
  puVar6 = &DAT_03996322;
  if ((undefined1 *)param_1[0x91] != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)param_1[0x91];
  }
  puVar2 = &DAT_03996322;
  if ((undefined1 *)param_1[0x8b] != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)param_1[0x8b];
  }
  puVar3 = &DAT_03996322;
  if ((undefined1 *)param_1[0x8e] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[0x8e];
  }
  if ((*(byte *)(lVar24 + 0x15a5) >> 1 & 1) != 0) {
    puVar20 = &DAT_03996322;
    if ((undefined1 *)param_1[0x8f] != (undefined1 *)0x0) {
      puVar20 = (undefined1 *)param_1[0x8f];
    }
  }
  puVar33 = &DAT_03996322;
  if (*(char **)(lVar24 + 0xdb0) == (char *)0x0) {
    puVar36 = &DAT_03996322;
  }
  else {
    puVar36 = &DAT_03996322;
    if (**(char **)(lVar24 + 0xdb0) != '\0') {
      puVar36 = &DAT_03996322;
      if ((undefined1 *)param_1[0x8c] != (undefined1 *)0x0) {
        puVar36 = (undefined1 *)param_1[0x8c];
      }
    }
  }
  puVar4 = &DAT_03996322;
  if ((undefined1 *)plVar26[4] != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)plVar26[4];
  }
  puVar5 = &DAT_03996322;
  if ((undefined1 *)param_1[0x94] != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)param_1[0x94];
  }
  if ((*(char **)(lVar24 + 0xcc8) != (char *)0x0) &&
     (puVar33 = &DAT_03996322, **(char **)(lVar24 + 0xcc8) != '\0')) {
    puVar33 = &DAT_03996322;
    if ((undefined1 *)param_1[0x8d] != (undefined1 *)0x0) {
      puVar33 = (undefined1 *)param_1[0x8d];
    }
  }
  puVar35 = &DAT_03996322;
  if (*(long *)(lVar24 + 0xf50) != 0) {
    puVar35 = &DAT_03996322;
    if ((undefined1 *)param_1[0x90] != (undefined1 *)0x0) {
      puVar35 = (undefined1 *)param_1[0x90];
    }
  }
  pcVar29 = "";
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    lVar13 = FUN_001ebd28(param_1,"Proxy-Connection");
    pcVar29 = "Proxy-Connection: Keep-Alive\r\n";
    if (lVar13 != 0) {
      pcVar29 = "";
    }
  }
  iVar9 = FUN_001ecb14(&local_78,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_70,puVar27,puVar6,
                       puVar2,puVar3,puVar20,puVar36,puVar4,puVar5,puVar33,puVar35,pcVar29,pcVar14);
  FUN_002044d4(param_1[0x8e]);
  param_1[0x8e] = 0;
  FUN_002044d4(param_1[0x8b]);
  param_1[0x8b] = 0;
  if (iVar9 != 0) {
    return iVar9;
  }
  if ((((*(byte *)(param_1[0x84] + 0x84) & 1) == 0) && ((int)param_1[0x46] != 0x14)) &&
     ((*(long *)(lVar24 + 0xa40) == 3 && (iVar9 = FUN_001ef8dc(local_78,param_1), iVar9 != 0)))) {
    return iVar9;
  }
  if ((local_88 != 0) || (*(long *)(lVar24 + 0xf70) != 0)) {
    if (*(long *)(lVar24 + 0xf70) == 0) {
LAB_001eb264:
      iVar11 = 0;
      iVar9 = 0;
    }
    else {
      FUN_001f43b0(lVar24,2,2);
      if (param_1[0x92] != 0) {
        lVar25 = param_1[0x92];
      }
      plVar18 = (long *)FUN_001dd23c(*(undefined8 *)(lVar24 + 0xf70),lVar25,
                                     *(undefined8 *)(lVar24 + 0x1580),
                                     *(uint *)(param_1[0x84] + 0x80) >> 1 & 1);
      FUN_001f43f8(lVar24,2);
      if (plVar18 == (long *)0x0) goto LAB_001eb264;
      iVar9 = 0;
      plVar38 = plVar18;
      do {
        lVar25 = plVar38[2];
        if (lVar25 != 0) {
          if (iVar9 == 0) {
            iVar11 = FUN_001ecb14(&local_78,"Cookie: ");
            if (iVar11 != 0) {
              iVar9 = 0;
              goto LAB_001eb2ec;
            }
            lVar25 = plVar38[2];
          }
          puVar6 = &DAT_03996322;
          if (iVar9 != 0) {
            puVar6 = &DAT_039b088a;
          }
          iVar11 = FUN_001ecb14(&local_78,"%s%s=%s",puVar6,plVar38[1],lVar25);
          if (iVar11 != 0) goto LAB_001eb2ec;
          iVar9 = iVar9 + 1;
        }
        plVar38 = (long *)*plVar38;
      } while (plVar38 != (long *)0x0);
      iVar11 = 0;
LAB_001eb2ec:
      FUN_001dd698(plVar18);
    }
    if ((local_88 != 0) && (iVar11 == 0)) {
      if ((iVar9 == 0) && (iVar11 = FUN_001ecb14(&local_78,"Cookie: "), iVar11 != 0)) {
        return iVar11;
      }
      puVar6 = &DAT_039b088a;
      if (iVar9 == 0) {
        puVar6 = &DAT_03996322;
      }
      iVar11 = FUN_001ecb14(&local_78,&DAT_039a01e3,puVar6,local_88);
      iVar9 = iVar9 + 1;
    }
    if ((iVar11 == 0) && (iVar9 != 0)) {
      iVar11 = FUN_001ecbe4(&local_78,&DAT_038a006b,2);
    }
    if (iVar11 != 0) {
      return iVar11;
    }
  }
  iVar9 = FUN_001ed1b4(lVar24,local_78);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_001ece94(param_1,0,local_78);
  if (iVar9 != 0) {
    return iVar9;
  }
  puVar30 = (ulong *)(plVar26 + 2);
  *puVar30 = 0;
  FUN_001f2da4(lVar24,0xffffffffffffffff);
  if (iVar12 - 3U < 2) {
    if (*(char *)((long)param_1 + 0x3fd) < '\0') {
      iVar12 = FUN_001ecb14(&local_78,"Content-Length: 0\r\n\r\n");
      if (iVar12 != 0) {
        return iVar12;
      }
      iVar12 = FUN_001ec864(&local_78,param_1,lVar24 + 0x1618,0,0);
      if (iVar12 == 0) {
        iVar12 = -1;
        goto LAB_001eb724;
      }
    }
    else {
      uVar37 = plVar26[1];
      *(ulong *)(lVar24 + 0x1518) = uVar37;
      if ((((uVar37 != 0xffffffffffffffff) && ((*(byte *)(lVar24 + 0x660) >> 6 & 1) == 0)) &&
          ((*(char *)((long)param_1 + 0x3fd) < '\0' ||
           (lVar25 = FUN_001f906c(param_1,"Content-Length"), lVar25 == 0)))) &&
         (iVar12 = FUN_001ecb14(&local_78,"Content-Length: %ld\r\n",uVar37), iVar12 != 0)) {
        return iVar12;
      }
      for (puVar31 = *(undefined8 **)(*plVar26 + 0x50); puVar31 != (undefined8 *)0x0;
          puVar31 = (undefined8 *)puVar31[1]) {
        iVar12 = FUN_001ecb14(&local_78,&DAT_0395cbc0,*puVar31);
        if (iVar12 != 0) {
          return iVar12;
        }
      }
      lVar25 = FUN_001f906c(param_1,"Expect");
      if (lVar25 == 0) {
        if (uVar37 < 0x401) {
          uVar8 = *(ushort *)(lVar24 + 0x15a4) & 0xfeff;
          goto LAB_001eb898;
        }
        iVar12 = FUN_001ed2b8(lVar24,param_1,local_78);
        if (iVar12 != 0) {
          return iVar12;
        }
      }
      else {
        uVar8 = FUN_001ecccc(lVar25,"Expect:","100-continue");
        uVar8 = *(ushort *)(lVar24 + 0x15a4) & 0xfe00 |
                *(ushort *)(lVar24 + 0x15a4) & 0xff | (uVar8 & 1) << 8;
LAB_001eb898:
        *(ushort *)(lVar24 + 0x15a4) = uVar8;
      }
      iVar12 = FUN_001ecbe4(&local_78,&DAT_038a006b,2);
      if (iVar12 != 0) {
        return iVar12;
      }
      FUN_001f2da4(lVar24,uVar37);
      *(undefined **)(lVar24 + 0x1528) = PTR_LAB_04372760;
      *(long *)(lVar24 + 0x1530) = *plVar26;
      *(undefined4 *)(plVar26 + 0x41) = 2;
      iVar12 = FUN_001ec864(&local_78,param_1,lVar24 + 0x1618,0,0);
      uVar28 = uVar37;
      if (iVar12 == 0) goto LAB_001eb92c;
    }
    pcVar29 = "Failed sending POST request";
LAB_001eb910:
    FUN_001f3ae0(lVar24,pcVar29);
    return iVar12;
  }
  if (iVar12 == 2) {
    if ((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) == 0) {
      uVar37 = *(ulong *)(lVar24 + 0x1518);
      if (uVar37 != 0xffffffffffffffff) goto LAB_001eb5c4;
    }
    else {
      uVar37 = 0;
LAB_001eb5c4:
      if (((*(byte *)(lVar24 + 0x660) >> 6 & 1) == 0) &&
         ((((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) != 0 ||
           (lVar25 = FUN_001f906c(param_1,"Content-Length"), lVar25 == 0)) &&
          (iVar12 = FUN_001ecb14(&local_78,"Content-Length: %ld\r\n",uVar37), iVar12 != 0)))) {
        return iVar12;
      }
    }
    lVar25 = FUN_001f906c(param_1,"Content-Type");
    if ((lVar25 == 0) &&
       (iVar12 = FUN_001ecb14(&local_78,"Content-Type: application/x-www-form-urlencoded\r\n"),
       iVar12 != 0)) {
      return iVar12;
    }
    lVar25 = FUN_001f906c(param_1,"Expect");
    if (lVar25 == 0) {
      if (uVar37 < 0x401) {
        uVar8 = *(ushort *)(lVar24 + 0x15a4) & 0xfeff;
        goto LAB_001eb744;
      }
      iVar12 = FUN_001ed2b8(lVar24,param_1,local_78);
      if (iVar12 != 0) {
        return iVar12;
      }
    }
    else {
      uVar8 = FUN_001ecccc(lVar25,"Expect:","100-continue");
      uVar8 = *(ushort *)(lVar24 + 0x15a4) & 0xfe00 |
              *(ushort *)(lVar24 + 0x15a4) & 0xff | (uVar8 & 1) << 8;
LAB_001eb744:
      *(ushort *)(lVar24 + 0x15a4) = uVar8;
    }
    if (*(long *)(lVar24 + 0x6e8) == 0) {
      iVar12 = FUN_001ecbe4(&local_78,&DAT_038a006b,2);
      if (iVar12 != 0) {
        return iVar12;
      }
      if (((*(byte *)(lVar24 + 0x660) >> 6 & 1) != 0) && (*(char *)((long)param_1 + 0x3fd) < '\0'))
      {
        pcVar29 = "0\r\n\r\n";
        uVar19 = 5;
        goto LAB_001eb7f4;
      }
      if (*(long *)(lVar24 + 0x1518) != 0) {
        uVar28 = uVar37;
        if (uVar37 == 0) {
          uVar28 = 0xffffffffffffffff;
        }
        FUN_001f2da4(lVar24,uVar28);
        if (-1 < *(char *)((long)param_1 + 0x3fd)) {
          uVar28 = 0;
          plVar26[1] = uVar37;
          plVar26[2] = (long)puVar30;
          goto LAB_001eb804;
        }
      }
LAB_001eb800:
      uVar28 = 0;
    }
    else {
      if ((((int)param_1[0x46] == 0x14) || (0xffff < (long)uVar37)) ||
         ((*(ushort *)(lVar24 + 0x15a4) >> 8 & 1) != 0)) {
        plVar26[1] = uVar37;
        plVar26[2] = *(long *)(lVar24 + 0x6e8);
        *(undefined4 *)(plVar26 + 0x41) = 2;
        *(undefined1 **)(lVar24 + 0x1528) = &LAB_001eca44;
        *(long **)(lVar24 + 0x1530) = param_1;
        FUN_001f2da4(lVar24,plVar26[1]);
        pcVar29 = "\r\n";
        uVar19 = 2;
LAB_001eb7f4:
        iVar12 = FUN_001ecbe4(&local_78,pcVar29,uVar19);
        if (iVar12 != 0) {
          return iVar12;
        }
        goto LAB_001eb800;
      }
      iVar12 = FUN_001ecbe4(&local_78,&DAT_038a006b,2);
      if (iVar12 != 0) {
        return iVar12;
      }
      if ((*(byte *)(lVar24 + 0x660) >> 6 & 1) == 0) {
        iVar12 = FUN_001ecbe4(&local_78,*(undefined8 *)(lVar24 + 0x6e8),uVar37);
        uVar28 = uVar37;
      }
      else {
        if (uVar37 == 0) {
          uVar28 = 5;
        }
        else {
          iVar12 = FUN_001ecb14(&local_78,&DAT_039a0310,uVar37 & 0xffffffff);
          if (iVar12 != 0) {
            return iVar12;
          }
          iVar12 = FUN_001ecbe4(&local_78,*(undefined8 *)(lVar24 + 0x6e8),uVar37);
          if (iVar12 != 0) {
            return iVar12;
          }
          iVar12 = FUN_001ecbe4(&local_78,&DAT_038a006b,2);
          if (iVar12 != 0) {
            return iVar12;
          }
          uVar28 = uVar37 + 7;
        }
        iVar12 = FUN_001ecbe4(&local_78,"0\r\n\r\n",5);
      }
      if (iVar12 != 0) {
        return iVar12;
      }
      FUN_001f2da4(lVar24,uVar37);
    }
LAB_001eb804:
    iVar12 = FUN_001ec864(&local_78,param_1,lVar24 + 0x1618,uVar28,0);
    if (iVar12 != 0) {
      pcVar29 = "Failed sending HTTP POST request";
      goto LAB_001eb910;
    }
    uVar28 = *puVar30;
LAB_001eb92c:
    iVar9 = -(uint)(uVar28 == 0);
  }
  else {
    if (iVar12 != 5) {
      iVar12 = FUN_001ecbe4(&local_78,&DAT_038a006b,2);
      if (iVar12 != 0) {
        return iVar12;
      }
      iVar12 = FUN_001ec864(&local_78,param_1,lVar24 + 0x1618,0,0);
      if (iVar12 != 0) {
        pcVar29 = "Failed sending HTTP request";
        goto LAB_001eb910;
      }
      iVar12 = -(uint)(*puVar30 == 0);
LAB_001eb724:
      FUN_001faaa4(lVar24,0,0xffffffffffffffff,1,iVar12);
      uVar37 = 0;
      goto LAB_001eb95c;
    }
    if ((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) == 0) {
      uVar37 = *(ulong *)(lVar24 + 0x1518);
      if (uVar37 != 0xffffffffffffffff) goto LAB_001eb560;
LAB_001eb5a0:
      iVar12 = FUN_001ed2b8(lVar24,param_1,local_78);
      if (iVar12 != 0) {
        return iVar12;
      }
      iVar9 = 0;
    }
    else {
      uVar37 = 0;
LAB_001eb560:
      if ((((*(byte *)(lVar24 + 0x660) >> 6 & 1) == 0) &&
          (((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) != 0 ||
           (lVar25 = FUN_001f906c(param_1,"Content-Length"), lVar25 == 0)))) &&
         (iVar12 = FUN_001ecb14(&local_78,"Content-Length: %ld\r\n",uVar37), iVar12 != 0)) {
        return iVar12;
      }
      if (uVar37 != 0) goto LAB_001eb5a0;
      iVar9 = -1;
    }
    iVar12 = FUN_001ecbe4(&local_78,&DAT_038a006b,2);
    if (iVar12 != 0) {
      return iVar12;
    }
    FUN_001f2da4(lVar24,uVar37);
    iVar12 = FUN_001ec864(&local_78,param_1,lVar24 + 0x1618,0,0);
    if (iVar12 != 0) {
      pcVar29 = "Failed sending PUT request";
      goto LAB_001eb910;
    }
  }
  FUN_001faaa4(lVar24,0,0xffffffffffffffff,1,iVar9);
LAB_001eb95c:
  if (*(long *)(lVar24 + 0x108) == 0) {
    iVar12 = 0;
  }
  else {
    FUN_001f3068(lVar24);
    iVar9 = FUN_001f27f0(param_1);
    iVar12 = 0;
    if (iVar9 != 0) {
      iVar12 = 0x2a;
    }
    if ((long)uVar37 <= *(long *)(lVar24 + 0x108)) {
      FUN_001f3934(lVar24,"upload completely sent off: %ld out of %ld bytes\n",
                   *(long *)(lVar24 + 0x108),uVar37);
      *(ushort *)(lVar24 + 0x660) = *(ushort *)(lVar24 + 0x660) | 4;
      *(undefined4 *)(lVar24 + 0x198) = 0;
      *(uint *)(lVar24 + 0x1c0) = *(uint *)(lVar24 + 0x1c0) & 0xfffffffd;
      thunk_FUN_001e9574(lVar24,0);
    }
  }
  if ((int)param_1[0x46] != 0x14) {
    return iVar12;
  }
  if ((*(ushort *)(lVar24 + 0x660) >> 6 & 1) == 0) {
    return iVar12;
  }
  *(ushort *)(lVar24 + 0x660) = *(ushort *)(lVar24 + 0x660) & 0xffbf;
  return iVar12;
}


