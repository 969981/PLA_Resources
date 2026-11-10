/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3a960; name: FUN_01b3a960
 */


void FUN_01b3a960(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *local_70 [2];
  long *local_60;
  undefined8 local_58;
  
  uVar11 = *(undefined8 *)(param_1 + 0x5e8);
  FUN_01a74a40(local_70);
  puVar4 = local_70[0];
  puVar6 = PTR_DAT_0437f498;
  puVar5 = PTR_DAT_0437f490;
  if ((local_70[0] != (undefined8 *)0x0) && (*(int *)((long)local_70[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_70[0] + 0xc);
    iVar7 = *(int *)((long)local_70[0] + 0xc);
    do {
      plVar12 = (long *)puVar4[2];
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar9 = FUN_01443f54();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_01b3a994;
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = puVar4[3];
          local_60 = (long *)0x0;
          if (lVar10 != 0) {
            local_60 = (long *)(lVar10 + -0x50);
          }
          goto LAB_01b3a998;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01b3a994:
  local_60 = (long *)0x0;
LAB_01b3a998:
  FUN_01091020(uVar11,param_2,&local_60);
  puVar4 = local_70[0];
  if (local_60 != (long *)0x0) {
    lVar10 = local_60[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      puVar4 = local_70[0];
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = *puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  return;
}


