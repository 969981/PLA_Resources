/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb1904; name: FUN_01bb1904
 */


void FUN_01bb1904(float param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_019ec938(&local_78,param_2 + 0x260);
  puVar4 = local_78;
  puVar10 = PTR_DAT_0437a678;
  puVar9 = PTR_DAT_0437a670;
  puVar8 = PTR_DAT_0437a598;
  puVar7 = PTR_DAT_0437a588;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar12 = *(int *)((long)local_78 + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar13;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar7 = puVar6;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar10 = puVar7;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01bb1b2c;
          if (plVar15 == (long *)puVar10) break;
          plVar15 = (long *)*plVar15;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = puVar4[3];
            plVar15 = (long *)0x0;
            puVar4 = local_78;
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x01bb19f4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01bb1b2c:
    plVar15 = (long *)0x0;
    puVar4 = local_78;
joined_r0x01bb19f4:
    local_78 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *puVar4;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if (plVar15 != (long *)0x0) {
      if (param_1 == 0.0) {
        *(undefined1 *)((long)plVar15 + 0x79) = 0;
      }
      else {
        *(undefined1 *)((long)plVar15 + 0x79) = 1;
        *(undefined1 *)((long)plVar15 + 0x282) = 1;
        plVar15[0x4f] = (ulong)(uint)param_1;
        plVar15[0x4e] = CONCAT44(param_1,param_1);
      }
      lVar14 = plVar15[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
  }
  return;
}


