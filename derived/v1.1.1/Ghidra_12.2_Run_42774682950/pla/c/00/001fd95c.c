/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd95c; name: FUN_001fd95c
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_001fd95c(char *param_1,undefined8 *param_2,undefined1 *param_3)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  char *pcVar26;
  size_t sVar27;
  char *pcVar28;
  char *pcVar29;
  int *piVar30;
  ulong uVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  byte *pbVar35;
  undefined **ppuVar36;
  undefined8 *puVar37;
  long lVar38;
  char *pcVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  char *__s;
  size_t sVar42;
  long *plVar43;
  undefined1 auVar44 [16];
  ulong local_2f0;
  ulong local_2c8;
  long *local_2c0;
  ulong local_2b0;
  char *local_2a8;
  char local_268 [255];
  undefined1 local_169;
  undefined8 local_168;
  undefined8 local_160 [13];
  char local_f8;
  undefined1 auStack_f7 [32];
  undefined1 auStack_d7 [110];
  undefined1 local_69;
  
  uVar21 = FUN_001e95b0(*(undefined8 *)(param_1 + 0xd8));
  uVar22 = FUN_001e95bc(*(undefined8 *)(param_1 + 0xd8));
  *param_3 = 0;
  *param_2 = 0;
  if (*(long *)(param_1 + 0xf48) == 0) {
    return 3;
  }
  plVar23 = (long *)FUN_00204504(1,0x670);
  if (plVar23 != (long *)0x0) {
    lVar38 = *(long *)(*(long *)PTR_PTR_04372758 + 0x18);
    lVar24 = FUN_00204504(4,lVar38);
    if (lVar24 != 0) {
      plVar23[0x56] = lVar24 + lVar38;
      plVar23[0x59] = lVar24 + lVar38 * 2;
      plVar23[0x5e] = lVar24;
      plVar23[0x53] = lVar24;
      plVar23[0x5c] = lVar24 + lVar38 * 3;
      plVar23[0x84] = (long)&PTR_s_<no_protocol>_0411d4f8;
      *(undefined4 *)(plVar23 + 0x33) = 0xffffffff;
      plVar23[0xc] = -1;
      plVar23[0x32] = -1;
      plVar23[0x4b] = -1;
      plVar23[0x4c] = -1;
      FUN_001dee08(plVar23,1);
      auVar44 = FUN_001f8fb4();
      *(undefined1 (*) [16])(plVar23 + 0x49) = auVar44;
      auVar44 = FUN_001f8fb4();
      *(undefined1 (*) [16])(plVar23 + 0x87) = auVar44;
      plVar23[0x89] = *(long *)(param_1 + 0xf10);
      *plVar23 = (long)param_1;
      uVar34 = *(uint *)(param_1 + 0xc00);
      *(uint *)(plVar23 + 0x2f) = uVar34;
      *(undefined4 *)(plVar23 + 0x27) = 4;
      uVar20 = 0;
      if (*(char **)(param_1 + 0xd28) != (char *)0x0) {
        uVar20 = (uint)(**(char **)(param_1 + 0xd28) != '\0') << 4;
      }
      uVar33 = *(uint *)((long)plVar23 + 0x3fc);
      puVar1 = (uint *)((long)plVar23 + 0x3fc);
      *(uint *)((long)plVar23 + 0x3fc) = uVar33 & 0xffffffef | uVar20;
      if (uVar20 == 0) {
        uVar34 = 0;
        uVar33 = uVar33 & 0xffffffcf;
        *puVar1 = uVar33;
      }
      else {
        uVar7 = 0x20;
        if (1 < uVar34) {
          uVar7 = (uint)(uVar34 == 2) << 5;
        }
        uVar33 = uVar33 & 0xffffffcf | uVar20 | uVar7;
        *puVar1 = uVar33;
        uVar34 = uVar7 << 1 ^ 0x40;
      }
      uVar34 = uVar34 | uVar33 & 0xffffffbf;
      *puVar1 = uVar34;
      if ((*(char **)(param_1 + 0xd30) != (char *)0x0) && (**(char **)(param_1 + 0xd30) != '\0')) {
        uVar34 = uVar34 | 0x50;
        *puVar1 = uVar34;
      }
      uVar20 = (uint)(*(long *)(param_1 + 0xdf8) != 0) << 8;
      uVar33 = uVar34 & 0xff | uVar20;
      *(uint *)((long)plVar23 + 0x3fc) = uVar34 & 0xfffffe00 | uVar33;
      uVar15 = (*(uint *)(param_1 + 0xf40) >> 10 & 1) << 0xe;
      uVar7 = uVar34 & 0xffff8000 | uVar34 & 0x3e00 | uVar33 | uVar15;
      *(uint *)((long)plVar23 + 0x3fc) = uVar7;
      uVar33 = uVar34 & 0x7f | (uint)(*(long *)(param_1 + 0xde0) != 0) << 7;
      *(uint *)((long)plVar23 + 0x3fc) =
           uVar34 & 0xffff8000 | uVar34 & 0x3e00 | uVar20 | uVar15 | uVar33;
      uVar20 = uVar7 & 0x1ff00 | uVar33 | (*(uint *)(param_1 + 0xf40) >> 0x1e & 1) << 0x11;
      *(uint *)((long)plVar23 + 0x3fc) = uVar34 & 0xfffc0000 | uVar20;
      uVar20 = uVar20 | (*(uint *)(param_1 + 0xf40) >> 0x1f) << 0x12;
      *(uint *)((long)plVar23 + 0x3fc) = uVar34 & 0xfff80000 | uVar20;
      bVar12 = *(byte *)((long)plVar23 + 0x371);
      bVar5 = ((byte)param_1[0xac1] >> 2 & 1) << 2;
      bVar6 = bVar12 & 0xf8;
      *(byte *)((long)plVar23 + 0x371) = bVar6 | bVar12 & 3 | bVar5;
      bVar13 = param_1[0xac1];
      *(byte *)((long)plVar23 + 0x371) = bVar6 | bVar12 & 2 | bVar5 | bVar13 & 1;
      bVar12 = *(byte *)((long)plVar23 + 0x3f1);
      *(byte *)((long)plVar23 + 0x371) = bVar6 | bVar5 | bVar13 & 1 | param_1[0xac1] & 2U;
      bVar5 = ((byte)param_1[0xb99] >> 2 & 1) << 2;
      bVar6 = bVar12 & 0xf8;
      *(byte *)((long)plVar23 + 0x3f1) = bVar6 | bVar12 & 3 | bVar5;
      bVar13 = param_1[0xb99];
      *(byte *)((long)plVar23 + 0x3f1) = bVar6 | bVar12 & 2 | bVar5 | bVar13 & 1;
      *(byte *)((long)plVar23 + 0x3f1) = bVar6 | bVar5 | bVar13 & 1 | param_1[0xb99] & 2U;
      plVar23[0x86] = *(long *)(param_1 + 0xc30);
      *(uint *)((long)plVar23 + 0x3fc) =
           uVar34 & 0x7ff80000 | uVar20 |
           (uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x26) << 0x1f;
      uVar25 = FUN_001e7620(*(undefined8 *)(param_1 + 0xd8),1);
      if (((uVar25 & 1) == 0) || (plVar23[0x9d] != 0)) {
LAB_001fdc0c:
        FUN_001e370c(plVar23 + 0x95,&DAT_00200028);
        FUN_001e370c(plVar23 + 0x99,&DAT_00200028);
        if (*(long *)(param_1 + 0xcc0) != 0) {
          lVar24 = FUN_002044f4();
          plVar23[0xc9] = lVar24;
          if (lVar24 == 0) goto LAB_001fdc88;
        }
        *(undefined4 *)((long)plVar23 + 0x654) = *(undefined4 *)(param_1 + 0x704);
        *(undefined2 *)(plVar23 + 0xca) = *(undefined2 *)(param_1 + 0x700);
        plVar23[10] = *(long *)(param_1 + 0x768);
        plVar23[0xb] = *(long *)(param_1 + 0x770);
        *param_2 = plVar23;
        FUN_001fca84(param_1);
        lVar24 = *(long *)(param_1 + 0xf28);
        if (lVar24 == 0) {
          lVar24 = FUN_001fad18();
          *(long *)(param_1 + 0x1548) = lVar24;
          if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
        }
        else {
          *(long *)(param_1 + 0x1548) = lVar24;
        }
        if ((*(long *)(param_1 + 0xcb8) != 0) &&
           (uVar25 = FUN_001fac58(*(undefined8 *)(param_1 + 0xf48),0,8), (uVar25 & 1) == 0)) {
          if ((param_1[0xf68] & 1U) != 0) {
            FUN_002044d4(*(undefined8 *)(param_1 + 0xf48));
          }
          lVar38 = FUN_001e6534("%s://%s",*(undefined8 *)(param_1 + 0xcb8),
                                *(undefined8 *)(param_1 + 0xf48));
          if (lVar38 == 0) goto switchD_001fdd78_caseD_7;
          *(long *)(param_1 + 0xf48) = lVar38;
          param_1[0xf68] = param_1[0xf68] | 1;
        }
        if (*(long *)(param_1 + 0xf28) == 0) {
          uVar34 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x20);
          uVar17 = FUN_001fb304(lVar24,0,*(undefined8 *)(param_1 + 0xf48),
                                uVar34 >> 0x12 & 0x20 | uVar34 >> 0xc & 0x10 | 0x208);
          iVar18 = 3;
          switch(uVar17) {
          case 0:
            break;
          default:
            goto switchD_001fdd78_caseD_1;
          case 5:
            return 1;
          case 7:
            goto switchD_001fdd78_caseD_7;
          case 8:
            goto switchD_001fdd78_caseD_8;
          }
        }
        pcVar28 = param_1 + 0x1550;
        uVar17 = FUN_001faec0(lVar24,1,pcVar28,0);
        iVar18 = 3;
        switch(uVar17) {
        case 0:
          plVar2 = (long *)(param_1 + 0xd28);
          uVar41 = *(undefined8 *)pcVar28;
          ppuVar36 = &PTR_DAT_0411d4e8;
          puVar40 = (undefined8 *)PTR_PTR_04372790;
          do {
            iVar18 = FUN_001f8b48(*puVar40,uVar41);
            if (iVar18 != 0) {
              if (((puVar40 != (undefined8 *)0x0) &&
                  ((*(ulong *)(param_1 + 0xe78) & (ulong)*(uint *)(puVar40 + 0x10)) != 0)) &&
                 ((((byte)param_1[0x15a4] >> 1 & 1) == 0 ||
                  ((*(ulong *)(param_1 + 0xe80) & (ulong)*(uint *)(puVar40 + 0x10)) != 0)))) {
                plVar23[0x85] = (long)puVar40;
                plVar23[0x84] = (long)puVar40;
                uVar17 = FUN_001faec0(lVar24,2,param_1 + 0x1568,0x40);
                iVar18 = 3;
                switch(uVar17) {
                case 0:
                  lVar38 = FUN_002044f4(*(undefined8 *)(param_1 + 0x1568));
                  plVar23[0x42] = lVar38;
                  if (lVar38 == 0) goto switchD_001fdd78_caseD_7;
                  *puVar1 = *puVar1 | 0x80;
                  break;
                default:
                  goto switchD_001fdd78_caseD_1;
                case 5:
                  return 1;
                case 7:
                  goto switchD_001fdd78_caseD_7;
                case 8:
                  goto switchD_001fdd78_caseD_8;
                case 0xb:
                  break;
                }
                iVar18 = 3;
                iVar19 = FUN_001faec0(lVar24,3,param_1 + 0x1570,0x40);
                switch(iVar19) {
                case 5:
                  return 1;
                case 6:
                case 9:
                case 10:
                case 0xb:
                  goto switchD_001fdd78_caseD_1;
                case 7:
                  goto switchD_001fdd78_caseD_7;
                case 8:
                  goto switchD_001fdd78_caseD_8;
                case 0xc:
                  break;
                default:
                  if (iVar19 != 0) {
                    return 3;
                  }
                  lVar38 = FUN_002044f4(*(undefined8 *)(param_1 + 0x1570));
                  plVar23[0x43] = lVar38;
                  if (lVar38 == 0) goto switchD_001fdd78_caseD_7;
                  *puVar1 = *puVar1 | 0x80;
                }
                iVar19 = FUN_001faec0(lVar24,4,param_1 + 0x1578,0x40);
                iVar18 = 3;
                switch(iVar19) {
                case 5:
                  return 1;
                case 6:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                  goto switchD_001fdd78_caseD_1;
                case 7:
                  goto switchD_001fdd78_caseD_7;
                case 8:
                  goto switchD_001fdd78_caseD_8;
                case 0xd:
                  goto switchD_001fdf74_caseD_d;
                }
                if (iVar19 != 0) {
                  return 3;
                }
                lVar38 = FUN_002044f4(*(undefined8 *)(param_1 + 0x1578));
                plVar23[0x44] = lVar38;
                if (lVar38 == 0) goto switchD_001fdd78_caseD_7;
switchD_001fdf74_caseD_d:
                iVar18 = FUN_001faec0(lVar24,5,param_1 + 0x1558,0);
                if ((iVar18 != 0) &&
                   (iVar18 = FUN_001f8b48(&DAT_039b069a,*(undefined8 *)pcVar28), iVar18 == 0))
                goto switchD_001fdd78_caseD_7;
                uVar17 = FUN_001faec0(lVar24,7,param_1 + 0x1580,0);
                iVar18 = 3;
                switch(uVar17) {
                case 0:
                  goto switchD_001fdff8_caseD_0;
                default:
                  goto switchD_001fdd78_caseD_1;
                case 5:
                  return 1;
                case 7:
                  goto switchD_001fdd78_caseD_7;
                case 8:
                  goto switchD_001fdd78_caseD_8;
                }
              }
              break;
            }
            puVar40 = (undefined8 *)*ppuVar36;
            ppuVar36 = ppuVar36 + 1;
          } while (puVar40 != (undefined8 *)0x0);
          FUN_001f3ae0(param_1,"Protocol \"%s\" not supported or disabled in libcurl",uVar41);
          return 1;
        default:
          goto switchD_001fdd78_caseD_1;
        case 5:
          return 1;
        case 7:
          goto switchD_001fdd78_caseD_7;
        case 8:
          goto switchD_001fdd78_caseD_8;
        }
      }
      lVar24 = FUN_00204504(0x4000,1);
      plVar23[0x9d] = lVar24;
      if (lVar24 != 0) goto LAB_001fdc0c;
LAB_001fdc88:
      FUN_001e381c(plVar23 + 0x95,0);
      FUN_001e381c(plVar23 + 0x99,0);
      FUN_002044d4(plVar23[0x9d]);
      FUN_002044d4(plVar23[0xc9]);
      FUN_002044d4(plVar23[0x5e]);
    }
    FUN_002044d4(plVar23);
  }
  goto switchD_001fdd78_caseD_7;
