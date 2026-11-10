/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bcd1a4; name: FUN_01bcd1a4
 */


void FUN_01bcd1a4(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_0437a150;
  puVar5 = PTR_DAT_0437a148;
  lVar12 = *param_2;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar10 = FUN_009b19b4();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == (long *)puVar6) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          plVar13 = (long *)(lVar12 + -0x50);
          if (lVar12 == 0) {
            return;
          }
          FUN_00b1b5bc(param_1 + 0x240,param_2);
          local_f0 = (undefined8 *)0x0;
          local_e8 = 0;
          FUN_00b1b5bc(&local_f0,param_2);
          local_e0 = (undefined1 *)0x0;
          local_d8 = (code *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (undefined1 *)0x0;
          local_b8 = 0;
          uStack_b0 = 0;
          lStack_c0 = param_1;
          FUN_00ab196c(&local_b8,&local_f0);
          local_e0 = &LAB_01bcd904;
          local_d8 = FUN_01bcdec0;
          local_d0 = &LAB_01bcdf80;
          local_c8 = &LAB_01bcdfa0;
          FUN_02a9ce58(plVar13,&local_e0);
          pcVar7 = local_d8;
          if (local_d8 == (code *)0x0) {
            local_d8 = (code *)0x0;
            puVar4 = local_f0;
          }
          else {
            local_d0 = (undefined1 *)0x0;
            local_c8 = (undefined1 *)0x0;
            local_e0 = (undefined1 *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar7)(&lStack_c0);
            puVar4 = local_f0;
          }
          local_f0 = puVar4;
          if (puVar4 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar4 + 1);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              puVar4[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_58 = *puVar4;
              FUN_02a44274(lVar11 + 0xd8,&local_58);
            }
          }
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


