/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029efacc; name: FUN_029efacc
 */


void FUN_029efacc(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined **ppuVar16;
  int iVar17;
  undefined1 *puVar18;
  long *plVar19;
  int iVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  undefined **local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined2 uStack_80;
  byte bStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  uint local_78;
  char local_74;
  undefined1 local_70 [8];
  uint local_68;
  undefined2 local_64;
  byte local_62;
  
  uVar28 = (uint)*(byte *)(param_3 + 2);
  lVar26 = *(long *)(param_1 + 8);
  if ((*(byte *)(param_3[1] + 0x24) & 1) == 0) {
    bVar5 = FUN_02995c34(*(undefined8 *)(param_1 + 0x38),*param_3);
  }
  else {
    bVar5 = 0x1f;
  }
  puVar14 = (undefined8 *)param_3[3];
  *(undefined8 *)((long)puVar14 + 0x56) = 0;
  *puVar14 = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  lVar15 = *(long *)(param_1 + 0x10);
  pcVar21 = *(char **)(lVar15 + 0xa8);
  cVar13 = *(char *)((long)param_3 + 0x11);
  if ((((((*pcVar21 != '\0') && (pcVar21[2] == cVar13)) ||
        ((pcVar21[3] != '\0' && (pcVar21[5] == cVar13)))) ||
       ((pcVar21[6] != '\0' && (pcVar21[8] == cVar13)))) ||
      ((pcVar21[9] != '\0' && (pcVar21[0xb] == cVar13)))) ||
     (((pcVar21[0xc] != '\0' && (pcVar21[0xe] == cVar13)) ||
      ((pcVar21[0xf] != '\0' && (pcVar21[0x11] == cVar13)))))) {
    uVar9 = FUN_029971b0(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1]);
    if ((uVar9 & 1) == 0) {
      lVar15 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar15 = *(long *)(param_1 + 0x10);
      pcVar21 = *(char **)(lVar15 + 0xa8);
      cVar13 = *(char *)((long)param_3 + 0x11);
      if ((*pcVar21 == '\0') || (pcVar21[2] != cVar13)) {
        if ((pcVar21[3] == '\0') || (pcVar21[5] != cVar13)) {
          if ((pcVar21[6] == '\0') || (pcVar21[8] != cVar13)) {
            if ((pcVar21[9] == '\0') || (pcVar21[0xb] != cVar13)) {
              if ((pcVar21[0xc] == '\0') || (pcVar21[0xe] != cVar13)) {
                if ((pcVar21[0xf] == '\0') || (pcVar21[0x11] != cVar13)) {
                  uVar28 = 6;
                }
                else {
                  uVar28 = 5;
                }
              }
              else {
                uVar28 = 4;
              }
            }
            else {
              uVar28 = 3;
            }
          }
          else {
            uVar28 = 2;
          }
        }
        else {
          uVar28 = 1;
        }
      }
      else {
        uVar28 = 0;
      }
    }
  }
  plVar31 = (long *)param_3[3];
  lVar25 = *param_3;
  piVar1 = (int *)param_3[1];
  if (*(int *)(lVar26 + 0x110) != 1) {
    if (*(int *)(lVar26 + 0x110) != 2) {
      lVar15 = *(long *)(lVar15 + 8);
      bVar6 = *(byte *)(lVar25 + 0x7d);
      if (bVar6 < 6) {
        uVar9 = 0;
      }
      else if (bVar6 < 0xc) {
        uVar9 = 2;
      }
      else if (bVar6 < 0x12) {
        uVar9 = 1;
      }
      else {
        uVar28 = 3;
        if (0x17 < bVar6) {
          uVar28 = (uint)(bVar6 < 0x1e) << 2;
        }
        uVar9 = (ulong)uVar28;
      }
      uVar28 = (uint)*(byte *)(lVar15 + uVar9 * 0x38 + 0x38);
      if (uVar28 != 0) {
        uVar7 = 0;
        do {
          if (*(byte *)(*(long *)(lVar15 + uVar9 * 0x38 + (ulong)(uVar7 & 0xff) * 8 + 8) + 0x7d) ==
              bVar6) {
            uVar28 = FUN_0294753c(lVar26);
            if ((uVar28 & 0xff) != 6) goto LAB_029efffc;
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar28 != uVar7);
      }
      uVar28 = 6;
LAB_029efffc:
      uVar12 = 0;
      switch(piVar1[5]) {
      case 0:
      case 3:
      case 4:
      case 5:
      case 9:
        if (bVar5 == 0x1f) {
          uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                               *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
          FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
          if (((local_78 & 0xff) < (uint)*(byte *)(lVar15 + ((ulong)local_d8 & 0xff) * 0x38 + 0x38))
             && (lVar26 = *(long *)(lVar15 + ((ulong)local_d8 & 0xff) * 0x38 +
                                    (ulong)(byte)local_78 * 8 + 8), lVar26 != 0)) {
            uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
            if (uVar9 < 6) {
              if (*(byte *)((long)plVar31 + 0x5a) != 0) {
                plVar19 = plVar31;
                uVar30 = uVar9;
                do {
                  if (*plVar19 == lVar26) goto LAB_029f21d4;
                  uVar30 = uVar30 - 1;
                  plVar19 = plVar19 + 1;
                } while (uVar30 != 0);
              }
              goto LAB_029f2184;
            }
          }
        }
        else {
          lVar26 = *(long *)(lVar15 + (ulong)bVar5 * 8 + 0x120);
          if (lVar26 != 0) {
            uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
            if (uVar9 < 6) {
              if (*(byte *)((long)plVar31 + 0x5a) != 0) {
                plVar19 = plVar31;
                uVar30 = uVar9;
                do {
                  if (*plVar19 == lVar26) goto LAB_029f21d4;
                  uVar30 = uVar30 - 1;
                  plVar19 = plVar19 + 1;
                } while (uVar30 != 0);
              }
              goto LAB_029f2184;
            }
          }
        }
        break;
      case 1:
      case 6:
      case 7:
        if (bVar5 != 0x1f) {
          lVar26 = *(long *)(lVar15 + (ulong)bVar5 * 8 + 0x120);
          if (lVar26 != 0) {
            uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
            if (uVar9 < 6) {
              if (*(byte *)((long)plVar31 + 0x5a) != 0) {
                plVar19 = plVar31;
                uVar30 = uVar9;
                do {
                  if (*plVar19 == lVar26) goto LAB_029f21d4;
                  uVar30 = uVar30 - 1;
                  plVar19 = plVar19 + 1;
                } while (uVar30 != 0);
              }
              goto LAB_029f2184;
            }
          }
          break;
        }
        if (lVar25 == 0) break;
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (5 < uVar9) break;
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar25) goto LAB_029f21d4;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
LAB_029f1d10:
        plVar31[uVar9] = lVar25;
        goto LAB_029f2188;
      case 2:
      case 10:
      case 0xb:
      case 0xc:
        goto switchD_029f0378_caseD_a;
      case 8:
        if (lVar25 != 0) {
          uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
          if (uVar9 < 6) {
            if (*(byte *)((long)plVar31 + 0x5a) != 0) {
              plVar19 = plVar31;
              uVar30 = uVar9;
              do {
                if (*plVar19 == lVar25) goto LAB_029f0210;
                uVar30 = uVar30 - 1;
                plVar19 = plVar19 + 1;
              } while (uVar30 != 0);
            }
            plVar31[uVar9] = lVar25;
            *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
            *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
            *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
            bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
            *(byte *)((long)plVar31 + 0x5a) = bVar5;
            if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
              *(byte *)((long)plVar31 + 0x5b) = bVar5;
            }
          }
        }
LAB_029f0210:
        uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                             *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
        FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
        if (((local_78 & 0xff) < (uint)*(byte *)(lVar15 + ((ulong)local_d8 & 0xff) * 0x38 + 0x38))
           && (lVar26 = *(long *)(lVar15 + ((ulong)local_d8 & 0xff) * 0x38 +
                                  (ulong)(byte)local_78 * 8 + 8), lVar26 != 0)) {
          uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
          if (5 < uVar9) break;
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f2184;
        }
        break;
      case 0xd:
        if ((bVar5 != 0x1f) && (lVar26 = *(long *)(lVar15 + (ulong)bVar5 * 8 + 0x120), lVar26 != 0))
        {
          uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
          if (uVar9 < 6) {
            if (*(byte *)((long)plVar31 + 0x5a) != 0) {
              plVar19 = plVar31;
              uVar30 = uVar9;
              do {
                if (*plVar19 == lVar26) goto LAB_029f21d4;
                uVar30 = uVar30 - 1;
                plVar19 = plVar19 + 1;
              } while (uVar30 != 0);
            }
            goto LAB_029f2184;
          }
        }
        break;
      default:
        goto switchD_029f0378_default;
      }
      goto LAB_029f21d4;
    }
    puVar14 = *(undefined8 **)(lVar15 + 8);
    bVar6 = *(byte *)(lVar25 + 0x7d);
    if (bVar6 < 6) {
      uVar9 = 0;
    }
    else if (bVar6 < 0xc) {
      uVar9 = 2;
    }
    else if (bVar6 < 0x12) {
      uVar9 = 1;
    }
    else {
      uVar7 = 3;
      if (0x17 < bVar6) {
        uVar7 = (uint)(bVar6 < 0x1e) << 2;
      }
      uVar9 = (ulong)uVar7;
    }
    if (*(byte *)(puVar14 + uVar9 * 7 + 7) != 0) {
      uVar7 = 0;
      do {
        if (*(byte *)(puVar14[uVar9 * 7 + (ulong)(uVar7 & 0xff) + 1] + 0x7d) == bVar6) {
          uVar7 = FUN_0294753c(lVar26);
          if ((uVar7 & 0xff) != 6) goto LAB_029efe14;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (*(byte *)(puVar14 + uVar9 * 7 + 7) != uVar7);
    }
    uVar7 = 6;
LAB_029efe14:
    if (*piVar1 == 0xae) {
      if (piVar1[5] != 7) {
        if ((piVar1[5] == 0) && ((uVar28 == 6 || (uVar28 == (uVar7 & 0xff))))) {
          uVar28 = FUN_0293f330(lVar26,puVar14,lVar25,0xae,0);
        }
        goto LAB_029efe5c;
      }
    }
    else {
LAB_029efe5c:
      uVar7 = uVar28;
    }
    bVar6 = *(byte *)(lVar25 + 0x7d);
    if (bVar6 < 6) {
      lVar15 = 0;
    }
    else if (bVar6 < 0xc) {
      lVar15 = 2;
    }
    else if (bVar6 < 0x12) {
      lVar15 = 1;
    }
    else if (bVar6 < 0x18) {
      lVar15 = 3;
    }
    else {
      lVar15 = (ulong)(bVar6 < 0x1e) << 2;
    }
    if (*(byte *)(puVar14 + lVar15 * 7 + 7) != 0) {
      uVar28 = 0;
      do {
        if (*(byte *)(puVar14[lVar15 * 7 + (ulong)(uVar28 & 0xff) + 1] + 0x7d) == bVar6) {
          uVar28 = FUN_0294753c(lVar26);
          if ((uVar28 & 0xff) != 6) goto LAB_029f0350;
          break;
        }
        uVar28 = uVar28 + 1;
      } while (*(byte *)(puVar14 + lVar15 * 7 + 7) != uVar28);
    }
    uVar28 = 6;
LAB_029f0350:
    lVar15 = DAT_043ecde0;
    uVar12 = 0;
    switch(piVar1[5]) {
    case 0:
    case 3:
      FUN_02947b84(*puVar14,uVar7,&local_d8,&local_78);
      uVar9 = (ulong)local_d8 & 0xff;
      if (uVar9 != 5) {
        if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + uVar9 * 7 + 7)) &&
           (lVar26 = puVar14[uVar9 * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
          uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
          if (uVar9 < 6) {
            if (*(byte *)((long)plVar31 + 0x5a) != 0) {
              plVar19 = plVar31;
              uVar30 = uVar9;
              do {
                if (*plVar19 == lVar26) goto LAB_029f2100;
                uVar30 = uVar30 - 1;
                plVar19 = plVar19 + 1;
              } while (uVar30 != 0);
            }
            goto LAB_029f20bc;
          }
        }
      }
      goto LAB_029f2100;
    case 1:
      FUN_02947b84(*puVar14,uVar7,&local_d8,&local_78);
      uVar9 = (ulong)local_d8 & 0xff;
      if (uVar9 == 5) {
LAB_029f0450:
        lVar26 = lVar25;
        if (lVar25 == 0) break;
      }
      else if ((((uint)*(byte *)(puVar14 + uVar9 * 7 + 7) <= (local_78 & 0xff)) ||
               (lVar26 = puVar14[uVar9 * 7 + (ulong)(byte)local_78 + 1], lVar26 == 0)) ||
              (*(short *)(lVar26 + 0x74) == 0)) goto LAB_029f0450;
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (5 < uVar9) break;
      if (*(byte *)((long)plVar31 + 0x5a) != 0) {
        plVar19 = plVar31;
        uVar30 = uVar9;
        do {
          if (*plVar19 == lVar26) goto LAB_029f21d4;
          uVar30 = uVar30 - 1;
          plVar19 = plVar19 + 1;
        } while (uVar30 != 0);
      }
      goto LAB_029f2184;
    case 2:
      FUN_02947b84(*puVar14,uVar7,&local_d8,&local_78);
      uVar9 = (ulong)local_d8 & 0xff;
      if (uVar9 != 5) {
        if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + uVar9 * 7 + 7)) &&
           (lVar26 = puVar14[uVar9 * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
          uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
          if (uVar9 < 6) {
            if (*(byte *)((long)plVar31 + 0x5a) != 0) {
              plVar19 = plVar31;
              uVar30 = uVar9;
              do {
                if (*plVar19 == lVar26) goto LAB_029f21d4;
                uVar30 = uVar30 - 1;
                plVar19 = plVar19 + 1;
              } while (uVar30 != 0);
            }
            goto LAB_029f2184;
          }
        }
      }
      break;
    case 4:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f05dc;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f05dc:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f06ac;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f06ac:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,2);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f077c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f077c:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,3);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f084c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f084c:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,4);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f2184;
        }
      }
      break;
    case 5:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f09ac;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f09ac:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f0a7c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f0a7c:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,2);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f0b4c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f0b4c:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,3);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f0c1c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f0c1c:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,4);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f2184;
        }
      }
      break;
    case 6:
      uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f0d7c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f0d7c:
      uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f0e4c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f0e4c:
      uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,2);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f0f1c;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f0f1c:
      uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,3);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f0fec;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f0fec:
      uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,4);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f2184;
        }
      }
      break;
    case 7:
      if (bVar5 == 0x1f) {
        if (lVar25 != 0) {
          uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
          if (uVar9 < 6) {
            if (*(byte *)((long)plVar31 + 0x5a) != 0) {
              plVar19 = plVar31;
              uVar30 = uVar9;
              do {
                if (*plVar19 == lVar25) goto LAB_029f21d4;
                uVar30 = uVar30 - 1;
                plVar19 = plVar19 + 1;
              } while (uVar30 != 0);
            }
            goto LAB_029f1d10;
          }
        }
      }
      else {
        lVar26 = puVar14[(ulong)bVar5 + 0x24];
        if (lVar26 != 0) {
          uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
          if (uVar9 < 6) {
            if (*(byte *)((long)plVar31 + 0x5a) != 0) {
              plVar19 = plVar31;
              uVar30 = uVar9;
              do {
                if (*plVar19 == lVar26) goto LAB_029f21d4;
                uVar30 = uVar30 - 1;
                plVar19 = plVar19 + 1;
              } while (uVar30 != 0);
            }
            goto LAB_029f2184;
          }
        }
      }
      break;
    case 8:
      if (lVar25 != 0) {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar25) goto LAB_029f1138;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar25;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f1138:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f1208;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f1208:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f12d8;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f12d8:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,2);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f13a8;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f13a8:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,3);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar15) goto LAB_029f1478;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          plVar31[uVar9] = lVar15;
          *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
          bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
          *(byte *)((long)plVar31 + 0x5a) = bVar5;
          if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
            *(byte *)((long)plVar31 + 0x5b) = bVar5;
          }
        }
      }
