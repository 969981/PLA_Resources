/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a71784; name: FUN_01a71784
 */


void FUN_01a71784(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_48;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_0095aa3c(&local_68,param_1 + 0x560);
  puVar4 = local_68;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  local_58 = *(long **)(param_1 + 0x570);
  if (local_68 != (undefined8 *)0x0) {
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar8 = *(int *)((long)local_68 + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        plVar12 = local_58;
        if (((*puVar5 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(puVar5), plVar12 = local_58, iVar7 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
          plVar12 = local_58;
        }
        while( true ) {
          local_58 = plVar12;
          if (plVar13 == (long *)0x0) goto LAB_01a71928;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
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
            lVar11 = puVar4[3];
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -8);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
              (**(code **)(*plVar13 + 0x18))(plVar13);
              puVar4 = local_68;
              goto joined_r0x01a71888;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01a71928:
    plVar12 = (long *)0x0;
    puVar4 = local_68;
joined_r0x01a71888:
    local_68 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar12 != (long *)0x0) {
      uVar9 = FUN_0180952c(plVar12);
      if ((uVar9 & 1) != 0) {
        FUN_01809520(plVar12,0);
      }
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  FUN_01a719bc(param_1);
  return;
}


