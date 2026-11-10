/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01091730; name: FUN_01091730
 */


undefined4 FUN_01091730(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  long *plVar20;
  undefined1 *puVar21;
  undefined1 *local_c0;
  byte *pbStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  byte local_80 [64];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar20 = *(long **)(lVar9 + 0x228);
  if (plVar20 != (long *)0x0) {
    lVar9 = plVar20[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar10 = ((long *)plVar20[0x3b])[1];
  if (uVar10 != 0) {
    uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar10 - 1 & 0x52daf76250fe632a;
    }
    else if (uVar10 < 0x52daf76250fe632b) {
      uVar14 = 0;
      if (uVar10 != 0) {
        uVar14 = 0x52daf76250fe632a / uVar10;
      }
      uVar14 = 0x52daf76250fe632a - uVar14 * uVar10;
    }
    else {
      uVar14 = 0x52daf76250fe632a;
    }
    plVar16 = *(long **)(*(long *)plVar20[0x3b] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x52daf76250fe632a) {
            if (plVar16[2] == 0x52daf76250fe632a) goto LAB_01091848;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar14) goto LAB_01091ba8;
          plVar16 = (long *)*plVar16;
          iVar7 = 0;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x52daf76250fe632a) {
            if (plVar16[2] == 0x52daf76250fe632a) goto LAB_01091848;
          }
          else {
            if (uVar10 <= uVar13) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar6 * uVar10;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
LAB_01091ba8:
        iVar7 = 0;
      }
      goto joined_r0x0109184c;
    }
  }
  iVar7 = 0;
LAB_01091850:
  lVar9 = plVar20[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar2 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar2 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
LAB_0109186c:
  puVar21 = &DAT_cbf29ce484222645;
  snprintf((char *)local_80,0x40,"max_follow_poke_level_%d",iVar7);
  local_a0 = 0x63e2672f9e43a54e;
  pcStack_98 = "battle_logic";
  local_c0 = &DAT_cbf29ce484222645;
  local_90 = 0xc;
  local_88 = (long *)0x0;
  if (local_80[0] != 0) {
    local_c0 = &DAT_cbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_80 | 1);
    bVar3 = local_80[0];
    do {
      local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar3 != 0);
  }
  local_b0 = 0x3f;
  local_a8 = (long *)0x0;
  pbStack_b8 = local_80;
  uVar10 = FUN_00ea4c30(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if ((uVar10 & 1) == 0) {
    uVar19 = 100;
  }
  else {
    if (local_80[0] != 0) {
      pbVar11 = (byte *)((ulong)local_80 | 1);
      do {
        puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)local_80[0]) * 0x100000001b3);
        local_80[0] = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (local_80[0] != 0);
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar9 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar9;
    uVar10 = *(ulong *)(lVar9 + 0x60);
    if (uVar10 != 0) {
      uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar10 - 1 & 0x63e2672f9e43a54e;
      }
      else if (uVar10 < 0x63e2672f9e43a54f) {
        uVar14 = 0;
        if (uVar10 != 0) {
          uVar14 = 0x63e2672f9e43a54e / uVar10;
        }
        uVar14 = 0x63e2672f9e43a54e - uVar14 * uVar10;
      }
      else {
        uVar14 = 0x63e2672f9e43a54e;
      }
      plVar20 = *(long **)(*(long *)(lVar9 + 0x58) + uVar14 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar20[1] == 0x63e2672f9e43a54e) {
              if (plVar20[2] == 0x63e2672f9e43a54e) goto LAB_01091a04;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar14) goto LAB_01091af4;
            plVar20 = (long *)*plVar20;
            if (plVar20 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar13 = plVar20[1];
          if (uVar13 == 0x63e2672f9e43a54e) {
            if (plVar20[2] == 0x63e2672f9e43a54e) goto LAB_01091a04;
          }
          else {
            if (uVar10 <= uVar13) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar6 * uVar10;
            }
            if (uVar13 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
LAB_01091af4:
    uVar19 = 0;
  }
  return uVar19;
LAB_01091848:
  iVar7 = (int)plVar16[3];
joined_r0x0109184c:
  if (plVar20 != (long *)0x0) goto LAB_01091850;
  goto LAB_0109186c;
LAB_01091a04:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar16 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar15 = (undefined1 *)plVar20[0x14];
    if (puVar15 == (undefined1 *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar10 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar12 = (undefined1 *)((ulong)(puVar15 + -1) & (ulong)puVar21);
      }
      else {
        puVar12 = puVar21;
        if (puVar15 <= puVar21) {
          uVar13 = 0;
          if (puVar15 != (undefined1 *)0x0) {
            uVar13 = (ulong)puVar21 / (ulong)puVar15;
          }
          puVar12 = puVar21 + -(uVar13 * (long)puVar15);
        }
      }
      plVar17 = *(long **)(plVar20[0x13] + (long)puVar12 * 8);
      if (plVar17 == (long *)0x0) {
        uVar19 = 0;
      }
      else {
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          uVar19 = 0;
        }
        else if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == puVar21) {
              if ((undefined1 *)plVar17[2] == puVar21) goto LAB_01091b44;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar15 + -1)) != puVar12) {
              uVar19 = 0;
              break;
            }
            plVar17 = (long *)*plVar17;
            uVar19 = 0;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar18 = (undefined1 *)plVar17[1];
            if (puVar18 == puVar21) {
              if ((undefined1 *)plVar17[2] == puVar21) goto LAB_01091b44;
            }
            else {
              if (puVar15 <= puVar18) {
                uVar10 = 0;
                if (puVar15 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar18 / (ulong)puVar15;
                }
                puVar18 = puVar18 + -(uVar10 * (long)puVar15);
              }
              if (puVar18 != puVar12) {
                uVar19 = 0;
                goto LAB_01091b48;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
          uVar19 = 0;
        }
      }
    }
    goto LAB_01091b48;
  }
  goto LAB_01091af4;
LAB_01091b44:
  uVar19 = (undefined4)plVar17[6];
LAB_01091b48:
  do {
    iVar7 = (int)*plVar16 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *(int *)plVar16 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar20 + 0x10))();
    return uVar19;
  }
  return uVar19;
}