LAB_029f1478:
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,4);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
         (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0))
      {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f2184;
        }
      }
      break;
    case 9:
      uVar9 = *(ulong *)(DAT_043ecde0 + 8);
      uVar30 = *(ulong *)(DAT_043ecde0 + 0x10);
      do {
        uVar10 = uVar9 ^ uVar30;
        iVar20 = (int)uVar30;
        iVar17 = (int)uVar9;
        uVar30 = uVar10 >> 0x1b | uVar10 << 0x25;
        uVar9 = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
      } while (4 < (iVar17 + iVar20 & 7U));
      *(ulong *)(DAT_043ecde0 + 8) = uVar9;
      *(ulong *)(lVar15 + 0x10) = uVar30;
      uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                           *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28);
      FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
      if (((uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7) <= (local_78 & 0xff)) ||
         (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 == 0))
      goto LAB_029f2100;
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (5 < uVar9) goto LAB_029f2100;
      if (*(byte *)((long)plVar31 + 0x5a) != 0) {
        plVar19 = plVar31;
        uVar30 = uVar9;
        do {
          if (*plVar19 == lVar26) goto LAB_029f2100;
          uVar30 = uVar30 - 1;
          plVar19 = plVar19 + 1;
        } while (uVar30 != 0);
      }
LAB_029f20bc:
      plVar31[uVar9] = lVar26;
      *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
      *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
      *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
      cVar3 = *(char *)((long)plVar31 + 0x5a);
      cVar13 = cVar3 + '\x01';
      *(char *)((long)plVar31 + 0x5a) = cVar13;
      if (*(byte *)((long)plVar31 + 0x5b) < (byte)(cVar3 + 1U)) {
        *(char *)((long)plVar31 + 0x5b) = cVar13;
      }
      goto LAB_029f2100;
    case 10:
    case 0xb:
    case 0xc:
      goto switchD_029f0378_caseD_a;
    case 0xd:
      if (bVar5 == 0x1f) break;
      lVar26 = puVar14[(ulong)bVar5 + 0x24];
      if (lVar26 != 0) {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f2100;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f20bc;
        }
      }
      goto LAB_029f2100;
    default:
      goto switchD_029f0378_default;
    }
    goto LAB_029f21d4;
  }
  puVar14 = *(undefined8 **)(lVar15 + 8);
  bVar6 = *(byte *)(lVar25 + 0x7d);
  if (bVar6 < 6) {
    uVar9 = 0;
  }
  else if (bVar6 < 0xc) {
    uVar9 = 2;
  }
  else if (bVar6 < 0x12) {
    uVar9 = 1;
  }
  else {
    uVar7 = 3;
    if (0x17 < bVar6) {
      uVar7 = (uint)(bVar6 < 0x1e) << 2;
    }
    uVar9 = (ulong)uVar7;
  }
  if (*(byte *)(puVar14 + uVar9 * 7 + 7) != 0) {
    uVar7 = 0;
    do {
      if (*(byte *)(puVar14[uVar9 * 7 + (ulong)(uVar7 & 0xff) + 1] + 0x7d) == bVar6) {
        uVar7 = FUN_0294753c(lVar26);
        if ((uVar7 & 0xff) != 6) goto LAB_029eff08;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (*(byte *)(puVar14 + uVar9 * 7 + 7) != uVar7);
  }
  uVar7 = 6;
LAB_029eff08:
  if (*piVar1 == 0xae) {
    if (piVar1[5] != 7) {
      if ((piVar1[5] == 0) && ((uVar28 == 6 || (uVar28 == (uVar7 & 0xff))))) {
        uVar28 = FUN_0293f330(lVar26,puVar14,lVar25,0xae,0);
      }
      goto LAB_029eff50;
    }
  }
  else {
LAB_029eff50:
    uVar7 = uVar28;
  }
  bVar6 = *(byte *)(lVar25 + 0x7d);
  if (bVar6 < 6) {
    lVar15 = 0;
  }
  else if (bVar6 < 0xc) {
    lVar15 = 2;
  }
  else if (bVar6 < 0x12) {
    lVar15 = 1;
  }
  else if (bVar6 < 0x18) {
    lVar15 = 3;
  }
  else {
    lVar15 = (ulong)(bVar6 < 0x1e) << 2;
  }
  if (*(byte *)(puVar14 + lVar15 * 7 + 7) != 0) {
    uVar28 = 0;
    do {
      if (*(byte *)(puVar14[lVar15 * 7 + (ulong)(uVar28 & 0xff) + 1] + 0x7d) == bVar6) {
        uVar28 = FUN_0294753c(lVar26);
        if ((uVar28 & 0xff) != 6) goto LAB_029f1674;
        break;
      }
      uVar28 = uVar28 + 1;
    } while (*(byte *)(puVar14 + lVar15 * 7 + 7) != uVar28);
  }
  uVar28 = 6;
LAB_029f1674:
  lVar15 = DAT_043ecde0;
  uVar12 = 0;
  switch(piVar1[5]) {
  case 0:
  case 3:
    FUN_02947b84(*puVar14,uVar7,&local_d8,&local_78);
    uVar9 = (ulong)local_d8 & 0xff;
    if (uVar9 != 5) {
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + uVar9 * 7 + 7)) &&
         (lVar26 = puVar14[uVar9 * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f2100;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f20bc;
        }
      }
    }
    goto LAB_029f2100;
  case 1:
    FUN_02947b84(*puVar14,uVar7,&local_d8,&local_78);
    uVar9 = (ulong)local_d8 & 0xff;
    if (uVar9 == 5) {
LAB_029f177c:
      lVar26 = lVar25;
      if (lVar25 == 0) break;
    }
    else if ((((uint)*(byte *)(puVar14 + uVar9 * 7 + 7) <= (local_78 & 0xff)) ||
             (lVar26 = puVar14[uVar9 * 7 + (ulong)(byte)local_78 + 1], lVar26 == 0)) ||
            (*(short *)(lVar26 + 0x74) == 0)) goto LAB_029f177c;
    uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
    if (5 < uVar9) break;
    if (*(byte *)((long)plVar31 + 0x5a) != 0) {
      plVar19 = plVar31;
      uVar30 = uVar9;
      do {
        if (*plVar19 == lVar26) goto LAB_029f21d4;
        uVar30 = uVar30 - 1;
        plVar19 = plVar19 + 1;
      } while (uVar30 != 0);
    }
LAB_029f2184:
    plVar31[uVar9] = lVar26;
LAB_029f2188:
    *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
    *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
    *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
    cVar3 = *(char *)((long)plVar31 + 0x5a);
    cVar13 = cVar3 + '\x01';
    uVar12 = 0;
    *(char *)((long)plVar31 + 0x5a) = cVar13;
    if (*(byte *)((long)plVar31 + 0x5b) < (byte)(cVar3 + 1U)) {
      uVar12 = 0;
      *(char *)((long)plVar31 + 0x5b) = cVar13;
    }
    goto switchD_029f0378_caseD_a;
  case 2:
    FUN_02947b84(*puVar14,uVar7,&local_d8,&local_78);
    uVar9 = (ulong)local_d8 & 0xff;
    if (uVar9 != 5) {
      if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + uVar9 * 7 + 7)) &&
         (lVar26 = puVar14[uVar9 * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f2184;
        }
      }
    }
    break;
  case 4:
    uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar15) goto LAB_029f1908;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar15;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f1908:
    uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar15) goto LAB_029f19d8;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar15;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f19d8:
    uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar26) goto LAB_029f21d4;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        goto LAB_029f2184;
      }
    }
    break;
  case 5:
    uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar15) goto LAB_029f1b38;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar15;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f1b38:
    uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar26) goto LAB_029f21d4;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        goto LAB_029f2184;
      }
    }
    break;
  case 6:
    if (lVar25 != 0) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar25) goto LAB_029f1c40;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar25;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f1c40:
    uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar26) goto LAB_029f21d4;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        goto LAB_029f2184;
      }
    }
    break;
  case 7:
    if (bVar5 == 0x1f) {
      if (lVar25 != 0) {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar25) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f1d10;
        }
      }
    }
    else {
      lVar26 = puVar14[(ulong)bVar5 + 0x24];
      if (lVar26 != 0) {
        uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
        if (uVar9 < 6) {
          if (*(byte *)((long)plVar31 + 0x5a) != 0) {
            plVar19 = plVar31;
            uVar30 = uVar9;
            do {
              if (*plVar19 == lVar26) goto LAB_029f21d4;
              uVar30 = uVar30 - 1;
              plVar19 = plVar19 + 1;
            } while (uVar30 != 0);
          }
          goto LAB_029f2184;
        }
      }
    }
    break;
  case 8:
    if (lVar25 != 0) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar25) goto LAB_029f1d90;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar25;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f1d90:
    uVar8 = FUN_0294e104(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar15) goto LAB_029f1e60;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar15;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f1e60:
    uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,0);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar15 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar15 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar15) goto LAB_029f1f30;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar15;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f1f30:
    uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,1);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar26) goto LAB_029f21d4;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        goto LAB_029f2184;
      }
    }
    break;
  case 9:
    uVar9 = *(ulong *)(DAT_043ecde0 + 8);
    uVar30 = *(ulong *)(DAT_043ecde0 + 0x10);
    uVar10 = uVar30 ^ uVar9;
    *(ulong *)(DAT_043ecde0 + 8) = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
    *(ulong *)(lVar15 + 0x10) = uVar10 >> 0x1b | uVar10 << 0x25;
    uVar8 = FUN_0294dc8c(*(undefined4 *)(lVar26 + 0x110),
                         *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar28,
                         (int)uVar30 + (int)uVar9 & 1);
    FUN_02947b84(lVar26,uVar8,&local_d8,&local_78);
    if (((local_78 & 0xff) < (uint)*(byte *)(puVar14 + ((ulong)local_d8 & 0xff) * 7 + 7)) &&
       (lVar26 = puVar14[((ulong)local_d8 & 0xff) * 7 + (ulong)(byte)local_78 + 1], lVar26 != 0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar26) goto LAB_029f2100;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        goto LAB_029f20bc;
      }
    }
    goto LAB_029f2100;
  case 10:
  case 0xb:
  case 0xc:
    goto switchD_029f0378_caseD_a;
  case 0xd:
    if (bVar5 == 0x1f) break;
    lVar26 = puVar14[(ulong)bVar5 + 0x24];
    if (lVar26 != 0) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar26) goto LAB_029f2100;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        goto LAB_029f20bc;
      }
    }
