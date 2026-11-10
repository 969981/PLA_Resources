/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b5421c; name: FUN_00b5421c
 */


void FUN_00b5421c(long *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  ulong *puVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x20;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  local_68 = (long *)0x39077b9;
  FUN_009f1b84(&local_98,&local_68);
  uVar10 = FUN_00938764(param_1 + 0x11,1,&local_98,0,param_2,param_1[0xd] + 0x98);
  if ((uVar10 & 1) == 0) {
    plVar19 = (long *)0x0;
  }
  else {
    plVar19 = (long *)param_1[0x16];
    if (plVar19 != (long *)0x0) {
      lVar14 = plVar19[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_00b54938:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  local_68 = param_1;
  FUN_00b56ed8(&local_a0,&local_68,plVar19);
  if (local_a0 != (long *)0x0) {
    lVar14 = local_a0[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar14 = plVar19[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  plVar19 = param_1 + 0x24;
  FUN_00b57eb0(plVar19);
  lVar14 = *(long *)(param_3 + 8);
  if (lVar14 != 0) {
    plVar2 = param_1 + 0x2a;
    uVar10 = 0;
    plVar3 = (long *)(PTR_DAT_0437a508 + 0x10);
    puVar4 = PTR_DAT_0437ace8 + 0x10;
    do {
      if ((ulong)(*(long *)(lVar14 + 0x278) - *(long *)(lVar14 + 0x270) >> 3) <= uVar10) {
        return;
      }
      local_68 = *(long **)(*(long *)(lVar14 + 0x270) + uVar10 * 8);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))();
      }
      puVar5 = (ulong *)PTR_DAT_04379c88;
      if (local_68 != (long *)0x0) {
        puVar5 = (ulong *)(local_68 + 0xb);
      }
      local_78 = (long *)0x0;
      local_70 = 0;
      local_88 = 0;
      local_80 = 0;
      local_90 = 0;
      uVar18 = *puVar5;
      uVar20 = param_1[0x25];
      local_98 = plVar3;
      if (uVar20 == 0) {
LAB_00b5449c:
        plVar21 = (long *)(**(code **)(*(long *)param_1[0x2b] + 0x10))((long *)param_1[0x2b],0x48,8)
        ;
        if (plVar21 == (long *)0x0) {
          (**(code **)(*(long *)param_1[0x2b] + 0xb8))();
        }
        lVar14 = param_1[0x2b];
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar8 = PTR_DAT_04379528;
          if (iVar9 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar14;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        plVar21[2] = *puVar5;
        plVar21[3] = (long)puVar4;
        FUN_00b57f6c(plVar21 + 4,&local_90);
        lVar14 = local_70;
        plVar16 = local_78;
        plVar21[6] = local_80;
        local_80 = 0;
        local_78 = (long *)0x0;
        plVar21[7] = (long)plVar16;
        local_70 = 0;
        plVar21[8] = lVar14;
        plVar21[3] = (long)(PTR_DAT_0437a508 + 0x10);
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        *plVar21 = 0;
        plVar21[1] = uVar18;
        if ((uVar20 == 0) ||
           (*(float *)(param_1 + 0x30) * (float)uVar20 < (float)(param_1[0x2f] + 1))) {
          uVar20 = (ulong)(uVar20 < 3 || (uVar20 & uVar20 - 1) != 0) | uVar20 << 1;
          uVar15 = (ulong)((float)(param_1[0x2f] + 1) / *(float *)(param_1 + 0x30));
          if (uVar15 <= uVar20) {
            uVar15 = uVar20;
          }
          if (uVar15 - 1 == 0) {
            uVar15 = 2;
          }
          else if ((uVar15 & uVar15 - 1) != 0) {
            uVar15 = std::__next_prime(uVar15);
          }
          uVar20 = param_1[0x25];
          if (uVar20 < uVar15) {
            uVar12 = uVar15;
LAB_00b54724:
            FUN_00b58158(plVar19,uVar12);
          }
          else if (uVar15 < uVar20) {
            uVar12 = (ulong)((float)(ulong)param_1[0x2f] / *(float *)(param_1 + 0x30));
            if ((uVar20 < 3) ||
               (uVar17 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
               uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333),
               1 < (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar12 = std::__next_prime(uVar12);
            }
            else if (1 < uVar12) {
              uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
            }
            if (uVar12 <= uVar15) {
              uVar12 = uVar15;
            }
            if (uVar12 < uVar20) goto LAB_00b54724;
          }
          uVar20 = param_1[0x25];
          if ((uVar20 & uVar20 - 1) == 0) {
            unaff_x20 = uVar20 - 1 & uVar18;
          }
          else if (uVar18 < uVar20) {
            unaff_x20 = uVar18;
          }
          else {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar18 / uVar20;
            }
            unaff_x20 = uVar18 - uVar15 * uVar20;
          }
        }
        plVar16 = *(long **)(*plVar19 + unaff_x20 * 8);
        if (plVar16 == (long *)0x0) {
          *plVar21 = *plVar2;
          *plVar2 = (long)plVar21;
          *(long **)(*plVar19 + unaff_x20 * 8) = plVar2;
          if (*plVar21 != 0) {
            uVar18 = *(ulong *)(*plVar21 + 8);
            if ((uVar20 & uVar20 - 1) == 0) {
              uVar18 = uVar18 & uVar20 - 1;
            }
            else if (uVar20 <= uVar18) {
              uVar15 = 0;
              if (uVar20 != 0) {
                uVar15 = uVar18 / uVar20;
              }
              uVar18 = uVar18 - uVar15 * uVar20;
            }
            plVar16 = (long *)(*plVar19 + uVar18 * 8);
            goto LAB_00b545dc;
          }
        }
        else {
          *plVar21 = *plVar16;
LAB_00b545dc:
          *plVar16 = (long)plVar21;
        }
        param_1[0x2f] = param_1[0x2f] + 1;
      }
      else {
        uVar15 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          unaff_x20 = uVar20 - 1 & uVar18;
        }
        else {
          unaff_x20 = uVar18;
          if (uVar20 <= uVar18) {
            uVar12 = 0;
            if (uVar20 != 0) {
              uVar12 = uVar18 / uVar20;
            }
            unaff_x20 = uVar18 - uVar12 * uVar20;
          }
        }
        plVar21 = *(long **)(*plVar19 + unaff_x20 * 8);
        if (plVar21 == (long *)0x0) goto LAB_00b5449c;
        if (uVar15 < 2) {
          do {
            plVar21 = (long *)*plVar21;
            if ((plVar21 == (long *)0x0) ||
               (plVar21[1] != uVar18 && (plVar21[1] & uVar20 - 1) != unaff_x20)) goto LAB_00b5449c;
          } while (plVar21[2] != uVar18);
        }
        else {
          do {
            plVar21 = (long *)*plVar21;
            if (plVar21 == (long *)0x0) goto LAB_00b5449c;
            uVar15 = plVar21[1];
            if (uVar15 != uVar18) {
              if (uVar20 <= uVar15) {
                uVar12 = 0;
                if (uVar20 != 0) {
                  uVar12 = uVar15 / uVar20;
                }
                uVar15 = uVar15 - uVar12 * uVar20;
              }
              if (uVar15 != unaff_x20) goto LAB_00b5449c;
            }
          } while (plVar21[2] != uVar18);
        }
      }
      FUN_00936104(&local_98);
      FUN_00936410(&local_98,&local_68);
      uVar18 = FUN_00938764(plVar21 + 3,1,&local_98,0,param_2,param_1[0xd] + 0x98);
      if (((uVar18 & 1) != 0) && (plVar21 = (long *)plVar21[8], plVar21 != (long *)0x0)) {
        lVar14 = plVar21[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_00b54938;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar13;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar14 = plVar21[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar21 + 0x20))(plVar21);
        }
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      uVar10 = uVar10 + 1;
      lVar14 = *(long *)(param_3 + 8);
    } while (lVar14 != 0);
  }
  return;
}


