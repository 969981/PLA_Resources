/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00998ff4; name: FUN_00998ff4
 */


undefined8 FUN_00998ff4(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long ***ppplVar7;
  int iVar8;
  undefined8 uVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *local_b0;
  long ***local_a8;
  long local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long *local_78;
  long *local_70;
  long **local_68;
  
  if (*(int *)(param_1 + 0x72c) == 0) {
    lVar3 = *(long *)(param_1 + 0x140);
    for (lVar16 = *(long *)(param_1 + 0x138); lVar16 != lVar3; lVar16 = lVar16 + 0x60) {
      *(undefined1 *)(lVar16 + 0x55) = 0;
    }
    if (((*(byte *)(param_1 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_1 + 0x768) & 0x1f) != 0)) {
      FUN_009a8c68(param_1);
    }
    FUN_00999828(param_1);
    plVar17 = *(long **)(param_1 + 0x98);
    if (plVar17 != (long *)0x0) {
LAB_00999088:
      do {
        plVar15 = (long *)plVar17[3];
        if (plVar15 != (long *)0x0) {
          lVar16 = plVar15[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0099979c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar9;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar16 = plVar15[0xb];
          local_78 = plVar15;
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0099979c;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar9;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_00aada94(&local_b0,&local_78);
          FUN_009983e4(&local_70,&local_b0);
          plVar11 = local_b0;
          if (local_b0 != (long *)0x0) {
            plVar2 = local_b0 + 1;
            do {
              iVar8 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 == 0) {
              local_b0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_68 = (long **)*plVar11;
              FUN_02a44274(lVar16 + 0xd8,&local_68);
            }
          }
          if (local_78 != (long *)0x0) {
            lVar16 = local_78[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
          if (local_70 != (long *)0x0) {
            plVar11 = (long *)local_70[0x4a];
            if (plVar11 == (long *)local_70[0x4b]) {
              plVar11 = *(long **)(*plVar11 + 0x68);
            }
            else {
              do {
                lVar16 = *plVar11;
                plVar11 = plVar11 + 1;
              } while (*(undefined1 **)(lVar16 + 0x158) != &DAT_afc4d6c05abef19e);
              plVar11 = *(long **)(lVar16 + 0x68);
            }
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
            local_b0 = (long *)&DAT_4955b49339758aca;
            local_a8 = (long ***)0x39b3881;
            local_a0 = 0x12;
            local_98 = (long *)0x0;
            pplVar10 = (long **)(**(code **)(*plVar11 + 0x98))(plVar11,&local_b0);
            local_68 = pplVar10;
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))(local_98);
              pplVar10 = (long **)((ulong)local_68 & 0xff);
            }
            if (((ulong)pplVar10 & 0xff) != 0) {
              (**(code **)(*plVar11 + 0xa8))(plVar11,&local_68,0);
            }
            (**(code **)(*plVar11 + 0x18))(plVar11);
            if (local_70 != (long *)0x0) {
              lVar16 = local_70[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_70 + 0x20))();
              }
            }
          }
          local_b0 = plVar15 + 0x1e;
          local_a8 = &local_68;
          local_68 = &local_70;
          FUN_009b1a94(local_b0,&local_b0);
          lVar16 = plVar15[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) break;
            goto LAB_00999088;
          }
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    FUN_009999fc(param_1 + 0x3b0);
    FUN_00999a54(param_1 + 0x428);
    FUN_00999aac(param_1 + 0x338);
    if (*(long *)(param_1 + 0x578) != 0) {
      FUN_00983c60();
      plVar17 = *(long **)(param_1 + 0x578);
      *(undefined8 *)(param_1 + 0x578) = 0;
      if (plVar17 != (long *)0x0) {
        lVar16 = plVar17[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))();
        }
      }
    }
    FUN_02c8f804(*(undefined8 *)(param_1 + 0x580));
    plVar17 = *(long **)(param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    if (plVar17 != (long *)0x0) {
      lVar16 = plVar17[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))();
      }
    }
    FUN_00999b04(param_1);
    for (plVar17 = *(long **)(param_1 + 0x98); plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
      FUN_009b3af4(plVar17 + 2);
    }
    FUN_00999bf4(param_1);
    if ((*(char *)(param_1 + 0x558) != '\0') &&
       (FUN_00956dac(&local_b0,param_1 + 0x548), local_b0 != (long *)0x0)) {
      lVar16 = FUN_009aff90(local_b0 + 0x1e,&local_68);
      if (lVar16 != 0) {
        FUN_01836814(lVar16,0);
      }
      if (local_b0 != (long *)0x0) {
        lVar16 = local_b0[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_b0 + 0x20))();
        }
      }
    }
    *(undefined4 *)(param_1 + 0x72c) = 1;
  }
  else if (*(int *)(param_1 + 0x72c) != 1) {
    return 0;
  }
  FUN_009925a4(param_1);
  if (*(long *)(param_1 + 0x140) != *(long *)(param_1 + 0x138)) {
    return 0;
  }
  local_98 = *(long **)(param_1 + 8);
  local_a0 = 0;
  local_b0 = (long *)0x0;
  local_a8 = (long ***)0x0;
  local_90 = 0xffffffffffffffff;
  uStack_88 = 0;
  local_80 = 0;
  plVar17 = *(long **)(param_1 + 0x98);
  if (plVar17 != (long *)0x0) {
    do {
      FUN_0099a334(&local_b0,plVar17 + 2);
      ppplVar7 = local_a8;
      plVar15 = local_b0;
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
    if ((long ***)local_b0 != local_a8) {
      FUN_009979c4(param_1,(char)*local_b0,1);
      while (plVar15 = (long *)((long)plVar15 + 1), (long ***)plVar15 != ppplVar7) {
        FUN_009979c4(param_1,*(undefined1 *)plVar15,1);
      }
    }
  }
  uVar12 = *(ulong *)(param_1 + 0xd8);
  if (uVar12 == 0) goto LAB_00999558;
  uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  plVar17 = *(long **)(param_1 + 0xd0);
  if (((long *)*plVar17 != (long *)0x0) && (plVar15 = *(long **)*plVar17, plVar15 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar15[1] == 0) {
          if ((int)plVar15[2] == 0) goto LAB_009994b8;
        }
        else if ((plVar15[1] & uVar12 - 1) != 0) break;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    else {
      do {
        uVar14 = plVar15[1];
        if (uVar14 == 0) {
          if ((int)plVar15[2] == 0) goto LAB_009994b8;
        }
        else {
          if (uVar14 < uVar12) goto LAB_00999504;
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar6 = uVar14 / uVar12;
          }
          if (uVar14 != uVar6 * uVar12) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    goto LAB_009994cc;
  }
LAB_00999504:
  uVar14 = (ulong)(uVar12 != 0 && uVar12 - 1 != 0);
  if (uVar13 < 2) {
    uVar14 = (ulong)~(uint)uVar12 & 1;
  }
  if (((long *)plVar17[uVar14] != (long *)0x0) &&
     (plVar17 = *(long **)plVar17[uVar14], plVar17 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar17[1] == 1) {
          if ((int)plVar17[2] == 1) goto LAB_0099954c;
        }
        else if ((plVar17[1] & uVar12 - 1) != uVar14) break;
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    else {
      do {
        uVar13 = plVar17[1];
        if (uVar13 == 1) {
          if ((int)plVar17[2] == 1) goto LAB_0099954c;
        }
        else {
          if (uVar12 <= uVar13) {
            uVar6 = 0;
            if (uVar12 != 0) {
              uVar6 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar6 * uVar12;
          }
          if (uVar13 != uVar14) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
LAB_00999558:
  plVar15 = local_98;
  plVar17 = local_b0;
  if (local_b0 != (long *)0x0) {
    local_a8 = (long ***)local_b0;
    lVar16 = local_a0 - (long)local_b0;
    uVar12 = (**(code **)(*local_98 + 0xc0))(local_98);
    if ((uVar12 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar15,plVar17,lVar16,1);
        return 1;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,plVar17,lVar16,1);
  }
  return 1;
LAB_009994b8:
  local_68 = (long **)((ulong)local_68 & 0xffffffff00000000);
  FUN_009b038c(param_1 + 0xd0,&local_68);
  uVar12 = *(ulong *)(param_1 + 0xd8);
LAB_009994cc:
  if (uVar12 == 0) goto LAB_00999558;
  uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  plVar17 = *(long **)(param_1 + 0xd0);
  uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  goto LAB_00999504;
LAB_0099954c:
  FUN_00994018(param_1,1);
  goto LAB_00999558;
}


