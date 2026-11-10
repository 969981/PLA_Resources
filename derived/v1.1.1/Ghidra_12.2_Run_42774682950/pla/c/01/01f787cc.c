/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f787cc; name: FUN_01f787cc
 */


/* WARNING: Removing unreachable block (ram,0x01f78e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f787cc(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  long *plVar24;
  undefined1 *puVar25;
  long *plVar26;
  char cVar27;
  int *piVar28;
  uint uVar29;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long *local_190;
  undefined8 uStack_188;
  undefined4 local_174;
  long *local_170;
  undefined1 *puStack_168;
  byte local_160 [32];
  int *local_140;
  int *local_138;
  long local_130;
  long *plStack_128;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  code *pcStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [100];
  int local_6c [3];
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar19 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar19;
  if ((lVar19 != 0) && (plVar26 = *(long **)(lVar19 + 0x228), plVar26 != (long *)0x0)) {
    lVar19 = plVar26[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
LAB_01f790ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar14;
    }
    piVar28 = (int *)(lVar19 + 0xc);
    do {
      cVar27 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar28,0x10);
      if (bVar4) {
        *piVar28 = *piVar28 + 1;
        cVar27 = ExclusiveMonitorsStatus();
      }
    } while (cVar27 != '\0');
    puVar20 = (undefined1 *)((long *)plVar26[0x37])[1];
    if (puVar20 != (undefined1 *)0x0) {
      uVar21 = (long)puVar20 - ((ulong)puVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        puVar22 = (undefined1 *)((ulong)(puVar20 + -1) & 0x2a9b2ac3454aecc1);
      }
      else if (&DAT_2a9b2ac3454aecc1 < puVar20) {
        puVar22 = &DAT_2a9b2ac3454aecc1;
      }
      else {
        uVar5 = 0;
        if (puVar20 != (undefined1 *)0x0) {
          uVar5 = 0x2a9b2ac3454aecc1 / (ulong)puVar20;
        }
        puVar22 = &DAT_2a9b2ac3454aecc1 + -(uVar5 * (long)puVar20);
      }
      plVar24 = *(long **)(*(long *)plVar26[0x37] + (long)puVar22 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if ((undefined1 *)plVar24[1] == &DAT_2a9b2ac3454aecc1) {
              if ((undefined1 *)plVar24[2] == &DAT_2a9b2ac3454aecc1) goto LAB_01f78968;
            }
            else if ((undefined1 *)((ulong)plVar24[1] & (ulong)(puVar20 + -1)) != puVar22)
            goto LAB_01f78918;
            plVar24 = (long *)*plVar24;
            cVar27 = '\0';
          } while (plVar24 != (long *)0x0);
          goto LAB_01f7896c;
        }
        do {
          puVar25 = (undefined1 *)plVar24[1];
          if (puVar25 == &DAT_2a9b2ac3454aecc1) {
            if ((undefined1 *)plVar24[2] == &DAT_2a9b2ac3454aecc1) goto LAB_01f78968;
          }
          else {
            if (puVar20 <= puVar25) {
              uVar21 = 0;
              if (puVar20 != (undefined1 *)0x0) {
                uVar21 = (ulong)puVar25 / (ulong)puVar20;
              }
              puVar25 = puVar25 + -(uVar21 * (long)puVar20);
            }
            if (puVar25 != puVar22) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
LAB_01f78918:
    cVar27 = '\0';
    goto LAB_01f7896c;
  }
LAB_01f789c4:
  puVar6 = PTR_DAT_0437b4d0;
  if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  puVar8 = PTR_DAT_0437b4e0;
  puVar7 = PTR_DAT_0437b4d8;
  lVar19 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar19;
  if (lVar19 != 0) {
    FUN_0278ec68(lVar19,0);
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  FUN_017e9e98(&local_f8);
  if (local_f8 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    local_100 = (long *)0x0;
    goto joined_r0x01f78b34;
  }
  plVar26 = (long *)local_f8[0x32];
  FUN_009acf14(&local_100);
  if (local_100 == (long *)0x0) goto joined_r0x01f78b34;
  if (*(long *)(param_1 + 0x78) == 0) {
    local_108 = (long *)0x0;
  }
  else {
    FUN_00ca554c(&local_108);
    if (local_108 != (long *)0x0) {
      if (local_108[0xd] == 0) {
        puVar15 = PTR_DAT_04379c88;
      }
      else {
        puVar15 = (undefined *)(local_108[0xd] + 0x58);
      }
      uVar11 = FUN_027858ac(puVar15);
      if ((uVar11 & 0xff) != 0) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        uVar11 = uVar11 >> 8 & 0xff;
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437b4d0);
        }
        uVar16 = *(undefined8 *)puVar7;
        *(undefined8 *)puVar8 = uVar16;
        FUN_027908f8(&local_140,uVar16,uVar14,uVar11);
        puVar6 = PTR_DAT_04379528;
        uVar16 = _UNK_03888fc8;
        uVar14 = _DAT_03888fc0;
        piVar28 = local_140;
        if (local_140 != local_138) {
          do {
            plVar24 = *(long **)(piVar28 + 0x11);
            iVar12 = *piVar28;
            uVar29 = piVar28[0x13];
            snprintf((char *)local_160,0x20,"map%d_net_item_%d",uVar11,iVar12);
            if (local_160[0] == 0) {
              puStack_168 = &DAT_cbf29ce484222645;
            }
            else {
              puStack_168 = &DAT_cbf29ce484222645;
              pbVar23 = (byte *)((ulong)local_160 | 1);
              bVar2 = local_160[0];
              do {
                puStack_168 = (undefined1 *)(((ulong)puStack_168 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = *pbVar23;
                pbVar23 = pbVar23 + 1;
              } while (bVar2 != 0);
            }
            local_170 = (long *)0x0;
            local_190 = (long *)0x0;
            uStack_188 = 0;
            local_174 = 1;
            uStack_198 = uVar16;
            local_1a0 = uVar14;
            local_f0 = plVar24;
            pcStack_e8 = (code *)(ulong)uVar29;
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), iVar13 != 0)) {
              FUN_008a62a4(puVar6);
              FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar19 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
            if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar26;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
            plVar24 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x100,0x10);
            if (plVar24 == (long *)0x0) {
              (**(code **)(*plVar26 + 0xb8))(plVar26);
            }
            local_6c[0] = iVar12;
            FUN_01ce79bc(plVar24,local_6c,&local_174,&local_f0,&local_190,&local_1a0,&puStack_168,1,
                         0,1);
            plVar24[3] = 0x100;
            plVar24[1] = (long)plVar26;
            plVar24[2] = (long)plVar24;
            plVar24[4] = 0x10;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            if (plVar24 != (long *)0x0) {
              lVar19 = plVar24[0xb];
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f790ec;
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                *(undefined8 *)(lVar19 + 0x10) = uVar17;
              }
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                cVar27 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar27 = ExclusiveMonitorsStatus();
                }
              } while (cVar27 != '\0');
            }
            plVar9 = local_170;
            local_170 = (long *)0x0;
            if (plVar9 != (long *)0x0) {
              lVar19 = plVar9[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar27 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + -1;
                  cVar27 = ExclusiveMonitorsStatus();
                }
              } while (cVar27 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))();
              }
            }
            local_e0 = 0;
            uStack_d8 = 0;
            local_f0 = (long *)0x0;
            pcStack_e8 = (code *)0x0;
            local_170 = plVar24;
            FUN_01c61f24(&local_190,local_100[0xf],0xd,&local_170,&local_f0,0);
            pcVar10 = pcStack_e8;
            if (pcStack_e8 != (code *)0x0) {
              local_e0 = 0;
              uStack_d8 = 0;
              local_f0 = (long *)0x0;
              pcStack_e8 = (code *)0x0;
              (*pcVar10)(auStack_d0);
            }
            plVar24 = local_190;
            if (local_190 != (long *)0x0) {
              lVar19 = plVar24[0xb];
              local_190 = plVar24;
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f790ec;
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                *(undefined8 *)(lVar19 + 0x10) = uVar17;
              }
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                cVar27 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar27 = ExclusiveMonitorsStatus();
                }
              } while (cVar27 != '\0');
              uVar17 = *(undefined8 *)(param_1 + 0x98);
              lVar19 = plVar24[0xb];
              local_f0 = plVar24;
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f790ec;
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar18 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                *(undefined8 *)(lVar19 + 0x10) = uVar18;
              }
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                cVar27 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar27 = ExclusiveMonitorsStatus();
                }
              } while (cVar27 != '\0');
              FUN_01cbc9e0(uVar17,&local_f0,0);
              if (local_f0 != (long *)0x0) {
                lVar19 = local_f0[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar27 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar12 + -1;
                    cVar27 = ExclusiveMonitorsStatus();
                  }
                } while (cVar27 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_f0 + 0x20))();
                }
              }
              lVar19 = plVar24[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar27 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + -1;
                  cVar27 = ExclusiveMonitorsStatus();
                }
              } while (cVar27 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))(plVar24);
              }
              if (local_190 != (long *)0x0) {
                lVar19 = local_190[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar27 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar12 + -1;
                    cVar27 = ExclusiveMonitorsStatus();
                  }
                } while (cVar27 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_190 + 0x20))();
                }
              }
            }
            if (local_170 != (long *)0x0) {
              lVar19 = local_170[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar27 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + -1;
                  cVar27 = ExclusiveMonitorsStatus();
                }
              } while (cVar27 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_170 + 0x20))();
              }
            }
            piVar28 = piVar28 + 0x1e;
          } while (piVar28 != local_138);
          piVar28 = local_140;
        }
        if (piVar28 != (int *)0x0) {
          uVar21 = (**(code **)(*plStack_128 + 0xc0))(plStack_128);
          if ((uVar21 & 1) != 0) {
            lVar19 = tpidr_el0;
            if (*(char *)(lVar19 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar19 + 0x38d488) = 1;
              *(undefined8 *)(lVar19 + 0x38d478) = 0;
              *(undefined8 *)(lVar19 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar19 + 0x38d480)) {
              FUN_02bcc824(plStack_128,piVar28,local_130 - (long)piVar28,4);
              goto joined_r0x01f79128;
            }
          }
          (**(code **)(*plStack_128 + 0x18))(plStack_128,piVar28,local_130 - (long)piVar28,4);
        }
      }
joined_r0x01f79128:
      if (local_108 != (long *)0x0) {
        lVar19 = local_108[0xb];
        piVar28 = (int *)(lVar19 + 0xc);
        do {
          iVar12 = *piVar28;
          cVar27 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar28,0x10);
          if (bVar4) {
            *piVar28 = iVar12 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_108 + 0x20))();
        }
      }
    }
  }
  if (local_100 != (long *)0x0) {
    lVar19 = local_100[0xb];
    piVar28 = (int *)(lVar19 + 0xc);
    do {
      iVar12 = *piVar28;
      cVar27 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar28,0x10);
      if (bVar4) {
        *piVar28 = iVar12 + -1;
        cVar27 = ExclusiveMonitorsStatus();
      }
    } while (cVar27 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
joined_r0x01f78b34:
  if (local_f8 != (long *)0x0) {
    lVar19 = local_f8[0xb];
    piVar28 = (int *)(lVar19 + 0xc);
    do {
      iVar12 = *piVar28;
      cVar27 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar28,0x10);
      if (bVar4) {
        *piVar28 = iVar12 + -1;
        cVar27 = ExclusiveMonitorsStatus();
      }
    } while (cVar27 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  return;
LAB_01f78968:
  cVar27 = (char)plVar24[3];
LAB_01f7896c:
  lVar19 = plVar26[0xb];
  piVar28 = (int *)(lVar19 + 0xc);
  do {
    iVar12 = *piVar28;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar28,0x10);
    if (bVar4) {
      *piVar28 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  if (cVar27 != '\0') {
    return;
  }
  goto LAB_01f789c4;
}


