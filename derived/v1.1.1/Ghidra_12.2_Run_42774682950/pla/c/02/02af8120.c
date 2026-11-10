/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02af8120; name: FUN_02af8120
 */


/* WARNING: Removing unreachable block (ram,0x02af96c4) */

void FUN_02af8120(undefined8 param_1,long *param_2)

{
  long **pplVar1;
  long **pplVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  bool bVar24;
  ulong *puVar25;
  long lVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 *local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80 [2];
  
  lVar8 = DAT_043ef5b0;
  uVar11 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
  plVar12 = (long *)(*(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar11 / 0x12) * 8) +
                    (uVar11 % 0x12) * 0xd8);
  if (plVar12[1] != *plVar12) {
    lVar10 = nn::os::GetCurrentThread();
    plVar12 = (long *)(lVar8 + 0xf0);
    do {
      lVar3 = *plVar12;
      lVar26 = *(long *)(lVar8 + 0xf8);
      cVar5 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar24) {
        *plVar12 = lVar3;
        *(long *)(lVar8 + 0xf8) = lVar26;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      while ((lVar3 != 0 && (lVar10 != lVar3))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xe4));
        do {
          lVar3 = *plVar12;
          lVar26 = *(long *)(lVar8 + 0xf8);
          cVar5 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar24) {
            *plVar12 = lVar3;
            *(long *)(lVar8 + 0xf8) = lVar26;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      while( true ) {
        if (*plVar12 != lVar3 || *(long *)(lVar8 + 0xf8) != lVar26) break;
        cVar5 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar24) {
          *plVar12 = lVar3;
          *(long *)(lVar8 + 0xf4) = lVar26 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          uVar11 = (*(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0xa0)) - 1;
          plVar13 = (long *)(*(long *)(*(long *)(lVar8 + 0x68) + (uVar11 / 0x12) * 8) +
                            (uVar11 % 0x12) * 0xd8);
          lVar10 = *plVar13;
          lVar3 = plVar13[1] - lVar10;
          if (lVar3 == 0) {
            bVar24 = false;
            goto LAB_02af9680;
          }
          auVar28 = NEON_fmov(0x3f800000,4);
          lVar26 = 0;
          goto LAB_02af82bc;
        }
      }
      ClearExclusiveLocal();
      lVar3 = *plVar12;
      lVar26 = *(long *)(lVar8 + 0xf8);
    } while( true );
  }
LAB_02af9734:
  FUN_02afeadc(param_1);
  return;
LAB_02af8900:
  local_98 = (long *)plVar20[6];
  if (local_98 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = local_98 + 10;
    do {
      cVar5 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar24) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar20 = local_98;
  }