LAB_029f2100:
    uVar12 = 1;
    goto switchD_029f0378_caseD_a;
  default:
switchD_029f0378_default:
    uVar12 = 0;
    goto switchD_029f0378_caseD_a;
  }
LAB_029f21d4:
  uVar12 = 0;
switchD_029f0378_caseD_a:
  uVar9 = FUN_02996104(*(undefined8 *)(param_1 + 0x38),*param_3,uVar12);
  plVar31 = (long *)param_3[3];
  cVar13 = *(char *)((long)plVar31 + 0x5a);
  if ((cVar13 == '\x01') && ((uVar9 & 1) != 0)) {
    lVar25 = *plVar31;
    lVar26 = *param_3;
    lVar15 = param_3[1];
    bVar5 = FUN_02996444(*(undefined8 *)(param_1 + 0x38),lVar26,lVar15,
                         *(undefined1 *)(lVar25 + 0x7d),&local_d8);
    cVar13 = (char)local_d8;
    FUN_029969bc(*(undefined8 *)(param_1 + 0x38),lVar26,bVar5,lVar15,(ulong)local_d8 & 0xff);
    if (bVar5 != 0x1f) {
      lVar25 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar5 * 8 + 0x120);
    }
    puVar14 = (undefined8 *)param_3[3];
    *(undefined8 *)((long)puVar14 + 0x56) = 0;
    *puVar14 = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    if (lVar25 != 0) {
      plVar31 = (long *)param_3[3];
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if (*plVar19 == lVar25) goto LAB_029f22f4;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = lVar25;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
LAB_029f22f4:
    if (cVar13 == '\0') {
      plVar31 = (long *)param_3[3];
      cVar13 = *(char *)((long)plVar31 + 0x5a);
      goto LAB_029f2300;
    }
  }
  else {
LAB_029f2300:
    if (cVar13 != '\0') {
      lVar25 = *plVar31;
      local_d0 = *(long *)(param_1 + 8);
      local_c8 = *(long *)(param_1 + 0x10);
      lVar27 = *param_3;
      cVar13 = *(char *)(lVar25 + 0x7d);
      local_d8 = &PTR_LAB_04277078;
      local_c0 = CONCAT53((int5)(local_c0 >> 0x18),0x10000);
      FUN_0299d494(&local_d8);
      lVar15 = local_c8;
      lVar26 = local_d0;
      if (local_c0._2_1_ == '\0') {
        uVar9 = local_c0 & 0xff;
        if (local_c0._1_1_ < *(byte *)(*(long *)(local_c8 + 8) + uVar9 * 0x38 + 0x38)) {
          lVar29 = *(long *)(*(long *)(local_c8 + 8) + uVar9 * 0x38 + (ulong)local_c0._1_1_ * 8 + 8)
          ;
        }
        else {
          lVar29 = 0;
        }
        bVar5 = local_c0._1_1_ + 1;
        local_c0._0_2_ = CONCAT11(bVar5,(byte)local_c0);
        if ((byte)local_c0 < 5) {
          do {
            bVar6 = FUN_0294da60(*(undefined4 *)(lVar26 + 0x110),
                                 *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),uVar9 & 0xffffffff
                                );
            if (bVar5 < bVar6) {
              do {
                if (((bVar5 < *(byte *)(*(long *)(lVar15 + 8) + uVar9 * 0x38 + 0x38)) &&
                    (lVar23 = *(long *)(*(long *)(lVar15 + 8) + uVar9 * 0x38 + (ulong)bVar5 * 8 + 8)
                    , lVar23 != 0)) && (*(short *)(lVar23 + 0x74) != 0)) {
                  bVar4 = false;
                  local_c0._0_2_ = CONCAT11(bVar5,(char)uVar9);
                  goto LAB_029f243c;
                }
                bVar5 = bVar5 + 1;
              } while (bVar5 < bVar6);
            }
            uVar9 = uVar9 + 1;
            bVar5 = 0;
          } while (uVar9 != 5);
          bVar5 = 0;
          local_c0 = CONCAT62(local_c0._2_6_,5);
        }
        bVar4 = true;
        local_c0._0_3_ = CONCAT12(1,(undefined2)local_c0);
LAB_029f243c:
        do {
          uVar30 = uVar9 & 0xff;
          do {
            if (((*(char *)(lVar29 + 0x7d) != cVar13) &&
                (uVar10 = FUN_02997578(*(undefined8 *)(param_1 + 0x38),lVar27,lVar25,lVar29),
                lVar29 != 0)) && ((uVar10 & 1) != 0)) {
              uVar10 = (ulong)*(byte *)((long)plVar31 + 0x5a);
              if (uVar10 < 6) {
                plVar19 = plVar31;
                uVar22 = uVar10;
                if (*(byte *)((long)plVar31 + 0x5a) != 0) {
                  do {
                    if (*plVar19 == lVar29) goto LAB_029f2500;
                    uVar22 = uVar22 - 1;
                    plVar19 = plVar19 + 1;
                  } while (uVar22 != 0);
                }
                plVar31[uVar10] = lVar29;
                *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
                *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) =
                     0;
                *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) =
                     0;
                bVar6 = *(char *)((long)plVar31 + 0x5a) + 1;
                *(byte *)((long)plVar31 + 0x5a) = bVar6;
                if (*(byte *)((long)plVar31 + 0x5b) < bVar6) {
                  *(byte *)((long)plVar31 + 0x5b) = bVar6;
                }
              }
            }
LAB_029f2500:
            if (bVar4) {
              local_c0._0_3_ = CONCAT12(1,CONCAT11(bVar5,(char)uVar9));
              goto LAB_029f25cc;
            }
            if (bVar5 < *(byte *)(*(long *)(lVar15 + 8) + uVar30 * 0x38 + 0x38)) {
              lVar29 = *(long *)(*(long *)(lVar15 + 8) + uVar30 * 0x38 + (ulong)bVar5 * 8 + 8);
            }
            else {
              lVar29 = 0;
            }
            bVar5 = bVar5 + 1;
            bVar4 = true;
          } while (4 < ((uint)uVar9 & 0xff));
          do {
            bVar6 = FUN_0294da60(*(undefined4 *)(lVar26 + 0x110),
                                 *(undefined1 *)(*(long *)(lVar26 + 0x58) + 0x55),
                                 uVar30 & 0xffffffff);
            if (bVar5 < bVar6) {
              do {
                if (((bVar5 < *(byte *)(*(long *)(lVar15 + 8) + uVar30 * 0x38 + 0x38)) &&
                    (lVar23 = *(long *)(*(long *)(lVar15 + 8) + uVar30 * 0x38 + (ulong)bVar5 * 8 + 8
                                       ), lVar23 != 0)) && (*(short *)(lVar23 + 0x74) != 0)) {
                  bVar4 = false;
                  uVar9 = uVar30 & 0xffffffff;
                  goto LAB_029f243c;
                }
                bVar5 = bVar5 + 1;
              } while (bVar5 < bVar6);
            }
            uVar30 = uVar30 + 1;
            bVar5 = 0;
          } while (uVar30 != 5);
          bVar4 = true;
          uVar9 = 5;
        } while( true );
      }
    }
  }
