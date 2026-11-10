/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bef4cc; name: FUN_00bef4cc
 */


void FUN_00bef4cc(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  
  FUN_00b5f47c(&local_90,*(undefined8 *)(param_2 + 0x58));
  puVar17 = local_90;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  puVar7 = PTR_DAT_043794c8;
  puVar6 = PTR_DAT_043794b8;
  puVar5 = PTR_DAT_043794b0;
  if (local_90 == (undefined8 *)0x0) {
LAB_00bef504:
    plVar15 = (long *)0x0;
LAB_00bef508:
    local_70 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_90 + 0xc) != 0) {
      piVar1 = (int *)((long)local_90 + 0xc);
      iVar10 = *(int *)((long)local_90 + 0xc);
      do {
        plVar15 = (long *)puVar17[2];
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar11 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar9 = uVar13;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar7 = puVar9;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar6 = puVar7;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_00bef830;
          if (plVar15 == (long *)puVar6) break;
          plVar15 = (long *)*plVar15;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = puVar17[3];
            plVar15 = (long *)0x0;
            puVar17 = local_90;
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x00bef608;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_00bef830:
    plVar15 = (long *)0x0;
    puVar17 = local_90;
joined_r0x00bef608:
    local_90 = puVar17;
    if (puVar17 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        puVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *puVar17;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if (plVar15 == (long *)0x0) goto LAB_00bef504;
    lVar14 = FUN_00b13c20(plVar15 + 0x1e,&local_90);
    if (lVar14 == 0) goto LAB_00bef508;
    local_90 = (undefined8 *)&DAT_e204c447b1c21379;
    pcStack_88 = "CharaObject(Pokemon)";
    local_80 = 0x14;
    local_78 = (long *)0x0;
    FUN_00d819d4(&local_70,lVar14,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = PTR_DAT_043794d0;
    puVar6 = PTR_DAT_043794b8;
    puVar5 = PTR_DAT_043794b0;
    if (local_70 != (long *)0x0) {
      lVar14 = local_70[0x35];
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_00bef6cc:
        plVar16 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar14 + 0xc);
        iVar10 = *(int *)(lVar14 + 0xc);
        do {
          puVar17 = *(undefined8 **)(lVar14 + 0x10);
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            if (((*PTR_DAT_043794c0 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar11 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043794c0);
            }
            *(undefined **)puVar6 = PTR_DAT_043794c8;
            __cxa_guard_release(puVar5);
          }
          if (puVar17 == (undefined8 *)0x0) goto LAB_00bef6cc;
          while (puVar17 != (undefined8 *)puVar6) {
            puVar17 = (undefined8 *)*puVar17;
            plVar16 = (long *)0x0;
            if (puVar17 == (undefined8 *)0x0) goto LAB_00bef6d0;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar10) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              plVar16 = (long *)0x0;
              if (*(long *)(lVar14 + 0x18) != 0) {
                plVar16 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar16 = (long *)0x0;
          iVar10 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00bef6d0:
      (**(code **)(*plVar16 + 0x18))(&local_90,plVar16);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_0087f944(param_1,&local_90);
      puVar17 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_90 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_90[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *puVar17;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      plVar4 = local_70;
      if (plVar16 != (long *)0x0) {
        uVar12 = FUN_02a43a5c(plVar16[0xb]);
        plVar4 = local_70;
        if ((uVar12 & 1) != 0) {
          (**(code **)(*plVar16 + 0x20))(plVar16);
          plVar4 = local_70;
        }
      }
      goto joined_r0x00bef778;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = local_70;
joined_r0x00bef778:
  local_70 = plVar4;
  if ((plVar4 != (long *)0x0) && (uVar12 = FUN_02a43a5c(plVar4[0xb]), (uVar12 & 1) != 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if ((plVar15 != (long *)0x0) && (uVar12 = FUN_02a43a5c(plVar15[0xb]), (uVar12 & 1) != 0)) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return;
}


