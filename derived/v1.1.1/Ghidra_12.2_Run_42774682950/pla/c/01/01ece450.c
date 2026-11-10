/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ece450; name: FUN_01ece450
 */


void FUN_01ece450(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long *plStack_50;
  undefined8 local_48;
  
  uVar15 = param_1[4];
  lVar13 = param_1[1] - *param_1 >> 4;
  if (0x7ffffffffffffffe < uVar15) {
    uVar15 = 0x7fffffffffffffff;
  }
  uVar1 = lVar13 * -0x5555555555555555 + 1;
  if (uVar15 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_1[2] - *param_1 >> 4;
  uVar14 = lVar10 * 0x5555555555555556;
  if (uVar1 <= uVar14) {
    uVar1 = uVar14;
  }
  plVar16 = param_1 + 3;
  local_58 = 0;
  if ((ulong)(lVar10 * -0x5555555555555555) < uVar15 >> 1) {
    uVar15 = uVar1;
  }
  plStack_50 = plVar16;
  if (uVar15 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar15 * 0x30,8);
    if (local_70 == 0) {
      (**(code **)(*(long *)*plVar16 + 0xb8))();
    }
  }
  lVar13 = local_70 + lVar13 * 0x10;
  local_58 = local_70 + uVar15 * 0x30;
  local_68 = lVar13;
  FUN_01ece73c(plVar16,lVar13,param_2);
  local_60 = lVar13 + 0x30;
  FUN_01ece844(param_1,&local_70);
  lVar10 = local_68;
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar13 = local_70;
  while (lVar11 = local_60, local_70 = lVar13, local_60 != lVar10) {
    while( true ) {
      local_60 = lVar11 + -0x30;
      puVar12 = *(undefined8 **)(lVar11 + -0x30);
      if (puVar12 != (undefined8 *)0x0) break;
      lVar11 = local_60;
      if (local_60 == lVar10) goto LAB_01ece53c;
    }
    piVar2 = (int *)(puVar12 + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      puVar12[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar5);
      }
      lVar13 = *(long *)puVar6;
      *(long *)puVar7 = lVar13;
      local_48 = *puVar12;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
      lVar13 = local_70;
    }
  }
LAB_01ece53c:
  if (lVar13 != 0) {
    lVar10 = local_58 - lVar13;
    plVar16 = (long *)*plStack_50;
    uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar15 & 1) != 0) {
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar11 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar13,lVar10,8);
        return;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar10,8);
  }
  return;
}


