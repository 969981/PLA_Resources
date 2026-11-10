/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bc8630; name: FUN_01bc8630
 */


void FUN_01bc8630(long param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *local_50;
  undefined8 local_48;
  
  *(undefined4 *)(param_1 + 0x208) = *param_2;
  uVar9 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x248) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x228) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x210) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x230) = uVar9;
  puVar4 = PTR_DAT_04379498;
  uVar9 = *(undefined8 *)(param_2 + 0x16);
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar8 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar8;
  FUN_02a44e0c(&local_50,uVar8,uVar9);
  puVar10 = *(undefined8 **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (local_50 == (undefined8 *)0x0) {
    uVar9 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 1) {
        puVar10[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)puVar5;
        *(long *)puVar6 = lVar11;
        local_48 = *puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
      uVar9 = 0;
    }
  }
  else {
    puVar12 = local_50;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
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
        puVar10[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar11 = *(long *)puVar5;
        *(long *)puVar6 = lVar11;
        local_48 = *puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
      puVar12 = local_50;
    }
    local_50 = (undefined8 *)0x0;
    *(undefined8 **)(param_1 + 0x250) = puVar12;
  }
  puVar10 = local_50;
  *(undefined8 *)(param_1 + 600) = uVar9;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
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
      local_50[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_48 = *puVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x264) = param_2[0x19];
  return;
}


