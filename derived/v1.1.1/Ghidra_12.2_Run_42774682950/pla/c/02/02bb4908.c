/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb4908; name: FUN_02bb4908
 */


void FUN_02bb4908(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar15 = *(long *)(param_1 + 400);
  if (lVar15 == 0) {
    FUN_02bb93c0(&local_98,local_a0,&local_a0);
    lVar15 = local_98;
    local_98 = 0;
    lVar14 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar15;
    if (lVar14 == 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_90;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar14);
      plVar1 = *(long **)(param_1 + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x1a0);
      uVar17 = *(undefined8 *)(param_1 + 0x1a8);
      uVar13 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar13 & 1) == 0) {
LAB_02bb49fc:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar14,uVar2,uVar17);
      }
      else {
        lVar15 = tpidr_el0;
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_02bb49fc;
        FUN_02bcc824(plVar1,lVar14,uVar2,uVar17);
      }
      lVar15 = tpidr_el0;
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar15 + 0x38d480) + -1;
      *(int *)(lVar15 + 0x38d480) = iVar3;
      if (iVar3 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar15 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      lVar15 = *(long *)(param_1 + 400);
      *(undefined8 *)(param_1 + 0x198) = local_90;
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  lVar14 = lVar15;
  if (*(long *)(lVar15 + 0x50) != 0) goto LAB_02bb4c40;
  FUN_02bb9680(&local_98,*(undefined8 *)(param_1 + 8));
  lVar14 = local_98;
  local_98 = 0;
  lVar16 = *(long *)(lVar15 + 0x50);
  *(long *)(lVar15 + 0x50) = lVar14;
  if (lVar16 != 0) {
    FUN_02bcbe58(auStack_78,0);
    plVar1 = *(long **)(lVar15 + 0x58);
    uVar2 = *(undefined8 *)(lVar15 + 0x60);
    uVar17 = *(undefined8 *)(lVar15 + 0x68);
    uVar13 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    lVar14 = tpidr_el0;
    if ((uVar13 & 1) == 0) {
LAB_02bb4b78:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar16,uVar2,uVar17);
    }
    else {
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_02bb4b78;
      FUN_02bcc824(plVar1,lVar16,uVar2,uVar17);
    }
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar14 + 0x38d480) + -1;
    *(int *)(lVar14 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar14 + 0x38d484) = 0;
    }
  }
  *(undefined8 *)(lVar15 + 0x58) = local_90;
  *(undefined1 *)(lVar15 + 0x94) = 1;
  *(undefined8 *)(lVar15 + 0x60) = uStack_88;
  *(undefined8 *)(lVar15 + 0x68) = local_80;
  lVar14 = *(long *)(param_1 + 400);
LAB_02bb4c40:
  lVar14 = *(long *)(lVar14 + 0x50);
  bVar5 = *(int *)(lVar14 + 0xc) != param_2;
  if (bVar5) {
    *(int *)(lVar14 + 0xc) = param_2;
  }
  bVar6 = *(int *)(lVar14 + 0x10) == param_3;
  if (!bVar6) {
    *(int *)(lVar14 + 0x10) = param_3;
  }
  bVar7 = *(int *)(lVar14 + 0x14) == param_4;
  if (!bVar7) {
    *(int *)(lVar14 + 0x14) = param_4;
  }
  bVar8 = *(int *)(lVar14 + 0x18) == param_5;
  if (!bVar8) {
    *(int *)(lVar14 + 0x18) = param_5;
  }
  bVar9 = *(int *)(lVar14 + 0x1c) == param_6;
  if (!bVar9) {
    *(int *)(lVar14 + 0x1c) = param_6;
  }
  bVar10 = *(int *)(lVar14 + 0x20) == param_7;
  if (!bVar10) {
    *(int *)(lVar14 + 0x20) = param_7;
  }
  bVar11 = *(int *)(lVar14 + 0x24) == param_8;
  if (!bVar11) {
    *(int *)(lVar14 + 0x24) = param_8;
  }
  bVar12 = *(int *)(lVar14 + 0x28) == param_9;
  if (!bVar12) {
    *(int *)(lVar14 + 0x28) = param_9;
  }
  if (!bVar5 && ((bVar6 && !bVar5) &&
                ((bVar7 && (bVar6 && !bVar5)) &&
                ((bVar8 && (bVar7 && (bVar6 && !bVar5))) &&
                ((bVar9 && (bVar8 && (bVar7 && (bVar6 && !bVar5)))) &&
                ((bVar10 && (bVar9 && (bVar8 && (bVar7 && (bVar6 && !bVar5))))) &&
                ((bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar7 && (bVar6 && !bVar5)))))) &&
                (bVar12 &&
                (bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar7 && (bVar6 && !bVar5)))))))))))))) {
    if ((*(char *)(lVar15 + 0x94) == '\0') && (!bVar4)) {
      return;
    }
  }
  else {
    *(undefined1 *)(lVar15 + 0x94) = 1;
  }
  lVar14 = *(long *)(param_1 + 0x240);
  for (lVar15 = *(long *)(param_1 + 0x238); lVar15 != lVar14; lVar15 = lVar15 + 0x18) {
    *(undefined1 *)(lVar15 + 0x10) = 1;
  }
  return;
}