switchD_001fdff8_caseD_0:
  iVar18 = FUN_001faec0(lVar24,6,param_1 + 0x1560,1);
  if (iVar18 == 0) {
    strtoul(*(char **)(param_1 + 0x1560),(char **)0x0,10);
    uVar34 = FUN_00204348();
    *(uint *)(plVar23 + 0x33) = uVar34 & 0xffff;
  }
  else {
    iVar18 = FUN_001f8b48(&DAT_039b069a,*(undefined8 *)pcVar28);
    if (iVar18 == 0) goto switchD_001fdd78_caseD_7;
  }
  FUN_001faec0(lVar24,8,param_1 + 0x1588,0);
  pcVar28 = "";
  if (*(char **)(param_1 + 0x1558) != (char *)0x0) {
    pcVar28 = *(char **)(param_1 + 0x1558);
  }
  if (*pcVar28 == '[') {
    pcVar28 = pcVar28 + 1;
    pcVar26 = strchr(pcVar28,0x25);
    *puVar1 = *puVar1 | 0x200;
    if (pcVar26 != (char *)0x0) {
      lVar24 = 3;
      iVar18 = strncmp("%25",pcVar26,3);
      if (iVar18 != 0) {
        FUN_001f3934(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        lVar24 = 1;
      }
      uVar25 = strtoul(pcVar26 + lVar24,(char **)&local_168,10);
      pcVar39 = local_168;
      if (*local_168 == ']') {
        sVar27 = strlen(local_168);
        memmove(pcVar26,pcVar39,sVar27 + 1);
        *(int *)(plVar23 + 0x17) = (int)uVar25;
      }
      else {
        FUN_001f3934(param_1,"Invalid IPv6 address format\n");
      }
    }
    pcVar26 = strchr(pcVar28,0x5d);
    if (pcVar26 != (char *)0x0) {
      *pcVar26 = '\0';
    }
  }
  lVar24 = FUN_002044f4(pcVar28);
  plVar23[0x18] = lVar24;
  if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
  plVar23[0x1a] = lVar24;
  if (*(int *)(param_1 + 0xe70) != 0) {
    *(int *)(plVar23 + 0x17) = *(int *)(param_1 + 0xe70);
  }
  if (*(long *)(param_1 + 0xe48) != 0) {
    lVar24 = FUN_002044f4();
    plVar23[0x45] = lVar24;
    if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
  }
  if (param_1[0x6c0] == '\0') {
    bVar16 = false;
  }
  else {
    memset(&local_168,0,0xb4);
    iVar18 = FUN_002052e8(&local_168);
    if (*plVar2 != 0) {
      FUN_001e674c(*(undefined8 *)PTR_stderr_04372330,
                   "Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.\n"
                  );
      FUN_002044d4(*plVar2);
      *plVar2 = 0;
    }
    if ((iVar18 == 0) && (local_168._4_1_ != '\0')) {
      iVar18 = FUN_001f4440(plVar2,local_160);
      if (iVar18 != 0) {
        return iVar18;
      }
      *(ulong *)(param_1 + 0x680) = (ulong)local_168 >> 0x30;
      *puVar1 = *puVar1 | 0x10;
      if (local_f8 != '\0') {
        iVar18 = FUN_001f4440(param_1 + 0xdf8,auStack_f7);
        if (iVar18 != 0) {
          return iVar18;
        }
        iVar18 = FUN_001f4440(param_1 + 0xe00,auStack_d7);
        if (iVar18 != 0) {
          return iVar18;
        }
        *puVar1 = *puVar1 | 0x100;
      }
    }
    bVar16 = true;
  }
  lVar24 = *plVar23;
  if ((*(byte *)((long)plVar23 + 0x3fd) & 1) != 0) {
    memset(&local_168,0,0x100);
    memset(local_268,0,0x100);
    if (*(char **)(lVar24 + 0xdf8) != (char *)0x0) {
      strncpy((char *)&local_168,*(char **)(lVar24 + 0xdf8),0x100);
      local_69 = 0;
    }
    if (*(char **)(lVar24 + 0xe00) != (char *)0x0) {
      strncpy(local_268,*(char **)(lVar24 + 0xe00),0x100);
      local_169 = 0;
    }
    iVar18 = FUN_001fc6dc(lVar24,&local_168,0,plVar23 + 0x30,0,0);
    if ((iVar18 != 0) || (iVar18 = FUN_001fc6dc(lVar24,local_268,0,plVar23 + 0x31,0,0), iVar18 != 0)
       ) goto LAB_001fe2c8;
  }
  if (*(long *)(lVar24 + 0xd28) != 0) {
    pcVar28 = (char *)FUN_002044f4();
    if (pcVar28 != (char *)0x0) goto LAB_001fe354;
    FUN_001f3ae0(lVar24,"memory shortage");
    pcVar26 = (char *)0x0;
LAB_001fe37c:
    iVar18 = 0x1b;
    goto LAB_001fe794;
  }
  pcVar28 = (char *)0x0;
LAB_001fe354:
  if (*(long *)(lVar24 + 0xd30) == 0) {
    pcVar26 = (char *)0x0;
  }
  else {
    pcVar26 = (char *)FUN_002044f4();
    if (pcVar26 == (char *)0x0) {
      FUN_001f3ae0(lVar24,"memory shortage");
      goto LAB_001fe37c;
    }
  }
  if ((bVar16) || (*(long *)(lVar24 + 0xe08) != 0)) {
LAB_001fe398:
    local_2a8 = (char *)0x0;
  }
  else {
    pcVar39 = "no_proxy";
    local_2a8 = (char *)FUN_0020188c("no_proxy");
    if (local_2a8 == (char *)0x0) {
      pcVar39 = "NO_PROXY";
      local_2a8 = (char *)FUN_0020188c("NO_PROXY");
      if (local_2a8 == (char *)0x0) goto LAB_001fe398;
    }
    FUN_001f3934(*plVar23,"Uses proxy env variable %s == \'%s\'\n",pcVar39,local_2a8);
  }
  pcVar39 = local_2a8;
  if (*(char **)(lVar24 + 0xe08) != (char *)0x0) {
    pcVar39 = *(char **)(lVar24 + 0xe08);
  }
  if ((pcVar39 == (char *)0x0) || (*pcVar39 == '\0')) goto LAB_001fe590;
  __s = (char *)plVar23[0x1a];
  iVar18 = FUN_001f8b48(&DAT_038e4910,pcVar39);
  if (iVar18 != 0) goto LAB_001fe3d4;
  sVar27 = strlen(pcVar39);
  if (*__s == '[') {
    pcVar29 = strchr(__s,0x5d);
    if (pcVar29 == (char *)0x0) goto LAB_001fe590;
    __s = __s + 1;
    local_2b0 = (long)pcVar29 - (long)__s;
  }
  else {
    local_2b0 = strlen(__s);
  }
  if (sVar27 == 0) goto LAB_001fe590;
  uVar25 = 0;
  goto LAB_001fe498;
LAB_001fe3d4:
  FUN_002044d4(pcVar28);
  FUN_002044d4(pcVar26);
  FUN_002044d4(local_2a8);
LAB_001fe754:
  uVar34 = *puVar1 & 0xffffff9f;
LAB_001fe760:
  pcVar26 = (char *)0x0;
  uVar20 = uVar34 >> 2 & 0x10;
  if ((uVar34 & 0x20) != 0) {
    uVar20 = 0x10;
  }
  *puVar1 = uVar20 | uVar34 & 0xffffffef;
  iVar18 = 0;
  if (uVar20 != 0) goto LAB_001fe790;
  pcVar28 = (char *)0x0;
  *puVar1 = uVar34 & 0xffffbe8f;
  goto LAB_001fe794;
LAB_001fe498:
  do {
    if (uVar25 < sVar27) {
      while ((ulong)(byte)pcVar39[uVar25] < 0x40 &&
             (1L << ((ulong)(byte)pcVar39[uVar25] & 0x3f) & 0x100100000001U) != 0) {
        uVar25 = uVar25 + 1;
        if (sVar27 == uVar25) goto LAB_001fe590;
      }
    }
    if (uVar25 == sVar27) break;
    sVar42 = uVar25;
    if (uVar25 < sVar27) {
      do {
        if ((ulong)(byte)pcVar39[sVar42] < 0x40 &&
            (1L << ((ulong)(byte)pcVar39[sVar42] & 0x3f) & 0x100100000001U) != 0) goto LAB_001fe52c;
        sVar42 = sVar42 + 1;
      } while (sVar27 != sVar42);
      sVar42 = sVar27;
    }
LAB_001fe52c:
    if (pcVar39[uVar25] == '.') {
      uVar25 = uVar25 + 1;
    }
    uVar31 = sVar42 - uVar25;
    if (uVar31 <= local_2b0) {
      iVar18 = FUN_001f8bec(pcVar39 + uVar25);
      if ((iVar18 != 0) && ((uVar31 == local_2b0 || (__s[(local_2b0 - uVar31) + -1] == '.'))))
      goto LAB_001fe3d4;
    }
    uVar25 = sVar42 + 1;
  } while (uVar25 < sVar27);
LAB_001fe590:
  if ((!bVar16 && pcVar28 == (char *)0x0) && (pcVar26 == (char *)0x0)) {
    pbVar35 = *(byte **)plVar23[0x84];
    uVar34 = (uint)*pbVar35;
    if (*pbVar35 == 0) {
      puVar40 = &local_168;
    }
    else {
      puVar37 = &local_168;
      do {
        pbVar35 = pbVar35 + 1;
        iVar18 = tolower(uVar34);
        puVar40 = (undefined8 *)((long)puVar37 + 1);
        *(char *)puVar37 = (char)iVar18;
        uVar34 = (uint)*pbVar35;
        puVar37 = puVar40;
      } while (uVar34 != 0);
    }
    *(undefined4 *)((long)puVar40 + 3) = 0x79786f;
    *(undefined4 *)puVar40 = 0x6f72705f;
    pcVar39 = (char *)&local_168;
    pcVar28 = (char *)FUN_0020188c(&local_168);
    if (pcVar28 == (char *)0x0) {
      iVar18 = FUN_001f8b48("http_proxy",&local_168);
      if (iVar18 == 0) {
        pcVar39 = (char *)&local_168;
        FUN_001f8c8c(&local_168,&local_168,0x80);
        pcVar28 = (char *)FUN_0020188c(&local_168);
        if (pcVar28 != (char *)0x0) goto LAB_001fe668;
      }
      pcVar39 = "all_proxy";
      pcVar28 = (char *)FUN_0020188c("all_proxy");
      if (pcVar28 == (char *)0x0) {
        pcVar39 = "ALL_PROXY";
        pcVar28 = (char *)FUN_0020188c("ALL_PROXY");
        if (pcVar28 == (char *)0x0) goto LAB_001fe680;
      }
    }
LAB_001fe668:
    FUN_001f3934(*plVar23,"Uses proxy env variable %s == \'%s\'\n",pcVar39,pcVar28);
  }
LAB_001fe680:
  FUN_002044d4(local_2a8);
  if ((pcVar28 != (char *)0x0) &&
     ((*pcVar28 == '\0' || ((*(byte *)(plVar23[0x84] + 0x84) >> 4 & 1) != 0)))) {
    FUN_002044d4(pcVar28);
    pcVar28 = (char *)0x0;
  }
  if (pcVar26 == (char *)0x0) {
LAB_001fe6d8:
    if (pcVar28 == (char *)0x0) goto LAB_001fe754;
    pcVar26 = (char *)0x0;
    bVar16 = false;
LAB_001fe6e4:
    iVar18 = FUN_0020002c(lVar24,plVar23,pcVar28,(int)plVar23[0x2f]);
    FUN_002044d4(pcVar28);
    if (iVar18 == 0) {
      if (bVar16) goto LAB_001fe70c;
      goto LAB_001fe730;
    }
  }
  else {
    if ((*pcVar26 == '\0') || ((*(byte *)(plVar23[0x84] + 0x84) >> 4 & 1) != 0)) {
      FUN_002044d4(pcVar26);
      goto LAB_001fe6d8;
    }
    if (pcVar28 != (char *)0x0) {
      bVar16 = true;
      goto LAB_001fe6e4;
    }
LAB_001fe70c:
    iVar18 = FUN_0020002c(lVar24,plVar23,pcVar26,(int)plVar23[0x27]);
    FUN_002044d4(pcVar26);
    if (iVar18 == 0) {
LAB_001fe730:
      if (plVar23[0x2a] == 0) {
        uVar34 = *puVar1 & 0xffffbfdf;
      }
      else {
        if ((*(byte *)(plVar23[0x84] + 0x80) & 3) == 0) {
          uVar34 = *puVar1;
          if (((*(byte *)(plVar23[0x84] + 0x85) >> 3 & 1) == 0) || ((uVar34 >> 0xe & 1) != 0)) {
            uVar34 = uVar34 | 0x4000;
            *puVar1 = uVar34;
          }
          else {
            plVar23[0x84] = (long)PTR_PTR_04372790;
          }
        }
        else {
          uVar34 = *puVar1;
        }
        uVar34 = uVar34 | 0x20;
      }
      *(uint *)((long)plVar23 + 0x3fc) = uVar34;
      if (plVar23[0x22] == 0) {
        uVar34 = uVar34 & 0xffffffbf;
      }
      else {
        if ((plVar23[0x2a] == 0) && (plVar23[0x28] == 0)) {
          lVar24 = plVar23[0x30];
          plVar23[0x30] = 0;
          plVar23[0x28] = lVar24;
          FUN_002044d4(plVar23[0x29]);
          lVar24 = plVar23[0x31];
          plVar23[0x31] = 0;
          plVar23[0x29] = lVar24;
          uVar34 = *(uint *)((long)plVar23 + 0x3fc);
        }
        uVar34 = uVar34 | 0x40;
      }
      goto LAB_001fe760;
    }
LAB_001fe2c8:
    pcVar26 = (char *)0x0;
  }
LAB_001fe790:
  pcVar28 = (char *)0x0;
LAB_001fe794:
  FUN_002044d4(pcVar26);
  FUN_002044d4(pcVar28);
  if (iVar18 != 0) {
    return iVar18;
  }
  if (((*(byte *)(plVar23[0x85] + 0x84) & 1) != 0) && ((*puVar1 >> 5 & 1) != 0)) {
    *puVar1 = *puVar1 | 0x4000;
  }
  if ((*(long *)(param_1 + 0x6a8) == 0) || (((byte)param_1[0x15a4] >> 4 & 1) == 0)) {
LAB_001fe814:
    plVar2 = plVar23 + 0x42;
    plVar3 = plVar23 + 0x43;
    if ((*(int *)(param_1 + 0xc58) == 2) && (*(char *)puVar1 < '\0')) {
      bVar16 = *plVar2 != 0;
      if (bVar16) {
        FUN_002044d4();
        *plVar2 = 0;
      }
      bVar8 = *plVar3 != 0;
      if (bVar8) {
        FUN_002044d4();
        *plVar3 = 0;
      }
      *puVar1 = *puVar1 & 0xffffff7f;
    }
    else {
      bVar16 = false;
      bVar8 = false;
    }
    if (*(long *)(param_1 + 0xde0) != 0) {
      FUN_002044d4(*plVar2);
      lVar24 = FUN_002044f4(*(undefined8 *)(param_1 + 0xde0));
      *plVar2 = lVar24;
      if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
      bVar16 = true;
      *puVar1 = *puVar1 | 0x80;
    }
    if (*(long *)(param_1 + 0xde8) != 0) {
      FUN_002044d4(*plVar3);
      lVar24 = FUN_002044f4(*(undefined8 *)(param_1 + 0xde8));
      *plVar3 = lVar24;
      if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
      bVar8 = true;
      *puVar1 = *puVar1 | 0x80;
    }
    if (*(long *)(param_1 + 0xdf0) != 0) {
      FUN_002044d4(plVar23[0x44]);
      lVar24 = FUN_002044f4(*(undefined8 *)(param_1 + 0xdf0));
      plVar23[0x44] = lVar24;
      if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
    }
    *puVar1 = *puVar1 & 0xffefffff;
    if ((*(int *)(param_1 + 0xc58) == 0) ||
       (((((char *)*plVar2 != (char *)0x0 && (*(char *)*plVar2 != '\0')) &&
         ((char *)*plVar3 != (char *)0x0)) && (*(char *)*plVar3 != '\0')))) {
joined_r0x001fe988:
      if (bVar16) {
LAB_001fea14:
        uVar17 = FUN_001fb304(*(undefined8 *)(param_1 + 0x1548),2,*plVar2,0);
        switch(uVar17) {
        case 0:
          break;
        default:
          return 3;
        case 5:
          return 1;
        case 7:
          goto switchD_001fdd78_caseD_7;
        case 8:
          goto switchD_001fdd78_caseD_8;
        }
      }
    }
    else {
      local_168 = (char *)((ulong)local_168 & 0xffffffffffffff00);
      local_268[0] = '\0';
      iVar18 = FUN_00201468(plVar23[0x1a],plVar2,plVar3,&local_168,local_268,
                            *(undefined8 *)(param_1 + 0xd20));
      if (0 < iVar18) {
        FUN_001f3934(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n",
                     plVar23[0x1a]);
        goto joined_r0x001fe988;
      }
      if (iVar18 < 0) goto switchD_001fdd78_caseD_7;
      *puVar1 = *puVar1 | 0x100080;
      bVar8 = (bool)(bVar8 | local_268[0] != '\0');
      if (bVar16 || (char)local_168 != '\0') goto LAB_001fea14;
    }
    if (bVar8) {
      uVar17 = FUN_001fb304(*(undefined8 *)(param_1 + 0x1548),3,*plVar3,0);
      switch(uVar17) {
      case 0:
        break;
      default:
        return 3;
      case 5:
        return 1;
      case 7:
        goto switchD_001fdd78_caseD_7;
      case 8:
switchD_001fdd78_caseD_8:
        return 0x43;
      }
    }
    if (((*(byte *)(plVar23[0x84] + 0x84) >> 5 & 1) == 0) || (*(char *)puVar1 < '\0')) {
      pcVar28 = "";
      pcVar26 = "";
    }
    else {
      pcVar26 = "ftp@example.com";
      pcVar28 = "anonymous";
    }
    if (*plVar2 == 0) {
      lVar24 = FUN_002044f4(pcVar28);
      *plVar2 = lVar24;
      if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
    }
    if (*plVar3 == 0) {
      lVar24 = FUN_002044f4(pcVar26);
      *plVar3 = lVar24;
      if ((lVar24 == 0) && (*plVar2 != 0)) {
        lVar24 = FUN_002044f4(&DAT_03996322);
        *plVar3 = lVar24;
      }
      else if (lVar24 != 0) goto LAB_001feb20;
    }
    else {
LAB_001feb20:
      puVar40 = *(undefined8 **)(param_1 + 0xa20);
      if (puVar40 != (undefined8 *)0x0) {
        do {
          pcVar28 = (char *)*puVar40;
          if (*pcVar28 == ':') {
LAB_001febbc:
            pcVar26 = pcVar28 + 1;
            if (*pcVar26 != ':') {
              pcVar28 = strchr(pcVar26,0x3a);
              if (pcVar28 != (char *)0x0) {
                local_168 = (char *)0x0;
                lVar24 = strtol(pcVar26,(char **)&local_168,10);
                if ((local_168 == pcVar28) && (lVar24 == (int)plVar23[0x33])) {
                  pcVar28 = pcVar28 + 1;
                  goto LAB_001febd0;
                }
              }
              goto LAB_001fed1c;
            }
            pcVar28 = pcVar28 + 2;
LAB_001febd0:
            if (*pcVar28 == '\0') goto LAB_001fed1c;
            pcVar28 = (char *)FUN_002044f4();
            if (pcVar28 == (char *)0x0) {
              return 0x1b;
            }
            if (*pcVar28 == '[') {
              FUN_001f3ae0(param_1,"Use of IPv6 in *_CONNECT_TO without IPv6 support built-in!");
              FUN_002044d4(pcVar28);
              return 4;
            }
            pcVar26 = strchr(pcVar28,0x3a);
            if (pcVar26 == (char *)0x0) {
LAB_001fec8c:
              uVar25 = 0xffffffff;
            }
            else {
              local_168 = (char *)0x0;
              *pcVar26 = '\0';
              pcVar26 = pcVar26 + 1;
              if (*pcVar26 == '\0') goto LAB_001fec8c;
              uVar25 = strtol(pcVar26,(char **)&local_168,10);
              if (local_168 == (char *)0x0) {
                if (uVar25 >> 0x10 != 0) goto LAB_001fed00;
              }
              else if ((uVar25 >> 0x10 != 0) || (*local_168 != '\0')) {
LAB_001fed00:
                FUN_001f3934(param_1,"No valid port number in connect to host string (%s)\n",pcVar26
                            );
                FUN_002044d4(pcVar28);
                goto LAB_001fed1c;
              }
            }
            iVar18 = (int)uVar25;
            pcVar26 = (char *)FUN_002044f4(pcVar28);
            FUN_002044d4(pcVar28);
            if (pcVar26 == (char *)0x0) {
              return 0x1b;
            }
            if (*pcVar26 == '\0') goto LAB_001fed28;
            plVar23[0x1e] = (long)pcVar26;
            plVar23[0x20] = (long)pcVar26;
            *(uint *)((long)plVar23 + 0x3fc) = *(uint *)((long)plVar23 + 0x3fc) | 4;
            FUN_001f3934(param_1,"Connecting to hostname: %s\n",pcVar26);
            bVar16 = true;
            if (iVar18 < 0) goto LAB_001fece4;
LAB_001fed48:
            iVar18 = (int)uVar25;
            *(int *)((long)plVar23 + 0x19c) = iVar18;
            *(uint *)((long)plVar23 + 0x3fc) = *(uint *)((long)plVar23 + 0x3fc) | 8;
            FUN_001f3934(param_1,"Connecting to port: %d\n",uVar25 & 0xffffffff);
          }
          else {
            bVar16 = (*(uint *)((long)plVar23 + 0x3fc) & 0x200) == 0;
            puVar9 = &DAT_038aa492;
            if (bVar16) {
              puVar9 = &DAT_03996322;
            }
            puVar10 = &DAT_03904308;
            if (bVar16) {
              puVar10 = &DAT_03996322;
            }
            pcVar26 = (char *)FUN_001e6534("%s%s%s",puVar9,plVar23[0x1a],puVar10);
            if (pcVar26 == (char *)0x0) {
              return 0x1b;
            }
            sVar27 = strlen(pcVar26);
            iVar18 = FUN_001f8bec(pcVar28,pcVar26,sVar27);
            FUN_002044d4(pcVar26);
            if ((iVar18 != 0) && (pcVar28 = pcVar28 + sVar27, *pcVar28 == ':')) goto LAB_001febbc;
LAB_001fed1c:
            pcVar26 = (char *)0x0;
            uVar25 = 0xffffffff;
LAB_001fed28:
            *puVar1 = *puVar1 & 0xfffffffb;
            FUN_002044d4(pcVar26);
            bVar16 = false;
            iVar18 = (int)uVar25;
            if (-1 < iVar18) goto LAB_001fed48;
LAB_001fece4:
            *puVar1 = *puVar1 & 0xfffffff7;
          }
        } while (((iVar18 == -1) && (!bVar16)) &&
                (puVar40 = (undefined8 *)puVar40[1], puVar40 != (undefined8 *)0x0));
      }
      pcVar28 = (char *)plVar23[0x1a];
      plVar23[0x1b] = (long)pcVar28;
      do {
        cVar14 = *pcVar28;
        if (cVar14 == '\0') goto LAB_001fedb0;
        pcVar28 = pcVar28 + 1;
      } while (-1 < cVar14);
      FUN_001f3934(*plVar23,"IDN support not present, can\'t parse Unicode domains\n");
LAB_001fedb0:
      uVar34 = *puVar1;
      if ((uVar34 >> 2 & 1) != 0) {
        pcVar28 = (char *)plVar23[0x20];
        plVar23[0x21] = (long)pcVar28;
        do {
          cVar14 = *pcVar28;
          if (cVar14 == '\0') goto LAB_001fedec;
          pcVar28 = pcVar28 + 1;
        } while (-1 < cVar14);
        FUN_001f3934(*plVar23,"IDN support not present, can\'t parse Unicode domains\n");
        uVar34 = *puVar1;
      }
LAB_001fedec:
      if ((uVar34 >> 5 & 1) != 0) {
        pcVar28 = (char *)plVar23[0x2c];
        plVar23[0x2d] = (long)pcVar28;
        do {
          cVar14 = *pcVar28;
          if (cVar14 == '\0') goto LAB_001fee20;
          pcVar28 = pcVar28 + 1;
        } while (-1 < cVar14);
        FUN_001f3934(*plVar23,"IDN support not present, can\'t parse Unicode domains\n");
        uVar34 = *puVar1;
      }
LAB_001fee20:
      if ((uVar34 >> 6 & 1) != 0) {
        pcVar28 = (char *)plVar23[0x24];
        plVar23[0x25] = (long)pcVar28;
        do {
          cVar14 = *pcVar28;
          if (cVar14 == '\0') goto LAB_001fee54;
          pcVar28 = pcVar28 + 1;
        } while (-1 < cVar14);
        FUN_001f3934(*plVar23,"IDN support not present, can\'t parse Unicode domains\n");
        uVar34 = *puVar1;
      }
LAB_001fee54:
      if ((uVar34 >> 2 & 1) != 0) {
        iVar18 = FUN_001f8b48(plVar23[0x20],plVar23[0x1a]);
        uVar34 = *(uint *)((long)plVar23 + 0x3fc);
        if (iVar18 != 0) {
          uVar34 = uVar34 & 0xfffffffb;
          *puVar1 = uVar34;
        }
      }
      if (((uVar34 >> 3 & 1) != 0) && (*(int *)((long)plVar23 + 0x19c) == (int)plVar23[0x33])) {
        uVar34 = uVar34 & 0xfffffff7;
        *puVar1 = uVar34;
      }
      if (((uVar34 & 0xc) != 0) && ((uVar34 >> 5 & 1) != 0)) {
        *puVar1 = uVar34 | 0x4000;
      }
      *(undefined4 *)((long)plVar23 + 0xbc) = 1;
      lVar24 = plVar23[0x84];
      if (*(code **)(lVar24 + 8) != (code *)0x0) {
        iVar18 = (**(code **)(lVar24 + 8))(plVar23);
        if (iVar18 != 0) {
          return iVar18;
        }
        lVar24 = plVar23[0x84];
      }
      if (plVar23[0x32] < 0) {
        plVar23[0x32] = *(long *)(lVar24 + 0x78);
      }
      puVar9 = PTR_FUN_04372798;
      plVar23[0x4e] = (long)PTR_FUN_04372798;
      puVar10 = PTR_FUN_043727a0;
      plVar23[0x50] = (long)PTR_FUN_043727a0;
      plVar23[0x4f] = (long)puVar9;
      plVar23[0x51] = (long)puVar10;
      *(uint *)((long)plVar23 + 0x3fc) =
           *(uint *)((long)plVar23 + 0x3fc) & 0xf0000000 |
           *(uint *)((long)plVar23 + 0x3fc) & 0x7ffffff |
           ((uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x2d) & 1) << 0x1b;
      *(undefined8 *)(param_1 + 0xb58) = *(undefined8 *)(param_1 + 0xd88);
      *(undefined8 *)(param_1 + 0xa58) = *(undefined8 *)(param_1 + 0xd50);
      *(undefined8 *)(param_1 + 0xb30) = *(undefined8 *)(param_1 + 0xd58);
      *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(param_1 + 0xdb8);
      *(undefined8 *)(param_1 + 0xbb0) = *(undefined8 *)(param_1 + 0xdd0);
      *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xd60);
      *(undefined8 *)(param_1 + 0xb38) = *(undefined8 *)(param_1 + 0xd68);
      *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(param_1 + 0xc90);
      *(undefined8 *)(param_1 + 0xbd0) = *(undefined8 *)(param_1 + 0xc98);
      *(undefined8 *)(param_1 + 0xa70) = *(undefined8 *)(param_1 + 0xda8);
      *(undefined8 *)(param_1 + 0xb48) = *(undefined8 *)(param_1 + 0xda8);
      *(undefined8 *)(param_1 + 0xa78) = *(undefined8 *)(param_1 + 0xda0);
      *(undefined8 *)(param_1 + 0xb50) = *(undefined8 *)(param_1 + 0xda0);
      *(undefined8 *)(param_1 + 0xa88) = *(undefined8 *)(param_1 + 0xd90);
      *(undefined8 *)(param_1 + 0xba8) = *(undefined8 *)(param_1 + 0xdc0);
      *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_1 + 0xc88);
      *(undefined8 *)(param_1 + 0xb40) = *(undefined8 *)(param_1 + 0xc88);
      *(undefined8 *)(param_1 + 0xb00) = *(undefined8 *)(param_1 + 0xce8);
      *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(param_1 + 0xcf0);
      *(undefined8 *)(param_1 + 0xa80) = *(undefined8 *)(param_1 + 0xd80);
      *(undefined8 *)(param_1 + 0xb60) = *(undefined8 *)(param_1 + 0xd98);
      *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)(param_1 + 0xd08);
      *(undefined8 *)(param_1 + 0xbe0) = *(undefined8 *)(param_1 + 0xd10);
      *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0xdc8);
      *(undefined8 *)(param_1 + 0xaf0) = *(undefined8 *)(param_1 + 0xc80);
      *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)(param_1 + 0xc80);
      *(undefined8 *)(param_1 + 0xb10) = *(undefined8 *)(param_1 + 0xcf8);
      plVar4 = plVar23 + 0x5f;
      *(undefined8 *)(param_1 + 0xbe8) = *(undefined8 *)(param_1 + 0xd00);
      uVar25 = FUN_00203848(param_1 + 0xa48);
      if ((uVar25 & 1) != 0) {
        uVar25 = FUN_00203848(param_1 + 0xb20);
        if ((uVar25 & 1) != 0) {
          auVar44 = FUN_001f8fb4();
          iVar18 = FUN_001f8fe0(auVar44._0_8_,auVar44._8_8_,
                                *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x40),
                                *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x48));
          if (999 < iVar18) {
            local_160[0] = 0;
            local_168 = param_1;
            uVar25 = FUN_001df3b8(param_1,*(undefined8 *)(param_1 + 0x1100),&local_168,FUN_002004fc)
            ;
            while ((uVar25 & 1) != 0) {
              FUN_001fcddc(param_1,local_160[0],1);
              uVar25 = FUN_001df3b8(param_1,*(undefined8 *)(param_1 + 0x1100),&local_168,
                                    FUN_002004fc);
            }
            *(undefined1 (*) [16])(*(long *)(param_1 + 0x1100) + 0x40) = auVar44;
          }
          if (((((uint)*(ulong *)(param_1 + 0xf40) >> 0x1d & 1) != 0) &&
              (((byte)param_1[0x15a4] >> 1 & 1) == 0)) ||
             ((*(ulong *)(param_1 + 0xf40) >> 0x26 & 1) != 0)) goto LAB_001ff810;
          uVar20 = FUN_001fff40(param_1,plVar23);
          uVar34 = uVar20;
          if ((uVar20 & 1) != 0) {
            uVar25 = FUN_001f2400(param_1,plVar23);
            uVar34 = uVar20 & 0xfffffffe;
            if ((uVar25 & 1) == 0) {
              uVar34 = uVar20;
            }
          }
          piVar30 = (int *)FUN_001df080(plVar23,*(undefined8 *)(param_1 + 0x1100));
          if (piVar30 == (int *)0x0) {
LAB_001ff808:
            FUN_001defac(param_1);
LAB_001ff810:
            bVar16 = false;
LAB_001ff814:
            if ((*(byte *)(plVar23[0x84] + 0x85) & 1) != 0) {
              uVar25 = *(ulong *)(param_1 + 0xf40);
              if ((uVar25 >> 0x2f & 1) != 0) {
                *puVar1 = *puVar1 | 0x20000000;
                uVar25 = *(ulong *)(param_1 + 0xf40);
              }
              if ((uVar25 >> 0x2e & 1) != 0) {
                *puVar1 = *puVar1 | 0x10000000;
              }
            }
            if (bVar16) {
LAB_001ff854:
              FUN_001f3934(param_1,"No connections available.\n");
              FUN_001fcf00(plVar23);
              *param_2 = 0;
              return 0x59;
            }
            lVar24 = FUN_001df080(plVar23,*(undefined8 *)(param_1 + 0x1100));
            if (((uVar21 == 0) || (lVar24 == 0)) || (*(ulong *)(lVar24 + 8) < uVar21)) {
              FUN_001defac(param_1);
            }
            else {
              lVar24 = FUN_001df660(param_1);
              FUN_001defac(param_1);
              if (lVar24 == 0) {
                FUN_001f3934(param_1,"No more connections allowed to host: %zu\n",uVar21);
                goto LAB_001ff854;
              }
              FUN_001fcddc(param_1,lVar24,0);
            }
            if ((uVar22 != 0) && (uVar21 = FUN_001defc0(param_1), uVar22 <= uVar21)) {
              lVar24 = FUN_001df530(param_1);
              if (lVar24 == 0) {
                FUN_001f3934(param_1,"No connections available in cache\n");
                goto LAB_001ff854;
              }
              FUN_001fcddc(param_1,lVar24,0);
            }
            iVar18 = FUN_001df138(*(undefined8 *)(param_1 + 0x1100),plVar23);
            if (iVar18 != 0) {
              return iVar18;
            }
            local_2c0 = plVar23;
          }
          else {
            iVar18 = *piVar30;
            if ((iVar18 == 2) || (*(long *)(param_1 + 0xd8) == 0)) {
              local_2c8 = 0;
            }
            else {
              local_2c8 = *(ulong *)(*(long *)(param_1 + 0xd8) + 0x168);
            }
            lVar24 = 0xd0;
            if ((*(uint *)((long)plVar23 + 0x3fc) & 4) != 0) {
              lVar24 = 0x100;
            }
            pcVar28 = "can multiplex";
            if (iVar18 != 2) {
              pcVar28 = "serially";
            }
            pcVar26 = "can pipeline";
            if (iVar18 != 1) {
              pcVar26 = pcVar28;
            }
            FUN_001f3934(param_1,"Found bundle for host %s: %p [%s]\n",
                         *(undefined8 *)((long)plVar23 + lVar24),piVar30,pcVar26);
            if (uVar34 != 0) {
              iVar18 = *piVar30;
              if (0 < iVar18) {
LAB_001ff288:
                if (iVar18 == 1) {
                  uVar25 = FUN_001e7620(*(undefined8 *)(param_1 + 0xd8),1);
                  if ((uVar25 & 1) != 0) {
                    iVar18 = *piVar30;
                    goto LAB_001ff2a4;
                  }
                  pcVar28 = "Could pipeline, but not asked to!\n";
                }
                else {
LAB_001ff2a4:
                  if ((iVar18 != 2) ||
                     (uVar25 = FUN_001e7620(*(undefined8 *)(param_1 + 0xd8),2), (uVar25 & 1) != 0))
                  goto LAB_001ff2dc;
                  pcVar28 = "Could multiplex, but not asked to!\n";
                }
                FUN_001f3934(param_1,pcVar28);
                uVar34 = 0;
                goto LAB_001ff2dc;
              }
              if ((iVar18 != 0) || (((byte)param_1[0xf46] >> 1 & 1) == 0)) {
                FUN_001f3934(param_1,"Server doesn\'t support multi-use (yet)\n");
                iVar18 = *piVar30;
                uVar34 = 0;
                goto LAB_001ff288;
              }
              FUN_001f3934(param_1,"Server doesn\'t support multi-use yet, wait\n");
              FUN_001defac(param_1);
LAB_001ffdc0:
              bVar16 = true;
              goto LAB_001ff814;
            }
LAB_001ff2dc:
            puVar40 = *(undefined8 **)(piVar30 + 4);
            if (puVar40 == (undefined8 *)0x0) goto LAB_001ff808;
            local_2c0 = (long *)0x0;
            bVar16 = false;
            local_2f0 = local_2c8;
            do {
              while( true ) {
                plVar43 = (long *)*puVar40;
                puVar40 = (undefined8 *)puVar40[2];
                if (*(int *)((long)plVar43 + 0x3fc) < 0) goto joined_r0x001ff770;
                uVar25 = FUN_00200538(plVar43,param_1);
                if ((uVar25 & 1) != 0) break;
                uVar25 = plVar43[0x9c] + plVar43[0x98];
                if (uVar34 == 0) {
                  if (uVar25 == 0) {
                    if ((char)plVar43[0x11] == '\0') {
                      uVar25 = plVar43[0xc];
                      pcVar28 = "Connection #%ld is still name resolving, can\'t reuse\n";
                    }
                    else {
                      if ((int)plVar43[0x4b] == -1) {
                        if ((*(uint *)((long)plVar43 + 0x3fc) & 1) == 0) {
                          bVar16 = true;
                        }
                      }
                      else if ((*(uint *)((long)plVar43 + 0x3fc) & 1) == 0) goto LAB_001ff3dc;
                      uVar25 = plVar43[0xc];
                      pcVar28 = "Connection #%ld isn\'t open enough, can\'t reuse\n";
                    }
                    goto LAB_001ff630;
                  }
                }
                else if (((*(uint *)((long)plVar43 + 0x3fc) ^ 0xffffffff) & 0x1001) != 0) {
                  if ((*(uint *)((long)plVar43 + 0x3fc) >> 0x1a & 1) == 0) {
                    if ((long *)plVar43[0x95] == (long *)0x0) {
                      lVar24 = 0;
                    }
                    else {
                      lVar24 = *(long *)plVar43[0x95];
                    }
                    lVar38 = 0;
                    if ((long *)plVar43[0x99] != (long *)0x0) {
                      lVar38 = *(long *)plVar43[0x99];
                    }
                    if (lVar24 == 0) {
                      if (lVar38 == 0) goto LAB_001ff3dc;
                      lVar24 = lVar38;
                    }
                    uVar31 = FUN_001fff40(lVar24,plVar43);
                    if ((uVar31 & 1) == 0) goto joined_r0x001ff770;
                  }
LAB_001ff3dc:
                  lVar24 = plVar23[0x84];
                  if ((((*(uint *)(plVar43[0x84] + 0x84) ^ *(uint *)(lVar24 + 0x84)) & 1) == 0) ||
                     ((iVar18 = FUN_002005e4(*(undefined4 *)(plVar43[0x84] + 0x80)),
                      iVar18 == *(int *)(lVar24 + 0x80) &&
                      ((*(byte *)((long)plVar43 + 0x66c) & 1) != 0)))) {
                    uVar33 = *puVar1;
                    uVar20 = *(uint *)((long)plVar43 + 0x3fc) ^ uVar33;
                    if (((uVar20 >> 5 & 1) == 0) &&
                       (uVar7 = uVar33 >> 6 & 1,
                       uVar7 == (*(uint *)((long)plVar43 + 0x3fc) >> 6 & 1))) {
                      if (uVar7 != 0) {
                        uVar31 = FUN_0020078c(plVar23 + 0x22,plVar43 + 0x22);
                        if ((uVar31 & 1) == 0) goto joined_r0x001ff770;
                        uVar33 = *puVar1;
                        uVar20 = *(uint *)((long)plVar43 + 0x3fc) ^ uVar33;
                      }
                      if ((uVar20 & 0xc) == 0) {
                        if ((uVar33 >> 5 & 1) == 0) {
LAB_001ff448:
                          if (((uVar34 != 0) || (*plVar43 == 0)) &&
                             ((plVar43[0x98] + plVar43[0x9c] == 0 ||
                              ((*plVar43 == 0 ||
                               (*(long *)(*plVar43 + 0xd8) == *(long *)(*plVar23 + 0xd8))))))) {
                            pcVar28 = (char *)plVar23[0xc9];
                            if (((pcVar28 == (char *)0x0) && ((short)plVar23[0xca] == 0)) ||
                               ((((short)plVar43[0xca] == (short)plVar23[0xca] &&
                                 (*(int *)((long)plVar43 + 0x654) == *(int *)((long)plVar23 + 0x654)
                                 )) && ((pcVar28 == (char *)0x0 ||
                                        (((char *)plVar43[0xc9] != (char *)0x0 &&
                                         (iVar18 = strcmp((char *)plVar43[0xc9],pcVar28),
                                         iVar18 == 0)))))))) {
                              puVar37 = (undefined8 *)plVar23[0x84];
                              uVar20 = *(uint *)((long)puVar37 + 0x84);
                              if (((uVar20 >> 7 & 1) != 0) ||
                                 ((iVar18 = strcmp((char *)*plVar2,(char *)plVar43[0x42]),
                                  iVar18 == 0 &&
                                  (iVar18 = strcmp((char *)*plVar3,(char *)plVar43[0x43]),
                                  iVar18 == 0)))) {
                                if (((*puVar1 >> 5 & 1) != 0) &&
                                   ((*puVar1 & 0x4000) == 0 && (uVar20 & 1) == 0))
                                goto LAB_001ff568;
                                iVar18 = FUN_001f8b48(*puVar37,*(undefined8 *)plVar43[0x84]);
                                if ((iVar18 != 0) ||
                                   ((iVar18 = FUN_002005e4(*(undefined4 *)(plVar43[0x84] + 0x80)),
                                    iVar18 == *(int *)(plVar23[0x84] + 0x80) &&
                                    ((*(byte *)((long)plVar43 + 0x66c) & 1) != 0)))) {
                                  uVar20 = *puVar1;
                                  if ((uVar20 >> 2 & 1) != 0) {
                                    iVar18 = FUN_001f8b48(plVar23[0x20],plVar43[0x20]);
                                    if (iVar18 == 0) goto joined_r0x001ff770;
                                    uVar20 = *puVar1;
                                  }
                                  if (((((uVar20 >> 3 & 1) == 0) ||
                                       (*(int *)((long)plVar23 + 0x19c) ==
                                        *(int *)((long)plVar43 + 0x19c))) &&
                                      (iVar18 = FUN_001f8b48(plVar23[0x1a],plVar43[0x1a]),
                                      iVar18 != 0)) && ((int)plVar23[0x33] == (int)plVar43[0x33])) {
                                    if ((*(byte *)(plVar23[0x84] + 0x84) & 1) == 0) {
LAB_001ff568:
                                      if (!(uVar25 != 0 && uVar34 != 0)) {
LAB_001ffe64:
                                        local_2c0 = plVar43;
                                        goto LAB_001ff77c;
                                      }
                                      if (uVar25 < local_2c8 || local_2c8 == 0) {
                                        if (((*(byte *)((long)plVar43 + 0x3ff) >> 2 & 1) == 0) ||
                                           (uVar25 < *(uint *)(plVar43 + 0xbd))) {
                                          uVar31 = FUN_001f2238(param_1,plVar43);
                                          if ((uVar31 & 1) == 0) {
                                            if (local_2c8 == 0) {
                                              FUN_001f3934(param_1,"Multiplexed connection found!\n"
                                                          );
                                              goto LAB_001ffe64;
                                            }
                                            if (local_2f0 <= uVar25) goto joined_r0x001ff770;
                                          }
                                          else {
                                            FUN_001f3934(param_1,"Penalized, skip\n");
                                            plVar43 = local_2c0;
                                            uVar25 = local_2f0;
                                          }
                                          local_2f0 = uVar25;
                                          local_2c0 = plVar43;
                                          goto joined_r0x001ff770;
                                        }
                                        pcVar28 = "MAX_CONCURRENT_STREAMS reached, skip (%zu)\n";
                                      }
                                      else {
                                        pcVar28 = "Pipe is full, skip (%zu)\n";
                                      }
LAB_001ff630:
                                      FUN_001f3934(param_1,pcVar28,uVar25);
                                    }
                                    else {
                                      uVar31 = FUN_00203778(plVar4,plVar43 + 0x5f);
                                      if ((uVar31 & 1) != 0) {
                                        if ((int)plVar43[0x52] == 2) goto LAB_001ff568;
                                        bVar16 = true;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          uVar31 = FUN_0020078c(plVar23 + 0x2a,plVar43 + 0x2a);
                          if (((uVar31 & 1) != 0) &&
                             (((*(uint *)((long)plVar43 + 0x3fc) ^ *puVar1) >> 0xe & 1) == 0)) {
                            if ((int)plVar23[0x2f] != 2) goto LAB_001ff448;
                            if ((*(byte *)(plVar23[0x84] + 0x84) & 1) == 0) {
                              uVar31 = FUN_00203778(plVar4,plVar43 + 0x5f);
                              if ((uVar31 & 1) != 0) {
                                iVar18 = (int)plVar43[0x52];
                                goto LAB_001ff70c;
                              }
                            }
                            else {
                              uVar31 = FUN_00203778(plVar23 + 0x6f,plVar43 + 0x6f);
                              if ((uVar31 & 1) != 0) {
                                iVar18 = (int)plVar43[0x58];
LAB_001ff70c:
                                if (iVar18 == 2) goto LAB_001ff448;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
joined_r0x001ff770:
                if (puVar40 == (undefined8 *)0x0) goto LAB_001ff774;
              }
              FUN_001fcddc(param_1,plVar43,1);
            } while (puVar40 != (undefined8 *)0x0);
LAB_001ff774:
            if (local_2c0 == (long *)0x0) {
              FUN_001defac(param_1);
              if ((bVar16) && (((byte)param_1[0xf46] >> 1 & 1) != 0)) {
                FUN_001f3934(param_1,
                             "Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n");
                goto LAB_001ffdc0;
              }
              goto LAB_001ff810;
            }
LAB_001ff77c:
            *local_2c0 = (long)param_1;
            FUN_001defac(param_1);
            iVar18 = FUN_001fff40(param_1,local_2c0);
            if ((iVar18 != 0) && (local_2c0[0x9c] + local_2c0[0x98] != 0)) {
              FUN_001f3934(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                           local_2c0[0xc],local_2c0[0x9c] + local_2c0[0x98]);
              uVar25 = FUN_001df020(local_2c0);
              if ((uVar25 < uVar21) && (uVar25 = FUN_001defc0(param_1), uVar25 < uVar22)) {
                FUN_001f3934(param_1,"We can reuse, but we want a new connection anyway\n");
                FUN_001df49c(local_2c0);
                goto LAB_001ff810;
              }
            }
            FUN_002044d4(plVar23[0x2a]);
            FUN_002044d4(plVar23[0x22]);
            FUN_00203984(plVar4);
            FUN_00203984(plVar23 + 0x6f);
            *local_2c0 = *plVar23;
            uVar20 = *(uint *)((long)plVar23 + 0x3fc);
            uVar34 = *(uint *)((long)local_2c0 + 0x3fc) & 0xffffff00 |
                     *(uint *)((long)local_2c0 + 0x3fc) & 0x7f | (uVar20 >> 7 & 1) << 7;
            *(uint *)((long)local_2c0 + 0x3fc) = uVar34;
            if ((uVar20 >> 7 & 1) != 0) {
              FUN_002044d4(local_2c0[0x42]);
              local_2c0[0x42] = 0;
              FUN_002044d4(local_2c0[0x43]);
              local_2c0[0x43] = 0;
              local_2c0[0x42] = *plVar2;
              local_2c0[0x43] = *plVar3;
              *plVar2 = 0;
              plVar23[0x43] = 0;
              uVar34 = *(uint *)((long)local_2c0 + 0x3fc);
            }
            uVar20 = *puVar1;
            *(uint *)((long)local_2c0 + 0x3fc) =
                 uVar34 & 0xfffffe00 | uVar34 & 0xff | (uVar20 >> 8 & 1) << 8;
            if ((uVar20 >> 8 & 1) != 0) {
              FUN_002044d4(local_2c0[0x30]);
              local_2c0[0x30] = 0;
              FUN_002044d4(local_2c0[0x28]);
              local_2c0[0x28] = 0;
              FUN_002044d4(local_2c0[0x31]);
              local_2c0[0x31] = 0;
              FUN_002044d4(local_2c0[0x29]);
              local_2c0[0x29] = 0;
              local_2c0[0x30] = plVar23[0x30];
              local_2c0[0x28] = plVar23[0x28];
              local_2c0[0x31] = plVar23[0x31];
              local_2c0[0x29] = plVar23[0x29];
              plVar23[0x28] = 0;
              plVar23[0x29] = 0;
              plVar23[0x30] = 0;
              plVar23[0x31] = 0;
            }
            FUN_002044d4(local_2c0[0x18]);
            local_2c0[0x18] = 0;
            FUN_002044d4(local_2c0[0x1e]);
            local_2c0[0x1e] = 0;
            lVar24 = plVar23[0x18];
            lVar38 = plVar23[0x19];
            lVar11 = plVar23[0x1b];
            local_2c0[0x1a] = plVar23[0x1a];
            local_2c0[0x1b] = lVar11;
            local_2c0[0x18] = lVar24;
            local_2c0[0x19] = lVar38;
            lVar24 = plVar23[0x1e];
            lVar38 = plVar23[0x1f];
            lVar11 = plVar23[0x21];
            local_2c0[0x20] = plVar23[0x20];
            local_2c0[0x21] = lVar11;
            local_2c0[0x1e] = lVar24;
            local_2c0[0x1f] = lVar38;
            *(undefined4 *)((long)local_2c0 + 0x19c) = *(undefined4 *)((long)plVar23 + 0x19c);
            *(int *)(local_2c0 + 0x33) = (int)plVar23[0x33];
            FUN_002044d4(local_2c0[0x1c]);
            local_2c0[0x1c] = 0;
            local_2c0[0x1c] = plVar23[0x1c];
            plVar23[0x1c] = 0;
            FUN_001ddcbc(local_2c0);
            *(uint *)((long)local_2c0 + 0x3fc) = *(uint *)((long)local_2c0 + 0x3fc) | 2;
            FUN_002044d4(plVar23[0x42]);
            plVar23[0x42] = 0;
            FUN_002044d4(plVar23[0x43]);
            plVar23[0x43] = 0;
            FUN_002044d4(plVar23[0x44]);
            plVar23[0x44] = 0;
            FUN_002044d4(plVar23[0x30]);
            plVar23[0x30] = 0;
            FUN_002044d4(plVar23[0x28]);
            plVar23[0x28] = 0;
            FUN_002044d4(plVar23[0x31]);
            plVar23[0x31] = 0;
            FUN_002044d4(plVar23[0x29]);
            plVar23[0x29] = 0;
            FUN_002044d4(plVar23[0xc9]);
            plVar23[0xc9] = 0;
            FUN_001e381c(plVar23 + 0x95,0);
            FUN_001e381c(plVar23 + 0x99,0);
            FUN_002044d4(plVar23[0x9d]);
            plVar23[0x9d] = 0;
            FUN_002044d4(plVar23[0x5e]);
            FUN_002044d4(plVar23);
            *param_2 = local_2c0;
            pcVar28 = "host";
            if ((*(byte *)((long)local_2c0 + 0x3fc) & 0x10) != 0) {
              pcVar28 = "proxy";
            }
            if (local_2c0[0x24] == 0) {
              if (local_2c0[0x2c] == 0) {
                plVar23 = local_2c0 + 0x1b;
              }
              else {
                plVar23 = local_2c0 + 0x2d;
              }
            }
            else {
              plVar23 = local_2c0 + 0x25;
            }
            FUN_001f3934(param_1,"Re-using existing connection! (#%ld) with %s %s\n",local_2c0[0xc],
                         pcVar28,*plVar23);
          }
          FUN_001ffe6c(param_1,local_2c0);
          lVar24 = *(long *)(param_1 + 0x800);
          *(long *)(param_1 + 0x14f8) = lVar24;
          if ((lVar24 == 0) && (*(long *)(param_1 + 0xd38) == 0)) {
            uVar32 = *(ushort *)(param_1 + 0x15a4) & 0xfdff;
          }
          else {
            if (((byte)param_1[0x15a5] >> 2 & 1) != 0) {
              FUN_002044d4(*(undefined8 *)(param_1 + 0x14f0));
              lVar24 = *(long *)(param_1 + 0x14f8);
            }
            if (lVar24 == 0) {
              lVar24 = FUN_002044f4(*(undefined8 *)(param_1 + 0xd38));
            }
            else {
              lVar24 = FUN_001e6534(&DAT_03984067);
            }
            uVar32 = *(ushort *)(param_1 + 0x15a4) & 0xf800 |
                     *(ushort *)(param_1 + 0x15a4) & 0x3ff | (ushort)(lVar24 != 0) << 10;
            *(long *)(param_1 + 0x14f0) = lVar24;
            *(ushort *)(param_1 + 0x15a4) = uVar32;
            if (lVar24 == 0) goto switchD_001fdd78_caseD_7;
            uVar32 = uVar32 | 0x200;
          }
          *(ushort *)(param_1 + 0x15a4) = uVar32;
          local_2c0[0xa0] = *(long *)(param_1 + 0x6f0);
          local_2c0[0xa1] = *(long *)(param_1 + 0x778);
          iVar18 = FUN_001ddbec(param_1,0,1);
          uVar34 = *(uint *)((long)local_2c0 + 0x3fc);
          if ((uVar34 >> 1 & 1) != 0) {
            iVar18 = 0;
            *param_3 = 0;
            goto LAB_001ffdfc;
          }
          if ((uVar34 >> 4 & 1) == 0) {
            plVar23 = local_2c0 + 0x18;
            if ((uVar34 & 4) != 0) {
              plVar23 = local_2c0 + 0x1e;
            }
            lVar24 = 0x198;
            if ((uVar34 & 8) != 0) {
              lVar24 = 0x19c;
            }
            local_2c0[0x32] = (long)*(int *)((long)local_2c0 + lVar24);
            lVar24 = FUN_002044f4(plVar23[2]);
            local_2c0[0x1c] = lVar24;
            if (lVar24 == 0) goto LAB_001ffd98;
            iVar18 = FUN_001e1808(local_2c0,lVar24,(int)local_2c0[0x32],&local_168,(long)iVar18);
            if (iVar18 == -2) goto LAB_001ffda0;
            if (iVar18 == 1) goto LAB_001ffd88;
            if (local_168 != (char *)0x0) goto LAB_001ffdd0;
            FUN_001f3ae0(param_1,"Couldn\'t resolve host \'%s\'",plVar23[3]);
            iVar18 = 6;
          }
          else {
            plVar23 = local_2c0 + 0x2a;
            if ((uVar34 & 0x40) != 0) {
              plVar23 = local_2c0 + 0x22;
            }
            lVar24 = FUN_002044f4(plVar23[2]);
            local_2c0[0x1c] = lVar24;
            if (lVar24 == 0) {
LAB_001ffd98:
              iVar18 = 0x1b;
              goto LAB_001ffdfc;
            }
            iVar18 = FUN_001e1808(local_2c0,lVar24,(int)local_2c0[0x32],&local_168,(long)iVar18);
            if (iVar18 == -2) {
LAB_001ffda0:
              iVar18 = 0x1c;
            }
            else if (iVar18 == 1) {
LAB_001ffd88:
              iVar18 = 0;
              *param_3 = 1;
            }
            else if (local_168 == (char *)0x0) {
              FUN_001f3ae0(param_1,"Couldn\'t resolve proxy \'%s\'",plVar23[3]);
              iVar18 = 5;
            }
            else {
LAB_001ffdd0:
              iVar18 = 0;
            }
          }
          local_2c0[0xd] = (long)local_168;
LAB_001ffdfc:
          FUN_001fffe4(local_2c0 + 0x18);
          uVar34 = *(uint *)((long)local_2c0 + 0x3fc);
          if ((uVar34 >> 5 & 1) != 0) {
            FUN_001fffe4(local_2c0 + 0x2a);
            uVar34 = *(uint *)((long)local_2c0 + 0x3fc);
          }
          if ((uVar34 >> 6 & 1) != 0) {
            FUN_001fffe4(local_2c0 + 0x22);
            uVar34 = *(uint *)((long)local_2c0 + 0x3fc);
          }
          if ((uVar34 >> 2 & 1) == 0) {
            return iVar18;
          }
          FUN_001fffe4(local_2c0 + 0x1e);
          return iVar18;
        }
      }
    }
  }
  else {
    *(uint *)(plVar23 + 0x33) = (uint)*(long *)(param_1 + 0x6a8) & 0xffff;
    FUN_001e64cc(&local_168,0x10,&DAT_0388ad61);
    iVar18 = FUN_001fb304(*(undefined8 *)(param_1 + 0x1548),6,&local_168,0);
    if (iVar18 == 0) goto LAB_001fe814;
  }
switchD_001fdd78_caseD_7:
  iVar18 = 0x1b;
switchD_001fdd78_caseD_1:
  return iVar18;
}


