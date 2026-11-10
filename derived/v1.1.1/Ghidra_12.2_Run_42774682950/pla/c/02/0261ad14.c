/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0261ad14; name: FUN_0261ad14
 */


uint FUN_0261ad14(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_60);
  puVar13 = local_60[0];
  puVar5 = PTR_DAT_0437a408;
  puVar4 = PTR_DAT_0437a400;
  if (local_60[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar8 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar14 = (long *)puVar13[2];
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_0261af44;
          if (plVar14 == (long *)puVar5) break;
          plVar14 = (long *)*plVar14;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar13[3];
            plVar14 = (long *)0x0;
            if (lVar11 != 0) {
              plVar14 = (long *)(lVar11 + -0x50);
            }
            puVar13 = local_60[0];
            if (local_60[0] == (undefined8 *)0x0) goto LAB_0261ae38;
            goto LAB_0261ade0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_0261af44:
    plVar14 = (long *)0x0;
    puVar13 = local_60[0];
    if (local_60[0] != (undefined8 *)0x0) {
LAB_0261ade0:
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar13[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar13;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
LAB_0261ae38:
    if (plVar14 != (long *)0x0) {
      plVar9 = (long *)FUN_028dd088(plVar14);
      plVar9 = (long *)(**(code **)(*plVar9 + 0x18))();
      lVar11 = *plVar9;
      plVar9 = (long *)plVar9[3];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      lVar12 = plVar14[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if ((lVar11 == -0x47529fb6d0cdd9eb || lVar11 == -0x4752a1b6d0cddd51) ||
          lVar11 == -0x4752a0b6d0cddb9e) {
        uVar6 = 1;
        goto LAB_0261ad4c;
      }
    }
  }
  uVar6 = FUN_01a518ec(param_1);
LAB_0261ad4c:
  return uVar6 & 1;
}


