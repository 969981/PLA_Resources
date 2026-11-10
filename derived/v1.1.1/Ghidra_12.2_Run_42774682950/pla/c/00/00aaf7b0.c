/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aaf7b0; name: FUN_00aaf7b0
 */


void FUN_00aaf7b0(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *local_88 [2];
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  long local_58;
  
  lVar11 = FUN_009b807c(*param_2 + 0xf0,&local_78);
  if (lVar11 == 0) goto LAB_00aaf8b0;
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00ac3fa4(&local_78,lVar11 + 0x248);
  FUN_0099c748(&local_68,&local_78);
  plVar6 = local_78;
  if (local_78 != (long *)0x0) {
    plVar14 = local_78 + 1;
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_88[0] = (long *)*plVar6;
      FUN_02a44274(lVar11 + 0xd8,local_88);
    }
  }
  if (local_68 != (long *)0x0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_00ae8374(&local_78,local_68 + 0x44);
    plVar6 = local_78;
    puVar8 = PTR_DAT_04379e80;
    puVar7 = PTR_DAT_04379e78;
    if (local_78 == (long *)0x0) goto LAB_00aaf884;
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar9 = *(int *)((long)local_78 + 0xc);
      do {
        puVar15 = (undefined8 *)plVar6[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          uVar12 = FUN_0095a420();
          *(undefined8 *)puVar8 = uVar12;
          __cxa_guard_release(puVar7);
        }
        if (puVar15 == (undefined8 *)0x0) {
          bVar4 = false;
          plVar6 = local_78;
          goto joined_r0x00aafaa0;
        }
        while (puVar15 != (undefined8 *)puVar8) {
          puVar15 = (undefined8 *)*puVar15;
          if (puVar15 == (undefined8 *)0x0) goto LAB_00aafa48;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = plVar6[3];
            if (lVar11 != 0) {
              plVar14 = (long *)(lVar11 + -0x50);
              FUN_00aae1c0(local_88,plVar14);
              plVar6 = local_88[0];
              puVar8 = PTR_DAT_0437a150;
              puVar7 = PTR_DAT_0437a148;
              if (local_88[0] == (long *)0x0) {
                bVar4 = false;
                goto LAB_00aaf9b8;
              }
              if (*(int *)((long)local_88[0] + 0xc) == 0) goto LAB_00aafb70;
              piVar1 = (int *)((long)local_88[0] + 0xc);
              iVar9 = *(int *)((long)local_88[0] + 0xc);
              goto LAB_00aafb10;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_00aafa48:
    bVar4 = false;
    plVar6 = local_78;
    goto joined_r0x00aafaa0;
  }
LAB_00aaf884:
  bVar4 = false;
  goto joined_r0x00aafa40;
LAB_00aafb10:
  do {
    plVar16 = (long *)plVar6[2];
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
      uVar12 = FUN_009b19b4();
      *(undefined8 *)puVar8 = uVar12;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) goto LAB_00aafb70;
      if (plVar16 == (long *)puVar8) break;
      plVar16 = (long *)*plVar16;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar13 = plVar6[3];
        plVar6 = (long *)0x0;
        plVar16 = local_88[0];
        if (lVar13 != 0) {
          plVar6 = (long *)(lVar13 + -0x50);
        }
        goto joined_r0x00aafc28;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar10;
  } while (iVar10 != 0);
LAB_00aafb70:
  plVar6 = (long *)0x0;
  plVar16 = local_88[0];
joined_r0x00aafc28:
  local_88[0] = plVar16;
  if (plVar16 == (long *)0x0) {
LAB_00aafc2c:
    bVar4 = false;
    if (plVar6 != (long *)0x0) {
LAB_00aafc30:
      FUN_00956dac(local_88,plVar6 + 0x35);
      lVar13 = FUN_00ab4c74(local_88[0] + 0x1e,&local_58);
      *param_1 = lVar13;
      if (lVar13 != 0) {
        lVar13 = *(long *)(lVar13 + 0x58);
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (local_88[0] != (long *)0x0) {
        lVar13 = local_88[0][0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_88[0] + 0x20))();
        }
      }
      lVar13 = plVar6[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 1) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      bVar4 = true;
    }
  }
  else {
    plVar2 = plVar16 + 1;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 != 0) goto LAB_00aafc2c;
    plVar16[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar13 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar13;
    local_58 = *plVar16;
    FUN_02a44274(lVar13 + 0xd8,&local_58);
    if (plVar6 != (long *)0x0) goto LAB_00aafc30;
    bVar4 = false;
  }
LAB_00aaf9b8:
  lVar11 = *(long *)(lVar11 + 8);
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar6 = local_78;
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
    plVar6 = local_78;
  }
joined_r0x00aafaa0:
  local_78 = plVar6;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 1;
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      plVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_88[0] = (long *)*plVar6;
      FUN_02a44274(lVar11 + 0xd8,local_88);
    }
  }
  if (!bVar4) goto LAB_00aaf884;
  bVar4 = true;
joined_r0x00aafa40:
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (bVar4) {
    return;
  }
LAB_00aaf8b0:
  *param_1 = 0;
  return;
}


