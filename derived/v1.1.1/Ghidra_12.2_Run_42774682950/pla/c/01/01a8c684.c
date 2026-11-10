/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8c684; name: FUN_01a8c684
 */


void FUN_01a8c684(long *param_1)

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
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  FUN_01a8c0c8(local_78);
  puVar4 = local_78[0];
  puVar9 = PTR_DAT_0437a6a8;
  puVar8 = PTR_DAT_0437a698;
  puVar7 = PTR_DAT_0437a690;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78[0] == (undefined8 *)0x0) {
    *param_1 = 0;
  }
  else {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar11 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_0437a6a0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a6a0), iVar10 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar12;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar9 = puVar6;
            __cxa_guard_release(PTR_DAT_0437a6a0);
          }
          *(undefined **)puVar8 = puVar9;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01a8c7d4;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = puVar4[3];
            lVar14 = 0;
            if (lVar13 != 0) {
              lVar14 = lVar13 + -0x50;
            }
            *param_1 = lVar14;
            puVar4 = local_78[0];
            goto joined_r0x01a8c76c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01a8c7d4:
    *param_1 = 0;
    puVar4 = local_78[0];
joined_r0x01a8c76c:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *puVar4;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
  }
  return;
}


