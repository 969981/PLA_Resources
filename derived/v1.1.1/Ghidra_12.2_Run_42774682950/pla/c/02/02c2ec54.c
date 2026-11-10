/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2ec54; name: FUN_02c2ec54
 */


void FUN_02c2ec54(long *param_1,ushort *param_2)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  ushort *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  long lVar17;
  long lVar18;
  ushort *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined1 auStack_68 [24];
  
  param_1[7] = 0;
  puVar5 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar17 = 0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x80) == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04289e38;
  param_1[1] = lVar17;
  uVar12 = 0;
  param_1[9] = (long)&PTR_LAB_04289e70;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar11 = param_2;
  do {
    if (*puVar11 == 0x10) {
      lVar9 = (ulong)puVar11[1] + 2;
      puVar11 = puVar11 + lVar9;
    }
    else {
      if (*puVar11 == 0) break;
      puVar11 = puVar11 + 1;
      lVar9 = 1;
    }
    uVar12 = (int)lVar9 + uVar12;
  } while (uVar12 < 0x800);
  *(short *)((long)param_1 + 0x7a) = (short)uVar12;
  *(short *)(param_1 + 0xf) = (short)(uVar12 + 1);
  FUN_02c2f150(&local_88,lVar17,uVar12 + 1 & 0xffff);
  puVar11 = local_88;
  local_88 = (ushort *)0x0;
  lVar17 = param_1[0xb];
  param_1[0xb] = (long)puVar11;
  if (lVar17 == 0) {
    param_1[0xd] = lStack_78;
    param_1[0xe] = local_70;
    param_1[0xc] = local_80;
    goto joined_r0x02c2ef90;
  }
  FUN_02bcbe58(auStack_68,0);
  plVar2 = (long *)param_1[0xc];
  lVar9 = param_1[0xd];
  lVar18 = param_1[0xe];
  uVar10 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar4 = tpidr_el0;
  if ((uVar10 & 1) == 0) {
LAB_02c2edbc:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar17,lVar9,lVar18);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c2edbc;
    FUN_02bcc824(plVar2,lVar17,lVar9,lVar18);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar8 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar8;
  if (iVar8 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  param_1[0xc] = local_80;
  puVar11 = (ushort *)param_1[0xb];
  param_1[0xd] = lStack_78;
  param_1[0xe] = local_70;
joined_r0x02c2ef90:
  if (puVar11 != (ushort *)0x0) {
    uVar12 = (uint)*(ushort *)(param_1 + 0xf);
    if (*(ushort *)(param_1 + 0xf) != 0) {
      iVar8 = 0;
      do {
        while( true ) {
          uVar3 = *param_2;
          *puVar11 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_02c2efa8;
          puVar11 = puVar11 + 1;
          param_2 = param_2 + 1;
          iVar8 = iVar8 + 1;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_02c2ef98;
        }
        uVar3 = param_2[1];
        uVar1 = uVar3 + 2;
        bVar7 = uVar12 < uVar1;
        uVar12 = uVar12 - uVar1;
        if (bVar7 || uVar12 == 0) {
          *puVar11 = 0;
          goto LAB_02c2efa8;
        }
        uVar13 = uVar3 + 1;
        uVar15 = uVar13 & 7;
        puVar14 = puVar11 + 1;
        *puVar14 = uVar3;
        puVar6 = param_2 + 1;
        puVar16 = param_2;
        if (uVar15 != 0) {
          lVar17 = 0;
          do {
            lVar9 = lVar17;
            uVar13 = uVar13 - 1;
            uVar15 = uVar15 - 1;
            *(undefined2 *)((long)puVar11 + lVar9 + 4) = *(undefined2 *)((long)param_2 + lVar9 + 4);
            lVar17 = lVar9 + 2;
          } while (uVar15 != 0);
          puVar14 = (ushort *)((long)puVar11 + lVar9 + 4);
          puVar16 = (ushort *)((long)param_2 + lVar9 + 2);
          puVar6 = puVar16 + 1;
          puVar11 = puVar14;
        }
        param_2 = puVar6;
        if (6 < uVar3) {
          puVar11 = puVar14;
          do {
            puVar11[1] = puVar16[2];
            puVar11[2] = param_2[2];
            puVar11[3] = param_2[3];
            puVar11[4] = param_2[4];
            puVar11[5] = param_2[5];
            puVar11[6] = param_2[6];
            puVar16 = param_2 + 7;
            puVar11[7] = *puVar16;
            param_2 = param_2 + 8;
            uVar13 = uVar13 - 8;
            puVar11 = puVar11 + 8;
            *puVar11 = *param_2;
          } while (uVar13 != 0);
        }
        iVar8 = uVar1 + iVar8;
      } while (uVar12 != 0);
LAB_02c2ef98:
      if (iVar8 != 0) {
        puVar11[-1] = 0;
      }
    }
LAB_02c2efa8:
    *(undefined1 *)((long)param_1 + 0x7c) = 1;
  }
  return;
}