LAB_02af879c:
  pplVar1 = local_80;
  if (plVar13 != (long *)0x0) {
    pplVar1 = &local_90;
  }
  pplVar2 = &local_88;
  if (plVar20 != (long *)0x0) {
    pplVar2 = &local_98;
  }
  local_90 = plVar13;
  FUN_02afd574(param_1,local_80,&local_88,pplVar1,pplVar2);
  if (param_2 != (long *)0x0) {
    fStack_a8 = auVar28._8_4_;
    fVar27 = fStack_a8;
    fStack_a4 = auVar28._12_4_;
    fVar32 = fStack_a4;
    local_b0 = auVar28._0_4_;
    fVar31 = local_b0;
    fStack_ac = auVar28._4_4_;
    fVar30 = fStack_ac;
    puVar16 = (ulong *)(lVar10 + lVar26 * 0x1b0 + 0xe0);
    uVar11 = *puVar16;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0xefb652fcd145958c;
      }
      else {
        uVar19 = 0xefb652fcd145958c;
        if (uVar11 < 0xefb652fcd145958d) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0xefb652fcd145958c / uVar11;
          }
          uVar19 = 0xefb652fcd145958c - uVar19 * uVar11;
        }
      }
      plVar21 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0xd8) + uVar19 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0xefb652fcd145958c) {
              if (plVar21[2] == -0x1049ad032eba6a74) goto LAB_02af8928;
            }
            else if ((plVar21[1] & uVar11 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0xefb652fcd145958c) {
              if (plVar21[2] == -0x1049ad032eba6a74) goto LAB_02af8928;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar23 = 0;
                if (uVar11 != 0) {
                  uVar23 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar23 * uVar11;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
LAB_02af8938:
    fVar33 = 1.0;
    puVar25 = (ulong *)(lVar10 + lVar26 * 0x1b0 + 0x78);
    uVar11 = *puVar25;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x29ad7986e827d65e;
      }
      else {
        uVar19 = 0x29ad7986e827d65e;
        if (uVar11 < 0x29ad7986e827d65f) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0x29ad7986e827d65e / uVar11;
          }
          uVar19 = 0x29ad7986e827d65e - uVar19 * uVar11;
        }
      }
      fVar33 = 1.0;
      plVar21 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x70) + uVar19 * 8);
      if (plVar21 != (long *)0x0) {
        plVar21 = (long *)*plVar21;
        fVar33 = 1.0;
        if (plVar21 != (long *)0x0) {
          if (uVar18 < 2) {
            do {
              if (plVar21[1] == 0x29ad7986e827d65e) {
                if (plVar21[2] == 0x29ad7986e827d65e) goto LAB_02af8a48;
              }
              else if ((plVar21[1] & uVar11 - 1) != uVar19) break;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar21[1];
              if (uVar18 == 0x29ad7986e827d65e) {
                if (plVar21[2] == 0x29ad7986e827d65e) goto LAB_02af8a48;
              }
              else {
                if (uVar11 <= uVar18) {
                  uVar23 = 0;
                  if (uVar11 != 0) {
                    uVar23 = uVar18 / uVar11;
                  }
                  uVar18 = uVar18 - uVar23 * uVar11;
                }
                if (uVar18 != uVar19) break;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          fVar33 = 1.0;
        }
      }
    }
LAB_02af8a4c:
    local_b0 = local_b0 * fVar33;
    fStack_ac = fStack_ac * fVar33;
    fStack_a8 = fStack_a8 * fVar33;
    fStack_a4 = fStack_a4 * fVar33;
    local_c8 = "ProbeMainDiffuseColor";
    local_d0 = (undefined1 *)0x48a84848847a4e55;
    local_c0 = 0x1f;
    local_b8 = (long *)0x0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_d0,&local_b0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    uVar11 = *puVar16;
    local_b0 = fVar31;
    fStack_ac = fVar30;
    fStack_a8 = fVar27;
    fStack_a4 = fVar32;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0xa78f76c928f0f97d;
      }
      else {
        uVar19 = 0xa78f76c928f0f97d;
        if (uVar11 < 0xa78f76c928f0f97e) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0xa78f76c928f0f97d / uVar11;
          }
          uVar19 = 0xa78f76c928f0f97d - uVar19 * uVar11;
        }
      }
      plVar21 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0xd8) + uVar19 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0xa78f76c928f0f97d) {
              if (plVar21[2] == -0x58708936d70f0683) goto LAB_02af8bcc;
            }
            else if ((plVar21[1] & uVar11 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0xa78f76c928f0f97d) {
              if (plVar21[2] == -0x58708936d70f0683) goto LAB_02af8bcc;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar23 = 0;
                if (uVar11 != 0) {
                  uVar23 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar23 * uVar11;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
LAB_02af8bdc:
    uVar11 = *puVar25;
    fVar32 = 1.0;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x5a5fe833f28d4b7b;
      }
      else {
        uVar19 = 0x5a5fe833f28d4b7b;
        if (uVar11 < 0x5a5fe833f28d4b7c) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0x5a5fe833f28d4b7b / uVar11;
          }
          uVar19 = 0x5a5fe833f28d4b7b - uVar19 * uVar11;
        }
      }
      fVar32 = 1.0;
      plVar21 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x70) + uVar19 * 8);
      if (plVar21 != (long *)0x0) {
        plVar21 = (long *)*plVar21;
        fVar32 = 1.0;
        if (plVar21 != (long *)0x0) {
          if (uVar18 < 2) {
            do {
              if (plVar21[1] == 0x5a5fe833f28d4b7b) {
                if (plVar21[2] == 0x5a5fe833f28d4b7b) goto LAB_02af8ce4;
              }
              else if ((plVar21[1] & uVar11 - 1) != uVar19) break;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar21[1];
              if (uVar18 == 0x5a5fe833f28d4b7b) {
                if (plVar21[2] == 0x5a5fe833f28d4b7b) goto LAB_02af8ce4;
              }
              else {
                if (uVar11 <= uVar18) {
                  uVar23 = 0;
                  if (uVar11 != 0) {
                    uVar23 = uVar18 / uVar11;
                  }
                  uVar18 = uVar18 - uVar23 * uVar11;
                }
                if (uVar18 != uVar19) break;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          fVar32 = 1.0;
        }
      }
    }
LAB_02af8ce8:
    local_b0 = local_b0 * fVar32;
    fStack_ac = fStack_ac * fVar32;
    fStack_a8 = fStack_a8 * fVar32;
    fStack_a4 = fStack_a4 * fVar32;
    local_c8 = "ProbeMainSpecularColor";
    local_d0 = (undefined1 *)0xa1fe356ae2569df0;
    local_c0 = 0x1f;
    local_b8 = (long *)0x0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_d0,&local_b0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    uVar11 = *puVar16;
    local_b0 = fVar31;
    fStack_ac = fVar30;
    fStack_a8 = fVar27;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x84e5527154404b57;
      }
      else {
        uVar19 = 0x84e5527154404b57;
        if (uVar11 < 0x84e5527154404b58) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0x84e5527154404b57 / uVar11;
          }
          uVar19 = 0x84e5527154404b57 - uVar19 * uVar11;
        }
      }
      plVar21 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0xd8) + uVar19 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0x84e5527154404b57) {
              if (plVar21[2] == -0x7b1aad8eabbfb4a9) goto LAB_02af8e68;
            }
            else if ((plVar21[1] & uVar11 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0x84e5527154404b57) {
              if (plVar21[2] == -0x7b1aad8eabbfb4a9) goto LAB_02af8e68;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar23 = 0;
                if (uVar11 != 0) {
                  uVar23 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar23 * uVar11;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
LAB_02af8e78:
    uVar11 = *puVar25;
    fVar32 = 1.0;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0xa355bac1bcab5de1;
      }
      else {
        uVar19 = 0xa355bac1bcab5de1;
        if (uVar11 < 0xa355bac1bcab5de2) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0xa355bac1bcab5de1 / uVar11;
          }
          uVar19 = 0xa355bac1bcab5de1 - uVar19 * uVar11;
        }
      }
      fVar32 = 1.0;
      plVar21 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x70) + uVar19 * 8);
      if (plVar21 != (long *)0x0) {
        plVar21 = (long *)*plVar21;
        fVar32 = 1.0;
        if (plVar21 != (long *)0x0) {
          if (uVar18 < 2) {
            do {
              if (plVar21[1] == 0xa355bac1bcab5de1) {
                if (plVar21[2] == -0x5caa453e4354a21f) goto LAB_02af8f80;
              }
              else if ((plVar21[1] & uVar11 - 1) != uVar19) break;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar21[1];
              if (uVar18 == 0xa355bac1bcab5de1) {
                if (plVar21[2] == -0x5caa453e4354a21f) goto LAB_02af8f80;
              }
              else {
                if (uVar11 <= uVar18) {
                  uVar23 = 0;
                  if (uVar11 != 0) {
                    uVar23 = uVar18 / uVar11;
                  }
                  uVar18 = uVar18 - uVar23 * uVar11;
                }
                if (uVar18 != uVar19) break;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          fVar32 = 1.0;
        }
      }
    }
LAB_02af8f84:
    local_b0 = local_b0 * fVar32;
    fStack_ac = fStack_ac * fVar32;
    fStack_a8 = fStack_a8 * fVar32;
    fStack_a4 = 1.0;
    if (plVar13 == (long *)0x0) {
      fStack_a4 = 0.0;
    }
    local_c8 = "ProbeMainWaterDiffuseColor";
    local_d0 = (undefined1 *)0x3c51598d7e6fc322;
    local_c0 = 0x1f;
    local_b8 = (long *)0x0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_d0,&local_b0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    uVar11 = *puVar16;
    local_b0 = fVar31;
    fStack_ac = fVar30;
    fStack_a8 = fVar27;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x4de72b3a3a108718;
      }
      else {
        uVar19 = 0x4de72b3a3a108718;
        if (uVar11 < 0x4de72b3a3a108719) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0x4de72b3a3a108718 / uVar11;
          }
          uVar19 = 0x4de72b3a3a108718 - uVar19 * uVar11;
        }
      }
      plVar13 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0xd8) + uVar19 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar13[1] == 0x4de72b3a3a108718) {
              if (plVar13[2] == 0x4de72b3a3a108718) goto LAB_02af9118;
            }
            else if ((plVar13[1] & uVar11 - 1) != uVar19) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar13[1];
            if (uVar18 == 0x4de72b3a3a108718) {
              if (plVar13[2] == 0x4de72b3a3a108718) goto LAB_02af9118;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar23 = 0;
                if (uVar11 != 0) {
                  uVar23 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar23 * uVar11;
              }
              if (uVar18 != uVar19) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
LAB_02af9128:
    uVar11 = *puVar25;
    fVar31 = 1.0;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x367e42261e8eba8a;
      }
      else {
        uVar19 = 0x367e42261e8eba8a;
        if (uVar11 < 0x367e42261e8eba8b) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0x367e42261e8eba8a / uVar11;
          }
          uVar19 = 0x367e42261e8eba8a - uVar19 * uVar11;
        }
      }
      fVar31 = 1.0;
      plVar13 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x70) + uVar19 * 8);
      if (plVar13 != (long *)0x0) {
        plVar13 = (long *)*plVar13;
        fVar31 = 1.0;
        if (plVar13 != (long *)0x0) {
          if (uVar18 < 2) {
            do {
              if (plVar13[1] == 0x367e42261e8eba8a) {
                if (plVar13[2] == 0x367e42261e8eba8a) goto LAB_02af9230;
              }
              else if ((plVar13[1] & uVar11 - 1) != uVar19) break;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar13[1];
              if (uVar18 == 0x367e42261e8eba8a) {
                if (plVar13[2] == 0x367e42261e8eba8a) goto LAB_02af9230;
              }
              else {
                if (uVar11 <= uVar18) {
                  uVar23 = 0;
                  if (uVar11 != 0) {
                    uVar23 = uVar18 / uVar11;
                  }
                  uVar18 = uVar18 - uVar23 * uVar11;
                }
                if (uVar18 != uVar19) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          fVar31 = 1.0;
        }
      }
    }
LAB_02af9234:
    local_b0 = local_b0 * fVar31;
    fStack_ac = fStack_ac * fVar31;
    fStack_a8 = fStack_a8 * fVar31;
    fStack_a4 = 1.0;
    if (plVar20 == (long *)0x0) {
      fStack_a4 = 0.0;
    }
    local_c8 = "ProbeMainWaterSpecularColor";
    local_d0 = (undefined1 *)0x3b0c89f96f90a475;
    local_c0 = 0x1f;
    local_b8 = (long *)0x0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_d0,&local_b0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_b0 = 0.0;
    uVar11 = *puVar25;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x942f3878ea299e66;
      }
      else {
        uVar19 = 0x942f3878ea299e66;
        if (uVar11 < 0x942f3878ea299e67) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = 0x942f3878ea299e66 / uVar11;
          }
          uVar19 = 0x942f3878ea299e66 - uVar19 * uVar11;
        }
      }
      lVar14 = *(long *)(lVar10 + lVar26 * 0x1b0 + 0x70);
      plVar13 = *(long **)(lVar14 + uVar19 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar13[1] == 0x942f3878ea299e66) {
              if (plVar13[2] == -0x6bd0c78715d6619a) goto LAB_02af93cc;
            }
            else if ((plVar13[1] & uVar11 - 1) != uVar19) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar13[1];
            if (uVar23 == 0x942f3878ea299e66) {
              if (plVar13[2] == -0x6bd0c78715d6619a) goto LAB_02af93cc;
            }
            else {
              if (uVar11 <= uVar23) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar23 / uVar11;
                }
                uVar23 = uVar23 - uVar6 * uVar11;
              }
              if (uVar23 != uVar19) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
