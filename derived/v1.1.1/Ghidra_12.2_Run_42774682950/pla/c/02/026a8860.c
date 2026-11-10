/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a8860; name: FUN_026a8860
 */


void FUN_026a8860(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00cf98c8(&local_68,param_1 + 0x260);
  puVar4 = local_68;
  puVar8 = PTR_DAT_0437a668;
  puVar7 = PTR_DAT_0437a660;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_68 != (undefined8 *)0x0) {
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar10 = *(int *)((long)local_68 + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = puVar6;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_026a8a18;
          if (plVar13 == (long *)puVar7) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_68;
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x026a8934;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_026a8a18:
    plVar13 = (long *)0x0;
    puVar4 = local_68;
joined_r0x026a8934:
    local_68 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_58 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    if (plVar13 != (long *)0x0) {
      FUN_01e42f90(1,0xc,0);
      FUN_01e42f90(1,0x18,0);
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  return;
}


