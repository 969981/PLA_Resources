/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278ec68; name: FUN_0278ec68
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0278ec68(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  char local_13b0 [4];
  undefined8 local_13ac [15];
  char local_1334 [4];
  undefined8 local_1330 [15];
  char local_12b8 [4];
  undefined8 local_12b4 [15];
  char local_123c [4];
  undefined8 auStack_1238 [15];
  char local_11c0;
  char local_1144;
  char local_10c8;
  char local_104c;
  char local_fd0;
  char local_f54;
  char local_ed8;
  char local_e5c;
  char local_de0;
  char local_d64;
  char local_ce8;
  char local_c6c;
  char local_bf0;
  char local_b74;
  char local_af8;
  char local_a7c;
  char local_a00 [4];
  char local_9fc [8];
  uint local_9f4 [2];
  undefined8 local_9ec [13];
  char local_984 [4];
  char local_980 [8];
  uint local_978 [2];
  undefined8 local_970 [13];
  char local_908 [4];
  char local_904 [8];
  uint local_8fc [2];
  undefined8 local_8f4 [13];
  char local_88c [4];
  char acStack_888 [8];
  uint local_880 [2];
  undefined8 auStack_878 [13];
  char local_810;
  char local_794;
  char local_718;
  char local_69c;
  char local_620;
  char local_5a4;
  char local_528;
  char local_4ac;
  char local_430;
  char local_3b4;
  char local_338;
  char local_2bc;
  char local_240;
  char local_1c4;
  char local_148;
  char local_cc;
  
  if ((long)DAT_0426be30 < -0x1c4413fb859baafc) {
    if (DAT_0426be30 == (undefined1 *)0xe3bbea047a64519e) {
      uVar6 = 0x401;
      goto LAB_0278dc54;
    }
    if (DAT_0426be30 == (undefined1 *)0xe3bbeb047a645351) {
      uVar6 = 0x501;
      goto LAB_0278dc54;
    }
    if (DAT_0426be30 != &DAT_cbf29ce484222645) goto LAB_0278ed30;
  }
  else {
    if (DAT_0426be30 == (undefined1 *)0xe3bbef047a645a1d) {
      uVar6 = 0x101;
      goto LAB_0278dc54;
    }
    if (DAT_0426be30 == (undefined1 *)0xe3bbec047a645504) {
      uVar6 = 0x201;
      goto LAB_0278dc54;
    }
    if (DAT_0426be30 == (undefined1 *)0xe3bbed047a6456b7) {
      uVar6 = 0x301;
      goto LAB_0278dc54;
    }
LAB_0278ed30:
    uVar6 = FUN_027866e0();
    if ((uVar6 & 0xff) != 0) {
      uVar6 = uVar6 & 0xff00 | 1;
      goto LAB_0278dc54;
    }
  }
  uVar6 = 0;
LAB_0278dc54:
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar13 = *(long **)(lVar8 + 0x2a8);
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0110c3e4(local_a00,plVar13 + 0x217f);
    FUN_0110c3e4(local_13b0,plVar13 + 0x22b5);
    lVar8 = 0;
    if ((uVar6 & 0xff) == 0) {
      do {
        if ((byte)(&DAT_03a7e064)[lVar8] - 1 < 5) {
          uVar9 = (ulong)((byte)(&DAT_03a7e064)[lVar8] - 1) & 0xff;
          pcVar10 = local_a00 + uVar9 * 0x1f0;
          if ((param_2 & 1) == 0) {
            if (*pcVar10 == '\0') {
LAB_0278e5b8:
              if (local_13b0[uVar9 * 0x1f0] != '\0') {
                local_9ec[uVar9 * 0x3e] = local_13ac[uVar9 * 0x3e + 2];
                *(undefined8 *)(local_9f4 + uVar9 * 0x7c) = local_13ac[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_a00 + uVar9 * 0x1f0 + 4) = local_13ac[uVar9 * 0x3e];
                local_9ec[uVar9 * 0x3e + 4] = local_13ac[uVar9 * 0x3e + 6];
                local_9ec[uVar9 * 0x3e + 3] = local_13ac[uVar9 * 0x3e + 5];
                local_9ec[uVar9 * 0x3e + 2] = local_13ac[uVar9 * 0x3e + 4];
                local_9ec[uVar9 * 0x3e + 1] = local_13ac[uVar9 * 0x3e + 3];
                local_9ec[uVar9 * 0x3e + 8] = local_13ac[uVar9 * 0x3e + 10];
                local_9ec[uVar9 * 0x3e + 7] = local_13ac[uVar9 * 0x3e + 9];
                local_9ec[uVar9 * 0x3e + 6] = local_13ac[uVar9 * 0x3e + 8];
                local_9ec[uVar9 * 0x3e + 5] = local_13ac[uVar9 * 0x3e + 7];
                local_9ec[uVar9 * 0x3e + 0xc] = local_13ac[uVar9 * 0x3e + 0xe];
                local_9ec[uVar9 * 0x3e + 0xb] = local_13ac[uVar9 * 0x3e + 0xd];
                uVar12 = local_13ac[uVar9 * 0x3e + 0xc];
                uVar7 = local_13ac[uVar9 * 0x3e + 0xb];
                local_13b0[uVar9 * 0x1f0] = '\0';
                local_9ec[uVar9 * 0x3e + 10] = uVar12;
                local_9ec[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if (local_9f4[uVar9 * 0x7c] == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e5b8;
            }
            pcVar10 = local_984 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278e670:
              if (local_1334[uVar9 * 0x1f0] != '\0') {
                uVar7 = local_1330[uVar9 * 0x3e + 3];
                local_970[uVar9 * 0x3e] = local_1330[uVar9 * 0x3e + 2];
                local_970[uVar9 * 0x3e + 1] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_984 + uVar9 * 0x1f0 + 4) = local_1330[uVar9 * 0x3e];
                *(undefined8 *)(local_978 + uVar9 * 0x7c) = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 7];
                local_970[uVar9 * 0x3e + 4] = local_1330[uVar9 * 0x3e + 6];
                local_970[uVar9 * 0x3e + 5] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 5];
                local_970[uVar9 * 0x3e + 2] = local_1330[uVar9 * 0x3e + 4];
                local_970[uVar9 * 0x3e + 3] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xb];
                local_970[uVar9 * 0x3e + 8] = local_1330[uVar9 * 0x3e + 10];
                local_970[uVar9 * 0x3e + 9] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 9];
                local_970[uVar9 * 0x3e + 6] = local_1330[uVar9 * 0x3e + 8];
                local_970[uVar9 * 0x3e + 7] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xc];
                uVar12 = local_1330[uVar9 * 0x3e + 0xd];
                uVar11 = local_1330[uVar9 * 0x3e + 0xe];
                local_1334[uVar9 * 0x1f0] = '\0';
                local_970[uVar9 * 0x3e + 0xb] = uVar12;
                local_970[uVar9 * 0x3e + 0xc] = uVar11;
                local_970[uVar9 * 0x3e + 10] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if (local_978[uVar9 * 0x7c] == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e670;
            }
            pcVar10 = local_908 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278e6f0:
              if (local_12b8[uVar9 * 0x1f0] != '\0') {
                *(undefined8 *)(local_8fc + uVar9 * 0x7c) = local_12b4[uVar9 * 0x3e + 1];
                uVar11 = local_12b4[uVar9 * 0x3e + 6];
                local_8f4[uVar9 * 0x3e] = local_12b4[uVar9 * 0x3e + 2];
                uVar7 = local_12b4[uVar9 * 0x3e + 3];
                uVar12 = local_12b4[uVar9 * 0x3e + 4];
                local_8f4[uVar9 * 0x3e + 4] = uVar11;
                local_8f4[uVar9 * 0x3e + 3] = local_12b4[uVar9 * 0x3e + 5];
                *(undefined8 *)(local_908 + uVar9 * 0x1f0 + 4) = local_12b4[uVar9 * 0x3e];
                local_8f4[uVar9 * 0x3e + 1] = uVar7;
                local_8f4[uVar9 * 0x3e + 8] = local_12b4[uVar9 * 0x3e + 10];
                uVar7 = local_12b4[uVar9 * 0x3e + 9];
                local_8f4[uVar9 * 0x3e + 2] = uVar12;
                local_8f4[uVar9 * 0x3e + 7] = uVar7;
                local_8f4[uVar9 * 0x3e + 6] = local_12b4[uVar9 * 0x3e + 8];
                uVar7 = local_12b4[uVar9 * 0x3e + 0xe];
                local_8f4[uVar9 * 0x3e + 5] = local_12b4[uVar9 * 0x3e + 7];
                uVar12 = local_12b4[uVar9 * 0x3e + 0xd];
                uVar11 = local_12b4[uVar9 * 0x3e + 0xc];
                local_8f4[uVar9 * 0x3e + 0xc] = uVar7;
                local_8f4[uVar9 * 0x3e + 0xb] = uVar12;
                local_8f4[uVar9 * 0x3e + 10] = uVar11;
                uVar7 = local_12b4[uVar9 * 0x3e + 0xb];
                local_12b8[uVar9 * 0x1f0] = '\0';
                local_8f4[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if (local_8fc[uVar9 * 0x7c] == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e6f0;
            }
            pcVar10 = local_88c + uVar9 * 0x1f0;
            if (local_88c[uVar9 * 0x1f0] != '\0') {
              if (local_880[uVar9 * 0x7c] != 2) goto LAB_0278e2e8;
LAB_0278e818:
              *pcVar10 = '\0';
            }
          }
          else {
            if (*pcVar10 == '\0') {
LAB_0278e330:
              if (local_13b0[uVar9 * 0x1f0] != '\0') {
                local_9ec[uVar9 * 0x3e] = local_13ac[uVar9 * 0x3e + 2];
                *(undefined8 *)(local_9f4 + uVar9 * 0x7c) = local_13ac[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_a00 + uVar9 * 0x1f0 + 4) = local_13ac[uVar9 * 0x3e];
                local_9ec[uVar9 * 0x3e + 4] = local_13ac[uVar9 * 0x3e + 6];
                local_9ec[uVar9 * 0x3e + 3] = local_13ac[uVar9 * 0x3e + 5];
                local_9ec[uVar9 * 0x3e + 2] = local_13ac[uVar9 * 0x3e + 4];
                local_9ec[uVar9 * 0x3e + 1] = local_13ac[uVar9 * 0x3e + 3];
                local_9ec[uVar9 * 0x3e + 8] = local_13ac[uVar9 * 0x3e + 10];
                local_9ec[uVar9 * 0x3e + 7] = local_13ac[uVar9 * 0x3e + 9];
                local_9ec[uVar9 * 0x3e + 6] = local_13ac[uVar9 * 0x3e + 8];
                local_9ec[uVar9 * 0x3e + 5] = local_13ac[uVar9 * 0x3e + 7];
                local_9ec[uVar9 * 0x3e + 0xc] = local_13ac[uVar9 * 0x3e + 0xe];
                local_9ec[uVar9 * 0x3e + 0xb] = local_13ac[uVar9 * 0x3e + 0xd];
                uVar12 = local_13ac[uVar9 * 0x3e + 0xc];
                uVar7 = local_13ac[uVar9 * 0x3e + 0xb];
                local_13b0[uVar9 * 0x1f0] = '\0';
                local_9ec[uVar9 * 0x3e + 10] = uVar12;
                local_9ec[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if ((local_9f4[uVar9 * 0x7c] | 2) == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e330;
            }
            pcVar10 = local_984 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278e3ec:
              if (local_1334[uVar9 * 0x1f0] != '\0') {
                uVar7 = local_1330[uVar9 * 0x3e + 3];
                local_970[uVar9 * 0x3e] = local_1330[uVar9 * 0x3e + 2];
                local_970[uVar9 * 0x3e + 1] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_984 + uVar9 * 0x1f0 + 4) = local_1330[uVar9 * 0x3e];
                *(undefined8 *)(local_978 + uVar9 * 0x7c) = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 7];
                local_970[uVar9 * 0x3e + 4] = local_1330[uVar9 * 0x3e + 6];
                local_970[uVar9 * 0x3e + 5] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 5];
                local_970[uVar9 * 0x3e + 2] = local_1330[uVar9 * 0x3e + 4];
                local_970[uVar9 * 0x3e + 3] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xb];
                local_970[uVar9 * 0x3e + 8] = local_1330[uVar9 * 0x3e + 10];
                local_970[uVar9 * 0x3e + 9] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 9];
                local_970[uVar9 * 0x3e + 6] = local_1330[uVar9 * 0x3e + 8];
                local_970[uVar9 * 0x3e + 7] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xc];
                uVar12 = local_1330[uVar9 * 0x3e + 0xd];
                uVar11 = local_1330[uVar9 * 0x3e + 0xe];
                local_1334[uVar9 * 0x1f0] = '\0';
                local_970[uVar9 * 0x3e + 0xb] = uVar12;
                local_970[uVar9 * 0x3e + 0xc] = uVar11;
                local_970[uVar9 * 0x3e + 10] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if ((local_978[uVar9 * 0x7c] | 2) == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e3ec;
            }
            pcVar10 = local_908 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278e470:
              if (local_12b8[uVar9 * 0x1f0] != '\0') {
                *(undefined8 *)(local_8fc + uVar9 * 0x7c) = local_12b4[uVar9 * 0x3e + 1];
                uVar11 = local_12b4[uVar9 * 0x3e + 6];
                local_8f4[uVar9 * 0x3e] = local_12b4[uVar9 * 0x3e + 2];
                uVar7 = local_12b4[uVar9 * 0x3e + 3];
                uVar12 = local_12b4[uVar9 * 0x3e + 4];
                local_8f4[uVar9 * 0x3e + 4] = uVar11;
                local_8f4[uVar9 * 0x3e + 3] = local_12b4[uVar9 * 0x3e + 5];
                *(undefined8 *)(local_908 + uVar9 * 0x1f0 + 4) = local_12b4[uVar9 * 0x3e];
                local_8f4[uVar9 * 0x3e + 1] = uVar7;
                local_8f4[uVar9 * 0x3e + 8] = local_12b4[uVar9 * 0x3e + 10];
                uVar7 = local_12b4[uVar9 * 0x3e + 9];
                local_8f4[uVar9 * 0x3e + 2] = uVar12;
                local_8f4[uVar9 * 0x3e + 7] = uVar7;
                local_8f4[uVar9 * 0x3e + 6] = local_12b4[uVar9 * 0x3e + 8];
                uVar7 = local_12b4[uVar9 * 0x3e + 0xe];
                local_8f4[uVar9 * 0x3e + 5] = local_12b4[uVar9 * 0x3e + 7];
                uVar12 = local_12b4[uVar9 * 0x3e + 0xd];
                uVar11 = local_12b4[uVar9 * 0x3e + 0xc];
                local_8f4[uVar9 * 0x3e + 0xc] = uVar7;
                local_8f4[uVar9 * 0x3e + 0xb] = uVar12;
                local_8f4[uVar9 * 0x3e + 10] = uVar11;
                uVar7 = local_12b4[uVar9 * 0x3e + 0xb];
                local_12b8[uVar9 * 0x1f0] = '\0';
                local_8f4[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if ((local_8fc[uVar9 * 0x7c] | 2) == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e470;
            }
            pcVar10 = local_88c + uVar9 * 0x1f0;
            if (local_88c[uVar9 * 0x1f0] != '\0') {
              if ((local_880[uVar9 * 0x7c] | 2) == 2) goto LAB_0278e818;
              goto LAB_0278e2e8;
            }
          }
          if (local_123c[uVar9 * 0x1f0] != '\0') {
            uVar12 = auStack_1238[uVar9 * 0x3e + 3];
            auStack_878[uVar9 * 0x3e] = auStack_1238[uVar9 * 0x3e + 2];
            uVar7 = auStack_1238[uVar9 * 0x3e];
            uVar11 = auStack_1238[uVar9 * 0x3e + 1];
            auStack_878[uVar9 * 0x3e + 1] = uVar12;
            *(undefined8 *)(local_88c + uVar9 * 0x1f0 + 4) = uVar7;
            *(undefined8 *)(local_880 + uVar9 * 0x7c) = uVar11;
            uVar12 = auStack_1238[uVar9 * 0x3e + 7];
            auStack_878[uVar9 * 0x3e + 4] = auStack_1238[uVar9 * 0x3e + 6];
            uVar7 = auStack_1238[uVar9 * 0x3e + 4];
            uVar11 = auStack_1238[uVar9 * 0x3e + 5];
            auStack_878[uVar9 * 0x3e + 5] = uVar12;
            auStack_878[uVar9 * 0x3e + 2] = uVar7;
            auStack_878[uVar9 * 0x3e + 3] = uVar11;
            uVar12 = auStack_1238[uVar9 * 0x3e + 0xb];
            auStack_878[uVar9 * 0x3e + 8] = auStack_1238[uVar9 * 0x3e + 10];
            uVar7 = auStack_1238[uVar9 * 0x3e + 9];
            auStack_878[uVar9 * 0x3e + 6] = auStack_1238[uVar9 * 0x3e + 8];
            auStack_878[uVar9 * 0x3e + 7] = uVar7;
            uVar7 = auStack_1238[uVar9 * 0x3e + 0xc];
            uVar11 = auStack_1238[uVar9 * 0x3e + 0xe];
            auStack_878[uVar9 * 0x3e + 0xb] = auStack_1238[uVar9 * 0x3e + 0xd];
            auStack_878[uVar9 * 0x3e + 0xc] = uVar11;
            auStack_878[uVar9 * 0x3e + 9] = uVar12;
            auStack_878[uVar9 * 0x3e + 10] = uVar7;
            *pcVar10 = '\x01';
            local_123c[uVar9 * 0x1f0] = '\0';
          }
        }
LAB_0278e2e8:
        lVar8 = lVar8 + 1;
      } while (lVar8 != 5);
    }
    else {
      do {
        uVar4 = (byte)(&DAT_03a7e064)[lVar8] - 1;
        if ((uVar4 < 5) && ((uint)(byte)(&DAT_03a7e064)[lVar8] != uVar6 >> 8)) {
          uVar9 = (ulong)uVar4 & 0xff;
          pcVar10 = local_a00 + uVar9 * 0x1f0;
          if ((param_2 & 1) == 0) {
            if (*pcVar10 == '\0') {
LAB_0278e014:
              if (local_13b0[uVar9 * 0x1f0] != '\0') {
                local_9ec[uVar9 * 0x3e] = local_13ac[uVar9 * 0x3e + 2];
                *(undefined8 *)(local_9f4 + uVar9 * 0x7c) = local_13ac[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_a00 + uVar9 * 0x1f0 + 4) = local_13ac[uVar9 * 0x3e];
                local_9ec[uVar9 * 0x3e + 4] = local_13ac[uVar9 * 0x3e + 6];
                local_9ec[uVar9 * 0x3e + 3] = local_13ac[uVar9 * 0x3e + 5];
                local_9ec[uVar9 * 0x3e + 2] = local_13ac[uVar9 * 0x3e + 4];
                local_9ec[uVar9 * 0x3e + 1] = local_13ac[uVar9 * 0x3e + 3];
                local_9ec[uVar9 * 0x3e + 8] = local_13ac[uVar9 * 0x3e + 10];
                local_9ec[uVar9 * 0x3e + 7] = local_13ac[uVar9 * 0x3e + 9];
                local_9ec[uVar9 * 0x3e + 6] = local_13ac[uVar9 * 0x3e + 8];
                local_9ec[uVar9 * 0x3e + 5] = local_13ac[uVar9 * 0x3e + 7];
                local_9ec[uVar9 * 0x3e + 0xc] = local_13ac[uVar9 * 0x3e + 0xe];
                local_9ec[uVar9 * 0x3e + 0xb] = local_13ac[uVar9 * 0x3e + 0xd];
                uVar12 = local_13ac[uVar9 * 0x3e + 0xc];
                uVar7 = local_13ac[uVar9 * 0x3e + 0xb];
                local_13b0[uVar9 * 0x1f0] = '\0';
                local_9ec[uVar9 * 0x3e + 10] = uVar12;
                local_9ec[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if (local_9f4[uVar9 * 0x7c] == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e014;
            }
            pcVar10 = local_984 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278e0cc:
              if (local_1334[uVar9 * 0x1f0] != '\0') {
                uVar7 = local_1330[uVar9 * 0x3e + 3];
                local_970[uVar9 * 0x3e] = local_1330[uVar9 * 0x3e + 2];
                local_970[uVar9 * 0x3e + 1] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_984 + uVar9 * 0x1f0 + 4) = local_1330[uVar9 * 0x3e];
                *(undefined8 *)(local_978 + uVar9 * 0x7c) = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 7];
                local_970[uVar9 * 0x3e + 4] = local_1330[uVar9 * 0x3e + 6];
                local_970[uVar9 * 0x3e + 5] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 5];
                local_970[uVar9 * 0x3e + 2] = local_1330[uVar9 * 0x3e + 4];
                local_970[uVar9 * 0x3e + 3] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xb];
                local_970[uVar9 * 0x3e + 8] = local_1330[uVar9 * 0x3e + 10];
                local_970[uVar9 * 0x3e + 9] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 9];
                local_970[uVar9 * 0x3e + 6] = local_1330[uVar9 * 0x3e + 8];
                local_970[uVar9 * 0x3e + 7] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xc];
                uVar12 = local_1330[uVar9 * 0x3e + 0xd];
                uVar11 = local_1330[uVar9 * 0x3e + 0xe];
                local_1334[uVar9 * 0x1f0] = '\0';
                local_970[uVar9 * 0x3e + 0xb] = uVar12;
                local_970[uVar9 * 0x3e + 0xc] = uVar11;
                local_970[uVar9 * 0x3e + 10] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if (local_978[uVar9 * 0x7c] == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e0cc;
            }
            pcVar10 = local_908 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278e14c:
              if (local_12b8[uVar9 * 0x1f0] != '\0') {
                *(undefined8 *)(local_8fc + uVar9 * 0x7c) = local_12b4[uVar9 * 0x3e + 1];
                uVar11 = local_12b4[uVar9 * 0x3e + 6];
                local_8f4[uVar9 * 0x3e] = local_12b4[uVar9 * 0x3e + 2];
                uVar7 = local_12b4[uVar9 * 0x3e + 3];
                uVar12 = local_12b4[uVar9 * 0x3e + 4];
                local_8f4[uVar9 * 0x3e + 4] = uVar11;
                local_8f4[uVar9 * 0x3e + 3] = local_12b4[uVar9 * 0x3e + 5];
                *(undefined8 *)(local_908 + uVar9 * 0x1f0 + 4) = local_12b4[uVar9 * 0x3e];
                local_8f4[uVar9 * 0x3e + 1] = uVar7;
                local_8f4[uVar9 * 0x3e + 8] = local_12b4[uVar9 * 0x3e + 10];
                uVar7 = local_12b4[uVar9 * 0x3e + 9];
                local_8f4[uVar9 * 0x3e + 2] = uVar12;
                local_8f4[uVar9 * 0x3e + 7] = uVar7;
                local_8f4[uVar9 * 0x3e + 6] = local_12b4[uVar9 * 0x3e + 8];
                uVar7 = local_12b4[uVar9 * 0x3e + 0xe];
                local_8f4[uVar9 * 0x3e + 5] = local_12b4[uVar9 * 0x3e + 7];
                uVar12 = local_12b4[uVar9 * 0x3e + 0xd];
                uVar11 = local_12b4[uVar9 * 0x3e + 0xc];
                local_8f4[uVar9 * 0x3e + 0xc] = uVar7;
                local_8f4[uVar9 * 0x3e + 0xb] = uVar12;
                local_8f4[uVar9 * 0x3e + 10] = uVar11;
                uVar7 = local_12b4[uVar9 * 0x3e + 0xb];
                local_12b8[uVar9 * 0x1f0] = '\0';
                local_8f4[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if (local_8fc[uVar9 * 0x7c] == 2) {
              *pcVar10 = '\0';
              goto LAB_0278e14c;
            }
            pcVar10 = local_88c + uVar9 * 0x1f0;
            if (local_88c[uVar9 * 0x1f0] != '\0') {
              if (local_880[uVar9 * 0x7c] != 2) goto LAB_0278dd38;
LAB_0278e274:
              *pcVar10 = '\0';
            }
          }
          else {
            if (*pcVar10 == '\0') {
LAB_0278dd8c:
              if (local_13b0[uVar9 * 0x1f0] != '\0') {
                local_9ec[uVar9 * 0x3e] = local_13ac[uVar9 * 0x3e + 2];
                *(undefined8 *)(local_9f4 + uVar9 * 0x7c) = local_13ac[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_a00 + uVar9 * 0x1f0 + 4) = local_13ac[uVar9 * 0x3e];
                local_9ec[uVar9 * 0x3e + 4] = local_13ac[uVar9 * 0x3e + 6];
                local_9ec[uVar9 * 0x3e + 3] = local_13ac[uVar9 * 0x3e + 5];
                local_9ec[uVar9 * 0x3e + 2] = local_13ac[uVar9 * 0x3e + 4];
                local_9ec[uVar9 * 0x3e + 1] = local_13ac[uVar9 * 0x3e + 3];
                local_9ec[uVar9 * 0x3e + 8] = local_13ac[uVar9 * 0x3e + 10];
                local_9ec[uVar9 * 0x3e + 7] = local_13ac[uVar9 * 0x3e + 9];
                local_9ec[uVar9 * 0x3e + 6] = local_13ac[uVar9 * 0x3e + 8];
                local_9ec[uVar9 * 0x3e + 5] = local_13ac[uVar9 * 0x3e + 7];
                local_9ec[uVar9 * 0x3e + 0xc] = local_13ac[uVar9 * 0x3e + 0xe];
                local_9ec[uVar9 * 0x3e + 0xb] = local_13ac[uVar9 * 0x3e + 0xd];
                uVar12 = local_13ac[uVar9 * 0x3e + 0xc];
                uVar7 = local_13ac[uVar9 * 0x3e + 0xb];
                local_13b0[uVar9 * 0x1f0] = '\0';
                local_9ec[uVar9 * 0x3e + 10] = uVar12;
                local_9ec[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if ((local_9f4[uVar9 * 0x7c] | 2) == 2) {
              *pcVar10 = '\0';
              goto LAB_0278dd8c;
            }
            pcVar10 = local_984 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278de48:
              if (local_1334[uVar9 * 0x1f0] != '\0') {
                uVar7 = local_1330[uVar9 * 0x3e + 3];
                local_970[uVar9 * 0x3e] = local_1330[uVar9 * 0x3e + 2];
                local_970[uVar9 * 0x3e + 1] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 1];
                *(undefined8 *)(local_984 + uVar9 * 0x1f0 + 4) = local_1330[uVar9 * 0x3e];
                *(undefined8 *)(local_978 + uVar9 * 0x7c) = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 7];
                local_970[uVar9 * 0x3e + 4] = local_1330[uVar9 * 0x3e + 6];
                local_970[uVar9 * 0x3e + 5] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 5];
                local_970[uVar9 * 0x3e + 2] = local_1330[uVar9 * 0x3e + 4];
                local_970[uVar9 * 0x3e + 3] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xb];
                local_970[uVar9 * 0x3e + 8] = local_1330[uVar9 * 0x3e + 10];
                local_970[uVar9 * 0x3e + 9] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 9];
                local_970[uVar9 * 0x3e + 6] = local_1330[uVar9 * 0x3e + 8];
                local_970[uVar9 * 0x3e + 7] = uVar7;
                uVar7 = local_1330[uVar9 * 0x3e + 0xc];
                uVar12 = local_1330[uVar9 * 0x3e + 0xd];
                uVar11 = local_1330[uVar9 * 0x3e + 0xe];
                local_1334[uVar9 * 0x1f0] = '\0';
                local_970[uVar9 * 0x3e + 0xb] = uVar12;
                local_970[uVar9 * 0x3e + 0xc] = uVar11;
                local_970[uVar9 * 0x3e + 10] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if ((local_978[uVar9 * 0x7c] | 2) == 2) {
              *pcVar10 = '\0';
              goto LAB_0278de48;
            }
            pcVar10 = local_908 + uVar9 * 0x1f0;
            if (*pcVar10 == '\0') {
LAB_0278decc:
              if (local_12b8[uVar9 * 0x1f0] != '\0') {
                *(undefined8 *)(local_8fc + uVar9 * 0x7c) = local_12b4[uVar9 * 0x3e + 1];
                uVar11 = local_12b4[uVar9 * 0x3e + 6];
                local_8f4[uVar9 * 0x3e] = local_12b4[uVar9 * 0x3e + 2];
                uVar7 = local_12b4[uVar9 * 0x3e + 3];
                uVar12 = local_12b4[uVar9 * 0x3e + 4];
                local_8f4[uVar9 * 0x3e + 4] = uVar11;
                local_8f4[uVar9 * 0x3e + 3] = local_12b4[uVar9 * 0x3e + 5];
                *(undefined8 *)(local_908 + uVar9 * 0x1f0 + 4) = local_12b4[uVar9 * 0x3e];
                local_8f4[uVar9 * 0x3e + 1] = uVar7;
                local_8f4[uVar9 * 0x3e + 8] = local_12b4[uVar9 * 0x3e + 10];
                uVar7 = local_12b4[uVar9 * 0x3e + 9];
                local_8f4[uVar9 * 0x3e + 2] = uVar12;
                local_8f4[uVar9 * 0x3e + 7] = uVar7;
                local_8f4[uVar9 * 0x3e + 6] = local_12b4[uVar9 * 0x3e + 8];
                uVar7 = local_12b4[uVar9 * 0x3e + 0xe];
                local_8f4[uVar9 * 0x3e + 5] = local_12b4[uVar9 * 0x3e + 7];
                uVar12 = local_12b4[uVar9 * 0x3e + 0xd];
                uVar11 = local_12b4[uVar9 * 0x3e + 0xc];
                local_8f4[uVar9 * 0x3e + 0xc] = uVar7;
                local_8f4[uVar9 * 0x3e + 0xb] = uVar12;
                local_8f4[uVar9 * 0x3e + 10] = uVar11;
                uVar7 = local_12b4[uVar9 * 0x3e + 0xb];
                local_12b8[uVar9 * 0x1f0] = '\0';
                local_8f4[uVar9 * 0x3e + 9] = uVar7;
                *pcVar10 = '\x01';
              }
            }
            else if ((local_8fc[uVar9 * 0x7c] | 2) == 2) {
              *pcVar10 = '\0';
              goto LAB_0278decc;
            }
            pcVar10 = local_88c + uVar9 * 0x1f0;
            if (local_88c[uVar9 * 0x1f0] != '\0') {
              if ((local_880[uVar9 * 0x7c] | 2) == 2) goto LAB_0278e274;
              goto LAB_0278dd38;
            }
          }
          if (local_123c[uVar9 * 0x1f0] != '\0') {
            uVar12 = auStack_1238[uVar9 * 0x3e + 3];
            auStack_878[uVar9 * 0x3e] = auStack_1238[uVar9 * 0x3e + 2];
            uVar7 = auStack_1238[uVar9 * 0x3e];
            uVar11 = auStack_1238[uVar9 * 0x3e + 1];
            auStack_878[uVar9 * 0x3e + 1] = uVar12;
            *(undefined8 *)(local_88c + uVar9 * 0x1f0 + 4) = uVar7;
            *(undefined8 *)(local_880 + uVar9 * 0x7c) = uVar11;
            uVar12 = auStack_1238[uVar9 * 0x3e + 7];
            auStack_878[uVar9 * 0x3e + 4] = auStack_1238[uVar9 * 0x3e + 6];
            uVar7 = auStack_1238[uVar9 * 0x3e + 4];
            uVar11 = auStack_1238[uVar9 * 0x3e + 5];
            auStack_878[uVar9 * 0x3e + 5] = uVar12;
            auStack_878[uVar9 * 0x3e + 2] = uVar7;
            auStack_878[uVar9 * 0x3e + 3] = uVar11;
            uVar12 = auStack_1238[uVar9 * 0x3e + 0xb];
            auStack_878[uVar9 * 0x3e + 8] = auStack_1238[uVar9 * 0x3e + 10];
            uVar7 = auStack_1238[uVar9 * 0x3e + 9];
            auStack_878[uVar9 * 0x3e + 6] = auStack_1238[uVar9 * 0x3e + 8];
            auStack_878[uVar9 * 0x3e + 7] = uVar7;
            uVar7 = auStack_1238[uVar9 * 0x3e + 0xc];
            uVar11 = auStack_1238[uVar9 * 0x3e + 0xe];
            auStack_878[uVar9 * 0x3e + 0xb] = auStack_1238[uVar9 * 0x3e + 0xd];
            auStack_878[uVar9 * 0x3e + 0xc] = uVar11;
            auStack_878[uVar9 * 0x3e + 9] = uVar12;
            auStack_878[uVar9 * 0x3e + 10] = uVar7;
            *pcVar10 = '\x01';
            local_123c[uVar9 * 0x1f0] = '\0';
          }
        }
LAB_0278dd38:
        lVar8 = lVar8 + 1;
      } while (lVar8 != 5);
    }
    FUN_0110b990(plVar13,local_a00);
    FUN_0110bd14(plVar13,local_13b0);
    local_af8 = '\0';
    local_a7c = '\0';
    local_b74 = '\0';
    local_bf0 = '\0';
    local_c6c = '\0';
    local_ce8 = '\0';
    local_d64 = '\0';
    local_de0 = '\0';
    local_e5c = '\0';
    local_ed8 = '\0';
    local_f54 = '\0';
    local_fd0 = '\0';
    local_104c = '\0';
    local_10c8 = '\0';
    local_1144 = '\0';
    local_11c0 = '\0';
    local_123c[0] = '\0';
    local_12b8[0] = '\0';
    local_1334[0] = '\0';
    local_13b0[0] = '\0';
    local_cc = '\0';
    local_148 = '\0';
    local_1c4 = '\0';
    local_240 = '\0';
    local_2bc = '\0';
    local_338 = '\0';
    local_3b4 = '\0';
    local_430 = '\0';
    local_4ac = '\0';
    local_528 = '\0';
    local_5a4 = '\0';
    local_620 = '\0';
    local_69c = '\0';
    local_718 = '\0';
    local_794 = '\0';
    local_810 = '\0';
    local_88c[0] = '\0';
    local_908[0] = '\0';
    local_984[0] = '\0';
    if (local_a00[0] != '\0') {
      local_a00[0] = '\0';
    }
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


