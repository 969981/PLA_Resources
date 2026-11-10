/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091c398; name: FUN_0091c398
 */


uint FUN_0091c398(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 *local_b8;
  long local_b0;
  long *plStack_a8;
  long local_88;
  long local_80;
  long local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_44 [4];
  
  uVar12 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  uVar13 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),param_3);
  uVar5 = FUN_00931fe0();
  uVar6 = FUN_00932070(uVar13);
  uVar7 = FUN_00931f40(uVar13);
  plStack_70 = *(long **)(param_1 + 8);
  iVar11 = 0;
  local_58 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0;
  iVar9 = 0;
  do {
    iVar8 = FUN_0293e2a0(iVar11,uVar7);
    if ((iVar9 < iVar8) || (local_88 == local_80)) {
      local_80 = local_88;
LAB_0091c430:
      local_c0 = (undefined1)iVar11;
      FUN_0091c948(&local_88,&local_c0);
    }
    else {
      bVar4 = iVar9 == iVar8;
      iVar8 = iVar9;
      if (bVar4) {
        goto LAB_0091c430;
      }
    }
    iVar11 = iVar11 + 1;
    iVar9 = iVar8;
  } while (iVar11 != 0x12);
  if ((ulong)(local_80 - local_88) < 2) goto LAB_0091c698;
  FUN_0091ccc0(&local_c0,&local_88);
  puVar3 = local_b8;
  puVar17 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
  local_80 = local_88;
  if (puVar17 != local_b8) {
    iVar11 = 0;
    do {
      local_44[0] = *puVar17;
      iVar9 = FUN_0293e1f0(uVar5);
      if (iVar9 < iVar11 || local_88 == local_80) {
        local_80 = local_88;
LAB_0091c4bc:
        FUN_0091c99c(&local_88,local_44);
        iVar11 = iVar9;
      }
      else {
        bVar4 = iVar11 == iVar9;
        iVar9 = iVar11;
        if (bVar4) goto LAB_0091c4bc;
      }
      puVar17 = puVar17 + 1;
    } while (puVar3 != puVar17);
    puVar17 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
  }
  plVar2 = plStack_a8;
  if (puVar17 != (undefined1 *)0x0) {
    lVar16 = local_b0 - (long)puVar17;
    local_b8 = puVar17;
    uVar14 = (**(code **)(*plStack_a8 + 0xc0))(plStack_a8);
    if ((uVar14 & 1) != 0) {
      lVar15 = tpidr_el0;
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar15 + 0x38d480)) {
        FUN_02bcc824(plVar2,puVar17,lVar16,1);
        goto LAB_0091c588;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar17,lVar16,1);
  }
LAB_0091c588:
  if (1 < (ulong)(local_80 - local_88)) {
    FUN_0091ccc0(&local_c0,&local_88);
    puVar3 = local_b8;
    puVar17 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
    local_80 = local_88;
    if (puVar17 != local_b8) {
      iVar11 = 0;
      do {
        local_44[0] = *puVar17;
        iVar9 = FUN_0293e1f0(uVar6);
        if (iVar9 < iVar11 || local_88 == local_80) {
          local_80 = local_88;
LAB_0091c5c8:
          FUN_0091c99c(&local_88,local_44);
          iVar11 = iVar9;
        }
        else {
          bVar4 = iVar11 == iVar9;
          iVar9 = iVar11;
          if (bVar4) goto LAB_0091c5c8;
        }
        puVar17 = puVar17 + 1;
      } while (puVar3 != puVar17);
      puVar17 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
    }
    if (puVar17 != (undefined1 *)0x0) {
      local_b8 = puVar17;
      uVar14 = (**(code **)(*plStack_a8 + 0xc0))(plStack_a8);
      if ((uVar14 & 1) != 0) {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plStack_a8,puVar17,local_b0 - (long)puVar17,1);
          goto LAB_0091c698;
        }
      }
      (**(code **)(*plStack_a8 + 0x18))(plStack_a8,puVar17,local_b0 - (long)puVar17,1);
    }
  }
LAB_0091c698:
  if (local_80 == local_88) {
    uVar10 = FUN_00931fe0(uVar12);
    lVar16 = local_88;
    plVar2 = plStack_70;
  }
  else {
    uVar12 = FUN_00923bf0(*(undefined8 *)(param_1 + 0x68));
    iVar11 = FUN_009273d4(uVar12,(int)local_80 - (int)local_88);
    uVar10 = (uint)*(byte *)(local_88 + iVar11);
    lVar16 = local_88;
    plVar2 = plStack_70;
  }
  if (lVar16 != 0) {
    lVar15 = local_78 - lVar16;
    local_88 = lVar16;
    local_80 = lVar16;
    plStack_70 = plVar2;
    uVar14 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar14 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar16,lVar15,1);
        return uVar10;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar16,lVar15,1);
  }
  return uVar10;
}


