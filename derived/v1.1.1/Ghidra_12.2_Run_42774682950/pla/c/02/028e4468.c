/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e4468; name: FUN_028e4468
 */


void FUN_028e4468(long param_1,int *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ushort uVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  long *plVar22;
  uint *puVar23;
  long *plVar24;
  long lVar25;
  undefined1 *puVar26;
  long *plVar27;
  long lVar28;
  undefined8 *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar18 = (ushort *)((long)param_2 - (long)*param_2);
  uVar16 = *puVar18;
  if (uVar16 < 0xb) {
    return;
  }
  uVar19 = (ulong)puVar18[5];
  lVar10 = -(long)*param_2;
  if ((uVar19 == 0) ||
     (puVar23 = (uint *)((long)param_2 + uVar19), piVar20 = (int *)((long)puVar23 + (ulong)*puVar23)
     , piVar20 == (int *)0x0)) goto LAB_028e4c04;
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
     (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar19 == 0)) {
    piVar20 = (int *)0x0;
    plVar24 = *(long **)(param_1 + 0x1e8);
  }
  else {
    puVar23 = (uint *)((long)piVar20 + uVar19);
    piVar20 = (int *)((long)puVar23 + (ulong)*puVar23);
    plVar24 = *(long **)(param_1 + 0x1e8);
  }
  if (plVar24 == (long *)0x0) {
    plVar24 = *(long **)(param_1 + 8);
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x28,8);
  if (puVar7 == (undefined8 *)0x0) {
    local_88 = 0;
    local_80 = 0;
    local_98 = (undefined8 *)0x0;
    local_90 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar3 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar24;
    puVar26 = &DAT_cbf29ce484222645;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    puVar7[4] = 0;
    *puVar7 = piVar20;
    puVar7[1] = &DAT_cbf29ce484222645;
    puVar7[2] = &DAT_03996322;
    puVar7[3] = 0;
    if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar19 == 0)) {
      lVar13 = 0;
    }
    else {
      puVar23 = (uint *)((long)piVar20 + uVar19);
      lVar13 = (long)puVar23 + (ulong)*puVar23;
    }
    sVar8 = strlen((char *)(lVar13 + 4));
    bVar2 = *(byte *)(lVar13 + 4);
    if (bVar2 != 0) {
      pbVar11 = (byte *)(lVar13 + 5);
      do {
        puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar2 != 0);
    }
    puVar7[1] = puVar26;
    puVar7[2] = (char *)(lVar13 + 4);
    puVar7[3] = sVar8;
    puVar7[4] = 0;
    local_88 = 0x28;
    local_80 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_98 = puVar7;
    local_90 = plVar24;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x270);
  puVar9 = *(undefined8 **)(param_1 + 0x278);
  if (puVar12 == puVar9) {
    puVar9 = puVar12;
LAB_028e46d8:
    puVar7 = (undefined8 *)(param_1 + 0x288);
    if (puVar9 < *(undefined8 **)(param_1 + 0x280)) {
      FUN_028e5dc8(puVar7,puVar9,&local_98);
      *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x278) + 0x20;
    }
    else {
      uVar21 = *(ulong *)(param_1 + 0x290);
      lVar10 = (long)puVar9 - (long)puVar12 >> 5;
      uVar19 = lVar10 + 1;
      if (0x7ffffffffffffffe < uVar21) {
        uVar21 = 0x7fffffffffffffff;
      }
      if (uVar21 < uVar19) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar13 = (long)*(undefined8 **)(param_1 + 0x280) - (long)puVar12;
      if ((ulong)(lVar13 >> 5) < uVar21 >> 1) {
        uVar14 = lVar13 >> 4;
        uVar21 = uVar19;
        if (uVar19 <= uVar14) {
          uVar21 = uVar14;
        }
      }
      if (uVar21 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,uVar21 << 5,8);
        if (lVar13 == 0) {
          (**(code **)(*(long *)*puVar7 + 0xb8))();
        }
      }
      lVar25 = lVar13 + lVar10 * 0x20;
      FUN_028e5dc8(puVar7,lVar25,&local_98);
      plVar27 = *(long **)(param_1 + 0x270);
      lVar10 = lVar25 + 0x20;
      plVar24 = *(long **)(param_1 + 0x278);
      if (plVar24 == plVar27) {
        plVar24 = plVar27;
      }
      else {
        do {
          lVar25 = lVar25 + -0x20;
          plVar24 = plVar24 + -4;
          FUN_028e5dc8(puVar7,lVar25,plVar24);
        } while (plVar27 != plVar24);
        plVar27 = *(long **)(param_1 + 0x270);
        plVar24 = *(long **)(param_1 + 0x278);
      }
      lVar15 = *(long *)(param_1 + 0x280);
      *(long *)(param_1 + 0x270) = lVar25;
      *(long *)(param_1 + 0x278) = lVar10;
      *(ulong *)(param_1 + 0x280) = lVar13 + uVar21 * 0x20;
      if (plVar24 != plVar27) {
        lVar10 = tpidr_el0;
        do {
          plVar22 = plVar24 + -4;
          lVar13 = *plVar22;
          *plVar22 = 0;
          if (lVar13 != 0) {
            FUN_02bcbe58(auStack_78,0);
            if (*(long **)(lVar13 + 0x20) != (long *)0x0) {
              (**(code **)(**(long **)(lVar13 + 0x20) + 0x20))();
            }
            plVar1 = (long *)plVar24[-3];
            lVar25 = plVar24[-2];
            lVar28 = plVar24[-1];
            uVar19 = (**(code **)(*plVar1 + 0xc0))(plVar1);
            if ((uVar19 & 1) == 0) {
LAB_028e48bc:
              (**(code **)(*plVar1 + 0x18))(plVar1,lVar13,lVar25,lVar28);
            }
            else {
              if (*(char *)(lVar10 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar10 + 0x38d488) = 1;
                *(undefined8 *)(lVar10 + 0x38d478) = 0;
                *(undefined8 *)(lVar10 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e48bc;
              FUN_02bcc824(plVar1,lVar13,lVar25,lVar28);
            }
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
            *(int *)(lVar10 + 0x38d480) = iVar6;
            if (iVar6 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar10 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar10 + 0x38d488) = 1;
                *(undefined8 *)(lVar10 + 0x38d478) = 0;
                *(undefined8 *)(lVar10 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)(lVar10 + 0x38d484) = 0;
            }
          }
          plVar24 = plVar22;
        } while (plVar27 != plVar22);
      }
      if (plVar27 != (long *)0x0) {
        lVar15 = lVar15 - (long)plVar27;
        plVar24 = (long *)*puVar7;
        uVar19 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar19 & 1) != 0) {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar10 + 0x38d480)) {
            FUN_02bcc824(plVar24,plVar27,lVar15,8);
            goto LAB_028e4acc;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,plVar27,lVar15,8);
      }
    }
  }
  else {
    puVar17 = puVar12;
    do {
      piVar20 = *(int **)*puVar17;
      if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 7) ||
         (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3], uVar19 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((long)piVar20 + uVar19);
      }
      piVar20 = (int *)*puVar7;
      if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 7) ||
         (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3], uVar19 == 0)) {
        if (iVar6 == 0) goto LAB_028e468c;
      }
      else if (iVar6 == *(int *)((long)piVar20 + uVar19)) {
LAB_028e468c:
        if (((undefined8 *)*puVar17)[1] == puVar7[1]) goto LAB_028e46bc;
      }
      puVar17 = puVar17 + 4;
    } while (puVar9 != puVar17);
    puVar17 = puVar9;
