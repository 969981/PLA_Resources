/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba0550; name: FUN_01ba0550
 */


bool FUN_01ba0550(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00b63974(&local_78,param_1 + 0x600);
  puVar4 = local_78;
  puVar10 = PTR_DAT_0437a258;
  puVar9 = PTR_DAT_0437a250;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar13 = *(int *)((long)local_78 + 0xc);
      do {
        plVar16 = (long *)puVar4[2];
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar14;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar8 = puVar6;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01ba063c;
          if (plVar16 == (long *)puVar10) break;
          plVar16 = (long *)*plVar16;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar13) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar15 = puVar4[3];
            plVar16 = (long *)0x0;
            puVar4 = local_78;
            if (lVar15 != 0) {
              plVar16 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x01ba0660;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01ba063c:
    plVar16 = (long *)0x0;
    puVar4 = local_78;
joined_r0x01ba0660:
    local_78 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_68 = *puVar4;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    if (plVar16 != (long *)0x0) {
      bVar11 = (char)plVar16[0x40] != '\0';
      lVar15 = plVar16[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
        return bVar11;
      }
      return bVar11;
    }
  }
  return false;
}


