/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb27d4; name: FUN_02bb27d4
 */


void FUN_02bb27d4(long param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 400);
  if (lVar10 == 0) {
    FUN_02bb93c0(&local_98,local_a0,&local_a0);
    lVar10 = local_98;
    local_98 = 0;
    lVar6 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar10;
    if (lVar6 == 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar6);
      plVar1 = *(long **)(param_1 + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x1a0);
      uVar9 = *(undefined8 *)(param_1 + 0x1a8);
      uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar5 & 1) == 0) {
LAB_02bb28ac:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar9);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02bb28ac;
        FUN_02bcc824(plVar1,lVar6,uVar2,uVar9);
      }
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar3;
      if (iVar3 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar10 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      lVar10 = *(long *)(param_1 + 400);
    }
    *(undefined8 *)(param_1 + 0x198) = local_90;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  lVar6 = lVar10;
  if (*(long *)(lVar10 + 0x10) == 0) {
    FUN_02bb9580(&local_98,*(undefined8 *)(param_1 + 8));
    lVar6 = local_98;
    local_98 = 0;
    lVar8 = *(long *)(lVar10 + 0x10);
    *(long *)(lVar10 + 0x10) = lVar6;
    if (lVar8 != 0) {
      FUN_02bcbe58(auStack_78,0);
      plVar1 = *(long **)(lVar10 + 0x18);
      uVar2 = *(undefined8 *)(lVar10 + 0x20);
      uVar9 = *(undefined8 *)(lVar10 + 0x28);
      uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      lVar6 = tpidr_el0;
      if ((uVar5 & 1) == 0) {
LAB_02bb2a0c:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,uVar2,uVar9);
      }
      else {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02bb2a0c;
        FUN_02bcc824(plVar1,lVar8,uVar2,uVar9);
      }
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar6 + 0x38d480) + -1;
      *(int *)(lVar6 + 0x38d480) = iVar3;
      if (iVar3 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar6 + 0x38d484) = 0;
      }
    }
    *(undefined8 *)(lVar10 + 0x18) = local_90;
    *(undefined1 *)(lVar10 + 0x3c) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uStack_88;
    *(undefined8 *)(lVar10 + 0x28) = local_80;
    lVar6 = *(long *)(param_1 + 400);
  }
  piVar7 = *(int **)(lVar6 + 0x10);
  iVar3 = piVar7[1];
  if (iVar3 != param_2) {
    piVar7[1] = param_2;
  }
  if (*piVar7 == param_3) {
    if (iVar3 == param_2) {
      if ((*(char *)(lVar10 + 0x3c) == '\0') && (!bVar4)) {
        return;
      }
      goto LAB_02bb2b10;
    }
  }
  else {
    *piVar7 = param_3;
  }
  *(undefined1 *)(lVar10 + 0x3c) = 1;
LAB_02bb2b10:
  lVar6 = *(long *)(param_1 + 0x240);
  for (lVar10 = *(long *)(param_1 + 0x238); lVar10 != lVar6; lVar10 = lVar10 + 0x18) {
    *(undefined1 *)(lVar10 + 0x10) = 1;
  }
  return;
}


