/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f450c; name: FUN_001f450c
 */


ulong FUN_001f450c(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  void *__dest;
  undefined8 uVar10;
  size_t sVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  uint *puVar16;
  ulong *puVar17;
  long lVar18;
  byte *pbVar19;
  byte bVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  void *__src;
  undefined8 local_40;
  long local_38;
  
  if (10000 < param_2) {
    if (param_2 < 0x27a3) {
      if (0x2785 < param_2) {
        if (param_2 < 0x2796) {
          if (param_2 != 0x2786) {
            if (param_2 == 0x2793) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x7a0) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
            goto switchD_001f4578_caseD_27a4;
          }
          param_1 = param_1 + 0xd20;
        }
        else {
          if (param_2 != 0x2796) {
            if (param_2 != 0x2797) goto switchD_001f4578_caseD_27a4;
            iVar6 = (int)param_3[3];
            if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              plVar14 = (long *)(param_3[1] + (long)iVar6);
            }
            else {
              plVar14 = (long *)*param_3;
              *param_3 = (long)(plVar14 + 1);
            }
            lVar22 = *plVar14;
            if (lVar22 != 0) {
              iVar6 = FUN_001f8b48(lVar22,&DAT_038bdb9f);
              if (iVar6 == 0) {
                iVar6 = FUN_001f8b48(lVar22,&DAT_0392dcd2);
                if (iVar6 == 0) {
                  iVar6 = FUN_001f8b48(lVar22,"FLUSH");
                  if (iVar6 == 0) {
                    iVar6 = FUN_001f8b48(lVar22,"RELOAD");
                    if (iVar6 == 0) {
                      if (*(long *)(param_1 + 0xf70) == 0) {
                        uVar10 = FUN_001dc02c(param_1,0,0,1);
                        *(undefined8 *)(param_1 + 0xf70) = uVar10;
                      }
                      lVar22 = FUN_002044f4(lVar22);
                      if ((lVar22 == 0) || (*(long *)(param_1 + 0xf70) == 0)) {
                        FUN_002044d4(lVar22);
                        goto LAB_001f8468;
                      }
                      FUN_001f43b0(param_1,2,2);
                      iVar6 = thunk_FUN_001f8bec("Set-Cookie:",lVar22,0xb);
                      if (iVar6 == 0) {
                        lVar18 = lVar22;
                      }
                      else {
                        lVar18 = lVar22 + 0xb;
                      }
                      FUN_001dc210(param_1,*(undefined8 *)(param_1 + 0xf70),iVar6 != 0,0,lVar18,0,0,
                                   1);
                      FUN_001f43f8(param_1,2);
                      FUN_002044d4(lVar22);
                    }
                    else {
                      FUN_001dbf8c(param_1);
                    }
                  }
                  else {
                    FUN_001dd8a0(param_1,0);
                  }
                  goto LAB_001f7afc;
                }
                FUN_001f43b0(param_1,2,2);
                FUN_001dd71c(*(undefined8 *)(param_1 + 0xf70));
              }
              else {
                FUN_001f43b0(param_1,2,2);
                FUN_001dd6c4(*(undefined8 *)(param_1 + 0xf70));
              }
              FUN_001f43f8(param_1,2);
            }
            goto LAB_001f7afc;
          }
          param_1 = param_1 + 0xcd0;
        }
        goto LAB_001f7738;
      }
      switch(param_2) {
      case 0x2711:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x688) = *puVar13;
        break;
      case 0x2712:
        if ((*(byte *)(param_1 + 0xf68) & 1) != 0) {
          FUN_002044d4(*(undefined8 *)(param_1 + 0xf48));
          *(undefined8 *)(param_1 + 0xf48) = 0;
          *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
        }
        if (*(char *)(param_1 + 0x6c1) == '\0') {
          iVar6 = (int)param_3[3];
          if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar10 = FUN_00205068(*puVar13);
          uVar9 = FUN_001f4440(param_1 + 0xd48,uVar10);
          FUN_002044d4(uVar10);
        }
        else {
          iVar6 = (int)param_3[3];
          if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = FUN_001f4440(param_1 + 0xd48,*puVar13);
        }
        *(undefined8 *)(param_1 + 0xf48) = *(undefined8 *)(param_1 + 0xd48);
        break;
      default:
        goto switchD_001f4578_caseD_27a4;
      case 0x2714:
        param_1 = param_1 + 0xd28;
        goto LAB_001f7738;
      case 0x2715:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        pcVar12 = (char *)*puVar13;
        plVar14 = (long *)(param_1 + 0xde0);
        puVar13 = (undefined8 *)(param_1 + 0xde8);
        goto LAB_001f6b30;
      case 0x2716:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        pcVar12 = (char *)*puVar13;
        plVar14 = (long *)(param_1 + 0xdf8);
        puVar13 = (undefined8 *)(param_1 + 0xe00);
LAB_001f6b30:
        local_40 = 0;
        local_38 = 0;
        if (pcVar12 != (char *)0x0) {
          sVar11 = strlen(pcVar12);
          plVar1 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            plVar1 = &local_38;
          }
          puVar2 = (undefined8 *)(undefined1 *)0x0;
          if (puVar13 != (undefined8 *)0x0) {
            puVar2 = &local_40;
          }
          uVar9 = FUN_001fd52c(pcVar12,sVar11,plVar1,puVar2,0);
          if (uVar9 != 0) {
            return (ulong)uVar9;
          }
        }
        uVar15 = 0;
        if (plVar14 != (long *)0x0) {
          if ((pcVar12 != (char *)0x0) && (local_38 == 0)) {
            if (*pcVar12 == ':') {
              local_38 = FUN_002044f4(&DAT_03996322);
              uVar9 = 0x1b;
              if (local_38 != 0) {
                uVar9 = 0;
              }
              uVar15 = (ulong)uVar9;
            }
            else {
              uVar15 = 0;
            }
          }
          FUN_002044d4(*plVar14);
          *plVar14 = local_38;
        }
        if (puVar13 != (undefined8 *)0x0) {
          FUN_002044d4(*puVar13);
          *puVar13 = local_40;
        }
        return uVar15;
      case 0x2717:
        param_1 = param_1 + 0xd38;
        goto LAB_001f7738;
      case 0x2719:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x690) = *puVar13;
        break;
      case 0x271a:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x678) = *puVar13;
        break;
      case 0x271f:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        *(undefined8 *)(param_1 + 0x6e8) = *puVar13;
        FUN_002044d4(*(undefined8 *)(param_1 + 0xe68));
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xe68) = 0;
        goto LAB_001f7b10;
      case 0x2720:
        if ((*(byte *)(param_1 + 0xf68) >> 1 & 1) != 0) {
          FUN_002044d4(*(undefined8 *)(param_1 + 0xf50));
          *(undefined8 *)(param_1 + 0xf50) = 0;
          *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfd;
        }
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar15 = FUN_001f4440(param_1 + 0xd40,*puVar13);
        *(undefined8 *)(param_1 + 0xf50) = *(undefined8 *)(param_1 + 0xd40);
        return uVar15;
      case 0x2721:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar15 = FUN_001f4440(param_1 + 0xce0,*puVar13);
        uVar21 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffff8000 |
                 *(ulong *)(param_1 + 0xf40) & 0x3fff |
                 (ulong)(*(long *)(param_1 + 0xce0) != 0) << 0xe;
        goto LAB_001f77c8;
      case 0x2722:
        param_1 = param_1 + 0xdb0;
        goto LAB_001f7738;
      case 0x2726:
        param_1 = param_1 + 0xca0;
        goto LAB_001f7738;
      case 0x2727:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x808) = *puVar13;
        break;
      case 0x2728:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x818) = *puVar13;
        uVar7 = 3;
        goto LAB_001f76d8;
      case 0x2729:
      case 0x272a:
      case 0x2751:
      case 0x2766:
      case 0x2767:
      case 0x2768:
      case 0x2769:
        goto switchD_001f4578_caseD_27b9;
      case 0x272c:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x9e0) = *puVar13;
        break;
      case 0x272d:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x698) = *puVar13;
        break;
      case 0x272f:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          plVar14 = (long *)(param_3[1] + (long)iVar6);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
        }
        if (*plVar14 != 0) {
          lVar22 = FUN_001f85e4(*(undefined8 *)(param_1 + 0xf58));
          if (lVar22 != 0) {
            uVar9 = 0;
            *(long *)(param_1 + 0xf58) = lVar22;
            break;
          }
          FUN_001f86a8(*(undefined8 *)(param_1 + 0xf58));
          *(undefined8 *)(param_1 + 0xf58) = 0;
          goto LAB_001f8468;
        }
        goto LAB_001f7afc;
      case 0x2734:
        param_1 = param_1 + 0xcb0;
        goto LAB_001f7738;
      case 0x2735:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          plVar14 = (long *)(param_3[1] + (long)iVar6);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
        }
        lVar22 = *plVar14;
        uVar9 = 0;
        *(long *)(param_1 + 0x668) = lVar22;
        if (lVar22 == 0) {
          *(undefined8 *)(param_1 + 0x668) = *(undefined8 *)PTR_stderr_04372330;
        }
        break;
      case 0x2737:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x9e8) = *puVar13;
        break;
      case 0x2749:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x798) = *puVar13;
        break;
      case 0x274e:
        param_1 = param_1 + 0xcc0;
        goto LAB_001f7738;
      case 0x274f:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar15 = FUN_001f4440(param_1 + 0xd18,*puVar13);
        uVar21 = *(ulong *)(param_1 + 0xf40) & 0xfffffffff0000000 |
                 *(ulong *)(param_1 + 0xf40) & 0x7ffffff |
                 (ulong)(*(long *)(param_1 + 0xd18) != 0) << 0x1b;
