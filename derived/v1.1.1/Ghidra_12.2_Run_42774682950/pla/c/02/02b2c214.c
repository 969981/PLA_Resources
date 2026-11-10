/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2c214; name: FUN_02b2c214
 */


void FUN_02b2c214(long param_1,long *param_2,ulong *param_3,uint param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x27;
  undefined8 uVar18;
  float fVar19;
  long local_130;
  char *pcStack_128;
  long local_120;
  long *local_118;
  long local_110;
  long local_108;
  long local_100;
  long *local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  char *pcStack_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  plVar7 = (long *)FUN_02b2e208(auStack_70,*(undefined8 *)(param_1 + 8),param_2);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar10 = *(long *)(*param_5 + 0xb0) + (ulong)param_4 * 0xd0;
  plVar14 = *(long **)(lVar10 + 0x88);
  plVar1 = *(long **)(lVar10 + 0x80);
  lVar10 = local_f0;
  for (; local_f0 = lVar10, plVar1 != plVar14; plVar1 = plVar1 + 9) {
    lVar11 = *param_2;
    plVar8 = *(long **)(lVar11 + 0x80);
    plVar2 = *(long **)(lVar11 + 0x88);
    if ((plVar8 != plVar2) && (*plVar8 != *plVar1)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar2 == plVar8) goto LAB_02b2c398;
      } while (*plVar8 != *plVar1);
    }
    if (plVar2 == plVar8) {
LAB_02b2c398:
      plVar8 = *(long **)(lVar11 + 0xb8);
      plVar2 = *(long **)(lVar11 + 0xc0);
      if ((plVar8 != plVar2) && (*plVar8 != *plVar1)) {
        do {
          plVar8 = plVar8 + 0xc;
          if (plVar2 == plVar8) goto LAB_02b2c2a0;
        } while (*plVar8 != *plVar1);
      }
      if (plVar2 != plVar8) {
        pcVar12 = (char *)plVar1[5];
        local_f0 = *plVar1;
        if (*pcVar12 == '\0') {
          lStack_e8 = plVar1[1];
          local_e0 = plVar1[2];
          local_d8 = (long *)plVar1[3];
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x18))();
          }
          FUN_02b62580(plVar7,&local_f0,(int)plVar1[8]);
          plVar8 = local_d8;
        }
        else {
          local_108 = plVar1[1];
          local_100 = plVar1[2];
          local_f8 = (long *)plVar1[3];
          local_110 = local_f0;
          if (local_f8 != (long *)0x0) {
            local_f0 = lVar10;
            (**(code **)(*local_f8 + 0x18))();
            pcVar12 = (char *)plVar1[5];
            lVar10 = local_f0;
          }
          local_f0 = lVar10;
          local_130 = plVar1[4];
          local_120 = plVar1[6];
          local_118 = (long *)plVar1[7];
          pcStack_128 = pcVar12;
          if (local_118 != (long *)0x0) {
            (**(code **)(*local_118 + 0x18))();
          }
          FUN_02b62868(plVar7,&local_110,&local_130);
          plVar8 = local_f8;
          if (local_118 != (long *)0x0) {
            (**(code **)(*local_118 + 0x20))();
            plVar8 = local_f8;
          }
        }
        goto joined_r0x02b2c43c;
      }
    }
    else {
      pcVar12 = (char *)plVar1[5];
      lVar10 = *plVar1;
      if (*pcVar12 == '\0') {
        lStack_88 = plVar1[1];
        local_80 = plVar1[2];
        local_78 = (long *)plVar1[3];
        local_90 = lVar10;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x18))();
        }
        FUN_02b62b9c(plVar7,&local_90,(int)plVar1[8]);
        plVar8 = local_78;
      }
      else {
        local_a8 = plVar1[1];
        local_a0 = plVar1[2];
        local_98 = (long *)plVar1[3];
        local_b0 = lVar10;
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x18))();
          pcVar12 = (char *)plVar1[5];
        }
        local_d0 = plVar1[4];
        local_c0 = plVar1[6];
        local_b8 = (long *)plVar1[7];
        pcStack_c8 = pcVar12;
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x18))();
        }
        FUN_02b62e7c(plVar7,&local_b0,&local_d0);
        plVar8 = local_98;
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
          plVar8 = local_98;
        }
      }
joined_r0x02b2c43c:
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
    }