LAB_02af93d4:
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x954c828b8f2773c;
LAB_02af9404:
        plVar13 = *(long **)(lVar14 + uVar19 * 8);
      }
      else {
        uVar19 = 0x954c828b8f2773c;
        if (0x954c828b8f2773c < uVar11) goto LAB_02af9404;
        uVar19 = 0;
        if (uVar11 != 0) {
          uVar19 = 0x954c828b8f2773c / uVar11;
        }
        uVar19 = 0x954c828b8f2773c - uVar19 * uVar11;
        plVar13 = *(long **)(lVar14 + uVar19 * 8);
      }
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar13[1] == 0x954c828b8f2773c) {
              if (plVar13[2] == 0x954c828b8f2773c) goto LAB_02af94b4;
            }
            else if ((plVar13[1] & uVar11 - 1) != uVar19) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar13[1];
            if (uVar18 == 0x954c828b8f2773c) {
              if (plVar13[2] == 0x954c828b8f2773c) goto LAB_02af94b4;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar23 = 0;
                if (uVar11 != 0) {
                  uVar23 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar23 * uVar11;
              }
              if (uVar18 != uVar19) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
LAB_02af9570:
    local_c8 = "WaterIBLTotalRotationAngle";
    local_d0 = (undefined1 *)0x5535e18d3aed6a6e;
    local_c0 = 0x1f;
    local_b8 = (long *)0x0;
    (**(code **)(*param_2 + 0x10))(param_2,&local_d0,&local_b0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  if (plVar20 != (long *)0x0) {
    plVar13 = plVar20 + 10;
    do {
      iVar9 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar24) {
        *(int *)plVar13 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar13 = local_90 + 10;
    do {
      iVar9 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar24) {
        *(int *)plVar13 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  bVar24 = true;
LAB_02af960c:
  if (local_88 != (long *)0x0) {
    plVar13 = local_88 + 10;
    do {
      iVar9 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
joined_r0x02af9638:
  if (local_80[0] != (long *)0x0) {
LAB_02af8500:
    plVar13 = local_80[0] + 10;
    do {
      iVar9 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_80[0] + 0x10))();
    }
  }
LAB_02af82ac:
  if (bVar24) {
    bVar24 = true;
  }
  else {
    while (lVar26 = lVar26 + 1, lVar26 != (lVar3 >> 4) * -0x7b425ed097b425ed) {
LAB_02af82bc:
      if ((*(char *)(lVar10 + lVar26 * 0x1b0 + 0x1a8) != '\0') &&
         (iVar9 = strcmp(*(char **)(lVar10 + lVar26 * 0x1b0 + 0x28),"Probe"), iVar9 == 0)) {
        lVar14 = lVar10 + lVar26 * 0x1b0;
        puVar16 = (ulong *)(lVar14 + 0x148);
        puVar15 = *(undefined1 **)(lVar14 + 0x148);
        if (puVar15 != (undefined1 *)0x0) {
          uVar11 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            puVar17 = (undefined1 *)((ulong)(puVar15 + -1) & 0x51dbe1b7f78e1b29);
          }
          else {
            puVar17 = (undefined1 *)0x51dbe1b7f78e1b29;
            if (puVar15 < (undefined1 *)0x51dbe1b7f78e1b2a) {
              uVar18 = 0;
              if (puVar15 != (undefined1 *)0x0) {
                uVar18 = 0x51dbe1b7f78e1b29 / (ulong)puVar15;
              }
              puVar17 = (undefined1 *)(0x51dbe1b7f78e1b29 - uVar18 * (long)puVar15);
            }
          }
          plVar13 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x140) + (long)puVar17 * 8);
          if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if (plVar13[1] == 0x51dbe1b7f78e1b29) {
                  if (plVar13[2] == 0x51dbe1b7f78e1b29) goto LAB_02af84c8;
                }
                else if ((undefined1 *)(plVar13[1] & (ulong)(puVar15 + -1)) != puVar17) break;
                plVar13 = (long *)*plVar13;
              } while (plVar13 != (long *)0x0);
            }
            else {
              do {
                puVar22 = (undefined1 *)plVar13[1];
                if (puVar22 == (undefined1 *)0x51dbe1b7f78e1b29) {
                  if (plVar13[2] == 0x51dbe1b7f78e1b29) goto LAB_02af84c8;
                }
                else {
                  if (puVar15 <= puVar22) {
                    uVar11 = 0;
                    if (puVar15 != (undefined1 *)0x0) {
                      uVar11 = (ulong)puVar22 / (ulong)puVar15;
                    }
                    puVar22 = puVar22 + -(uVar11 * (long)puVar15);
                  }
                  if (puVar22 != puVar17) break;
                }
                plVar13 = (long *)*plVar13;
              } while (plVar13 != (long *)0x0);
            }
          }
        }
        local_80[0] = (long *)0x0;
        goto joined_r0x02af84ec;
      }
    }
    bVar24 = false;
  }