LAB_001f77c8:
        *(ulong *)(param_1 + 0xf40) = uVar21;
        return uVar15;
      case 0x2756:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xa10) = *puVar13;
        break;
      case 0x275c:
        param_1 = param_1 + 0xda8;
        goto LAB_001f7738;
      case 0x275d:
        param_1 = param_1 + 0xda0;
        goto LAB_001f7738;
      case 0x2762:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar8 = FUN_001f4440(param_1 + 0xca8,*puVar13);
        lVar22 = FUN_001dc02c(param_1,0,*(undefined8 *)(param_1 + 0xf70),
                              *(ulong *)(param_1 + 0xf40) >> 5 & 1);
        *(long *)(param_1 + 0xf70) = lVar22;
        uVar9 = 0x1b;
        if (lVar22 != 0) {
          uVar9 = uVar8;
        }
        break;
      case 0x2763:
        goto switchD_001f4578_caseD_2813;
      case 0x276d:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x9f0) = *puVar13;
        break;
      case 0x276f:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x670) = *puVar13;
        break;
      case 0x2771:
        if ((*(byte *)(*(long *)PTR_PTR_04372758 + 0x10) & 1) != 0) {
          param_1 = param_1 + 0xd50;
          goto LAB_001f7738;
        }
        goto switchD_001f4578_caseD_2813;
      case 0x2774:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          plVar14 = (long *)(param_3[1] + (long)iVar6);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
        }
        lVar22 = *plVar14;
        if (*(long *)(param_1 + 0xe8) != 0) {
          FUN_001f43b0(param_1,1,2);
          if (*(int *)(param_1 + 0xd0) == 3) {
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined4 *)(param_1 + 0xd0) = 0;
          }
          lVar18 = *(long *)(param_1 + 0xe8);
          if (*(long *)(lVar18 + 0xa8) == *(long *)(param_1 + 0xf70)) {
            *(undefined8 *)(param_1 + 0xf70) = 0;
          }
          if (*(long *)(lVar18 + 0xb0) == *(long *)(param_1 + 0x1158)) {
            *(undefined8 *)(param_1 + 0x1158) = 0;
          }
          *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
          FUN_001f43f8(param_1,1);
          *(undefined8 *)(param_1 + 0xe8) = 0;
        }
        *(long *)(param_1 + 0xe8) = lVar22;
        if (lVar22 != 0) {
          FUN_001f43b0(param_1,1,2);
          *(int *)(*(long *)(param_1 + 0xe8) + 4) = *(int *)(*(long *)(param_1 + 0xe8) + 4) + 1;
          pbVar19 = *(byte **)(param_1 + 0xe8);
          if ((*pbVar19 >> 3 & 1) != 0) {
            *(byte **)(param_1 + 200) = pbVar19 + 0x78;
            *(undefined4 *)(param_1 + 0xd0) = 3;
          }
          if (*(long *)(pbVar19 + 0xa8) != 0) {
            FUN_001dd1dc(*(undefined8 *)(param_1 + 0xf70));
            pbVar19 = *(byte **)(param_1 + 0xe8);
            *(undefined8 *)(param_1 + 0xf70) = *(undefined8 *)(pbVar19 + 0xa8);
          }
          if (*(long *)(pbVar19 + 0xb0) != 0) {
            *(undefined8 *)(param_1 + 0xbf8) = *(undefined8 *)(pbVar19 + 0xb8);
            *(undefined8 *)(param_1 + 0x1158) = *(undefined8 *)(pbVar19 + 0xb0);
          }
          FUN_001f43f8(param_1,1);
        }
        goto LAB_001f7afc;
      case 0x2776:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        pcVar12 = (char *)*puVar13;
        if ((pcVar12 == (char *)0x0) || (*pcVar12 != '\0')) {
          param_1 = param_1 + 0xcc8;
          goto LAB_001f7760;
        }
        lVar22 = FUN_001ee418();
        if (lVar22 != 0) {
          uVar15 = FUN_001f4440(param_1 + 0xcc8,lVar22);
          FUN_002044d4(lVar22);
          return uVar15 & 0xffffffff;
        }
