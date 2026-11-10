/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165aaf8; name: FUN_0165aaf8
 */


void FUN_0165aaf8(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  long *local_58;
  
  FUN_0165a7a0(local_70);
  puVar5 = local_70[0];
  puVar13 = PTR_DAT_043796e8;
  puVar12 = PTR_DAT_043796e0;
  puVar11 = PTR_DAT_043794d8;
  puVar10 = PTR_DAT_043794d0;
  if (local_70[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_70[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_70[0] + 0xc);
      iVar15 = *(int *)((long)local_70[0] + 0xc);
      do {
        plVar18 = (long *)puVar5[2];
        if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar12), iVar14 != 0)) {
          if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar11 = uVar16;
            __cxa_guard_release(puVar10);
          }
          *(undefined **)puVar13 = puVar11;
          __cxa_guard_release(puVar12);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_0165acdc;
          if (plVar18 == (long *)puVar13) break;
          plVar18 = (long *)*plVar18;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar15) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar17 = puVar5[3];
            plVar18 = (long *)0x0;
            puVar5 = local_70[0];
            if (lVar17 != 0) {
              plVar18 = (long *)(lVar17 + -0x50);
            }
            goto joined_r0x0165abe0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar15 = iVar14;
      } while (iVar14 != 0);
    }
LAB_0165acdc:
    plVar18 = (long *)0x0;
    puVar5 = local_70[0];
joined_r0x0165abe0:
    local_70[0] = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar15 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_58 = (long *)*puVar5;
        FUN_02a44274(lVar17 + 0xd8,&local_58);
      }
    }
    if (plVar18 != (long *)0x0) {
      FUN_0199c220(&local_80,plVar18);
      lVar17 = plVar18[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pbVar4 = PTR_DAT_043794d0;
      puVar5 = (undefined8 *)PTR_DAT_043794d8;
      pbVar6 = PTR_DAT_0437a0e8;
      puVar7 = (undefined8 *)PTR_DAT_0437a0f0;
      plVar8 = local_80;
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
        pbVar4 = PTR_DAT_043794d0;
        puVar5 = (undefined8 *)PTR_DAT_043794d8;
        pbVar6 = PTR_DAT_0437a0e8;
        puVar7 = (undefined8 *)PTR_DAT_0437a0f0;
        plVar8 = local_80;
      }
      goto joined_r0x0165ac80;
    }
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  pbVar4 = PTR_DAT_043794d0;
  puVar5 = (undefined8 *)PTR_DAT_043794d8;
  pbVar6 = PTR_DAT_0437a0e8;
  puVar7 = (undefined8 *)PTR_DAT_0437a0f0;
  plVar8 = local_80;
joined_r0x0165ac80:
  PTR_DAT_043794d0 = pbVar4;
  PTR_DAT_043794d8 = (undefined *)puVar5;
  PTR_DAT_0437a0e8 = pbVar6;
  PTR_DAT_0437a0f0 = (undefined *)puVar7;
  if (plVar8 != (long *)0x0) {
    local_80 = plVar8;
    if (*(int *)((long)plVar8 + 0xc) != 0) {
      piVar1 = (int *)((long)plVar8 + 0xc);
      iVar15 = *(int *)((long)plVar8 + 0xc);
      do {
        puVar19 = (undefined8 *)plVar8[2];
        if (((*pbVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar6), iVar14 != 0)) {
          if (((*pbVar4 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar4), iVar14 != 0)) {
            uVar16 = FUN_0087f8f0();
            *puVar5 = uVar16;
            __cxa_guard_release(pbVar4);
          }
          *puVar7 = puVar5;
          __cxa_guard_release(pbVar6);
        }
        while( true ) {
          if (puVar19 == (undefined8 *)0x0) goto LAB_0165af24;
          if (puVar19 == puVar7) break;
          puVar19 = (undefined8 *)*puVar19;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar15) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar18 = (long *)0x0;
            plVar9 = local_80;
            if (plVar8[3] != 0) {
              plVar18 = (long *)(plVar8[3] + -0x50);
            }
            goto joined_r0x0165ada4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar15 = iVar14;
      } while (iVar14 != 0);
    }
LAB_0165af24:
    plVar18 = (long *)0x0;
    plVar9 = local_80;
joined_r0x0165ada4:
    local_80 = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar8 = plVar9 + 1;
      do {
        iVar15 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar15;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 == 0) {
        plVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_70[0] = (undefined8 *)*plVar9;
        FUN_02a44274(lVar17 + 0xd8,local_70);
      }
    }
    if (plVar18 != (long *)0x0) {
      FUN_01847290(&local_58,plVar18);
      (**(code **)(*local_58 + 0x10))(local_70);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_0165ca58(param_1,local_70);
      puVar5 = local_70[0];
      if (local_70[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70[0] + 1);
        do {
          iVar15 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar15 + -1 == 0) {
          local_70[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_80 = (long *)*puVar5;
          FUN_02a44274(lVar17 + 0xd8,&local_80);
        }
      }
      if (local_58 != (long *)0x0) {
        lVar17 = local_58[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      lVar17 = plVar18[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
        return;
      }
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