LAB_029f25cc:
  lVar26 = *param_3;
  puVar2 = (uint *)param_3[1];
  bVar5 = *(byte *)(lVar26 + 0x7d);
  plVar31 = (long *)param_3[3];
  lVar15 = *(long *)(param_1 + 8);
  if (bVar5 < 6) {
    lVar25 = 0;
  }
  else if (bVar5 < 0xc) {
    lVar25 = 2;
  }
  else if (bVar5 < 0x12) {
    lVar25 = 1;
  }
  else if (bVar5 < 0x18) {
    lVar25 = 3;
  }
  else {
    lVar25 = (ulong)(bVar5 < 0x1e) << 2;
  }
  uVar9 = FUN_0294a644(*(undefined4 *)(lVar15 + 0x110),
                       *(undefined1 *)(*(long *)(lVar15 + 0x58) + 0x55),lVar25,0);
  iVar17 = *(int *)(lVar15 + 0x110);
  uVar28 = (uint)(uVar9 & 0xff);
  if (iVar17 == 2) {
LAB_029f265c:
    if (4 < uVar28) goto LAB_029f2678;
    puVar18 = &DAT_03a7ebe0;
LAB_029f2688:
    uVar11 = puVar18[uVar9 & 0xff];
  }
  else {
    if (iVar17 == 1) {
      if (uVar28 < 5) {
        puVar18 = &DAT_03a7ebe5;
        goto LAB_029f2688;
      }
    }
    else if (iVar17 == 0) goto LAB_029f265c;
LAB_029f2678:
    uVar11 = 2;
  }
  uVar9 = FUN_0294e9bc(iVar17,*(undefined1 *)(*(long *)(lVar15 + 0x58) + 0x55),uVar11);
  if (((((uVar9 & 0xfe) == 0) || (*(char *)((long)plVar31 + 0x5a) != '\x01')) ||
      (lVar15 = *plVar31, *(short *)(lVar15 + 0x74) != 0)) ||
     (uVar9 = FUN_029cea44(param_1,lVar26,lVar15), (uVar9 & 1) != 0)) goto LAB_029f2a24;
  uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
  if (uVar9 != 0) {
    uVar30 = 0;
    do {
      if (plVar31[uVar30] == lVar15) goto LAB_029f2708;
      uVar30 = uVar30 + 1;
    } while (uVar9 != uVar30);
  }