LAB_001f8468:
        uVar9 = 0x1b;
        break;
      case 0x2777:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xc20) = *puVar13;
        break;
      case 0x2778:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xc28) = *puVar13;
        break;
      case 0x277d:
        if ((*(byte *)(*(long *)PTR_PTR_04372758 + 0x10) >> 3 & 1) != 0) {
          iVar6 = (int)param_3[3];
          if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0xae8) = *puVar13;
          break;
        }
        goto switchD_001f4578_caseD_2813;
      }
      goto switchD_001f45a8_caseD_5b;
    }
    if (0x4e2a < param_2) {
      if (0x4ee3 < param_2) {
        if (param_2 < 0x5017) {
          if (param_2 < 0x4ef0) {
            switch(param_2) {
            case 0x4ee4:
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x718) = *puVar13;
              break;
            default:
              goto switchD_001f4578_caseD_27a4;
            case 0x4ee6:
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xea0) = *puVar13;
              break;
            case 0x4ee7:
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xea8) = *puVar13;
              break;
            case 0x4ee8:
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xeb0) = *puVar13;
            }
            goto switchD_001f45a8_caseD_5b;
          }
          if (param_2 < 0x4f30) {
            if (param_2 == 0x4ef0) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x768) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
            if (param_2 == 0x4efb) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                plVar14 = (long *)(param_3[1] + (long)iVar6);
              }
              else {
                plVar14 = (long *)*param_3;
                *param_3 = (long)(plVar14 + 1);
              }
              lVar22 = *plVar14;
              *(long *)(param_1 + 0x730) = lVar22;
              goto LAB_001f49a8;
            }
          }
          else {
            if (param_2 == 0x4f30) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xf00) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
            if (param_2 == 0x4f3b) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xf38) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
          }
        }
        else {
          if (0x75c0 < param_2) {
            if (param_2 == 0x75c1) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                plVar14 = (long *)(param_3[1] + (long)iVar6);
              }
              else {
                plVar14 = (long *)*param_3;
                *param_3 = (long)(plVar14 + 1);
              }
              if (-1 < *plVar14) {
                uVar9 = 0;
                *(long *)(param_1 + 0x7f0) = *plVar14;
                goto switchD_001f45a8_caseD_5b;
              }
            }
            else {
              if (param_2 != 0x75c2) {
                if (param_2 == 0x763e) goto switchD_001f45a8_caseD_22;
                goto switchD_001f4578_caseD_27a4;
              }
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                plVar14 = (long *)(param_3[1] + (long)iVar6);
              }
              else {
                plVar14 = (long *)*param_3;
                *param_3 = (long)(plVar14 + 1);
              }
              if (-1 < *plVar14) {
                uVar9 = 0;
                *(long *)(param_1 + 0x7f8) = *plVar14;
                goto switchD_001f45a8_caseD_5b;
              }
            }
            goto LAB_001f6a28;
          }
          switch(param_2) {
          case 0x75a3:
            goto switchD_001f4680_caseD_75a3;
          case 0x75a4:
            goto switchD_001f4680_caseD_75a4;
          case 0x75a5:
            goto switchD_001f4680_caseD_75a5;
          case 0x75a6:
          case 0x75a7:
            break;
          case 0x75a8:
            goto switchD_001f4680_caseD_75a8;
          default:
            if (param_2 == 0x5017) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xaa8) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
            if (param_2 == 0x5018) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xab0) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
          }
        }
        goto switchD_001f4578_caseD_27a4;
      }
      if (param_2 < 0x4eae) {
        if (0x4e6e < param_2) {
          if (param_2 < 0x4e8c) {
            if (param_2 == 0x4e6f) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x710) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
            if (param_2 == 0x4e7e) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x738) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
          }
          else {
            if (param_2 == 0x4e8c) {
              if ((*(byte *)(*(long *)PTR_PTR_04372758 + 0x10) >> 3 & 1) != 0) {
                iVar6 = (int)param_3[3];
                if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
                }
                else {
                  puVar13 = (undefined8 *)*param_3;
                  *param_3 = (long)(puVar13 + 1);
                }
                uVar9 = 0;
                *(undefined8 *)(param_1 + 0xae0) = *puVar13;
                goto switchD_001f45a8_caseD_5b;
              }
              goto switchD_001f4578_caseD_2813;
            }
            if (param_2 == 0x4ea2) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x740) = *puVar13;
              goto switchD_001f45a8_caseD_5b;
            }
          }
          goto switchD_001f4578_caseD_27a4;
        }
        if (param_2 == 0x4e2b) {
          iVar6 = (int)param_3[3];
          if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
            plVar14 = (long *)(param_3[1] + (long)iVar6);
          }
          else {
            plVar14 = (long *)*param_3;
            *param_3 = (long)(plVar14 + 1);
          }
          lVar22 = *plVar14;
          uVar9 = 0;
          *(long *)(param_1 + 0x708) = lVar22;
          if (lVar22 == 0) {
            *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffffffd;
            *(undefined **)(param_1 + 0x708) = PTR_LAB_04372788;
            goto switchD_001f45a8_caseD_5b;
          }
          uVar15 = *(ulong *)(param_1 + 0xf40) | 2;
        }
        else {
          if (param_2 != 0x4e2c) {
            if (param_2 == 0x4e58) {
              iVar6 = (int)param_3[3];
              if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                plVar14 = (long *)(param_3[1] + (long)iVar6);
              }
              else {
                plVar14 = (long *)*param_3;
                *param_3 = (long)(plVar14 + 1);
              }
              lVar22 = *plVar14;
              *(long *)(param_1 + 0x728) = lVar22;
LAB_001f49a8:
              bVar20 = *(byte *)(param_1 + 0x10fc);
              uVar9 = 0;
              if (lVar22 == 0) {
                bVar20 = bVar20 & 0xfe;
              }
              else {
                bVar20 = bVar20 | 1;
              }
              *(byte *)(param_1 + 0x10fc) = bVar20;
              goto switchD_001f45a8_caseD_5b;
            }
            goto switchD_001f4578_caseD_27a4;
          }
          iVar6 = (int)param_3[3];
          if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
            plVar14 = (long *)(param_3[1] + (long)iVar6);
          }
          else {
            plVar14 = (long *)*param_3;
            *param_3 = (long)(plVar14 + 1);
          }
          lVar22 = *plVar14;
          uVar9 = 0;
          *(long *)(param_1 + 0x720) = lVar22;
          if (lVar22 == 0) {
            *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffffffe;
            *(undefined **)(param_1 + 0x720) = PTR_FUN_04372778;
            goto switchD_001f45a8_caseD_5b;
          }
          uVar15 = *(ulong *)(param_1 + 0xf40) | 1;
        }
        goto LAB_001f7a08;
      }
      switch(param_2) {
      case 0x4eae:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x780) = *puVar13;
        break;
      case 0x4eaf:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x788) = *puVar13;
        break;
      case 0x4eb0:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x790) = *puVar13;
        break;
      case 0x4eb1:
      case 0x4eb2:
      case 0x4eb3:
        goto switchD_001f4578_caseD_27a4;
      case 0x4eb4:
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x748) = *puVar13;
        break;
      default:
        if (param_2 == 0x4ec3) {
          iVar6 = (int)param_3[3];
          if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x758) = *puVar13;
          break;
        }
        if (param_2 == 0x4ec7) {
          iVar6 = (int)param_3[3];
          if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x6f0) = *puVar13;
          break;
        }
        goto switchD_001f4578_caseD_27a4;
      }
      goto switchD_001f45a8_caseD_5b;
    }
    switch(param_2) {
    case 0x27a3:
      param_1 = param_1 + 0xcd8;
      break;
    case 0x27a4:
    case 0x27a6:
    case 0x27a7:
    case 0x27a8:
    case 0x27a9:
    case 0x27aa:
    case 0x27ab:
    case 0x27ac:
    case 0x27ad:
    case 0x27ae:
    case 0x27af:
    case 0x27b0:
    case 0x27b1:
    case 0x27b2:
    case 0x27b3:
    case 0x27b6:
    case 0x27b7:
    case 0x27bb:
    case 0x27bc:
    case 0x27c2:
    case 0x27c4:
    case 0x27c5:
    case 0x27c6:
    case 0x27c7:
    case 0x27c8:
    case 0x27c9:
    case 0x27cc:
    case 0x27cd:
    case 0x27d1:
    case 0x27d2:
    case 0x27d4:
    case 0x27d5:
    case 0x27d6:
    case 0x27d7:
    case 0x27d8:
    case 0x27dc:
    case 0x27dd:
    case 0x27de:
    case 0x27df:
    case 0x27e0:
    case 0x27e2:
    case 0x27e4:
    case 0x27e5:
    case 0x27e6:
    case 0x27e7:
    case 0x27e8:
    case 0x27ea:
    case 0x27eb:
    case 0x27f1:
    case 0x27f2:
    case 0x27f3:
    case 0x27f5:
    case 0x27f7:
    case 0x27f8:
    case 0x27f9:
    case 0x27fa:
    case 0x27fd:
    case 0x27ff:
    case 0x2802:
    case 0x2804:
    case 0x2805:
    case 0x2808:
    case 0x2809:
    case 0x280a:
    case 0x280b:
    case 0x280c:
    case 0x280d:
    case 0x2815:
    case 0x2818:
    case 0x2819:
    case 0x281b:
    case 0x281c:
    case 0x281e:
    case 0x281f:
    case 0x2820:
    case 0x2822:
    case 0x2823:
    case 0x2826:
    case 0x2828:
    case 0x2829:
    case 0x282b:
      goto switchD_001f4578_caseD_27a4;
    case 0x27a5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x750) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27b4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x760) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27b5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      __src = (void *)*puVar13;
      if ((__src == (void *)0x0) || (*(long *)(param_1 + 0x6f8) == -1)) {
        uVar9 = FUN_001f4440(param_1 + 0xe68,__src);
      }
      else {
        if (-1 < *(long *)(param_1 + 0x6f8)) {
          FUN_002044d4(*(undefined8 *)(param_1 + 0xe68));
          lVar22 = *(long *)(param_1 + 0x6f8);
          if (lVar22 == 0) {
            lVar22 = 1;
          }
          *(undefined8 *)(param_1 + 0xe68) = 0;
          __dest = (void *)FUN_002044c4(lVar22);
          if (__dest != (void *)0x0) {
            if (*(size_t *)(param_1 + 0x6f8) != 0) {
              memcpy(__dest,__src,*(size_t *)(param_1 + 0x6f8));
            }
            uVar9 = 0;
            *(void **)(param_1 + 0xe68) = __dest;
            goto LAB_001f7b08;
          }
        }
        uVar9 = 0x1b;
      }