LAB_02af9680:
  do {
    lVar10 = *plVar12;
    lVar3 = *(long *)(lVar8 + 0xf8);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10;
      *(long *)(lVar8 + 0xf8) = lVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    lVar26 = *plVar12;
    lVar14 = *(long *)(lVar8 + 0xf8);
    if (lVar26 != lVar10 || lVar14 != lVar3) break;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10;
      *(long *)(lVar8 + 0xf4) = lVar3 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02af9704;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar12;
      if (lVar10 != lVar26 || *(long *)(lVar8 + 0xf8) != lVar14) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02af96d0;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar26;
        *(long *)(lVar8 + 0xf4) = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar4 = true;
LAB_02af96d0:
    lVar26 = lVar10;
    lVar14 = *(long *)(lVar8 + 0xf8);
  } while (!bVar4);
LAB_02af9704:
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xe4));
  if (bVar24) {
    return;
  }
  goto LAB_02af9734;
LAB_02af84c8:
  local_80[0] = (long *)plVar13[6];
  if (local_80[0] != (long *)0x0) {
    plVar13 = local_80[0] + 10;
    do {
      cVar5 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar24) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar15 = (undefined1 *)*puVar16;
  }
joined_r0x02af84ec:
  if (puVar15 != (undefined1 *)0x0) {
    uVar11 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar17 = (undefined1 *)((ulong)(puVar15 + -1) & 0x3ec97bb01f9f4caa);
    }
    else {
      puVar17 = &DAT_3ec97bb01f9f4caa;
      if (puVar15 < (undefined1 *)0x3ec97bb01f9f4cab) {
        uVar18 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar18 = 0x3ec97bb01f9f4caa / (ulong)puVar15;
        }
        puVar17 = &DAT_3ec97bb01f9f4caa + -(uVar18 * (long)puVar15);
      }
    }
    plVar13 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x140) + (long)puVar17 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == &DAT_3ec97bb01f9f4caa) {
            if ((undefined1 *)plVar13[2] == &DAT_3ec97bb01f9f4caa) goto LAB_02af8528;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar15 + -1)) != puVar17) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar22 = (undefined1 *)plVar13[1];
          if (puVar22 == &DAT_3ec97bb01f9f4caa) {
            if ((undefined1 *)plVar13[2] == &DAT_3ec97bb01f9f4caa) goto LAB_02af8528;
          }
          else {
            if (puVar15 <= puVar22) {
              uVar11 = 0;
              if (puVar15 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar22 / (ulong)puVar15;
              }
              puVar22 = puVar22 + -(uVar11 * (long)puVar15);
            }
            if (puVar22 != puVar17) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  bVar24 = false;
  local_88 = (long *)0x0;
  goto joined_r0x02af9638;
LAB_02af8528:
  local_88 = (long *)plVar13[6];
  if (local_88 != (long *)0x0) {
    plVar13 = local_88 + 10;
    do {
      cVar5 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar24) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar24 = false;
    if ((local_80[0] != (long *)0x0) && (local_88 != (long *)0x0)) {
      uVar11 = *puVar16;
      if (uVar11 != 0) {
        uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = uVar11 - 1 & 0x995e197001543680;
        }
        else {
          uVar19 = 0x995e197001543680;
          if (uVar11 < 0x995e197001543681) {
            uVar19 = 0;
            if (uVar11 != 0) {
              uVar19 = 0x995e197001543680 / uVar11;
            }
            uVar19 = 0x995e197001543680 - uVar19 * uVar11;
          }
        }
        plVar13 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x140) + uVar19 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if (plVar13[1] == 0x995e197001543680) {
                if (plVar13[2] == -0x66a1e68ffeabc980) goto LAB_02af876c;
              }
              else if ((plVar13[1] & uVar11 - 1) != uVar19) break;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar13[1];
              if (uVar18 == 0x995e197001543680) {
                if (plVar13[2] == -0x66a1e68ffeabc980) goto LAB_02af876c;
              }
              else {
                if (uVar11 <= uVar18) {
                  uVar23 = 0;
                  if (uVar11 != 0) {
                    uVar23 = uVar18 / uVar11;
                  }
                  uVar18 = uVar18 - uVar23 * uVar11;
                }
                if (uVar18 != uVar19) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
      }
      local_90 = (long *)0x0;
      plVar13 = local_90;
      goto joined_r0x02af8790;
    }
    goto LAB_02af960c;
  }
  bVar24 = false;
  if (local_80[0] == (long *)0x0) goto LAB_02af82ac;
  goto LAB_02af8500;