LAB_029f2728:
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  bVar5 = *(byte *)(lVar26 + 0x7d);
  if (bVar5 < 6) {
    uVar9 = 0;
  }
  else if (bVar5 < 0xc) {
    uVar9 = 2;
  }
  else if (bVar5 < 0x12) {
    uVar9 = 1;
  }
  else {
    uVar28 = 3;
    if (0x17 < bVar5) {
      uVar28 = (uint)(bVar5 < 0x1e) << 2;
    }
    uVar9 = (ulong)uVar28;
  }
  uVar28 = (uint)*(byte *)(lVar15 + uVar9 * 0x38 + 0x38);
  if (uVar28 != 0) {
    uVar7 = 0;
    do {
      if (*(byte *)(*(long *)(lVar15 + uVar9 * 0x38 + (ulong)(uVar7 & 0xff) * 8 + 8) + 0x7d) ==
          bVar5) {
        local_74 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if (local_74 != '\x06') goto LAB_029f27d4;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar28 != uVar7);
  }
  local_74 = '\x06';
LAB_029f27d4:
  iVar17 = *(int *)(*(long *)(param_1 + 8) + 0x110);
  lVar26 = (&DAT_0428af30)[(ulong)*puVar2 * 6];
  if (lVar26 == 0) {
    plVar19 = &DAT_0428af30;
  }
  else {
    plVar19 = &DAT_0428af30;
    if (*(char *)(lVar26 + 0x1e1) != '\0') {
      plVar19 = &DAT_0428af30 + (ulong)*puVar2 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar19 + 0x250) + (ulong)**(uint **)(*plVar19 + 0x250));
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x61) ||
      (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x30], uVar9 == 0)) ||
     (*(char *)((long)piVar1 + uVar9) == '\0')) {
    local_78 = 2;
    if (local_74 == '\x06') goto LAB_029f28b0;
    if (iVar17 == 1) goto LAB_029f2bc0;
    if (iVar17 != 2) goto LAB_029f28e8;
LAB_029f2888:
    local_62 = 0;
    local_64 = 0x606;
    local_68 = 0x6060606;
    FUN_0299c6e8();
joined_r0x029f2890:
    uVar9 = (ulong)local_62;
    if (uVar9 != 0) {
      memcpy(local_70,&local_68,uVar9);
    }
  }
  else {
    local_78 = 7;
    if (local_74 != '\x06') {
      if (iVar17 == 1) {
LAB_029f2bc0:
        local_62 = 0;
        local_64 = 0x606;
        local_68 = 0x6060606;
        FUN_0299c054(&local_78,&local_68,
                     *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55));
      }
      else {
        if (iVar17 == 2) goto LAB_029f2888;
LAB_029f28e8:
        local_62 = 0;
        local_64 = 0x606;
        local_68 = 0x6060606;
        FUN_0299beac();
      }
      goto joined_r0x029f2890;
    }