LAB_001f7b08:
      *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(param_1 + 0xe68);
LAB_001f7b10:
      uVar7 = 2;
      goto LAB_001f7b14;
    case 0x27b8:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x778) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27b9:
    case 0x27ba:
    case 0x2806:
    case 0x280e:
    case 0x280f:
    case 0x2810:
    case 0x2811:
    case 0x2812:
    case 0x2814:
      goto switchD_001f4578_caseD_27b9;
    case 0x27bd:
      param_1 = param_1 + 0xde0;
      break;
    case 0x27be:
      param_1 = param_1 + 0xde8;
      break;
    case 0x27bf:
      param_1 = param_1 + 0xdf8;
      break;
    case 0x27c0:
      param_1 = param_1 + 0xe00;
      break;
    case 0x27c1:
      param_1 = param_1 + 0xe08;
      break;
    case 0x27c3:
    case 0x27fb:
      param_1 = param_1 + 0xe28;
      break;
    case 0x27ca:
      param_1 = param_1 + 0xe38;
      break;
    case 0x27cb:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xe88) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27ce:
      param_1 = param_1 + 0xe10;
      break;
    case 0x27cf:
      param_1 = param_1 + 0xe18;
      break;
    case 0x27d0:
      param_1 = param_1 + 0xe20;
      break;
    case 0x27d3:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6a0) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27d9:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x15f0) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27da:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xeb8) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27db:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar10 = *puVar13;
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xa18) = uVar10;
      *(undefined8 *)(param_1 + 0xf60) = uVar10;
      goto switchD_001f45a8_caseD_5b;
    case 0x27e1:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x770) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27e3:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar15 = FUN_001dfe8c(param_1,*puVar13);
      return uVar15;
    case 0x27e9:
      param_1 = param_1 + 0xe40;
      break;
    case 0x27ec:
      param_1 = param_1 + 0xe48;
      break;
    case 0x27ed:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar15 = FUN_001dfe94(param_1,*puVar13);
      return uVar15;
    case 0x27ee:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar15 = FUN_001dfe9c(param_1,*puVar13);
      return uVar15;
    case 0x27ef:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar15 = FUN_001dfea4(param_1,*puVar13);
      return uVar15;
    case 0x27f0:
      param_1 = param_1 + 0xdf0;
      break;
    case 0x27f4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x810) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x27f6:
      if ((*(byte *)(*(long *)PTR_PTR_04372758 + 0x10) >> 2 & 1) != 0) {
        param_1 = param_1 + 0xd70;
        break;
      }
      goto switchD_001f4578_caseD_2813;
    case 0x27fc:
      param_1 = param_1 + 0xe30;
      break;
    case 0x27fe:
      param_1 = param_1 + 0xcb8;
      break;
    case 0x2800:
    case 0x2801:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar22 = *plVar14;
      if ((lVar22 == 0) || (*(int *)(lVar22 + 0x16f0) == -0x3f212453)) {
        if (*(long *)(param_1 + 0xee8) != 0) {
          FUN_001f0b88(*(long *)(param_1 + 0xee8),param_1);
        }
        FUN_001f0ac0(lVar22,param_1,param_2 == 0x2801);
      }
      goto LAB_001f7afc;
    case 0x2803:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xa20) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x2807:
      if ((*(byte *)(*(long *)PTR_PTR_04372758 + 0x10) & 1) != 0) {
        param_1 = param_1 + 0xd58;
        break;
      }
    case 0x2813:
      goto switchD_001f4578_caseD_2813;
    case 0x2816:
      param_1 = param_1 + 0xd30;
      break;
    case 0x2817:
      if ((*(byte *)(*(long *)PTR_PTR_04372758 + 0x10) >> 2 & 1) != 0) {
        param_1 = param_1 + 0xd78;
        break;
      }
      goto switchD_001f4578_caseD_2813;
    case 0x281a:
      param_1 = param_1 + 0xe50;
      break;
    case 0x281d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = FUN_001e43e4(param_1 + 0x820,*puVar13,0);
      if (uVar9 != 0) goto switchD_001f45a8_caseD_5b;
      uVar7 = 4;
