/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b75ff4; name: FUN_00b75ff4
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b75ff4(long param_1,long *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  long *plVar15;
  int *piVar16;
  uint *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ushort *puVar24;
  byte *pbVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  undefined8 uVar32;
  uint *puVar33;
  float fVar34;
  long *local_2e0;
  long *local_2d8;
  long local_2d0;
  long local_2c8;
  uint *local_2c0;
  uint *local_2b8;
  long *local_2b0;
  long *local_2a8;
  long *local_2a0;
  long *local_298;
  long local_290;
  long local_288;
  uint *local_280;
  undefined4 local_278;
  uint *local_270;
  undefined *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  
  uVar27 = *(ulong *)(param_1 + 0x350);
  if (uVar27 != 0) {
    uVar14 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar23 = param_2[4];
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar28 = uVar27 - 1 & uVar23;
    }
    else if (uVar23 < uVar27) {
      uVar28 = uVar23;
    }
    else {
      uVar28 = 0;
      if (uVar27 != 0) {
        uVar28 = uVar23 / uVar27;
      }
      uVar28 = uVar23 - uVar28 * uVar27;
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x348) + uVar28 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar15[1] == uVar23) {
            if (plVar15[2] == uVar23) goto LAB_00b760a4;
          }
          else if ((plVar15[1] & uVar27 - 1) != uVar28) goto LAB_00b76300;
          plVar15 = (long *)*plVar15;
          puVar30 = (uint *)0x0;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar15[1];
          if (uVar14 == uVar23) {
            if (plVar15[2] == uVar23) goto LAB_00b760a4;
          }
          else {
            if (uVar27 <= uVar14) {
              uVar7 = 0;
              if (uVar27 != 0) {
                uVar7 = uVar14 / uVar27;
              }
              uVar14 = uVar14 - uVar7 * uVar27;
            }
            if (uVar14 != uVar28) goto LAB_00b76300;
          }
          plVar15 = (long *)*plVar15;
          puVar30 = (uint *)0x0;
        } while (plVar15 != (long *)0x0);
      }
      goto LAB_00b761f8;
    }
  }
  goto LAB_00b76300;
LAB_00b760a4:
  uVar27 = plVar15[4];
  if (uVar27 != 0) {
    uVar14 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar23 = param_2[5];
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar28 = uVar27 - 1 & uVar23;
    }
    else if (uVar23 < uVar27) {
      uVar28 = uVar23;
    }
    else {
      uVar28 = 0;
      if (uVar27 != 0) {
        uVar28 = uVar23 / uVar27;
      }
      uVar28 = uVar23 - uVar28 * uVar27;
    }
    plVar15 = *(long **)(plVar15[3] + uVar28 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar15[1] == uVar23) {
            if (plVar15[2] == uVar23) goto LAB_00b761cc;
          }
          else if ((plVar15[1] & uVar27 - 1) != uVar28) goto LAB_00b76300;
          plVar15 = (long *)*plVar15;
          puVar30 = (uint *)0x0;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar15[1];
          if (uVar14 == uVar23) {
            if (plVar15[2] == uVar23) goto LAB_00b761cc;
          }
          else {
            if (uVar27 <= uVar14) {
              uVar7 = 0;
              if (uVar27 != 0) {
                uVar7 = uVar14 / uVar27;
              }
              uVar14 = uVar14 - uVar7 * uVar27;
            }
            if (uVar14 != uVar28) goto LAB_00b76300;
          }
          plVar15 = (long *)*plVar15;
          puVar30 = (uint *)0x0;
        } while (plVar15 != (long *)0x0);
      }
      goto LAB_00b761f8;
    }
  }
  goto LAB_00b76300;
LAB_00b761cc:
  piVar16 = (int *)plVar15[3];
  if ((0xe < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
     (uVar27 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[7], uVar27 != 0)) {
    puVar30 = (uint *)((long)piVar16 + uVar27);
    puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30);
    goto LAB_00b761f8;
  }
LAB_00b76300:
  puVar30 = (uint *)0x0;