LAB_029f28b0:
    uVar9 = 0;
    local_70[0] = 6;
  }
  local_d8 = (undefined **)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  if ((int)uVar9 != 0) {
    bVar5 = 0;
    puVar18 = local_70;
    do {
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
      FUN_02947b84(*puVar14,*puVar18,&local_78,&local_68);
      uVar30 = (ulong)(byte)local_78;
      if (uVar30 == 5) {
LAB_029f2980:
        ppuVar16 = (undefined **)0x0;
      }
      else {
        if ((uint)*(byte *)(puVar14 + uVar30 * 7 + 7) <= (local_68 & 0xff)) goto LAB_029f2980;
        ppuVar16 = (undefined **)puVar14[uVar30 * 7 + (ulong)(byte)local_68 + 1];
      }
      (&local_d8)[bVar5] = ppuVar16;
      if ((ppuVar16 != (undefined **)0x0) && (*(short *)((long)ppuVar16 + 0x74) != 0)) {
        bVar5 = bVar5 + 1;
      }
      uVar9 = uVar9 - 1;
      puVar18 = puVar18 + 1;
    } while (uVar9 != 0);
    if ((bVar5 != 0) && (local_d8 != (undefined **)0x0)) {
      uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
      if (uVar9 < 6) {
        if (*(byte *)((long)plVar31 + 0x5a) != 0) {
          plVar19 = plVar31;
          uVar30 = uVar9;
          do {
            if ((undefined **)*plVar19 == local_d8) goto LAB_029f2a24;
            uVar30 = uVar30 - 1;
            plVar19 = plVar19 + 1;
          } while (uVar30 != 0);
        }
        plVar31[uVar9] = (long)local_d8;
        *(undefined1 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)plVar31 + (ulong)*(byte *)((long)plVar31 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)plVar31 + 0x5a) + 1;
        *(byte *)((long)plVar31 + 0x5a) = bVar5;
        if (*(byte *)((long)plVar31 + 0x5b) < bVar5) {
          *(byte *)((long)plVar31 + 0x5b) = bVar5;
        }
      }
    }
  }