LAB_001f76d8:
      *(undefined4 *)(param_1 + 0xa38) = uVar7;
      uVar15 = *(ulong *)(param_1 + 0xf40);
      goto LAB_001f76e0;
    case 0x2821:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xf08) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x2824:
      uVar15 = FUN_00203f78();
      if ((uVar15 & 1) != 0) {
        param_1 = param_1 + 0xd90;
        break;
      }
      goto switchD_001f4578_caseD_2813;
    case 0x2825:
      uVar15 = FUN_00203f78();
      if ((uVar15 & 1) != 0) {
        param_1 = param_1 + 0xd98;
        break;
      }
switchD_001f4578_caseD_2813:
      uVar9 = 4;
      goto switchD_001f45a8_caseD_5b;
    case 0x2827:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar15 = FUN_001f4440(param_1 + 0xe58,*puVar13);
      uVar21 = *(ulong *)(param_1 + 0xf40) & 0xfe00000000000000 |
               *(ulong *)(param_1 + 0xf40) & 0xffffffffffffff |
               (ulong)(*(long *)(param_1 + 0xe58) != 0) << 0x38;
      goto LAB_001f77c8;
    case 0x282a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xf28) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    case 0x282c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xf30) = *puVar13;
      goto switchD_001f45a8_caseD_5b;
    default:
      if (param_2 == 0x2906) {
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xa98) = *puVar13;
        goto switchD_001f45a8_caseD_5b;
      }
      if (param_2 == 0x2909) {
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
        }
        else {
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xab8) = *puVar13;
        goto switchD_001f45a8_caseD_5b;
      }
      goto switchD_001f4578_caseD_27a4;
    }
LAB_001f7738:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    pcVar12 = (char *)*puVar13;
LAB_001f7760:
    uVar15 = FUN_001f4440(param_1,pcVar12);
    return uVar15;
  }
  uVar9 = 0;
  switch(param_2) {
  case 3:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 >> 0x10 == 0) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0x6a8) = *puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x31:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x46:
  case 0x48:
  case 0x49:
  case 0x4c:
  case 0x4d:
  case 0x4f:
  case 0x52:
  case 0x53:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x61:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6c:
  case 0x6d:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x78:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb3:
  case 0xb4:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc3:
  case 0xc4:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xd0:
  case 0xd1:
  case 0xd3:
  case 0xd9:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe4:
  case 0xe6:
  case 0xe7:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xf0:
  case 0xf1:
  case 0xf3:
  case 0xf6:
  case 0xf7:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x10a:
  case 0x10d:
  case 0x10e:
  case 0x110:
  case 0x111:
  case 0x114:
  case 0x115:
  case 0x117:
  case 0x11a:
  case 0x11b:
  case 0x11c:
    goto switchD_001f4578_caseD_27a4;
  case 0xd:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 0x20c49c) {
      lVar22 = *puVar17 * 1000;
LAB_001f5f14:
      uVar9 = 0;
      *(long *)(param_1 + 0x7a8) = lVar22;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xe:
switchD_001f4680_caseD_75a3:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-2 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7d8) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x13:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7e0) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x14:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7e8) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x15:
switchD_001f4680_caseD_75a4:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-2 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0x800) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x1b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffffff80 |
             *(ulong *)(param_1 + 0xf40) & 0x3f | (ulong)(*plVar14 != 0) << 6;
    break;
  case 0x20:
  case 0x5c:
  case 0xfa:
    goto switchD_001f4578_caseD_2813;
  case 0x21:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 4) {
      uVar9 = 0;
      *(int *)(param_1 + 0xa28) = (int)*puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x22:
switchD_001f45a8_caseD_22:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0xa30) = *puVar13;
    goto switchD_001f45a8_caseD_5b;
  case 0x29:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffff8000000 |
             *(ulong *)(param_1 + 0xf40) & 0x3ffffff | (ulong)(*plVar14 != 0) << 0x1a;
    break;
  case 0x2a:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffc00000 |
             *(ulong *)(param_1 + 0xf40) & 0x1fffff | (ulong)(*plVar14 != 0) << 0x15;
    break;
  case 0x2b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    uVar9 = 0;
    *(ulong *)(param_1 + 0xf40) =
         *(ulong *)(param_1 + 0xf40) & 0xffffffffffff0000 |
         *(ulong *)(param_1 + 0xf40) & 0x7fff | (ulong)(lVar22 != 0) << 0xf;
    if (lVar22 == 0) {
      uVar8 = *(uint *)(param_1 + 0xfac) & 0xffffffef;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0xfac) | 0x10;
    }
    *(uint *)(param_1 + 0xfac) = uVar8;
    goto switchD_001f45a8_caseD_5b;
  case 0x2c:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffe000000 |
             *(ulong *)(param_1 + 0xf40) & 0xffffff | (ulong)(*plVar14 != 0) << 0x18;
    break;
  case 0x2d:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffe0000 |
             *(ulong *)(param_1 + 0xf40) & 0xffff | (ulong)(*plVar14 != 0) << 0x10;
    break;
  case 0x2e:
  case 0x36:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffc000000 |
             *(ulong *)(param_1 + 0xf40) & 0x1ffffff | (ulong)(lVar22 != 0) << 0x19;
    uVar9 = 0;
    *(ulong *)(param_1 + 0xf40) = uVar15;
    if (lVar22 != 0) {
      *(undefined4 *)(param_1 + 0xa38) = 5;
LAB_001f76e0:
      uVar15 = uVar15 & 0xfffffffffeffffff;
      goto LAB_001f7a08;
    }
    goto LAB_001f7988;
  case 0x2f:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (*plVar14 != 0) {
      uVar9 = 0;
      uVar7 = 2;
      goto LAB_001f76d8;
    }
