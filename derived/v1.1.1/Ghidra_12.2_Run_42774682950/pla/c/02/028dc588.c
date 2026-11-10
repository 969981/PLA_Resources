/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dc588; name: FUN_028dc588
 */


void FUN_028dc588(long *param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  uint *puVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined1 *local_98;
  char *pcStack_90;
  size_t local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  plVar7 = (long *)(**(code **)(*param_1 + 0x100))();
  lVar9 = *(long *)(param_2 + 8);
  piVar10 = (int *)0x0;
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x1e1) == '\0') {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)((long)*(uint **)(lVar9 + 0x250) + (ulong)**(uint **)(lVar9 + 0x250));
    }
  }
  if (*(ushort *)((long)piVar10 - (long)*piVar10) < 5) {
    return;
  }
  uVar13 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2];
  if (uVar13 == 0) {
    return;
  }
  puVar19 = (uint *)((long)piVar10 + uVar13);
  piVar10 = (int *)((long)puVar19 + (ulong)*puVar19);
  if (piVar10 == (int *)0x0) {
    return;
  }
  lVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,0x380,8);
  if (lVar9 == 0) {
    lVar21 = 0;
    lVar22 = 0;
    plVar7 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_028e85e0(lVar9,plVar7,param_1[0x4c],piVar10);
    lVar22 = 0x380;
    lVar21 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = param_1[0x4d];
  param_1[0x4d] = lVar9;
  if (lVar8 == 0) goto LAB_028dc7d8;
  FUN_02bcbe58(&local_98,0);
  FUN_028dfd0c(lVar8);
  plVar20 = (long *)param_1[0x4e];
  lVar16 = param_1[0x4f];
  lVar18 = param_1[0x50];
  uVar13 = (**(code **)(*plVar20 + 0xc0))(plVar20);
  lVar9 = tpidr_el0;
  if ((uVar13 & 1) == 0) {
LAB_028dc734:
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar8,lVar16,lVar18);
  }
  else {
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_028dc734;
    FUN_02bcc824(plVar20,lVar8,lVar16,lVar18);
  }
  if (*(char *)(lVar9 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar9 + 0x38d488) = 1;
    *(undefined8 *)(lVar9 + 0x38d478) = 0;
    *(undefined8 *)(lVar9 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar9 + 0x38d480) + -1;
  *(int *)(lVar9 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar9 + 0x38d484) = 0;
  }
  lVar9 = param_1[0x4d];
LAB_028dc7d8:
  param_1[0x4e] = (long)plVar7;
  param_1[0x4f] = lVar22;
  param_1[0x50] = lVar21;
  (**(code **)(*(long *)param_1[0x4c] + 0x20))((long *)param_1[0x4c],lVar9);
  puVar1 = (uint *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  puVar19 = puVar1 + 1;
  uVar13 = (ulong)*puVar1;
  if (uVar13 != 0) {
    puVar1 = puVar19 + uVar13;
    plVar7 = param_1 + 0x12;
    do {
      piVar10 = (int *)((long)puVar19 + (ulong)*puVar19);
      if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar13 == 0)) {
        lVar9 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar10 + uVar13);
        lVar9 = (long)puVar2 + (ulong)*puVar2;
      }
      local_88 = strlen((char *)(lVar9 + 4));
      bVar4 = *(byte *)(lVar9 + 4);
      local_98 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        local_98 = &DAT_cbf29ce484222645;
        pbVar15 = (byte *)(lVar9 + 5);
        do {
          local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar4 != 0);
      }
      uStack_80 = 0;
      pcStack_90 = (char *)(lVar9 + 4);
      uVar13 = FUN_028dcc5c(param_1,&local_98);
      if ((uVar13 & 0xff) != 0) {
        lVar9 = param_1[0x14];
        if ((ulong)(param_1[0x15] - lVar9 >> 5) <= uVar13 >> 0x20) {
LAB_028dcc4c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar21 = param_1[0x4d];
        uVar14 = *(ulong *)(lVar21 + 0x78);
        *(ulong *)(lVar21 + 0x78) = uVar14 + 1;
        if ((ulong)((*(long *)(lVar21 + 0x48) - *(long *)(lVar21 + 0x40) >> 4) * 0x6db6db6db6db6db7)
            <= uVar14) goto LAB_028dcc4c;
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar11 == 0)) {
          lVar22 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar10 + uVar11);
          lVar22 = (long)puVar2 + (ulong)*puVar2;
        }
        plVar20 = (long *)FUN_028e7d10(*(long *)(lVar21 + 0x40) + uVar14 * 0x70,plVar7,lVar22);
        plVar12 = (long *)param_1[0x4d];
        uVar14 = plVar12[7];
        plVar12[7] = uVar14 + 1;
        lVar21 = *plVar12;
        if ((ulong)((plVar12[1] - lVar21 >> 3) * -0x1111111111111111) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        puVar3 = (undefined8 *)(lVar9 + (uVar13 >> 0x20) * 0x20);
        lVar9 = lVar21 + uVar14 * 0x78;
        uVar17 = *puVar3;
        *(long **)(lVar9 + 8) = plVar20;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x40))(&local_78,plVar20,plVar7,uVar17,lVar9);
        *(undefined8 *)(lVar9 + 0x18) = local_78;
        *(undefined8 *)(lVar9 + 0x20) = local_70;
        *(undefined8 *)(lVar9 + 0x28) = local_68;
        (**(code **)(**(long **)(lVar9 + 8) + 0x38))(&local_78,*(long **)(lVar9 + 8),plVar7,uVar17);
        *(undefined8 *)(lVar9 + 0x38) = local_70;
        *(undefined8 *)(lVar9 + 0x40) = local_68;
        *(undefined8 *)(lVar9 + 0x30) = local_78;
        uVar17 = (**(code **)(**(long **)(lVar9 + 8) + 0x48))(*(long **)(lVar9 + 8),plVar7,uVar17);
        *(undefined8 *)(lVar9 + 0x48) = uVar17;
        if (*(long *)(lVar9 + 0x20) == 0) {
LAB_028dc850:
          plVar20 = (long *)0x0;
        }
        else {
          lVar22 = *(long *)(lVar21 + uVar14 * 0x78 + 0x28);
          lVar8 = lVar22 * *(long *)(lVar9 + 0x20);
          if (lVar8 == 0) goto LAB_028dc850;
          plVar12 = *(long **)(lVar9 + 0x18);
          lVar16 = 0;
          plVar20 = plVar12;
          do {
            iVar6 = (**(code **)(*plVar20 + 0x30))(plVar20);
            if (iVar6 == 2) goto LAB_028dc854;
            plVar20 = (long *)((long)plVar12 + lVar16 + lVar22);
            lVar16 = lVar16 + lVar22;
          } while (lVar8 != lVar16);
          plVar20 = (long *)0x0;
        }
LAB_028dc854:
        *(long **)(lVar21 + uVar14 * 0x78 + 0x50) = plVar20;
        plVar20 = (long *)*puVar3;
        (**(code **)(*plVar20 + 0x60))(plVar20,lVar9);
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar1);
  }
  return;
}


