/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295494c; name: FUN_0295494c
 */


void FUN_0295494c(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined **local_2790;
  undefined2 local_2788;
  undefined4 local_2786;
  undefined2 local_2782;
  undefined1 auStack_2780 [10016];
  
  puVar7 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar12 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04276a78;
  param_1[1] = lVar12;
  param_1[9] = (long)&PTR_FUN_04276ab0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0x689b467ca0fef;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(int *)(param_1 + 0x16) = param_3;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0x689b467ca0fef;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_1[0xe];
  if (param_3 == 0) {
    *(undefined4 *)((long)param_1 + 0xb4) = 0;
    return;
  }
  uVar16 = 0;
  uVar19 = 0;
  iVar9 = 0;
  plVar1 = param_1 + 0x12;
  do {
    local_2790 = &PTR_LAB_04276a58;
    local_2788 = 0;
    local_2782 = 0x2e;
    local_2786 = 0;
    memset(auStack_2780,0,0x2714);
    if (uVar19 < uVar16) {
      FUN_02955688(plVar1,uVar19,&local_2790);
      param_1[0x10] = param_1[0x10] + 0x2728;
    }
    else {
      uVar15 = param_1[0x13];
      lVar10 = (long)(uVar19 - param_1[0xf]) >> 3;
      if (0x7ffffffffffffffe < uVar15) {
        uVar15 = 0x7fffffffffffffff;
      }
      uVar19 = lVar10 * -0x705eccb7e0f1e713 + 1;
      if (uVar15 < uVar19) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar12 = (long)(uVar16 - param_1[0xf]) >> 3;
      uVar16 = lVar12 * 0x1f4266903e1c31da;
      if (uVar19 <= uVar16) {
        uVar19 = uVar16;
      }
      if ((ulong)(lVar12 * -0x705eccb7e0f1e713) < uVar15 >> 1) {
        uVar15 = uVar19;
      }
      if (uVar15 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar15 * 0x2728,8);
        if (lVar12 == 0) {
          (**(code **)(*(long *)*plVar1 + 0xb8))();
        }
      }
      lVar17 = lVar12 + lVar10 * 8;
      FUN_02955688(plVar1,lVar17,&local_2790);
      puVar14 = (undefined8 *)param_1[0xf];
      puVar20 = (undefined8 *)param_1[0x10];
      if (puVar20 == puVar14) {
        lVar10 = lVar17;
        puVar20 = puVar14;
      }
      else {
        lVar13 = lVar12 + lVar10 * 8;
        lVar10 = 0;
        do {
          lVar18 = *plVar1;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar11 == 0) {
            puVar2 = (undefined2 *)(lVar13 + -0x2720 + lVar10);
            *(undefined ***)(lVar13 + -0x2728 + lVar10) = &PTR_LAB_04276a58;
            puVar3 = (undefined2 *)((long)puVar20 + lVar10 + -0x2720);
            bVar4 = *(byte *)(puVar3 + 3);
            bVar5 = *(byte *)(puVar3 + 1);
            uVar6 = puVar3[2];
            *puVar2 = *puVar3;
            puVar2[3] = (ushort)bVar4;
            puVar2[1] = (ushort)bVar5;
            puVar2[2] = uVar6;
            memcpy((void *)(lVar13 + -0x2718 + lVar10),(void *)((long)puVar20 + lVar10 + -0x2718),
                   (ulong)uVar6);
          }
          else {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar18;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            puVar2 = (undefined2 *)((long)puVar20 + lVar10 + -0x2720);
            puVar3 = (undefined2 *)(lVar13 + -0x2720 + lVar10);
            *(undefined ***)(lVar13 + -0x2728 + lVar10) = &PTR_LAB_04276a58;
            bVar4 = *(byte *)(puVar2 + 3);
            bVar5 = *(byte *)(puVar2 + 1);
            uVar6 = puVar2[2];
            *puVar3 = *puVar2;
            puVar3[3] = (ushort)bVar4;
            puVar3[1] = (ushort)bVar5;
            puVar3[2] = uVar6;
            memcpy((void *)(lVar13 + -0x2718 + lVar10),(void *)((long)puVar20 + lVar10 + -0x2718),
                   (ulong)uVar6);
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          lVar10 = lVar10 + -0x2728;
        } while ((long)puVar14 - (long)puVar20 != lVar10);
        puVar14 = (undefined8 *)param_1[0x10];
        lVar10 = lVar17 + lVar10;
        puVar20 = (undefined8 *)param_1[0xf];
      }
      param_1[0xf] = lVar10;
      param_1[0x10] = lVar17 + 0x2728;
      lVar10 = param_1[0x11];
      param_1[0x11] = lVar12 + uVar15 * 0x2728;
      if (puVar14 != puVar20) {
        lVar12 = (long)puVar20 - (long)puVar14;
        do {
          puVar14 = puVar14 + -0x4e5;
          (**(code **)*puVar14)(puVar14);
          lVar12 = lVar12 + 0x2728;
        } while (lVar12 != 0);
      }
      if (puVar20 != (undefined8 *)0x0) {
        plVar21 = (long *)*plVar1;
        uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar19 & 1) != 0) {
          lVar12 = tpidr_el0;
          if (*(char *)(lVar12 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar12 + 0x38d488) = 1;
            *(undefined8 *)(lVar12 + 0x38d478) = 0;
            *(undefined8 *)(lVar12 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar12 + 0x38d480)) {
            FUN_02bcc824(plVar21,puVar20,lVar10 - (long)puVar20,8);
            goto LAB_02954de0;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,puVar20,lVar10 - (long)puVar20,8);
      }
    }
LAB_02954de0:
    iVar9 = iVar9 + 1;
    if (iVar9 == param_3) {
      *(undefined4 *)((long)param_1 + 0xb4) = 0;
      if ((int)param_1[0x16] == 0) {
        return;
      }
      lVar10 = 0;
      uVar19 = 0;
      do {
        lVar12 = param_1[0xf];
        *(undefined8 *)(lVar12 + lVar10 + 8) = 0x2e000000000000;
        memset((void *)(lVar12 + lVar10 + 0x10),0,0x2714);
        uVar19 = uVar19 + 1;
        lVar10 = lVar10 + 0x2728;
      } while (uVar19 < *(uint *)(param_1 + 0x16));
      return;
    }
    uVar19 = param_1[0x10];
    uVar16 = param_1[0x11];
  } while( true );
}