LAB_001f7988:
    uVar9 = 0;
    uVar7 = 1;
LAB_001f7b14:
    *(undefined4 *)(param_1 + 0xa38) = uVar7;
    goto switchD_001f45a8_caseD_5b;
  case 0x30:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffffc000 |
             *(ulong *)(param_1 + 0xf40) & 0x1fff | (ulong)(*plVar14 != 0) << 0xd;
    break;
  case 0x32:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffffe000 |
             *(ulong *)(param_1 + 0xf40) & 0xfff | (ulong)(*plVar14 != 0) << 0xc;
    break;
  case 0x33:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 3) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc58) = (int)*puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x34:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffff80000 |
             *(ulong *)(param_1 + 0xf40) & 0x3ffff | (ulong)(*plVar14 != 0) << 0x12;
    break;
  case 0x35:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffff000 |
             *(ulong *)(param_1 + 0xf40) & 0x7ff | (ulong)(*plVar14 != 0) << 0xb;
    break;
  case 0x3a:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffff000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7fffff | (ulong)(*plVar14 != 0) << 0x17;
    break;
  case 0x3b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 >> 0x10 == 0) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0x680) = *puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x3c:
switchD_001f4680_caseD_75a8:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (-2 < lVar22) {
      if ((*(long *)(param_1 + 0x6f8) < lVar22) &&
         (*(long *)(param_1 + 0x6e8) == *(long *)(param_1 + 0xe68))) {
        FUN_002044d4();
        *(undefined8 *)(param_1 + 0xe68) = 0;
        *(undefined8 *)(param_1 + 0x6e8) = 0;
      }
      uVar9 = 0;
      *(long *)(param_1 + 0x6f8) = lVar22;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x3d:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffff800 |
             *(ulong *)(param_1 + 0xf40) & 0x3ff | (ulong)(*plVar14 != 0) << 10;
    break;
  case 0x40:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    bVar4 = *plVar14 != 0;
    *(byte *)(param_1 + 0xac1) = *(byte *)(param_1 + 0xac1) & 0xfe | bVar4;
    lVar18 = *(long *)(param_1 + 0x10);
    if (lVar18 != 0) {
      bVar20 = *(byte *)(lVar18 + 0x371) & 0xfe;
LAB_001f6598:
      uVar9 = 0;
      *(byte *)(lVar18 + 0x371) = bVar20 | bVar4;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f7afc;
  case 0x44:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-2 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0x6d8) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x45:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffffc00 |
             *(ulong *)(param_1 + 0xf40) & 0x1ff | (ulong)(*plVar14 != 0) << 9;
    break;
  case 0x47:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0xed8) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x4a:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffc0000000 |
             *(ulong *)(param_1 + 0xf40) & 0x1fffffff | (ulong)(*plVar14 != 0) << 0x1d;
    break;
  case 0x4b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffe0000000 |
             *(ulong *)(param_1 + 0xf40) & 0xfffffff | (ulong)(*plVar14 != 0) << 0x1c;
    break;
  case 0x4e:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 0x20c49c) {
      lVar22 = *puVar17 * 1000;
LAB_001f5f4c:
      uVar9 = 0;
      *(long *)(param_1 + 0x7b0) = lVar22;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x50:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (*plVar14 != 0) {
      *(undefined4 *)(param_1 + 0xa38) = 1;
      uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffcffffff;
      goto LAB_001f7a04;
    }
    goto LAB_001f7afc;
  case 0x51:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (lVar22 == 1) {
LAB_001f67ac:
      FUN_001f3ae0(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
      uVar9 = 0x2b;
      goto switchD_001f45a8_caseD_5b;
    }
    *(byte *)(param_1 + 0xac1) = *(byte *)(param_1 + 0xac1) & 0xfd | (lVar22 != 0) << 1;
    lVar18 = *(long *)(param_1 + 0x10);
    if (lVar18 != 0) {
      bVar4 = (lVar22 != 0) << 1;
      bVar20 = *(byte *)(lVar18 + 0x371) & 0xfd;
      goto LAB_001f6598;
    }
    goto LAB_001f7afc;
  case 0x54:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (-1 < lVar22) {
      if (lVar22 < 6) {
        lVar18 = 4;
        if (lVar22 != 0) {
          lVar18 = lVar22;
        }
        uVar9 = 0;
        *(long *)(param_1 + 0xa40) = lVar18;
      }
      else {
        uVar9 = 1;
      }
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x55:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffff80000000 |
             *(ulong *)(param_1 + 0xf40) & 0x3fffffff | (ulong)(*plVar14 != 0) << 0x1e;
    break;
  case 0x5a:
  case 0x77:
  case 0xd8:
  case 0xf4:
  case 0x105:
switchD_001f4578_caseD_27b9:
    uVar9 = 4;
  case 0x5b:
    goto switchD_001f45a8_caseD_5b;
  case 0x60:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffffffc0 |
             *(ulong *)(param_1 + 0xf40) & 0x1f | (ulong)(*plVar14 != 0) << 5;
    break;
  case 0x62:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (lVar22 < 0x80001) {
      lVar18 = lVar22;
      if (lVar22 < 0x401) {
        lVar18 = 0x400;
      }
      lVar23 = 0x4000;
      if (0 < lVar22) {
        lVar23 = lVar18;
      }
    }
    else {
      lVar23 = 0x80000;
    }
    if (lVar23 == *(long *)(param_1 + 0xc10)) {
      uVar9 = 0;
    }
    else {
      lVar22 = FUN_002044e4(*(undefined8 *)(param_1 + 0x1130),lVar23 + 1);
      if (lVar22 == 0) {
        uVar9 = 0x1b;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x1130) = lVar22;
      }
    }
    *(long *)(param_1 + 0xc10) = lVar23;
    goto switchD_001f45a8_caseD_5b;
  case 99:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffc00000000 |
             *(ulong *)(param_1 + 0xf40) & 0x1ffffffff | (ulong)(*plVar14 != 0) << 0x21;
    break;
  case 0x65:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 8) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc00) = (int)*puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x69:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffe00000 |
             *(ulong *)(param_1 + 0xf40) & 0xfffff | (ulong)(*plVar14 != 0) << 0x14;
    break;
  case 0x6a:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffff00000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7fffffff | (ulong)(*plVar14 != 0) << 0x1f;
    break;
  case 0x6b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar15 = *puVar17;
    if (uVar15 == 0) {
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
    else {
      uVar21 = uVar15;
      if ((uVar15 & 0x10) != 0) {
        uVar21 = uVar15 & 0xffffffffffffffc1 | 2;
      }
      *(byte *)(param_1 + 0x1260) =
           *(byte *)(param_1 + 0x1260) & 0xfb | (byte)(((uint)uVar15 & 0x10) >> 2);
      uVar15 = 0;
      do {
        if (uVar15 == 0x1f) goto switchD_001f4578_caseD_2813;
        uVar3 = uVar15 & 0x3f;
        uVar15 = uVar15 + 1;
      } while ((1L << uVar3 & uVar21 & 0xffffffffffffffd3) == 0);
      uVar9 = 0;
      *(ulong *)(param_1 + 0x6b0) = uVar21 & 0xffffffffffffffd3;
    }
    goto switchD_001f45a8_caseD_5b;
  case 0x6e:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if ((lVar22 == 2) || (lVar22 == 1)) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc44) = (int)lVar22;
      goto switchD_001f45a8_caseD_5b;
    }
    if (lVar22 == 0) {
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xc44) = 0;
      goto switchD_001f45a8_caseD_5b;
    }
