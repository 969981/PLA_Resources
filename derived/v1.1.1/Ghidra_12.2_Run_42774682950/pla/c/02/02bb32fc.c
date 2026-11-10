/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb32fc; name: FUN_02bb32fc
 */


void FUN_02bb32fc(long param_1,byte param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(param_1 + 8);
  lVar9 = *(long *)(param_1 + 400);
  if (lVar9 == 0) {
    FUN_02bb93c0(&local_98,uStack_58,&uStack_58);
    lVar9 = local_98;
    local_98 = 0;
    lVar6 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar9;
    if (lVar6 == 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar6);
      plVar1 = *(long **)(param_1 + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x1a0);
      uVar8 = *(undefined8 *)(param_1 + 0x1a8);
      uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar5 & 1) == 0) {
LAB_02bb33cc:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar8);
      }
      else {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02bb33cc;
        FUN_02bcc824(plVar1,lVar6,uVar2,uVar8);
      }
      lVar9 = tpidr_el0;
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar9 + 0x38d480) + -1;
      *(int *)(lVar9 + 0x38d480) = iVar3;
      if (iVar3 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar9 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      lVar9 = *(long *)(param_1 + 400);
    }
    *(undefined8 *)(param_1 + 0x198) = local_90;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  lVar6 = lVar9;
  if (*(long *)(lVar9 + 0x50) != 0) goto LAB_02bb35e8;
  FUN_02bb9680(&local_98,*(undefined8 *)(param_1 + 8));
  lVar6 = local_98;
  local_98 = 0;
  lVar7 = *(long *)(lVar9 + 0x50);
  *(long *)(lVar9 + 0x50) = lVar6;
  if (lVar7 != 0) {
    FUN_02bcbe58(auStack_78,0);
    plVar1 = *(long **)(lVar9 + 0x58);
    uVar2 = *(undefined8 *)(lVar9 + 0x60);
    uVar8 = *(undefined8 *)(lVar9 + 0x68);
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    lVar6 = tpidr_el0;
    if ((uVar5 & 1) == 0) {
LAB_02bb3530:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,uVar2,uVar8);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02bb3530;
      FUN_02bcc824(plVar1,lVar7,uVar2,uVar8);
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
  *(undefined8 *)(lVar9 + 0x58) = local_90;
  *(undefined1 *)(lVar9 + 0x94) = 1;
  *(undefined8 *)(lVar9 + 0x60) = uStack_88;
  *(undefined8 *)(lVar9 + 0x68) = local_80;
  lVar6 = *(long *)(param_1 + 400);
LAB_02bb35e8:
  if (**(byte **)(lVar6 + 0x50) == (param_2 & 1)) {
    if ((*(char *)(lVar9 + 0x94) == '\0') && (!bVar4)) {
      return;
    }
  }
  else {
    **(byte **)(lVar6 + 0x50) = param_2 & 1;
    *(undefined1 *)(lVar9 + 0x94) = 1;
  }
  lVar6 = *(long *)(param_1 + 0x240);
  for (lVar9 = *(long *)(param_1 + 0x238); lVar9 != lVar6; lVar9 = lVar9 + 0x18) {
    *(undefined1 *)(lVar9 + 0x10) = 1;
  }
  return;
}