LAB_028e46bc:
    if (puVar9 == puVar17) goto LAB_028e46d8;
  }
LAB_028e4acc:
  puVar7 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    if ((long *)puVar7[4] != (long *)0x0) {
      (**(code **)(*(long *)puVar7[4] + 0x20))();
    }
    uVar5 = local_80;
    uVar4 = local_88;
    plVar24 = local_90;
    uVar19 = (**(code **)(*local_90 + 0xc0))(local_90);
    lVar10 = tpidr_el0;
    if ((uVar19 & 1) == 0) {
LAB_028e4b58:
      (**(code **)(*plVar24 + 0x18))(plVar24,puVar7,uVar4,uVar5);
    }
    else {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e4b58;
      FUN_02bcc824(plVar24,puVar7,uVar4,uVar5);
    }
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
    *(int *)(lVar10 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
    }
  }
  lVar10 = -(long)*param_2;
  uVar16 = *(ushort *)((long)param_2 - (long)*param_2);
LAB_028e4c04:
  if ((((0xe < uVar16) && (uVar19 = (ulong)*(ushort *)((long)param_2 + lVar10 + 0xe), uVar19 != 0))
      && (puVar23 = (uint *)((long)param_2 + uVar19),
         puVar23 = (uint *)((long)puVar23 + (ulong)*puVar23), puVar23 != (uint *)0x0)) &&
     (lVar10 = (ulong)*puVar23 << 2, (ulong)*puVar23 != 0)) {
    do {
      puVar23 = puVar23 + 1;
      FUN_028e4468(param_1,(long)puVar23 + (ulong)*puVar23);
      lVar10 = lVar10 + -4;
    } while (lVar10 != 0);
  }
  return;
}