switchD_001f4578_caseD_27a4:
    uVar9 = 0x30;
    goto switchD_001f45a8_caseD_5b;
  case 0x6f:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar15 = *puVar17;
    if (uVar15 == 0) {
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6b8) = 0;
    }
    else {
      uVar21 = uVar15;
      if ((uVar15 & 0x10) != 0) {
        uVar21 = uVar15 & 0xffffffffffffffc1 | 2;
      }
      *(byte *)(param_1 + 0x1280) =
           *(byte *)(param_1 + 0x1280) & 0xfb | (byte)(((uint)uVar15 & 0x10) >> 2);
      uVar15 = 0;
      do {
        if (uVar15 == 0x1f) goto switchD_001f4578_caseD_2813;
        uVar3 = uVar15 & 0x3f;
        uVar15 = uVar15 + 1;
      } while ((1L << uVar3 & uVar21 & 0xffffffffffffffd3) == 0);
      uVar9 = 0;
      *(ulong *)(param_1 + 0x6b8) = uVar21 & 0xffffffffffffffd3;
    }
    goto switchD_001f45a8_caseD_5b;
  case 0x70:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 0x20c49c) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0x7c8) = *puVar17 * 1000;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x71:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 3) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0xc30) = *puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x72:
switchD_001f4680_caseD_75a5:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0xc38) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x79:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffff000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7ffffffff | (ulong)(*plVar14 != 0) << 0x23;
    break;
  case 0x81:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 3) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc60) = (int)*puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x88:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffe000000000 |
             *(ulong *)(param_1 + 0xf40) & 0xfffffffff | (ulong)(*plVar14 != 0) << 0x24;
    break;
  case 0x89:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffc000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x1fffffffff | (ulong)(*plVar14 != 0) << 0x25;
    break;
  case 0x8a:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 4) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc40) = (int)*puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x8b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 >> 0x10 == 0) {
      uVar5 = FUN_00204368();
      uVar9 = 0;
      *(undefined2 *)(param_1 + 0x700) = uVar5;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x8c:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 >> 0x10 == 0) {
      uVar7 = FUN_0020435c();
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x704) = uVar7;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x8d:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffff8000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x3fffffffff | (ulong)(*plVar14 != 0) << 0x26;
    break;
  case 0x96:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    *(byte *)(param_1 + 0xac1) = *(byte *)(param_1 + 0xac1) & 0xf7 | (lVar22 != 0) << 3;
    uVar9 = 0;
    *(byte *)(param_1 + 0xb99) = *(byte *)(param_1 + 0xb99) & 0xf7 | (lVar22 != 0) << 3;
    goto switchD_001f45a8_caseD_5b;
  case 0x9a:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 3) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc64) = (int)*puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x9b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (-1 < lVar22) goto LAB_001f5f14;
    goto LAB_001f6a28;
  case 0x9c:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (-1 < lVar22) goto LAB_001f5f4c;
    goto LAB_001f6a28;
  case 0x9d:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffff0000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7fffffffff | (ulong)(*plVar14 == 0) << 0x27;
    break;
  case 0x9e:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffe0000000000 |
             *(ulong *)(param_1 + 0xf40) & 0xffffffffff | (ulong)(*plVar14 == 0) << 0x28;
    break;
  case 0x9f:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 0x200) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0xc68) = *puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xa0:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 0x200) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0xc70) = *puVar17;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xa1:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(uint *)(param_1 + 0x6e0) = (uint)*plVar14 & 7;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xa6:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (*plVar14 == 1) {
      uVar15 = *(ulong *)(param_1 + 0xf40) | 0x20000000000;
    }
    else {
      if (*plVar14 != 0) goto switchD_001f4578_caseD_27a4;
      uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffdffffffffff;
    }
LAB_001f7a04:
    uVar9 = 0;
