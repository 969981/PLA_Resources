/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115b43c; name: FUN_0115b43c
 */


void FUN_0115b43c(long param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_58;
  
  plVar13 = *(long **)(param_1 + 0x70);
  if (plVar13 != (long *)0x0) {
    lVar16 = plVar13[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_008802f0(&local_70,param_1 + 0x58);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_0115c35c(&local_80,&local_70);
  puVar10 = local_70;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_70[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)puVar5;
      *(long *)puVar6 = lVar16;
      local_58 = (undefined8 *)*puVar10;
      FUN_02a44274(lVar16 + 0xd8,&local_58);
    }
  }
  lVar16 = *param_2;
  do {
    uVar8 = local_78;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_78,0x10);
    if (bVar3) {
      local_78 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  FUN_02a44e0c(&local_58,uVar9,uVar8);
  puVar10 = local_80;
  local_80 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar10[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_70 = (undefined8 *)*puVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_70);
    }
  }
  puVar10 = *(undefined8 **)(lVar16 + 0x80);
  *(undefined8 *)(lVar16 + 0x80) = 0;
  if (local_58 == (undefined8 *)0x0) {
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 1) {
        puVar10[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)puVar5;
        *(long *)puVar6 = lVar11;
        local_70 = (undefined8 *)*puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_70);
      }
    }
    uVar8 = 0;
  }
  else {
    puVar12 = local_58;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar10[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)puVar5;
        *(long *)puVar6 = lVar11;
        local_70 = (undefined8 *)*puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_70);
      }
      puVar12 = local_58;
    }
    local_58 = (undefined8 *)0x0;
    *(undefined8 **)(lVar16 + 0x80) = puVar12;
  }
  puVar10 = local_58;
  *(undefined8 *)(lVar16 + 0x88) = uVar8;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_58[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)puVar5;
      *(long *)puVar6 = lVar16;
      local_70 = (undefined8 *)*puVar10;
      FUN_02a44274(lVar16 + 0xd8,&local_70);
    }
  }
  puVar10 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_80[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)puVar5;
      *(long *)puVar6 = lVar16;
      local_70 = (undefined8 *)*puVar10;
      FUN_02a44274(lVar16 + 0xd8,&local_70);
    }
  }
  *(undefined4 *)(*param_2 + 0x78) = param_3;
  plVar14 = (long *)plVar13[0xe];
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  while (plVar15 = plVar14, plVar15 != plVar13) {
    lVar16 = *param_2;
    if (*(uint *)(lVar16 + 0x78) < *(uint *)(plVar15 + 0xf)) {
      lVar11 = plVar15[0xd];
      if (lVar11 == 0) goto LAB_0115bc94;
      lVar17 = *(long *)(lVar11 + 0x58);
      if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar17 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
          *(undefined8 *)(lVar17 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_0115bc94:
        plVar14 = *(long **)(lVar16 + 0x68);
        *(long *)(lVar16 + 0x68) = lVar11;
        if (plVar14 != (long *)0x0) {
          lVar16 = plVar14[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))();
          }
        }
        lVar16 = plVar15[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
        lVar11 = *param_2;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar14 = *(long **)(lVar11 + 0x70);
        *(long **)(lVar11 + 0x70) = plVar15;
        if (plVar14 != (long *)0x0) {
          lVar16 = plVar14[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))();
          }
        }
        lVar16 = plVar15[0xd];
        lVar11 = *param_2;
        if (lVar11 != 0) {
          lVar17 = *(long *)(lVar11 + 0x58);
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar8;
          }
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar14 = *(long **)(lVar16 + 0x70);
        *(long *)(lVar16 + 0x70) = lVar11;
        if (plVar14 == (long *)0x0) {
LAB_0115bd8c:
          lVar16 = *param_2;
        }
        else {
          lVar16 = plVar14[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 != 0) goto LAB_0115bd8c;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))();
          lVar16 = *param_2;
        }
        if (lVar16 != 0) {
          lVar11 = *(long *)(lVar16 + 0x58);
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar8;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar14 = (long *)plVar15[0xd];
        plVar15[0xd] = lVar16;
        if (plVar14 != (long *)0x0) {
          lVar16 = plVar14[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))();
          }
        }
        goto LAB_0115b8b0;
      }
      goto LAB_0115be4c;
    }
    plVar14 = (long *)plVar15[0xe];
    if (plVar14 != (long *)0x0) {
      lVar16 = plVar14[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar16 = plVar15[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  lVar16 = *param_2;
  lVar11 = *(long *)(*(long *)(param_1 + 0x70) + 0x68);
  if (lVar11 != 0) {
    lVar17 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = *(long **)(lVar16 + 0x68);
  *(long *)(lVar16 + 0x68) = lVar11;
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  lVar16 = *param_2;
  lVar11 = *(long *)(param_1 + 0x70);
  if (lVar11 != 0) {
    lVar17 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = *(long **)(lVar16 + 0x70);
  *(long *)(lVar16 + 0x70) = lVar11;
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  lVar16 = *(long *)(*(long *)(param_1 + 0x70) + 0x68);
  lVar11 = *param_2;
  if (lVar11 != 0) {
    lVar17 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0115be4c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = *(long **)(lVar16 + 0x70);
  *(long *)(lVar16 + 0x70) = lVar11;
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  lVar11 = *(long *)(param_1 + 0x70);
  lVar16 = *param_2;
  if (lVar16 != 0) {
    lVar17 = *(long *)(lVar16 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_0115be4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = *(long **)(lVar11 + 0x68);
  *(long *)(lVar11 + 0x68) = lVar16;
  plVar15 = plVar13;
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
LAB_0115b8b0:
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  if (plVar13 != (long *)0x0) {
    lVar16 = plVar13[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


