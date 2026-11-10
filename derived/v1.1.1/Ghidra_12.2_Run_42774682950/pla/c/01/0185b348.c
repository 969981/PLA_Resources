/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185b348; name: FUN_0185b348
 */


/* WARNING: Removing unreachable block (ram,0x0185b9c4) */

void FUN_0185b348(undefined1 *param_1,ulong param_2,uint param_3,char param_4,long *param_5,
                 long *param_6,long *param_7,undefined8 param_8,undefined8 param_9,long *param_10,
                 undefined8 param_11)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  long *plVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  long lVar19;
  long *local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  code *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 auStack_d0 [96];
  long local_70 [2];
  
  pbVar17 = PTR_DAT_0437a0d0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar13 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar9 = PTR_DAT_0437a0d8;
  local_110 = *(long *)PTR_DAT_0437a0d8;
  local_108 = *(char **)(PTR_DAT_0437a0d8 + 8);
  local_100 = *(undefined8 *)(PTR_DAT_0437a0d8 + 0x10);
  plVar4 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
  local_f8 = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (param_4 == '\x02') {
    if ((param_2 & 1) == 0) {
      local_110 = 0x3bca3d08c96ae61c;
      local_108 = "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_appear_ghost.ptcl";
      local_100 = 0x4c;
      local_f8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      local_f8 = (long *)0x0;
      goto LAB_0185b4d0;
    }
    local_110 = 0x20659f6aab22ec9b;
    local_108 = "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_hide_ghost.ptcl";
    local_100 = 0x4a;
    local_f8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    local_f8 = (long *)0x0;
    bVar3 = *pbVar17;
joined_r0x0185b45c:
    if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar13 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    if (local_110 != *(long *)puVar9) {
      if ((*param_7 == 0) || (FUN_009acf14(&local_f0), plVar4 = local_f0, local_f0 == (long *)0x0))
      {
        *param_1 = 0;
      }
      else {
        local_118 = (long *)0x0;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar13 != 0))
        {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = param_10;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        plVar14 = (long *)(**(code **)(*param_10 + 0x10))(param_10,0x140,0x10);
        if (plVar14 == (long *)0x0) {
          (**(code **)(*param_10 + 0xb8))(param_10);
        }
        local_f0 = (long *)((ulong)local_f0 & 0xffffffffffffff00);
        local_e8 = (code *)0x0;
        local_e0 = 0;
        FUN_008c4b3c(&local_e8,param_11);
        local_f0 = (long *)CONCAT71(local_f0._1_7_,1);
        FUN_01cc622c(plVar14,param_8,PTR_DAT_0437a330,param_9,&local_110,0,1,param_3 & 1,0,1,
                     &local_f0);
        pcVar11 = local_e8;
        if ((char)local_f0 != '\0') {
          if (local_e8 != (code *)0x0) {
            pcVar2 = local_e8 + 8;
            do {
              iVar13 = *(int *)pcVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar8) {
                *(int *)pcVar2 = iVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar13 + -1 == 0) {
              *(long *)(local_e8 + 0x10) = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_70[0] = *(long *)pcVar11;
              FUN_02a44274(lVar16 + 0xd8,local_70);
            }
          }
          local_f0 = (long *)((ulong)local_f0 & 0xffffffffffffff00);
        }
        plVar14[1] = (long)param_10;
        plVar14[2] = (long)plVar14;
        plVar14[3] = 0x140;
        plVar14[4] = 0x10;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        if (plVar14 != (long *)0x0) {
          lVar19 = plVar14[0xb];
          if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar19 + 0x10) == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
            *(undefined8 *)(lVar19 + 0x10) = uVar15;
          }
          plVar10 = local_118;
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          local_118 = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            lVar19 = plVar10[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))();
            }
          }
        }
        local_e0 = 0;
        local_d8 = (long *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        local_118 = plVar14;
        FUN_00bdc73c(local_70,plVar4[0xf],0xc,&local_118,&local_f0,0);
        pcVar11 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = 0;
          local_d8 = (long *)0x0;
          local_f0 = (long *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar11)(auStack_d0);
        }
        *(long *)(param_1 + 8) = local_70[0];
        *param_1 = 1;
        if (local_118 != (long *)0x0) {
          lVar19 = local_118[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_118 + 0x20))();
          }
        }
        lVar19 = plVar4[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar4 + 0x20))(plVar4);
        }
      }
      goto joined_r0x0185b854;
    }
  }
  else if (param_4 != '\x01') {
    lVar19 = *param_5;
    if ((lVar19 != 0) && (*(int *)(lVar19 + 0xc) != 0)) {
      piVar1 = (int *)(lVar19 + 0xc);
      iVar13 = *(int *)(lVar19 + 0xc);
      do {
        puVar18 = *(undefined8 **)(lVar19 + 0x10);
        if (((*PTR_DAT_04379e88 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar12 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar15;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)PTR_DAT_04379e90 = PTR_DAT_043795e0;
          __cxa_guard_release(PTR_DAT_04379e88);
        }
        while( true ) {
          pbVar17 = PTR_DAT_0437a0d0;
          if (puVar18 == (undefined8 *)0x0) goto LAB_0185b4d0;
          if (puVar18 == (undefined8 *)PTR_DAT_04379e90) break;
          puVar18 = (undefined8 *)*puVar18;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar13) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar13 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_0185b868;
          lVar19 = *(long *)(lVar19 + 0x18);
          pbVar17 = PTR_DAT_0437a0d0;
          if (lVar19 != 0) {
            if ((*param_6 == 0) || (FUN_00b911c4(&local_f0), local_f0 == (long *)0x0))
            goto LAB_0185ba10;
            lVar16 = local_f0[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            cVar7 = *(char *)((long)local_f0 + 0x8d1);
            do {
              iVar13 = *piVar1;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_f0 + 0x20))();
              if (cVar7 == '\0') goto LAB_0185ba10;
LAB_0185bc60:
              plVar4 = local_f8;
              if ((param_2 & 1) == 0) {
                local_110 = -0x6db109ceb45aac84;
                local_108 = 
                "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_appear_water.ptcl";
                local_100 = 0x4c;
              }
              else {
                local_110 = 0x445e270ab15f0a9f;
                local_108 = 
                "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_hide_water.ptcl";
                local_100 = 0x4a;
              }
              local_f8 = (long *)0x0;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x20))();
              }
              local_f8 = (long *)0x0;
            }
            else {
              if (cVar7 != '\0') goto LAB_0185bc60;
LAB_0185ba10:
              local_f0 = (long *)0x0;
              local_e8 = (code *)0x0;
              FUN_018310a4(&local_f0,lVar19 + 0x588);
              if (local_f0 == (long *)0x0) {
                local_118 = (long *)0x0;
              }
              else {
                FUN_00b91400(&local_118);
                plVar4 = local_f0;
                if (local_f0 != (long *)0x0) {
                  plVar14 = local_f0 + 1;
                  do {
                    iVar13 = (int)*plVar14 + -1;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar8) {
                      *(int *)plVar14 = iVar13;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar13 == 0) {
                    local_f0[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar16 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar16;
                    local_70[0] = *plVar4;
                    FUN_02a44274(lVar16 + 0xd8,local_70);
                  }
                }
              }
              if (local_118 != (long *)0x0) {
                FUN_01c3aa24(&local_f0,local_118,param_8,2);
                plVar4 = local_f8;
                if ((long)local_f0 < 0x1de9c90f8c5dcb52) {
                  if (local_f0 != (long *)0xca2f6562e70e4010) {
                    if (local_f0 == (long *)0xee4f3d27318ed6e9) {
                      if ((param_2 & 1) == 0) {
                        local_110 = -0x34485d8a165ad7c9;
                        local_108 = 
                        "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_appear_mud.ptcl"
                        ;
                        local_100 = 0x4a;
                      }
                      else {
                        local_110 = -0x3028583c4f9e912c;
                        local_108 = 
                        "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_hide_mud.ptcl";
                        local_100 = 0x48;
                      }
                      goto LAB_0185bc00;
                    }
                    goto joined_r0x0185bb70;
                  }
                  bVar8 = true;
                }
                else {
                  if (local_f0 == (long *)0x1de9c90f8c5dcb52) {
                    if ((param_2 & 1) != 0) goto joined_r0x0185bb70;
                    local_110 = -0x3a43b60cfbedcb30;
                    local_108 = 
                    "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_appear_snow.ptcl";
LAB_0185bbd4:
                    local_100 = 0x4b;
                  }
                  else if (local_f0 == (long *)0x3b4863d990d7619e) {
                    if ((param_2 & 1) != 0) {
                      local_110 = -0x2eac8510cdecbafb;
                      local_108 = 
                      "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_hide_ground.ptcl";
                      goto LAB_0185bbd4;
                    }
                    local_110 = -0x5c6b5487a12e9460;
                    local_108 = 
                    "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_appear_ground.ptcl";
                    local_100 = 0x4d;
                  }
                  else {
                    if ((local_f0 != (long *)0x7fcc293af41fc8bd) || ((param_2 & 1) != 0))
                    goto joined_r0x0185bb70;
                    local_110 = -0x2af37f12fee14125;
                    local_108 = 
                    "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_appear_grass.ptcl";
                    local_100 = 0x4c;
                  }
LAB_0185bc00:
                  local_f8 = (long *)0x0;
                  if (plVar4 != (long *)0x0) {
                    (**(code **)(*plVar4 + 0x20))();
                  }
                  local_f8 = (long *)0x0;
joined_r0x0185bb70:
                  bVar8 = false;
                }
                if (local_d8 != (long *)0x0) {
                  (**(code **)(*local_d8 + 0x20))();
                }
                if (local_118 != (long *)0x0) {
                  lVar16 = local_118[0xb];
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    iVar13 = *piVar1;
                    cVar7 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar13 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar16 + 0x18) = 0;
                    (**(code **)(*local_118 + 0x20))();
                  }
                }
                if (bVar8) goto LAB_0185bc60;
              }
            }
            lVar16 = *(long *)(lVar19 + 8);
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            pbVar17 = PTR_DAT_0437a0d0;
            if (iVar13 + -1 != 0) break;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*(long *)(lVar19 + -0x50) + 0x20))((long *)(lVar19 + -0x50));
            bVar3 = *PTR_DAT_0437a0d0;
            goto joined_r0x0185b45c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0185b868:
        pbVar17 = PTR_DAT_0437a0d0;
        iVar13 = iVar12;
      } while (iVar12 != 0);
    }
LAB_0185b4d0:
    bVar3 = *pbVar17;
    goto joined_r0x0185b45c;
  }
  *param_1 = 0;
joined_r0x0185b854:
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  return;
}