LAB_00b761f8:
  puVar17 = *(uint **)(*(long *)(*param_2 + 8) + 0x250);
  piVar16 = (int *)((long)puVar17 + (ulong)*puVar17);
  puVar2 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (6 - (long)*piVar16)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar17 = puVar2 + 1;
  uVar27 = (ulong)*puVar2;
  if (uVar27 != 0) {
    puVar2 = puVar17 + uVar27;
    plVar15 = (long *)(param_1 + 0x240);
    puVar1 = PTR_DAT_0437a508 + 0x10;
    puVar31 = puVar30;
    do {
      puVar33 = (uint *)&DAT_cbf29ce484222645;
      piVar16 = (int *)((long)puVar17 + (ulong)*puVar17);
      puVar24 = (ushort *)((long)piVar16 - (long)*piVar16);
      if ((((4 < *puVar24) && ((ulong)puVar24[2] != 0)) &&
          (6 < *puVar24 && *(char *)((long)piVar16 + (ulong)puVar24[2]) == '\x02')) &&
         (((ulong)puVar24[3] != 0 &&
          (puVar29 = (uint *)((long)piVar16 + (ulong)puVar24[3]),
          piVar16 = (int *)((long)puVar29 + (ulong)*puVar29), piVar16 != (int *)0x0)))) {
        if (*(long *)(*param_2 + 8) == 0) {
          plVar11 = (long *)FUN_00b779ac();
          lVar18 = *plVar11;
          if (lVar18 == 0) goto LAB_00b77098;
LAB_00b76388:
          puVar19 = (undefined8 *)(lVar18 + 0x60);
        }
        else {
          lVar18 = *(long *)(*(long *)(*param_2 + 8) + 0x68);
          if (lVar18 != 0) goto LAB_00b76388;
LAB_00b77098:
          puVar19 = (undefined8 *)PTR_PTR_04379d00;
        }
        pcVar10 = strrchr((char *)*puVar19,0x2f);
        if (pcVar10 == (char *)0x0) {
          pbVar25 = (byte *)0x0;
        }
        else {
          pbVar25 = (byte *)(pcVar10 + 1);
        }
        bVar4 = *pbVar25;
        local_270 = puVar33;
        if (bVar4 != 0) {
          do {
            pbVar25 = pbVar25 + 1;
            local_270 = (uint *)(((ulong)local_270 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar25;
          } while (bVar4 != 0);
        }
        if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
           (uVar27 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar27 == 0)) {
          lVar18 = 0;
        }
        else {
          puVar29 = (uint *)((long)piVar16 + uVar27);
          lVar18 = (long)puVar29 + (ulong)*puVar29;
        }
        bVar4 = *(byte *)(lVar18 + 4);
        if (bVar4 != 0) {
          pbVar25 = (byte *)(lVar18 + 5);
          do {
            puVar33 = (uint *)(((ulong)puVar33 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar25;
            pbVar25 = pbVar25 + 1;
          } while (bVar4 != 0);
        }
        plVar11 = (long *)FUN_00b77a94(param_1 + 0x348,&local_270);
        puVar29 = (uint *)plVar11[1];
        if (puVar29 == (uint *)0x0) {
LAB_00b76538:
          plVar20 = (long *)(**(code **)(*(long *)plVar11[7] + 0x10))((long *)plVar11[7],0x20,8);
          if (plVar20 == (long *)0x0) {
            (**(code **)(*(long *)plVar11[7] + 0xb8))();
          }
          lVar18 = plVar11[7];
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), iVar9 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar12 == 0) {
            plVar20[2] = (long)puVar33;
            plVar20[3] = (long)piVar16;
          }
          else {
            if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00b770c0;
            *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar18;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            plVar20[2] = (long)puVar33;
            plVar20[3] = (long)piVar16;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          *plVar20 = 0;
          plVar20[1] = (long)puVar33;
          if ((puVar29 == (uint *)0x0) ||
             (*(float *)(plVar11 + 0xc) * (float)puVar29 < (float)(plVar11[0xb] + 1))) {
            uVar27 = (ulong)(puVar29 < (uint *)0x3 ||
                            ((ulong)puVar29 & (ulong)((long)puVar29 + -1)) != 0) |
                     (long)puVar29 << 1;
            uVar14 = (ulong)((float)(plVar11[0xb] + 1) / *(float *)(plVar11 + 0xc));
            if (uVar14 <= uVar27) {
              uVar14 = uVar27;
            }
            FUN_00b786a4(plVar11,uVar14);
            puVar29 = (uint *)plVar11[1];
            if (((ulong)puVar29 & (ulong)((long)puVar29 + -1)) == 0) {
              puVar31 = (uint *)((ulong)((long)puVar29 + -1) & (ulong)puVar33);
            }
            else if (puVar33 < puVar29) {
              puVar31 = puVar33;
            }
            else {
              uVar27 = 0;
              if (puVar29 != (uint *)0x0) {
                uVar27 = (ulong)puVar33 / (ulong)puVar29;
              }
              puVar31 = (uint *)((long)puVar33 - uVar27 * (long)puVar29);
            }
          }
          plVar21 = *(long **)(*plVar11 + (long)puVar31 * 8);
          if (plVar21 == (long *)0x0) {
            plVar21 = plVar11 + 6;
            *plVar20 = *plVar21;
            *plVar21 = (long)plVar20;
            *(long **)(*plVar11 + (long)puVar31 * 8) = plVar21;
            if (*plVar20 != 0) {
              puVar31 = *(uint **)(*plVar20 + 8);
              if (((ulong)puVar29 & (ulong)((long)puVar29 + -1)) == 0) {
                puVar31 = (uint *)((ulong)puVar31 & (ulong)((long)puVar29 + -1));
              }
              else if (puVar29 <= puVar31) {
                uVar27 = 0;
                if (puVar29 != (uint *)0x0) {
                  uVar27 = (ulong)puVar31 / (ulong)puVar29;
                }
                puVar31 = (uint *)((long)puVar31 - uVar27 * (long)puVar29);
              }
              plVar21 = (long *)(*plVar11 + (long)puVar31 * 8);
              goto LAB_00b76638;
            }
          }
          else {
            *plVar20 = *plVar21;
LAB_00b76638:
            *plVar21 = (long)plVar20;
          }
          plVar11[0xb] = plVar11[0xb] + 1;
        }
        else {
          uVar27 = (long)puVar29 - ((ulong)puVar29 >> 1 & 0x5555555555555555);
          uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
          uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar27 < 2) {
            puVar31 = (uint *)((ulong)((long)puVar29 + -1) & (ulong)puVar33);
          }
          else {
            puVar31 = puVar33;
            if (puVar29 <= puVar33) {
              uVar14 = 0;
              if (puVar29 != (uint *)0x0) {
                uVar14 = (ulong)puVar33 / (ulong)puVar29;
              }
              puVar31 = (uint *)((long)puVar33 - uVar14 * (long)puVar29);
            }
          }
          plVar20 = *(long **)(*plVar11 + (long)puVar31 * 8);
          if (plVar20 == (long *)0x0) goto LAB_00b76538;
          if (uVar27 < 2) {
            do {
              plVar20 = (long *)*plVar20;
              if ((plVar20 == (long *)0x0) ||
                 ((uint *)plVar20[1] != puVar33 &&
                  (uint *)((ulong)plVar20[1] & (ulong)((long)puVar29 + -1)) != puVar31))
              goto LAB_00b76538;
            } while ((uint *)plVar20[2] != puVar33);
          }
          else {
            do {
              plVar20 = (long *)*plVar20;
              if (plVar20 == (long *)0x0) goto LAB_00b76538;
              puVar26 = (uint *)plVar20[1];
              if (puVar26 != puVar33) {
                if (puVar29 <= puVar26) {
                  uVar27 = 0;
                  if (puVar29 != (uint *)0x0) {
                    uVar27 = (ulong)puVar26 / (ulong)puVar29;
                  }
                  puVar26 = (uint *)((long)puVar26 - uVar27 * (long)puVar29);
                }
                if (puVar26 != puVar31) goto LAB_00b76538;
              }
            } while ((uint *)plVar20[2] != puVar33);
          }
        }
        plVar11 = (long *)FUN_00b779ac();
        local_2a0 = (long *)*plVar11;
        if (local_2a0 != (long *)0x0) {
          (**(code **)(*local_2a0 + 0x18))();
        }
        local_298 = (long *)plVar11[1];
        local_290 = plVar11[2];
        local_288 = plVar11[3];
        local_280 = (uint *)plVar11[4];
        if (local_280 != (uint *)0x0) {
          (**(code **)(*(long *)local_280 + 0x18))();
        }
        local_278 = (undefined4)plVar11[5];
        if ((puVar30 != (uint *)0x0) && (*puVar30 != 0)) {
          puVar22 = (undefined1 *)((long)puVar30 + 9);
          puVar31 = puVar30 + 1;
          do {
            piVar3 = (int *)((long)puVar31 + (ulong)*puVar31);
            puVar24 = (ushort *)((long)piVar3 - (long)*piVar3);
            puVar26 = (uint *)((long)piVar3 + (ulong)puVar24[2]);
            uVar27 = (ulong)*puVar26;
            bVar4 = *(byte *)((long)puVar26 + uVar27 + 4);
            puVar26 = (uint *)&DAT_cbf29ce484222645;
            if (bVar4 != 0) {
              puVar26 = (uint *)&DAT_cbf29ce484222645;
              pbVar25 = puVar22 + uVar27 + puVar24[2] + (ulong)*puVar31;
              do {
                puVar26 = (uint *)(((ulong)puVar26 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar25;
                pbVar25 = pbVar25 + 1;
              } while (bVar4 != 0);
            }
            if (puVar26 == puVar33) {
              if (piVar3 != (int *)0x0) {
                if (*puVar24 < 7) goto LAB_00b76cc4;
                puVar22 = (undefined1 *)0x0;
                if ((ulong)puVar24[3] == 0) goto LAB_00b76738;
                puVar31 = (uint *)((long)piVar3 + (ulong)puVar24[3]);
                goto LAB_00b76730;
              }
              break;
            }
            puVar31 = puVar31 + 1;
            puVar22 = puVar22 + 4;
          } while (puVar31 != puVar30 + 1 + *puVar30);
        }
        if (*(ushort *)((long)piVar16 - (long)*piVar16) < 7) {
LAB_00b76cc4:
          puVar22 = (undefined1 *)0x0;
        }
        else {
          uVar27 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3];
          puVar22 = (undefined1 *)0x0;
          if (uVar27 != 0) {
            puVar31 = (uint *)((long)piVar16 + uVar27);
LAB_00b76730:
            puVar22 = (undefined1 *)((long)puVar31 + (ulong)*puVar31);
          }
        }
LAB_00b76738:
        snprintf((char *)&local_268,0x80,"%s/%s.aibt",*(char **)(param_1 + 0x28),puVar22 + 4);
        FUN_00aad744(&local_2e0,&local_268);
        plVar11 = local_2a0;
        local_2a0 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
        }
        puVar26 = local_280;
        puVar31 = local_2c0;
        local_2a0 = local_2e0;
        local_2e0 = (long *)0x0;
        local_298 = local_2d8;
        local_290 = local_2d0;
        local_288 = local_2c8;
        local_280 = (uint *)0x0;
        if (puVar26 == (uint *)0x0) {
          local_2c0 = (uint *)0x0;
          local_280 = puVar31;
          local_278 = local_2b8._0_4_;
        }
        else {
          (**(code **)(*(long *)puVar26 + 0x20))();
          local_280 = local_2c0;
          local_2c0 = (uint *)0x0;
          local_278 = local_2b8._0_4_;
          if (local_2e0 != (long *)0x0) {
            (**(code **)(*local_2e0 + 0x20))();
          }
        }
        FUN_00b77f5c(&local_2a8,param_2 + 6,piVar16,puVar30);
        uVar32 = *(undefined8 *)(param_1 + 0xa0);
        if (*(code **)(param_1 + 0xc0) == (code *)0x0) {
          local_248 = 0;
          uStack_240 = 0;
          local_258 = 0;
          uStack_250 = 0;
          uStack_260 = 0;
          local_268 = puVar1;
        }
        else {
          (**(code **)(param_1 + 0xc0))(&local_268,param_1 + 0xe0,&local_298);
        }
        FUN_00b75ea0(&local_2e0,uVar32,&local_268);
        local_2c0 = local_270;
        local_2b0 = local_2a8;
        local_2b8 = puVar33;
        if (local_2a8 != (long *)0x0) {
          (**(code **)(*local_2a8 + 0x18))();
        }
        FUN_00936104(&local_268);
        plVar11 = local_2e0;
        if ((((local_2e0[1] == 0) || (*(char *)(local_2e0[1] + 0x1e1) == '\0')) &&
            (uVar27 = FUN_00938764(local_2e0,1,&local_2a0,0,*(undefined8 *)(param_1 + 0xa0),
                                   *(undefined8 *)(param_1 + 0x90)), (uVar27 & 1) != 0)) &&
           (plVar11 = (long *)plVar11[5], plVar11 != (long *)0x0)) {
          puVar29 = (uint *)plVar11[0xb];
          if (*(undefined8 **)(puVar29 + 6) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(puVar29 + 4) == 0) {
            uVar32 = (**(code **)**(undefined8 **)(puVar29 + 6))();
            *(undefined8 *)(puVar29 + 4) = uVar32;
          }
          puVar31 = puVar29 + 3;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar31,0x10);
            if (bVar6) {
              *puVar31 = *puVar31 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar18 = plVar11[0xb];
          piVar3 = (int *)(lVar18 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
        puVar33 = (uint *)&DAT_cbf29ce484222645;
        plVar11 = (long *)PTR_PTR_04379d00;
        if (local_2a0 != (long *)0x0) {
          plVar11 = local_2a0 + 0xc;
        }
        pcVar13 = strrchr((char *)*plVar11,0x2f);
        pcVar10 = (char *)0x0;
        if (pcVar13 != (char *)0x0) {
          pcVar10 = pcVar13 + 1;
        }
        if (*(ushort *)((long)piVar16 - (long)*piVar16) < 5) {
          lVar18 = 0;
        }
        else {
          uVar27 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2];
          lVar18 = 0;
          if (uVar27 != 0) {
            puVar31 = (uint *)((long)piVar16 + uVar27);
            lVar18 = (long)puVar31 + (ulong)*puVar31;
          }
        }
        if (local_2a8 == (long *)0x0) {
          plVar11 = (long *)PTR_PTR_04379d00;
        }
        else {
          plVar11 = local_2a8 + 0xc;
        }
        snprintf((char *)&local_268,0x200,"%s_%s_%s",pcVar10,(char *)(lVar18 + 4),(char *)*plVar11);
        if ((byte)local_268 != 0) {
          pbVar25 = (byte *)((ulong)&local_268 | 1);
          bVar4 = (byte)local_268;
          do {
            puVar33 = (uint *)(((ulong)puVar33 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar25;
            pbVar25 = pbVar25 + 1;
          } while (bVar4 != 0);
        }
        puVar26 = *(uint **)(param_1 + 0x248);
        if (puVar26 == (uint *)0x0) {
LAB_00b76940:
          plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x278) + 0x10))
                                      (*(long **)(param_1 + 0x278),0x50,8);
          if (plVar11 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x278) + 0xb8))();
          }
          puVar31 = *(uint **)(param_1 + 0x278);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), iVar9 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          plVar21 = local_2b0;
          plVar20 = local_2e0;
          if (lVar18 != 0) {
            if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_00b770c0:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(uint **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = puVar31;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          }
          local_2e0 = (long *)0x0;
          plVar11[2] = (long)puVar33;
          plVar11[3] = (long)plVar20;
          plVar11[5] = local_2d0;
          plVar11[6] = local_2c8;
          plVar11[4] = (long)local_2d8;
          plVar11[7] = (long)local_2c0;
          plVar11[8] = (long)local_2b8;
          local_2b0 = (long *)0x0;
          plVar11[9] = (long)plVar21;
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          }
          *plVar11 = 0;
          plVar11[1] = (long)puVar33;
          fVar34 = (float)(*(long *)(param_1 + 0x298) + 1);
          if ((puVar26 == (uint *)0x0) || (*(float *)(param_1 + 0x2a0) * (float)puVar26 < fVar34)) {
            uVar27 = (ulong)(puVar26 < (uint *)0x3 ||
                            ((ulong)puVar26 & (ulong)((long)puVar26 + -1)) != 0) |
                     (long)puVar26 << 1;
            uVar14 = (ulong)(fVar34 / *(float *)(param_1 + 0x2a0));
            if (uVar14 <= uVar27) {
              uVar14 = uVar27;
            }
            FUN_00b78cf4(plVar15,uVar14);
            puVar26 = *(uint **)(param_1 + 0x248);
            if (((ulong)puVar26 & (ulong)((long)puVar26 + -1)) == 0) {
              puVar29 = (uint *)((ulong)((long)puVar26 + -1) & (ulong)puVar33);
            }
            else if (puVar33 < puVar26) {
              puVar29 = puVar33;
            }
            else {
              uVar27 = 0;
              if (puVar26 != (uint *)0x0) {
                uVar27 = (ulong)puVar33 / (ulong)puVar26;
              }
              puVar29 = (uint *)((long)puVar33 - uVar27 * (long)puVar26);
            }
          }
          plVar20 = *(long **)(*plVar15 + (long)puVar29 * 8);
          if (plVar20 == (long *)0x0) {
            *plVar11 = *(long *)(param_1 + 0x270);
            *(long **)(param_1 + 0x270) = plVar11;
            *(long *)(*(long *)(param_1 + 0x240) + (long)puVar29 * 8) = param_1 + 0x270;
            if (*plVar11 != 0) {
              puVar33 = *(uint **)(*plVar11 + 8);
              if (((ulong)puVar26 & (ulong)((long)puVar26 + -1)) == 0) {
                puVar33 = (uint *)((ulong)puVar33 & (ulong)((long)puVar26 + -1));
              }
              else if (puVar26 <= puVar33) {
                uVar27 = 0;
                if (puVar26 != (uint *)0x0) {
                  uVar27 = (ulong)puVar33 / (ulong)puVar26;
                }
                puVar33 = (uint *)((long)puVar33 - uVar27 * (long)puVar26);
              }
              plVar20 = (long *)(*plVar15 + (long)puVar33 * 8);
              goto LAB_00b76abc;
            }
          }
          else {
            *plVar11 = *plVar20;
LAB_00b76abc:
            *plVar20 = (long)plVar11;
          }
          *(long *)(param_1 + 0x298) = *(long *)(param_1 + 0x298) + 1;
        }
        else {
          uVar27 = (long)puVar26 - ((ulong)puVar26 >> 1 & 0x5555555555555555);
          uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
          uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar27 < 2) {
            puVar29 = (uint *)((ulong)((long)puVar26 + -1) & (ulong)puVar33);
          }
          else {
            puVar29 = puVar33;
            if (puVar26 <= puVar33) {
              uVar14 = 0;
              if (puVar26 != (uint *)0x0) {
                uVar14 = (ulong)puVar33 / (ulong)puVar26;
              }
              puVar29 = (uint *)((long)puVar33 - uVar14 * (long)puVar26);
            }
          }
          plVar11 = *(long **)(*plVar15 + (long)puVar29 * 8);
          if (plVar11 == (long *)0x0) goto LAB_00b76940;
          if (uVar27 < 2) {
            do {
              plVar11 = (long *)*plVar11;
              if ((plVar11 == (long *)0x0) ||
                 ((uint *)plVar11[1] != puVar33 &&
                  (uint *)((ulong)plVar11[1] & (ulong)((long)puVar26 + -1)) != puVar29))
              goto LAB_00b76940;
              puVar31 = puVar30;
            } while ((uint *)plVar11[2] != puVar33);
          }
          else {
            do {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_00b76940;
              puVar31 = (uint *)plVar11[1];
              if (puVar31 != puVar33) {
                if (puVar26 <= puVar31) {
                  uVar27 = 0;
                  if (puVar26 != (uint *)0x0) {
                    uVar27 = (ulong)puVar31 / (ulong)puVar26;
                  }
                  puVar31 = (uint *)((long)puVar31 - uVar27 * (long)puVar26);
                }
                if (puVar31 != puVar29) goto LAB_00b76940;
              }
              puVar31 = puVar30;
            } while ((uint *)plVar11[2] != puVar33);
          }
        }
        if (local_2b0 != (long *)0x0) {
          (**(code **)(*local_2b0 + 0x20))();
        }
        plVar11 = local_2e0;
        local_2e0 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          FUN_02bcbe58(&local_268,0);
          FUN_00936104(plVar11);
          lVar8 = local_2c8;
          lVar12 = local_2d0;
          plVar20 = local_2d8;
          uVar27 = (**(code **)(*local_2d8 + 0xc0))(local_2d8);
          lVar18 = tpidr_el0;
          if ((uVar27 & 1) == 0) {
LAB_00b76d44:
            (**(code **)(*plVar20 + 0x18))(plVar20,plVar11,lVar12,lVar8);
          }
          else {
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_00b76d44;
            FUN_02bcc824(plVar20,plVar11,lVar12,lVar8);
          }
          if (*(char *)(lVar18 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar18 + 0x38d488) = 1;
            *(undefined8 *)(lVar18 + 0x38d478) = 0;
            *(undefined8 *)(lVar18 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar9 = *(int *)(lVar18 + 0x38d480) + -1;
          *(int *)(lVar18 + 0x38d480) = iVar9;
          if (iVar9 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar18 + 0x38d484) = 0;
          }
        }
        if (local_2a8 != (long *)0x0) {
          (**(code **)(*local_2a8 + 0x20))();
        }
        if (local_280 != (uint *)0x0) {
          (**(code **)(*(long *)local_280 + 0x20))();
        }
        if (local_2a0 != (long *)0x0) {
          (**(code **)(*local_2a0 + 0x20))();
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar2);
  }
  return;
}


