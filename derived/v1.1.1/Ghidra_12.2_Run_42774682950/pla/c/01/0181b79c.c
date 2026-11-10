/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181b79c; name: FUN_0181b79c
 */


bool FUN_0181b79c(long param_1,float *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  long local_48;
  
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_00ac3fa4(&local_70,param_1 + 0x1f0);
  FUN_0099c748(&local_78,&local_70);
  plVar15 = local_70;
  if (local_70 != (long *)0x0) {
    plVar16 = local_70 + 1;
    do {
      iVar9 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar14) {
        *(int *)plVar16 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *plVar15;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  FUN_0181d68c(&local_70,param_1);
  plVar15 = local_70;
  puVar7 = PTR_DAT_0437de28;
  puVar6 = PTR_DAT_0437de20;
  if (local_70 == (long *)0x0) {
    plVar15 = (long *)0x0;
LAB_0181b858:
    if (local_78 != (long *)0x0) goto LAB_0181b860;
LAB_0181bb04:
    bVar14 = false;
    if (plVar15 == (long *)0x0) {
      return false;
    }
  }
  else {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar9 = *(int *)((long)local_70 + 0xc);
      do {
        plVar16 = (long *)plVar15[2];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar10 = FUN_00fd7558();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_0181bb3c;
          if (plVar16 == (long *)puVar7) break;
          plVar16 = (long *)*plVar16;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = plVar15[3];
            plVar15 = (long *)0x0;
            plVar16 = local_70;
            if (lVar11 != 0) {
              plVar15 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x0181baa0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_0181bb3c:
    plVar15 = (long *)0x0;
    plVar16 = local_70;
joined_r0x0181baa0:
    local_70 = plVar16;
    if (plVar16 == (long *)0x0) goto LAB_0181b858;
    plVar2 = plVar16 + 1;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 != 0) goto LAB_0181b858;
    plVar16[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_48 = *plVar16;
    FUN_02a44274(lVar11 + 0xd8,&local_48);
    if (local_78 == (long *)0x0) goto LAB_0181bb04;
LAB_0181b860:
    if (plVar15 == (long *)0x0) {
      bVar14 = false;
      goto LAB_0181b8f0;
    }
    fVar21 = *(float *)(plVar15 + 0x10);
    fVar22 = *(float *)((long)plVar15 + 0x84);
    FUN_009c69bc(&local_70);
    lVar13 = local_70[0x1b];
    lVar11 = local_70[0x1a];
    if (local_70 != (long *)0x0) {
      lVar12 = local_70[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    fVar17 = (float)lVar11 - *param_2;
    fVar18 = (float)lVar13 - param_2[2];
    fVar19 = (float)((ulong)lVar13 >> 0x20) - param_2[3];
    fVar17 = fVar17 * fVar17;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    auVar20._4_4_ = 0;
    auVar20._0_4_ = fVar17;
    auVar20._8_4_ = fVar18;
    auVar20._12_4_ = fVar19;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = fVar17;
    auVar5._8_4_ = fVar18;
    auVar5._12_4_ = fVar19;
    auVar20 = NEON_ext(auVar20,auVar5,8,1);
    if (auVar20._0_4_ + fVar17 + auVar20._4_4_ + 0.0 <= fVar22 * fVar22) {
      FUN_009c69bc(&local_70,local_78);
      lVar11 = local_70[0x1a];
      if (local_70 != (long *)0x0) {
        lVar13 = local_70[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
      bVar14 = fVar21 < ABS((float)((ulong)lVar11 >> 0x20) - param_2[1]);
    }
    else {
      bVar14 = true;
    }
  }
  lVar11 = plVar15[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
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
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (local_78 == (long *)0x0) {
    return bVar14;
  }
LAB_0181b8f0:
  lVar11 = local_78[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
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
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_78 + 0x20))();
  }
  return bVar14;
}