LAB_02af876c:
  plVar13 = (long *)plVar13[6];
  if (plVar13 != (long *)0x0) {
    plVar20 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar24) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar11 = *puVar16;
  }
joined_r0x02af8790:
  if (uVar11 != 0) {
    uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar11 - 1 & 0x7e9dae51b29e96a5;
    }
    else {
      uVar19 = 0x7e9dae51b29e96a5;
      if (uVar11 < 0x7e9dae51b29e96a6) {
        uVar19 = 0;
        if (uVar11 != 0) {
          uVar19 = 0x7e9dae51b29e96a5 / uVar11;
        }
        uVar19 = 0x7e9dae51b29e96a5 - uVar19 * uVar11;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar10 + lVar26 * 0x1b0 + 0x140) + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar20[1] == 0x7e9dae51b29e96a5) {
            if (plVar20[2] == 0x7e9dae51b29e96a5) goto LAB_02af8900;
          }
          else if ((plVar20[1] & uVar11 - 1) != uVar19) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 == 0x7e9dae51b29e96a5) {
            if (plVar20[2] == 0x7e9dae51b29e96a5) goto LAB_02af8900;
          }
          else {
            if (uVar11 <= uVar18) {
              uVar23 = 0;
              if (uVar11 != 0) {
                uVar23 = uVar18 / uVar11;
              }
              uVar18 = uVar18 - uVar23 * uVar11;
            }
            if (uVar18 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  local_98 = (long *)0x0;
  plVar20 = (long *)0x0;
  goto LAB_02af879c;
LAB_02af8928:
  fStack_a8 = (float)plVar21[7];
  fStack_a4 = (float)((ulong)plVar21[7] >> 0x20);
  local_b0 = (float)plVar21[6];
  fStack_ac = (float)((ulong)plVar21[6] >> 0x20);
  goto LAB_02af8938;
LAB_02af8a48:
  fVar33 = *(float *)(plVar21 + 6);
  goto LAB_02af8a4c;
LAB_02af8bcc:
  fStack_a8 = (float)plVar21[7];
  fStack_a4 = (float)((ulong)plVar21[7] >> 0x20);
  local_b0 = (float)plVar21[6];
  fStack_ac = (float)((ulong)plVar21[6] >> 0x20);
  goto LAB_02af8bdc;
LAB_02af8ce4:
  fVar32 = *(float *)(plVar21 + 6);
  goto LAB_02af8ce8;
LAB_02af8e68:
  fStack_a8 = (float)plVar21[7];
  local_b0 = (float)plVar21[6];
  fStack_ac = (float)((ulong)plVar21[6] >> 0x20);
  goto LAB_02af8e78;
LAB_02af8f80:
  fVar32 = *(float *)(plVar21 + 6);
  goto LAB_02af8f84;
LAB_02af9118:
  fStack_a8 = (float)plVar13[7];
  local_b0 = (float)plVar13[6];
  fStack_ac = (float)((ulong)plVar13[6] >> 0x20);
  goto LAB_02af9128;
LAB_02af9230:
  fVar31 = *(float *)(plVar13 + 6);
  goto LAB_02af9234;
LAB_02af93cc:
  local_b0 = *(float *)(plVar13 + 6);
  goto LAB_02af93d4;
LAB_02af94b4:
  if (0.0 < *(float *)(plVar13 + 6)) {
    local_c8 = "Main";
    local_d0 = &DAT_6723799257d05608;
    local_c0 = 0x1f;
    local_b8 = (long *)0x0;
    lVar14 = FUN_02b11e64(DAT_043ef5a8,&local_d0);
    if (lVar14 != 0) {
      auVar29 = *(undefined1 (*) [16])(lVar14 + 0x70);
      fVar27 = auVar29._0_4_;
      fVar30 = fVar27 * fVar27;
      fVar31 = auVar29._4_4_ * auVar29._4_4_;
      fVar32 = auVar29._8_4_ * auVar29._8_4_;
      fVar33 = auVar29._12_4_ * auVar29._12_4_;
      NEON_ext(auVar29,auVar29,8,1);
      auVar29._4_4_ = fVar31;
      auVar29._0_4_ = fVar30;
      auVar29._8_4_ = fVar32;
      auVar29._12_4_ = fVar33;
      auVar7._4_4_ = fVar31;
      auVar7._0_4_ = fVar30;
      auVar7._8_4_ = fVar32;
      auVar7._12_4_ = fVar33;
      auVar29 = NEON_ext(auVar29,auVar7,8,1);
      fVar31 = fVar30 + auVar29._0_4_;
      fVar30 = fVar30 + auVar29._0_4_;
      uVar35 = NEON_frsqrte(CONCAT44(fVar30,fVar31),4);
      fVar33 = (float)((ulong)uVar35 >> 0x20);
      uVar34 = NEON_frsqrts(uVar35,CONCAT44(fVar30 * fVar33,fVar31 * (float)uVar35),4);
      fVar32 = (float)uVar35 * (float)uVar34;
      fVar33 = fVar33 * (float)((ulong)uVar34 >> 0x20);
      iVar9 = -(uint)(fVar31 == 0.0);
      uVar35 = NEON_frsqrts(CONCAT44(fVar33,fVar32),CONCAT44(fVar30 * fVar33,fVar31 * fVar32),4);
      fVar31 = (float)FUN_01009610();
      if (0.0 <= (float)((uint)(fVar27 * fVar32 * (float)uVar35) &
                        CONCAT13(~(byte)((uint)iVar9 >> 0x18),
                                 CONCAT12(~(byte)((uint)iVar9 >> 0x10),
                                          CONCAT11(~(byte)((uint)iVar9 >> 8),~(byte)iVar9))))) {
        fVar31 = -fVar31;
      }
      local_b0 = local_b0 + fVar31;
    }
  }
  goto LAB_02af9570;
}