LAB_001f7a08:
    *(ulong *)(param_1 + 0xf40) = uVar15;
    goto switchD_001f45a8_caseD_5b;
  case 0xab:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    if (*puVar17 < 0x10) {
      uVar7 = FUN_00204364();
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xe70) = uVar7;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xac:
    if ((*(byte *)(*(long *)PTR_PTR_04372758 + 0x10) >> 1 & 1) != 0) {
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      bVar20 = *(byte *)(param_1 + 0xb18) & 0xfe | *plVar14 != 0;
LAB_001f65e8:
      uVar9 = 0;
      *(byte *)(param_1 + 0xb18) = bVar20;
      goto switchD_001f45a8_caseD_5b;
    }
    goto switchD_001f4578_caseD_2813;
  case 0xb2:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 2000) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xb5:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0xe78) = *puVar13;
    goto switchD_001f45a8_caseD_5b;
  case 0xb6:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0xe80) = *puVar13;
    goto switchD_001f45a8_caseD_5b;
  case 0xbc:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffe00000000 |
             *(ulong *)(param_1 + 0xf40) & 0xffffffff | (ulong)(*plVar14 != 0) << 0x20;
    break;
  case 0xbd:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    iVar6 = 0;
    if (*plVar14 - 1U < 0xb) {
      iVar6 = (int)(*plVar14 - 1U) + 1;
    }
    uVar9 = 0;
    *(int *)(param_1 + 0xe90) = iVar6;
    goto switchD_001f45a8_caseD_5b;
  case 0xc1:
  case 0xc2:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x1500) = *puVar13;
    goto switchD_001f45a8_caseD_5b;
  case 0xc5:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffff00000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7ffffffffff | (ulong)(*plVar14 != 0) << 0x2b;
    break;
  case 0xcf:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffff00000 |
             *(ulong *)(param_1 + 0xf40) & 0x7ffff | (ulong)(*plVar14 != 0) << 0x13;
    break;
  case 0xd2:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0xec0) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xd4:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7b8) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xd5:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffe00000000000 |
             *(ulong *)(param_1 + 0xf40) & 0xfffffffffff | (ulong)(*plVar14 != 0) << 0x2c;
    break;
  case 0xd6:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0xec8) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xd7:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0xed0) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xda:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffff80000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x3ffffffffff | (ulong)(*plVar14 != 0) << 0x2a;
    break;
  case 0xe1:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffff800000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x3fffffffffff | (ulong)(*plVar14 != 0) << 0x2e;
    break;
  case 0xe2:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffff000000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7fffffffffff | (ulong)(*plVar14 != 0) << 0x2f;
    break;
  case 0xe3:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0xee0) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0xe5:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar16 = (uint *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar16 = (uint *)*param_3;
      *param_3 = (long)(puVar16 + 2);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffffffffffffffe0 |
             *(ulong *)(param_1 + 0xf40) & 0xf | ((ulong)(*puVar16 & 0xfffffff) & 1) << 4;
    break;
  case 0xe8:
    uVar15 = thunk_FUN_00204704();
    if ((uVar15 & 1) != 0) {
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar22 = *plVar14;
      *(byte *)(param_1 + 0xac1) = *(byte *)(param_1 + 0xac1) & 0xfb | (lVar22 != 0) << 2;
      lVar18 = *(long *)(param_1 + 0x10);
      if (lVar18 != 0) {
        bVar4 = (lVar22 != 0) << 2;
        bVar20 = *(byte *)(lVar18 + 0x371) & 0xfb;
        goto LAB_001f6598;
      }
      goto LAB_001f7afc;
    }
    goto switchD_001f4578_caseD_2813;
  case 0xe9:
    uVar15 = thunk_FUN_00204e00();
    if ((uVar15 & 1) != 0) {
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      bVar20 = *(byte *)(param_1 + 0xb18) & 0xfd | (*plVar14 != 0) << 1;
      goto LAB_001f65e8;
    }
    goto switchD_001f4578_caseD_2813;
  case 0xea:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffe000000000000 |
             *(ulong *)(param_1 + 0xf40) & 0xffffffffffff | (ulong)(*plVar14 != 0) << 0x30;
    break;
  case 0xed:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffc000000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x1ffffffffffff | (ulong)(*plVar14 != 0) << 0x31;
    break;
  case 0xef:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (*plVar14 - 1U < 0x100) {
      uVar9 = 0;
      *(int *)(param_1 + 0xef0) = (int)*plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f7afc;
  case 0xf2:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffffff0 |
             *(ulong *)(param_1 + 0xf40) & 7 | (ulong)(*plVar14 != 0) << 3;
    break;
  case 0xf5:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffc0000 |
             *(ulong *)(param_1 + 0xf40) & 0x1ffff | (ulong)(*plVar14 != 0) << 0x11;
    break;
  case 0xf8:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    bVar4 = *plVar14 != 0;
    *(byte *)(param_1 + 0xb99) = *(byte *)(param_1 + 0xb99) & 0xfe | bVar4;
    lVar18 = *(long *)(param_1 + 0x10);
    if (lVar18 != 0) {
      bVar20 = *(byte *)(lVar18 + 0x3f1) & 0xfe;
LAB_001f78f4:
      uVar9 = 0;
      *(byte *)(lVar18 + 0x3f1) = bVar20 | bVar4;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f7afc;
  case 0xf9:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (lVar22 == 1) goto LAB_001f67ac;
    *(byte *)(param_1 + 0xb99) = *(byte *)(param_1 + 0xb99) & 0xfd | (lVar22 != 0) << 1;
    lVar18 = *(long *)(param_1 + 0x10);
    if (lVar18 != 0) {
      bVar4 = (lVar22 != 0) << 1;
      bVar20 = *(byte *)(lVar18 + 0x3f1) & 0xfd;
      goto LAB_001f78f4;
    }
LAB_001f7afc:
    uVar9 = 0;
    goto switchD_001f45a8_caseD_5b;
  case 0x109:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfff8000000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x3ffffffffffff | (ulong)(*plVar14 != 0) << 0x32;
    break;
  case 0x10b:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (ulong *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (ulong *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar15 = *puVar17;
    *(ulong *)(param_1 + 0x6c8) = uVar15;
    uVar9 = (uint)((uVar15 & 0xfffffffffffffffa) != 0) << 2;
    goto switchD_001f45a8_caseD_5b;
  case 0x10c:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffffe00 |
             *(ulong *)(param_1 + 0xf40) & 0xff | (ulong)(*plVar14 != 0) << 8;
    break;
  case 0x10f:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7c0) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x112:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xffc0000000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x1fffffffffffff | (ulong)(*plVar14 != 0) << 0x35;
    break;
  case 0x113:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xfff0000000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7ffffffffffff | (ulong)(*plVar14 != 0) << 0x33;
    break;
  case 0x116:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    uVar15 = *(ulong *)(param_1 + 0xf40) & 0xff00000000000000 |
             *(ulong *)(param_1 + 0xf40) & 0x7fffffffffffff | (ulong)(*plVar14 != 0) << 0x37;
    break;
  case 0x118:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar22 = *plVar14;
    if (lVar22 < 0x4001) {
      lVar22 = 0x4000;
    }
    if (0x1fffff < lVar22) {
      lVar22 = 0x200000;
    }
    *(long *)(param_1 + 0xc18) = lVar22;
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1138));
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x1138) = 0;
    goto switchD_001f45a8_caseD_5b;
  case 0x119:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (-1 < *plVar14) {
      uVar9 = 0;
      *(long *)(param_1 + 0xf10) = *plVar14;
      goto switchD_001f45a8_caseD_5b;
    }
    goto LAB_001f6a28;
  case 0x11d:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (*plVar14 < 2) {
      uVar15 = *(ulong *)(param_1 + 0xf40) & 0xf800000000000000 |
               *(ulong *)(param_1 + 0xf40) & 0x3ffffffffffffff | (ulong)(*plVar14 != 0) << 0x3a;
      break;
    }
LAB_001f6a28:
    uVar9 = 0x2b;
    goto switchD_001f45a8_caseD_5b;
  default:
    switch(param_2) {
    case 500:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x6c0) = *plVar14 != 0;
      break;
    case 0x1f5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0xa90) = *plVar14 != 0;
      break;
    case 0x1f6:
    case 0x1f7:
    case 0x1f8:
    case 0x1f9:
      goto switchD_001f4578_caseD_27a4;
    case 0x1fa:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x6c2) = *plVar14 != 0;
      break;
    case 0x1fb:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0xac0) = *plVar14 != 0;
      break;
    default:
      if (param_2 == 900) {
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          plVar14 = (long *)(param_3[1] + (long)iVar6);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
        }
        uVar9 = 0;
        *(bool *)(param_1 + 0x6c1) = *plVar14 != 0;
        break;
      }
      goto switchD_001f4578_caseD_27a4;
    }
    goto switchD_001f45a8_caseD_5b;
  }
  uVar9 = 0;
  *(ulong *)(param_1 + 0xf40) = uVar15;
switchD_001f45a8_caseD_5b:
  return (ulong)uVar9;
}


