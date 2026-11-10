/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01663d80; name: FUN_01663d80
 */


bool FUN_01663d80(void)

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
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  FUN_0165a7a0(local_68);
  puVar4 = local_68[0];
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_68[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_68[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_68[0] + 0xc);
      iVar10 = *(int *)((long)local_68[0] + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01663f30;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
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
            lVar13 = puVar4[3];
            plVar15 = (long *)0x0;
            puVar4 = local_68[0];
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x01663e54;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01663f30:
    plVar15 = (long *)0x0;
    puVar4 = local_68[0];
joined_r0x01663e54:
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
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar11 = (long *)FUN_0199f618(plVar15);
      lVar13 = *plVar11;
      lVar14 = plVar15[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
        return lVar13 == -0x1c4411fb859ba796;
      }
      return lVar13 == -0x1c4411fb859ba796;
    }
  }
  return false;
}


