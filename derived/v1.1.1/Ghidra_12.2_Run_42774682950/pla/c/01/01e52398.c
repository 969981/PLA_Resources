/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e52398; name: FUN_01e52398
 */


bool FUN_01e52398(long param_1,int param_2)

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
  bool bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  lVar13 = *(long *)(param_1 + 0x88);
  if ((*(long *)(lVar13 + 0x1f8) != *(long *)(lVar13 + 0x1f0)) &&
     (FUN_02be88ac(local_78,lVar13,0), puVar4 = local_78[0], puVar9 = PTR_DAT_0437a678,
     puVar8 = PTR_DAT_0437a670, puVar7 = PTR_DAT_0437a588, puVar6 = PTR_DAT_043794d8,
     puVar5 = PTR_DAT_043794d0, local_78[0] != (undefined8 *)0x0)) {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar12 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*PTR_DAT_0437a598 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar11 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar14;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar7 = puVar6;
            __cxa_guard_release(PTR_DAT_0437a598);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01e525a8;
          if (plVar15 == (long *)puVar9) break;
          plVar15 = (long *)*plVar15;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = puVar4[3];
            plVar15 = (long *)0x0;
            puVar4 = local_78[0];
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x01e52494;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01e525a8:
    plVar15 = (long *)0x0;
    puVar4 = local_78[0];
joined_r0x01e52494:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (plVar15 != (long *)0x0) {
      bVar10 = (int)plVar15[0x1b] == param_2;
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
        return bVar10;
      }
      return bVar10;
    }
  }
  return false;
}


