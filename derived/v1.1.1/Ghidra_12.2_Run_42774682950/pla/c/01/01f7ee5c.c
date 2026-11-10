/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f7ee5c; name: FUN_01f7ee5c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f7ee5c(long param_1,undefined8 param_2,int *param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *local_190;
  undefined8 uStack_188;
  long *local_130;
  long *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [104];
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  local_70[0] = param_2;
  FUN_017e9e98(&local_78);
  if (local_78 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    plVar15 = (long *)0x0;
    local_80 = (long *)0x0;
    goto joined_r0x01f7f158;
  }
  FUN_009acf14(&local_80);
  if (local_80 == (long *)0x0) {
    plVar15 = (long *)0x0;
    goto joined_r0x01f7f158;
  }
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
     (uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar14 == 0)) {
    uVar11 = 0;
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f7f078;
LAB_01f7f0cc:
    FUN_009acf14(&local_88);
    if (local_88 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      local_190 = (long *)0x0;
      uStack_188 = 0;
      FUN_00b645bc(&local_190,local_88 + 0xd);
      plVar15 = local_190;
      puVar7 = PTR_DAT_0437a0f0;
      puVar6 = PTR_DAT_0437a0e8;
      if (local_190 == (long *)0x0) {
        plVar15 = (long *)0x0;
      }
      else {
        if (*(int *)((long)local_190 + 0xc) != 0) {
          piVar1 = (int *)((long)local_190 + 0xc);
          iVar10 = *(int *)((long)local_190 + 0xc);
          do {
            plVar16 = (long *)plVar15[2];
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar7 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_01f7f23c;
              if (plVar16 == (long *)puVar7) break;
              plVar16 = (long *)*plVar16;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar13 = plVar15[3];
                plVar16 = (long *)0x0;
                plVar15 = local_190;
                if (lVar13 != 0) {
                  plVar16 = (long *)(lVar13 + -0x50);
                }
                goto joined_r0x01f7f260;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01f7f23c:
        plVar16 = (long *)0x0;
        plVar15 = local_190;
joined_r0x01f7f260:
        local_190 = plVar15;
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
          do {
            iVar10 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 == 0) {
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_130 = (long *)*plVar15;
            FUN_02a44274(lVar13 + 0xd8,&local_130);
          }
        }
        if (plVar16 == (long *)0x0) {
          plVar15 = (long *)0x0;
        }
        else {
          uVar14 = FUN_01845504(plVar16,uVar11);
          if ((uVar14 & 1) == 0) {
            local_190 = (long *)0x0;
            if (*param_4 == 0) {
              FUN_01f7f6fc(&local_130,local_70[0],param_3,local_70);
              plVar15 = local_190;
              local_190 = (long *)0x0;
              if (plVar15 != (long *)0x0) {
                lVar13 = plVar15[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar15 + 0x20))();
                }
              }
              local_190 = local_130;
              if ((char)local_130[0x16] != '\0') goto LAB_01f7f3d0;
LAB_01f7f370:
              plVar15 = (long *)0x0;
            }
            else {
              FUN_01c8e8a8(&local_190);
              if ((char)local_190[0x16] == '\0') goto LAB_01f7f370;
LAB_01f7f3d0:
              local_110 = 0;
              local_108 = (code *)0x0;
              local_100 = 0;
              uStack_f8 = 0;
              FUN_01f7f774(&local_130,local_88,&local_190,&local_110);
              pcVar8 = local_108;
              plVar15 = local_130;
              local_130 = (long *)0x0;
              bVar5 = local_108 != (code *)0x0;
              local_108 = (code *)0x0;
              if (bVar5) {
                local_100 = 0;
                uStack_f8 = 0;
                local_110 = 0;
                local_108 = (code *)0x0;
                (*pcVar8)(auStack_f0);
              }
            }
            if (local_190 != (long *)0x0) {
              lVar13 = local_190[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_190 + 0x20))();
              }
            }
          }
          else {
            if (*(ushort *)((long)param_3 - (long)*param_3) < 9) {
              local_190 = (long *)0x0;
            }
            else {
              uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4];
              local_190 = (long *)0x0;
              if (uVar14 != 0) {
                puVar3 = (uint *)((long)param_3 + uVar14);
                local_190 = (long *)((long)puVar3 + (ulong)*puVar3);
              }
            }
            FUN_019c95e0(&local_130,*(undefined8 *)(param_1 + 8),&local_190);
            (**(code **)(*local_130 + 0x18))(&local_190);
            if ((char)local_190 == '\0') {
              FUN_01847304(plVar16,uVar11);
              if ((char)local_190 != '\0') goto LAB_01f7f48c;
            }
            else {
LAB_01f7f48c:
              local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
            }
            plVar15 = local_130;
            local_130 = (long *)0x0;
            if (plVar15 != (long *)0x0) {
              FUN_02bcbe58(&local_190,0);
              (**(code **)(*plVar15 + 8))(plVar15);
              uVar14 = (**(code **)(*local_128 + 0xc0))(local_128);
              lVar13 = tpidr_el0;
              if ((uVar14 & 1) == 0) {
LAB_01f7f580:
                (**(code **)(*local_128 + 0x18))(local_128,plVar15,uStack_120,local_118);
              }
              else {
                if (*(char *)(lVar13 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar13 + 0x38d488) = 1;
                  *(undefined8 *)(lVar13 + 0x38d478) = 0;
                  *(undefined8 *)(lVar13 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_01f7f580;
                FUN_02bcc824(local_128,plVar15,uStack_120,local_118);
              }
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              iVar10 = *(int *)(lVar13 + 0x38d480) + -1;
              *(int *)(lVar13 + 0x38d480) = iVar10;
              if (iVar10 == 0) {
                FUN_02bcc320();
                if (*(char *)(lVar13 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar13 + 0x38d488) = 1;
                  *(undefined8 *)(lVar13 + 0x38d478) = 0;
                  *(undefined8 *)(lVar13 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                }
                *(undefined4 *)(lVar13 + 0x38d484) = 0;
              }
            }
            plVar15 = (long *)0x0;
          }
          lVar13 = plVar16[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
        }
      }
      if (local_88 != (long *)0x0) {
        lVar13 = local_88[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
  }
  else {
    uVar11 = *(undefined8 *)((long)param_3 + uVar14);
    if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f7f0cc;
LAB_01f7f078:
    plVar15 = (long *)0x0;
    local_88 = (long *)0x0;
  }
  if (local_80 != (long *)0x0) {
    lVar13 = local_80[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
joined_r0x01f7f158:
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar13 = plVar15[0xb];
  if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar11 = *(undefined8 *)(param_1 + 0x98);
    lVar13 = plVar15[0xb];
    local_190 = plVar15;
    if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_01cbc9e0(uVar11,&local_190,0);
      if (local_190 != (long *)0x0) {
        lVar13 = local_190[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_190 + 0x20))();
        }
      }
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


