/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb5600; name: FUN_02bb5600
 */


void FUN_02bb5600(long param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  local_90 = *(undefined8 *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 400);
  if (lVar7 != 0) {
    bVar4 = false;
    goto LAB_02bb579c;
  }
  FUN_02bb93c0(&local_88,local_90,&local_90);
  lVar7 = local_88;
  local_88 = 0;
  lVar8 = *(long *)(param_1 + 400);
  *(long *)(param_1 + 400) = lVar7;
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x1a0) = uStack_78;
    *(undefined8 *)(param_1 + 0x1a8) = local_70;
    *(undefined8 *)(param_1 + 0x198) = local_80;
  }
  else {
    FUN_02bcbe58(auStack_68,0);
    FUN_02bad2b8(lVar8);
    plVar1 = *(long **)(param_1 + 0x198);
    uVar2 = *(undefined8 *)(param_1 + 0x1a0);
    uVar9 = *(undefined8 *)(param_1 + 0x1a8);
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    lVar7 = tpidr_el0;
    if ((uVar6 & 1) == 0) {
LAB_02bb56d4:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,uVar2,uVar9);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02bb56d4;
      FUN_02bcc824(plVar1,lVar8,uVar2,uVar9);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
    *(undefined8 *)(param_1 + 0x198) = local_80;
    lVar7 = *(long *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x1a0) = uStack_78;
    *(undefined8 *)(param_1 + 0x1a8) = local_70;
  }
  bVar4 = true;
LAB_02bb579c:
  bVar5 = *(int *)(lVar7 + 0x8c) != param_2;
  if (bVar5) {
    *(int *)(lVar7 + 0x8c) = param_2;
  }
  if (*(int *)(lVar7 + 0x90) == param_3) {
    if ((!bVar5) && (!bVar4)) {
      return;
    }
  }
  else {
    *(int *)(lVar7 + 0x90) = param_3;
  }
  lVar8 = *(long *)(param_1 + 0x240);
  for (lVar7 = *(long *)(param_1 + 0x238); lVar7 != lVar8; lVar7 = lVar7 + 0x18) {
    *(undefined1 *)(lVar7 + 0x10) = 1;
  }
  return;
}