LAB_02b2c2a0:
    lVar10 = local_f0;
  }
  FUN_02b62284(plVar7);
  uVar16 = *param_3;
  plVar1 = (long *)(param_1 + 0x68);
  uVar17 = *(ulong *)(param_1 + 0x70);
  if (uVar17 != 0) {
    uVar13 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      unaff_x27 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x27 = uVar16;
      if (uVar17 <= uVar16) {
        uVar9 = 0;
        if (uVar17 != 0) {
          uVar9 = uVar16 / uVar17;
        }
        unaff_x27 = uVar16 - uVar9 * uVar17;
      }
    }
    plVar14 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar14 != (long *)0x0) {
      if (uVar13 < 2) {
        do {
          plVar14 = (long *)*plVar14;
          if ((plVar14 == (long *)0x0) ||
             (plVar14[1] != uVar16 && (plVar14[1] & uVar17 - 1) != unaff_x27)) goto LAB_02b2c5e0;
        } while (plVar14[2] != uVar16);
      }
      else {
        do {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_02b2c5e0;
          uVar13 = plVar14[1];
          if (uVar13 != uVar16) {
            if (uVar17 <= uVar13) {
              uVar9 = 0;
              if (uVar17 != 0) {
                uVar9 = uVar13 / uVar17;
              }
              uVar13 = uVar13 - uVar9 * uVar17;
            }
            if (uVar13 != unaff_x27) goto LAB_02b2c5e0;
          }
        } while (plVar14[2] != uVar16);
      }
      goto LAB_02b2c878;
    }
  }
LAB_02b2c5e0:
  plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                              (*(long **)(param_1 + 0xa0),0x38,8);
  if (plVar14 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
  }
  uVar18 = *(undefined8 *)(param_1 + 0xa0);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar6 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 != 0) {
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar18;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  }
  plVar14[2] = *param_3;
  plVar14[3] = param_3[1];
  plVar14[4] = param_3[2];
  plVar8 = (long *)param_3[3];
  plVar14[5] = (long)plVar8;
  if (plVar8 == (long *)0x0) {
    plVar14[6] = (long)plVar7;
  }
  else {
    (**(code **)(*plVar8 + 0x18))();
    plVar14[6] = (long)plVar7;
  }
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  *plVar14 = 0;
  plVar14[1] = uVar16;
  fVar19 = (float)(*(long *)(param_1 + 0xc0) + 1);
  if ((uVar17 == 0) || (*(float *)(param_1 + 200) * (float)uVar17 < fVar19)) {
    uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
    uVar13 = (ulong)(fVar19 / *(float *)(param_1 + 200));
    if (uVar13 <= uVar17) {
      uVar13 = uVar17;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
      uVar13 = std::__next_prime(uVar13);
    }
    uVar17 = *(ulong *)(param_1 + 0x70);
    if (uVar17 < uVar13) {
      uVar9 = uVar13;
LAB_02b2c734:
      FUN_02b2e318(plVar1,uVar9);
    }
    else if (uVar13 < uVar17) {
      uVar9 = (ulong)((float)*(ulong *)(param_1 + 0xc0) / *(float *)(param_1 + 200));
      if ((uVar17 < 3) ||
         (uVar15 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
         uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
         1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar9 = std::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar9 - 1) & 0x3f);
      }
      if (uVar9 <= uVar13) {
        uVar9 = uVar13;
      }
      if (uVar9 < uVar17) goto LAB_02b2c734;
    }
    uVar17 = *(ulong *)(param_1 + 0x70);
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x27 = uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      unaff_x27 = uVar16;
    }
    else {
      uVar13 = 0;
      if (uVar17 != 0) {
        uVar13 = uVar16 / uVar17;
      }
      unaff_x27 = uVar16 - uVar13 * uVar17;
    }
  }
  plVar8 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(param_1 + 0x98);
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(*(long *)(param_1 + 0x68) + unaff_x27 * 8) = plVar8;
    if (*plVar14 != 0) {
      uVar16 = *(ulong *)(*plVar14 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar16 = uVar16 & uVar17 - 1;
      }
      else if (uVar17 <= uVar16) {
        uVar13 = 0;
        if (uVar17 != 0) {
          uVar13 = uVar16 / uVar17;
        }
        uVar16 = uVar16 - uVar13 * uVar17;
      }
      plVar8 = (long *)(*plVar1 + uVar16 * 8);
      goto LAB_02b2c868;
    }
  }
  else {
    *plVar14 = *plVar8;
LAB_02b2c868:
    *plVar8 = (long)plVar14;
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
LAB_02b2c878:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