LAB_029f2a24:
  puVar14 = (undefined8 *)param_3[3];
  local_d8 = (undefined **)*puVar14;
  local_d0 = puVar14[1];
  local_c8 = puVar14[2];
  local_c0 = puVar14[3];
  local_b8 = puVar14[4];
  uStack_b0 = puVar14[5];
  local_a8 = puVar14[6];
  local_a0 = *(undefined4 *)(puVar14 + 7);
  local_94 = *(undefined4 *)((long)puVar14 + 0x44);
  uStack_9c = (undefined4)*(undefined8 *)((long)puVar14 + 0x3c);
  uStack_98 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0x3c) >> 0x20);
  local_90 = *(undefined4 *)(puVar14 + 9);
  uStack_8c = *(undefined2 *)((long)puVar14 + 0x4c);
  local_82 = (undefined2)*(undefined4 *)((long)puVar14 + 0x56);
  uStack_80 = (undefined2)((uint)*(undefined4 *)((long)puVar14 + 0x56) >> 0x10);
  uStack_8a = (undefined2)*(undefined8 *)((long)puVar14 + 0x4e);
  uStack_88 = (undefined6)((ulong)*(undefined8 *)((long)puVar14 + 0x4e) >> 0x10);
  bStack_7e = *(byte *)((long)puVar14 + 0x5a);
  uVar11 = *(undefined1 *)((long)puVar14 + 0x5b);
  uStack_7c = *(undefined1 *)((long)puVar14 + 0x5c);
  uStack_7b = *(undefined1 *)((long)puVar14 + 0x5d);
  uStack_7d = uVar11;
  FUN_029983fc(&local_d8,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
  *(undefined8 *)((long)puVar14 + 0x56) = 0;
  *puVar14 = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  if ((ulong)bStack_7e != 0) {
    bVar5 = 0;
    uVar9 = 0;
    do {
      if (((uVar9 < bStack_7e) && (ppuVar16 = (&local_d8)[uVar9], ppuVar16 != (undefined **)0x0)) &&
         (*(short *)((long)ppuVar16 + 0x74) != 0 && bVar5 < 6)) {
        puVar24 = puVar14;
        uVar30 = (ulong)bVar5;
        if (bVar5 != 0) {
          do {
            if ((undefined **)*puVar24 == ppuVar16) goto LAB_029f2af4;
            uVar30 = uVar30 - 1;
            puVar24 = puVar24 + 1;
          } while (uVar30 != 0);
        }
        puVar14[bVar5] = ppuVar16;
        *(undefined1 *)((long)puVar14 + (ulong)*(byte *)((long)puVar14 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)puVar14 + (ulong)*(byte *)((long)puVar14 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)puVar14 + (ulong)*(byte *)((long)puVar14 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)puVar14 + 0x5a) + 1;
        *(byte *)((long)puVar14 + 0x5a) = bVar5;
        if (*(byte *)((long)puVar14 + 0x5b) < bVar5) {
          *(byte *)((long)puVar14 + 0x5b) = bVar5;
        }
      }
LAB_029f2af4:
      uVar9 = uVar9 + 1;
    } while (uVar9 != bStack_7e);
  }
  *(undefined1 *)((long)puVar14 + 0x5d) = uVar11;
  return;
LAB_029f2708:
  for (; (int)uVar30 + 1U < (uint)uVar9; uVar30 = uVar30 + 1) {
    plVar31[uVar30] = (plVar31 + uVar30)[1];
    uVar9 = (ulong)*(byte *)((long)plVar31 + 0x5a);
  }
  *(char *)((long)plVar31 + 0x5a) = (char)uVar9 + -1;
  *(char *)((long)plVar31 + 0x5c) = *(char *)((long)plVar31 + 0x5c) + -1;
  goto LAB_029f2728;
}


