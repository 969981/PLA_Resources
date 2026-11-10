/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02836778; name: FUN_02836778
 */


void FUN_02836778(long *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long *local_88 [8];
  undefined4 local_44;
  
  local_44 = 2000;
  lVar10 = FUN_010c858c(local_88,param_1[0xe],&local_44);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0x12] = lVar10;
  lVar10 = FUN_010c858c(local_88,param_1[0xe],&local_44);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0x13] = lVar10;
  lVar10 = FUN_010c858c(local_88,param_1[0xe],&local_44);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0x14] = lVar10;
  plVar11 = (long *)param_1[0xe];
  uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar16 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar16,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1f8,8);
  if (lVar12 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  local_88[0] = (long *)param_1[0x19];
  if (local_88[0] != (long *)0x0) {
    lVar17 = local_88[0][0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_02836ea4;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_010befe4(lVar12,local_88,uVar6,0);
  if (local_88[0] != (long *)0x0) {
    lVar17 = local_88[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_88[0] + 0x20))();
    }
  }
  *(long **)(lVar12 + 8) = plVar11;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(undefined8 *)(lVar12 + 0x18) = 0x1f8;
  *(undefined8 *)(lVar12 + 0x20) = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)param_1[0x15];
  param_1[0x15] = 0;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0x15] = lVar12;
  *(long *)(lVar12 + 0x118) = param_1[0x1a];
  *(long *)(param_1[0x15] + 0x1f0) = param_1[0x19];
  if (param_1[0x15] != 0) {
    *(undefined1 *)(param_1[0x15] + 0x178) = 1;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar11 = *(long **)(lVar10 + 0x230);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02836ea4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar12 = param_1[0x15];
  lVar10 = 0;
  if (lVar12 != 0) {
    uVar8 = *(uint *)(plVar11 + 0xd);
    *(undefined2 *)(lVar12 + 0x19c) = 0;
    if (((*PTR_DAT_0437b180 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
    uVar15 = (ulong)uVar8 & 3;
    lVar10 = *(long *)PTR_DAT_0437b188;
    *(long *)PTR_DAT_0437b190 = lVar10;
    bVar2 = *(byte *)(lVar10 + 0x50);
    if (bVar2 < 8 && (1 << (ulong)(bVar2 & 0x1f) & 0xbcU) != 0) {
      puVar16 = &DAT_0388a3d0 + uVar15 * 4;
    }
    else {
      puVar16 = &DAT_03889380 + uVar15 * 4;
    }
    uVar3 = *puVar16;
    uVar6 = *(undefined4 *)(&DAT_038894b0 + uVar15 * 4);
    *(undefined1 *)(lVar12 + 0xa4) = uVar3;
    *(char *)(lVar12 + 0x9d) = (char)uVar6;
    *(char *)(lVar12 + 0xa5) = (char)uVar6;
    *(undefined1 *)(lVar12 + 0xa6) = uVar3;
    lVar10 = param_1[0x15];
  }
  lVar12 = param_1[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar14 = *(long **)(lVar10 + 400);
    *(long **)(lVar10 + 400) = param_1;
    if (plVar14 != (long *)0x0) {
      lVar10 = plVar14[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))();
      }
    }
    iVar7 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar7 != 0) {
      snprintf((char *)local_88,0x3f,"T_%02d",0);
      lVar10 = FUN_02c43784(param_1[0x19],local_88);
      if (lVar10 == 0) {
        snprintf((char *)local_88,0x3f,"T_text_%02d",0);
        lVar10 = FUN_02c43784(param_1[0x19],local_88);
      }
      (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],lVar10);
      uVar8 = (**(code **)(*param_1 + 0x50))(param_1);
      if (1 < uVar8) {
        snprintf((char *)local_88,0x3f,"T_%02d",1);
        lVar10 = FUN_02c43784(param_1[0x19],local_88);
        if (lVar10 == 0) {
          snprintf((char *)local_88,0x3f,"T_text_%02d",1);
          lVar10 = FUN_02c43784(param_1[0x19],local_88);
        }
        (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],lVar10);
        uVar8 = (**(code **)(*param_1 + 0x50))(param_1);
        if (2 < uVar8) {
          uVar8 = 2;
          do {
            snprintf((char *)local_88,0x3f,"T_%02d",uVar8);
            lVar10 = FUN_02c43784(param_1[0x19],local_88);
            if (lVar10 == 0) {
              snprintf((char *)local_88,0x3f,"T_text_%02d",uVar8);
              lVar10 = FUN_02c43784(param_1[0x19],local_88);
            }
            (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],lVar10);
            uVar8 = uVar8 + 1;
            uVar9 = (**(code **)(*param_1 + 0x50))(param_1);
          } while (uVar8 < uVar9);
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    return;
  }
LAB_02836ea4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


