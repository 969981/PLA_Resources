/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a98ea8; name: FUN_02a98ea8
 */


void FUN_02a98ea8(long param_1,undefined8 param_2,long *param_3,byte param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  float fVar21;
  long local_120;
  undefined1 local_118;
  byte local_117;
  undefined1 local_116;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [96];
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined1 auStack_70 [16];
  
  FUN_02a99850(param_1,param_3);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (long *)0x0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  local_108 = (code *)0x0;
  local_118 = *(undefined1 *)(param_1 + 0x330);
  local_116 = *(undefined1 *)(param_1 + 0x331);
  local_120 = param_1;
  local_117 = param_4 & 1;
  if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c0))(param_1 + 0x2d0,auStack_f0);
    local_110 = *(undefined8 *)(param_1 + 0x2b0);
    local_108 = *(code **)(param_1 + 0x2b8);
    local_100 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_f8 = *(undefined8 *)(param_1 + 0x2c8);
  }
  param_7 = (long *)*param_7;
  if (param_7 != (long *)0x0) {
    plVar16 = param_7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = param_5;
  uStack_88 = param_6;
  if (local_80 != (long *)0x0) {
    plVar16 = local_80 + 10;
    do {
      iVar5 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      lVar6 = *local_80;
      local_80 = param_7;
      (**(code **)(lVar6 + 0x10))();
      param_7 = local_80;
    }
  }
  local_80 = param_7;
  plVar16 = *(long **)(param_1 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar13 = PTR_DAT_04379528;
    if (iVar5 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar13 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02a99680;
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar16;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar16 + 0x10))(plVar16,400,0x10);
  if (lVar7 == 0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  FUN_02aa7770(lVar7,&local_120);
  *(long **)(lVar7 + 8) = plVar16;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 400;
  *(undefined8 *)(lVar7 + 0x20) = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(param_1 + 0x280);
  if (lVar6 == 0) {
    plVar16 = (long *)FUN_02a9e788(auStack_70,*(undefined8 *)(param_1 + 8),&DAT_043ef568);
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar17 = *(long **)(lVar7 + 0x90);
    *(long **)(lVar7 + 0x90) = plVar16;
    if (plVar17 != (long *)0x0) {
      plVar8 = plVar17 + 10;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 10;
      do {
        iVar5 = (int)*plVar17 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        lVar6 = *plVar16;
        goto LAB_02a995e4;
      }
    }
  }
  else {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar16 = *(long **)(lVar7 + 0x90);
    *(long *)(lVar7 + 0x90) = lVar6;
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 10;
      do {
        iVar5 = (int)*plVar17 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        lVar6 = *plVar16;
LAB_02a995e4:
        (**(code **)(lVar6 + 0x10))(plVar16);
      }
    }
  }
  FUN_02aa7d90(lVar7,param_2);
  lVar6 = nn::os::GetCurrentThread();
  plVar16 = (long *)(param_1 + 0x210);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar16 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a99148;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02a99148:
  puVar20 = (undefined *)*param_3;
  plVar16 = (long *)(param_1 + 0x218);
  puVar18 = *(undefined **)(param_1 + 0x220);
  puVar19 = puVar13;
  if (puVar18 != (undefined *)0x0) {
    uVar10 = (long)puVar18 - ((ulong)puVar18 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar19 = (undefined *)((ulong)(puVar18 + -1) & (ulong)puVar20);
    }
    else {
      puVar19 = puVar20;
      if (puVar18 <= puVar20) {
        uVar14 = 0;
        if (puVar18 != (undefined *)0x0) {
          uVar14 = (ulong)puVar20 / (ulong)puVar18;
        }
        puVar19 = puVar20 + -(uVar14 * (long)puVar18);
      }
    }
    plVar17 = *(long **)(*plVar16 + (long)puVar19 * 8);
    if (plVar17 != (long *)0x0) {
      if (uVar10 < 2) {
        do {
          plVar17 = (long *)*plVar17;
          if ((plVar17 == (long *)0x0) ||
             ((undefined *)plVar17[1] != puVar20 &&
              (undefined *)((ulong)plVar17[1] & (ulong)(puVar18 + -1)) != puVar19))
          goto LAB_02a99244;
        } while ((undefined *)plVar17[2] != puVar20);
      }
      else {
        do {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_02a99244;
          puVar11 = (undefined *)plVar17[1];
          if (puVar11 != puVar20) {
            if (puVar18 <= puVar11) {
              uVar10 = 0;
              if (puVar18 != (undefined *)0x0) {
                uVar10 = (ulong)puVar11 / (ulong)puVar18;
              }
              puVar11 = puVar11 + -(uVar10 * (long)puVar18);
            }
            if (puVar11 != puVar19) goto LAB_02a99244;
          }
        } while ((undefined *)plVar17[2] != puVar20);
      }
      goto LAB_02a994e0;
    }
  }
LAB_02a99244:
  plVar17 = (long *)(**(code **)(**(long **)(param_1 + 0x250) + 0x10))
                              (*(long **)(param_1 + 0x250),0x38,8);
  if (plVar17 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x250) + 0xb8))();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x250);
  if (((*PTR_DAT_04379520 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0))
  {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar13);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_02a99680:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar17[2] = *param_3;
  plVar17[3] = param_3[1];
  plVar17[4] = param_3[2];
  plVar8 = (long *)param_3[3];
  plVar17[5] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  plVar17[6] = 0;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar17 = 0;
  plVar17[1] = (long)puVar20;
  fVar21 = (float)(*(long *)(param_1 + 0x270) + 1);
  if ((puVar18 == (undefined *)0x0) || (*(float *)(param_1 + 0x278) * (float)puVar18 < fVar21)) {
    uVar10 = (ulong)(puVar18 < (undefined *)0x3 || ((ulong)puVar18 & (ulong)(puVar18 + -1)) != 0) |
             (long)puVar18 << 1;
    uVar14 = (ulong)(fVar21 / *(float *)(param_1 + 0x278));
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      uVar14 = std::__next_prime(uVar14);
    }
    uVar10 = *(ulong *)(param_1 + 0x220);
    if (uVar10 < uVar14) {
      uVar9 = uVar14;
LAB_02a99384:
      FUN_02a9e898(plVar16,uVar9);
    }
    else if (uVar14 < uVar10) {
      uVar9 = (ulong)((float)*(ulong *)(param_1 + 0x270) / *(float *)(param_1 + 0x278));
      if ((uVar10 < 3) ||
         (uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333),
         1 < (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar9 = std::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar9 - 1) & 0x3f);
      }
      if (uVar9 <= uVar14) {
        uVar9 = uVar14;
      }
      if (uVar9 < uVar10) goto LAB_02a99384;
    }
    puVar18 = *(undefined **)(param_1 + 0x220);
    if (((ulong)puVar18 & (ulong)(puVar18 + -1)) == 0) {
      puVar19 = (undefined *)((ulong)(puVar18 + -1) & (ulong)puVar20);
    }
    else if (puVar20 < puVar18) {
      puVar19 = puVar20;
    }
    else {
      uVar10 = 0;
      if (puVar18 != (undefined *)0x0) {
        uVar10 = (ulong)puVar20 / (ulong)puVar18;
      }
      puVar19 = puVar20 + -(uVar10 * (long)puVar18);
    }
  }
  plVar8 = *(long **)(*plVar16 + (long)puVar19 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar17 = *(long *)(param_1 + 0x248);
    *(long **)(param_1 + 0x248) = plVar17;
    *(long *)(*(long *)(param_1 + 0x218) + (long)puVar19 * 8) = param_1 + 0x248;
    if (*plVar17 != 0) {
      puVar13 = *(undefined **)(*plVar17 + 8);
      if (((ulong)puVar18 & (ulong)(puVar18 + -1)) == 0) {
        puVar13 = (undefined *)((ulong)puVar13 & (ulong)(puVar18 + -1));
      }
      else if (puVar18 <= puVar13) {
        uVar10 = 0;
        if (puVar18 != (undefined *)0x0) {
          uVar10 = (ulong)puVar13 / (ulong)puVar18;
        }
        puVar13 = puVar13 + -(uVar10 * (long)puVar18);
      }
      plVar8 = (long *)(*plVar16 + (long)puVar13 * 8);
      goto LAB_02a994d0;
    }
  }
  else {
    *plVar17 = *plVar8;
LAB_02a994d0:
    *plVar8 = (long)plVar17;
  }
  *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) + 1;
LAB_02a994e0:
  plVar16 = (long *)plVar17[6];
  plVar17[6] = 0;
  if (plVar16 != (long *)0x0) {
    plVar8 = plVar16 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  plVar17[6] = lVar7;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  pcVar4 = local_108;
  if (local_80 != (long *)0x0) {
    plVar16 = local_80 + 10;
    do {
      iVar5 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_80 + 0x10))();
      pcVar4 = local_108;
    }
  }
  if (pcVar4 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    (*pcVar4)(auStack_f0);
  }
  return;
}


