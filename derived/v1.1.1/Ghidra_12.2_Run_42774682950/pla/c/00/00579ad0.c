/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00579ad0; name: FUN_00579ad0
 */


long FUN_00579ad0(uint *param_1,long *param_2,long *param_3)

{
  uint *__src;
  ulong uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  void *pvVar9;
  void *__dest;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  uint *__src_00;
  size_t sVar17;
  long *plVar18;
  char *__src_01;
  undefined1 auStack_80 [32];
  
  bVar7 = *param_2 == 0;
  uVar13 = param_2[1] & 0xff;
  if (!bVar7) {
    uVar13 = param_2[1];
  }
  if (uVar13 != 0) {
    __src = param_1 + 8;
    uVar13 = 0;
    do {
      lVar8 = (long)param_2 + 9;
      if (!bVar7) {
        lVar8 = param_2[2];
      }
      uVar6 = *(undefined1 *)(lVar8 + uVar13);
      if (*param_1 < 2) {
        if (*(ulong *)(param_1 + 0x408) < 0x1000) {
          *(undefined1 *)((long)param_1 + *(ulong *)(param_1 + 0x408) + 0x20) = uVar6;
          lVar8 = *(long *)(param_1 + 0x408);
          uVar12 = lVar8 + 1;
          *(ulong *)(param_1 + 0x408) = uVar12;
          if (uVar12 < 2) {
            if (uVar12 != 0) goto LAB_00579cc0;
          }
          else {
            cVar5 = *(char *)((long)param_1 + lVar8 + 0x1f);
            if (cVar5 == '\n') {
              if (*(char *)((long)param_1 + lVar8 + 0x20) == '\r') goto LAB_00579c6c;
LAB_00579cc0:
              if (*(char *)((long)param_1 + lVar8 + 0x20) != '\n') goto LAB_00579b70;
              param_1[0x40a] = 1;
              param_1[0x40b] = 0;
              uVar4 = *param_1;
            }
            else {
              if ((cVar5 != '\r') || (*(char *)((long)param_1 + lVar8 + 0x20) != '\n'))
              goto LAB_00579cc0;
LAB_00579c6c:
              uVar4 = *param_1;
            }
            if (uVar4 == 0) {
              if (param_1[1] == 0) {
                if ((char)*__src == 'H') {
                  if ((lVar8 == 0) || (*(char *)((long)param_1 + 0x21) != 'T')) {
                    FUN_002f2c60(auStack_80,"Expected \'T\'");
                    uVar11 = 0x30;
                  }
                  else if ((uVar12 == 2) || (*(char *)((long)param_1 + 0x22) != 'T')) {
                    FUN_002f2c60(auStack_80,"Expected \'T\'");
                    uVar11 = 0x32;
                  }
                  else if ((uVar12 == 3) || (*(char *)((long)param_1 + 0x23) != 'P')) {
                    FUN_002f2c60(auStack_80,"Expected \'P\'");
                    uVar11 = 0x34;
                  }
                  else if ((uVar12 == 4) || ((char)param_1[9] != '/')) {
                    FUN_002f2c60(auStack_80,"Expected \'/\'");
                    uVar11 = 0x36;
                  }
                  else if ((uVar12 == 5) || (*(char *)((long)param_1 + 0x25) != '1')) {
                    FUN_002f2c60(auStack_80,"Expected \'1\'");
                    uVar11 = 0x38;
                  }
                  else if ((uVar12 == 6) || (*(char *)((long)param_1 + 0x26) != '.')) {
                    FUN_002f2c60(auStack_80,"Expected \'.\'");
                    uVar11 = 0x3a;
                  }
                  else if ((uVar12 == 7) || ((*(byte *)((long)param_1 + 0x27) & 0xfe) != 0x30)) {
                    FUN_002f2c60(auStack_80,"Expected HTTP/1.0 or HTTP/1.1");
                    uVar11 = 0x3d;
                  }
                  else if ((uVar12 == 8) || ((char)param_1[10] != ' ')) {
                    FUN_002f2c60(auStack_80,"Expected \' \'");
                    uVar11 = 0x40;
                  }
                  else if ((uVar12 == 9) || (8 < *(byte *)((long)param_1 + 0x29) - 0x31)) {
                    FUN_002f2c60(auStack_80,"Expected status code");
                    uVar11 = 0x42;
                  }
                  else if ((uVar12 == 10) || (9 < *(byte *)((long)param_1 + 0x2a) - 0x30)) {
                    FUN_002f2c60(auStack_80,"Expected status code");
                    uVar11 = 0x44;
                  }
                  else if ((uVar12 == 0xb) || (9 < *(byte *)((long)param_1 + 0x2b) - 0x30)) {
                    FUN_002f2c60(auStack_80,"Expected status code");
                    uVar11 = 0x46;
                  }
                  else {
                    **(int **)(param_1 + 2) =
                         (uint)*(byte *)((long)param_1 + 0x2a) * 10 +
                         (uint)*(byte *)((long)param_1 + 0x29) * 100 +
                         (uint)*(byte *)((long)param_1 + 0x2b) + -0x14d0;
                    if ((uVar12 != 0xc) && ((char)param_1[0xb] == ' ')) goto LAB_0057a3c8;
                    FUN_002f2c60(auStack_80,"Expected \' \'");
                    uVar11 = 0x4a;
                  }
                }
                else {
                  FUN_002f2c60(auStack_80,"Expected \'H\'");
                  uVar11 = 0x2e;
                }
LAB_0057a3b4:
                lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/http/parser.cc",
                                     uVar11,auStack_80,0,0);
joined_r0x0057a3c4:
                if (lVar8 != 0) {
                  return lVar8;
                }
              }
              else {
                if (param_1[1] != 1) {
                  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/http/parser.cc",0x98,2,
                               "Should never reach here.");
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar10 = 1;
                puVar16 = __src;
                do {
                  lVar14 = lVar10;
                  if (uVar12 == 0) goto LAB_00579fb4;
                  __src_00 = (uint *)((long)puVar16 + 1);
                  uVar4 = *puVar16;
                  uVar12 = uVar12 - 1;
                  lVar10 = lVar14 + 1;
                  puVar16 = __src_00;
                } while ((char)uVar4 != ' ');
                if (uVar12 == 0) {
LAB_00579fb4:
                  FUN_002f2c60(auStack_80,"No method on HTTP request line");
                  uVar11 = 0x5c;
                  goto LAB_0057a3b4;
                }
                pvVar9 = (void *)FUN_002ebd50((long)__src_00 - (long)__src);
                memcpy(pvVar9,__src,(long)__src_00 + ~(ulong)__src);
                *(undefined1 *)((long)pvVar9 + (long)__src_00 + ~(ulong)__src) = 0;
                **(undefined8 **)(param_1 + 2) = pvVar9;
                do {
                  if (lVar8 + 1 == lVar14) goto LAB_0057a0b0;
                  pcVar2 = (char *)((long)__src + lVar14);
                  lVar14 = lVar14 + 1;
                } while (*pcVar2 != ' ');
                if (lVar8 + 1 == lVar14) {
LAB_0057a0b0:
                  FUN_002f2c60(auStack_80,"No path on HTTP request line");
                  uVar11 = 100;
                  goto LAB_0057a3b4;
                }
                pcVar2 = (char *)((long)__src + lVar14);
                pvVar9 = (void *)FUN_002ebd50((long)pcVar2 - (long)__src_00);
                memcpy(pvVar9,__src_00,(size_t)(pcVar2 + ~(ulong)__src_00));
                *(char *)((long)pvVar9 + (long)(pcVar2 + ~(ulong)__src_00)) = '\0';
                *(void **)(*(long *)(param_1 + 2) + 8) = pvVar9;
                if (*pcVar2 != 'H') {
                  FUN_002f2c60(auStack_80,"Expected \'H\'");
                  uVar11 = 0x68;
                  goto LAB_0057a23c;
                }
                if ((lVar8 == lVar14) || (pcVar2[1] != 'T')) {
                  FUN_002f2c60(auStack_80,"Expected \'T\'");
                  uVar11 = 0x6a;
                  goto LAB_0057a3b4;
                }
                if ((lVar8 + -1 == lVar14) || (pcVar2[2] != 'T')) {
                  FUN_002f2c60(auStack_80,"Expected \'T\'");
                  uVar11 = 0x6c;
                  goto LAB_0057a3b4;
                }
                if ((lVar8 + -2 == lVar14) || (pcVar2[3] != 'P')) {
                  FUN_002f2c60(auStack_80,"Expected \'P\'");
                  uVar11 = 0x6e;
                  goto LAB_0057a3b4;
                }
                if ((lVar8 + -3 == lVar14) || (pcVar2[4] != '/')) {
                  FUN_002f2c60(auStack_80,"Expected \'/\'");
                  uVar11 = 0x70;
                  goto LAB_0057a3b4;
                }
                if (lVar8 + -6 == lVar14) {
                  FUN_002f2c60(auStack_80,"End of line in HTTP version string");
                  uVar11 = 0x75;
                  goto LAB_0057a3b4;
                }
                cVar5 = pcVar2[7];
                if (pcVar2[5] == '2') {
                  if (cVar5 == '0') {
                    *(undefined4 *)(*(long *)(param_1 + 2) + 0x10) = 2;
                    goto LAB_0057a3c8;
                  }
                  FUN_002f2c60(auStack_80,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0");
                  uVar11 = 0x86;
LAB_0057a23c:
                  lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/http/parser.cc",
                                       uVar11,auStack_80,0,0);
                  goto joined_r0x0057a3c4;
                }
                if (pcVar2[5] != '1') {
                  FUN_002f2c60(auStack_80,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0");
                  uVar11 = 0x8a;
                  goto LAB_0057a23c;
                }
                if (cVar5 == '1') {
                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x10) = 1;
                }
                else {
                  if (cVar5 != '0') {
                    FUN_002f2c60(auStack_80,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0");
                    uVar11 = 0x7f;
                    goto LAB_0057a23c;
                  }
                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x10) = 0;
                }
              }
LAB_0057a3c8:
              *param_1 = 1;
              param_1[0x408] = 0;
              param_1[0x409] = 0;
            }
            else {
              if (uVar4 == 1) {
                if (uVar12 == *(ulong *)(param_1 + 0x40a)) {
                  *param_1 = 2;
                  param_1[0x408] = 0;
                  param_1[0x409] = 0;
                  if (param_3 != (long *)0x0) {
                    *param_3 = uVar13 + 1;
                  }
                  goto LAB_00579b70;
                }
                cVar5 = (char)param_1[8];
                if ((cVar5 == '\t') || (cVar5 == ' ')) {
                  FUN_002f2c60(auStack_80,"Continued header lines not supported yet");
                  lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/http/parser.cc",
                                       0xa8,auStack_80,0,0);
joined_r0x00579ec8:
                  if (lVar8 != 0) {
                    free((void *)0x0);
                    free((void *)0x0);
                    return lVar8;
                  }
                  goto LAB_0057a1f4;
                }
                pcVar2 = (char *)((long)(param_1 + 8) + uVar12);
                uVar1 = 0;
                do {
                  sVar17 = uVar1;
                  if (uVar12 == sVar17) {
                    FUN_002f2c60(auStack_80,"Didn\'t find \':\' in header string");
                    lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/http/parser.cc"
                                         ,0xb1,auStack_80,0,0);
                    goto joined_r0x00579ec8;
                  }
                  uVar1 = sVar17 + 1;
                } while (*(char *)((long)__src + sVar17) != ':');
                pvVar9 = (void *)FUN_002ebd50(uVar1);
                memcpy(pvVar9,__src,sVar17);
                *(undefined1 *)((long)pvVar9 + sVar17) = 0;
                if (uVar12 == uVar1) {
                  __src_01 = pcVar2;
LAB_0057a134:
                  sVar17 = ((long)pcVar2 - (long)__src_01) - *(ulong *)(param_1 + 0x40a);
                  if ((ulong)((long)pcVar2 - (long)__src_01) < *(ulong *)(param_1 + 0x40a))
                  goto LAB_0057a630;
                }
                else {
                  __src_01 = (char *)((long)__src + uVar1);
                  lVar8 = lVar8 - sVar17;
                  do {
                    if (*__src_01 != ' ' && *__src_01 != '\t') goto LAB_0057a134;
                    __src_01 = __src_01 + 1;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                  sVar17 = -*(long *)(param_1 + 0x40a);
                  __src_01 = pcVar2;
                  if (*(long *)(param_1 + 0x40a) != 0) {
LAB_0057a630:
                    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/http/parser.cc",0xbb,2,
                                 "assertion failed: %s",
                                 "(size_t)(end - cur) >= parser->cur_line_end_length");
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                }
                __dest = (void *)FUN_002ebd50(sVar17 + 1);
                memcpy(__dest,__src_01,sVar17);
                *(undefined1 *)((long)__dest + sVar17) = 0;
                if (param_1[1] == 1) {
                  plVar15 = (long *)(*(long *)(param_1 + 2) + 0x18);
                  plVar18 = (long *)(*(long *)(param_1 + 2) + 0x20);
                  lVar8 = *plVar15;
                  if (lVar8 == *(long *)(param_1 + 6)) goto LAB_0057a190;
LAB_0057a1e0:
                  lVar10 = *plVar18;
                }
                else {
                  if (param_1[1] != 0) {
                    plVar15 = (long *)0x0;
                    plVar18 = (long *)0x0;
                    lVar8 = lRam0000000000000000;
                    if (lRam0000000000000000 == *(long *)(param_1 + 6)) goto LAB_0057a190;
                    goto LAB_0057a1e0;
                  }
                  plVar15 = (long *)(*(long *)(param_1 + 2) + 8);
                  plVar18 = (long *)(*(long *)(param_1 + 2) + 0x10);
                  lVar8 = *plVar15;
                  if (lVar8 != *(long *)(param_1 + 6)) goto LAB_0057a1e0;
LAB_0057a190:
                  uVar12 = (ulong)(lVar8 * 3) >> 1;
                  if (uVar12 < lVar8 + 1U) {
                    uVar12 = lVar8 + 1;
                  }
                  *(ulong *)(param_1 + 6) = uVar12;
                  lVar10 = FUN_002ebdc0(*plVar18,uVar12 << 4);
                  *plVar18 = lVar10;
                  lVar8 = *plVar15;
                }
                puVar3 = (undefined8 *)(lVar10 + lVar8 * 0x10);
                *plVar15 = lVar8 + 1;
                *puVar3 = pvVar9;
                puVar3[1] = __dest;
              }
              else if (uVar4 == 2) {
                FUN_002ebea0("external/com_google_grpc_base/src/core/lib/http/parser.cc",0xf0,2,
                             "Should never reach here.");
                    /* WARNING: Subroutine does not return */
                abort();
              }
LAB_0057a1f4:
              param_1[0x408] = 0;
              param_1[0x409] = 0;
            }
          }
        }
        else {
          if (PTR_DAT_04374e00[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/http/parser.cc",0x130,2,
                         "HTTP header max line length (%d) exceeded",0x1000);
          }
          FUN_002f2c60(auStack_80,"HTTP header max line length exceeded");
          lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/http/parser.cc",0x133,
                               auStack_80,0,0);
          if (lVar8 != 0) {
            return lVar8;
          }
        }
      }
      else {
        if (*param_1 != 2) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/http/parser.cc",0x13e,2,
                       "Should never reach here.");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (param_1[1] == 1) {
          plVar15 = (long *)(*(long *)(param_1 + 2) + 0x28);
          plVar18 = (long *)(*(long *)(param_1 + 2) + 0x30);
          lVar8 = *plVar15;
          if (lVar8 != *(long *)(param_1 + 4)) goto LAB_00579ca0;
LAB_00579b38:
          uVar12 = 8;
          if (0xf < (ulong)(lVar8 * 3)) {
            uVar12 = (ulong)(lVar8 * 3) >> 1;
          }
          *(ulong *)(param_1 + 4) = uVar12;
          lVar10 = FUN_002ebdc0(*plVar18);
          *plVar18 = lVar10;
          lVar8 = *plVar15;
        }
        else {
          if (param_1[1] != 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/http/parser.cc",0x103,2,
                         "Should never reach here.");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar15 = (long *)(*(long *)(param_1 + 2) + 0x18);
          plVar18 = (long *)(*(long *)(param_1 + 2) + 0x20);
          lVar8 = *plVar15;
          if (lVar8 == *(long *)(param_1 + 4)) goto LAB_00579b38;
LAB_00579ca0:
          lVar10 = *plVar18;
        }
        *(undefined1 *)(lVar10 + lVar8) = uVar6;
        *plVar15 = *plVar15 + 1;
      }
LAB_00579b70:
      bVar7 = *param_2 == 0;
      uVar13 = uVar13 + 1;
      uVar12 = param_2[1] & 0xff;
      if (!bVar7) {
        uVar12 = param_2[1];
      }
    } while (uVar13 < uVar12);
  }
  return 0;
}


