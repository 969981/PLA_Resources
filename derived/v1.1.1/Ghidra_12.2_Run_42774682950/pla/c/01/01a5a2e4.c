/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5a2e4; name: FUN_01a5a2e4
 */


bool FUN_01a5a2e4(void)

{
  int *piVar1;
  ulong *puVar2;
  bool bVar3;
  char cVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  ulong *local_b0;
  long **pplStack_a8;
  long *local_50;
  ulong local_48;
  
  FUN_01a50850(&local_d0);
  puVar5 = local_d0;
  puVar7 = PTR_DAT_0437a408;
  puVar6 = PTR_DAT_0437a400;
  if (local_d0 == (ulong *)0x0) {
    bVar9 = false;
  }
  else {
    if (*(int *)((long)local_d0 + 0xc) != 0) {
      piVar1 = (int *)((long)local_d0 + 0xc);
      iVar11 = *(int *)((long)local_d0 + 0xc);
      do {
        plVar15 = (long *)puVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar12 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01a5a4b4;
          if (plVar15 == (long *)puVar7) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uVar13 = puVar5[3];
            local_50 = (long *)0x0;
            puVar5 = local_d0;
            if (uVar13 != 0) {
              local_50 = (long *)(uVar13 - 0x50);
            }
            goto joined_r0x01a5a3a8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01a5a4b4:
    local_50 = (long *)0x0;
    puVar5 = local_d0;
joined_r0x01a5a3a8:
    if (puVar5 != (ulong *)0x0) {
      puVar2 = puVar5 + 1;
      do {
        iVar11 = (int)*puVar2 + -1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *(int *)puVar2 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_48 = *puVar5;
        FUN_02a44274(lVar14 + 0xd8,&local_48);
      }
    }
    if (local_50 == (long *)0x0) {
      bVar9 = false;
    }
    else {
      local_b0 = &local_48;
      pplStack_a8 = &local_50;
      local_48 = local_48 & 0xffffffffffffff00;
      local_d0 = (ulong *)&LAB_01a6a2f4;
      local_c8 = FUN_01a6a434;
      local_c0 = &LAB_01a6a438;
      puStack_b8 = &LAB_01a6a444;
      FUN_028dcf04(local_50,&local_d0);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (ulong *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
      bVar9 = (char)local_48 != '\0';
      if (local_50 != (long *)0x0) {
        lVar14 = local_50[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
    }
  }
  return bVar9;
}


