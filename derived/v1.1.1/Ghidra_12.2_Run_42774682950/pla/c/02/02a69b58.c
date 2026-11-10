/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a69b58; name: FUN_02a69b58
 */


void FUN_02a69b58(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  void *pvVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  void *__src;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  size_t __n;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  FUN_02bcbe58(auStack_90,0);
  FUN_02a6b330(param_1 + 0x140,*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3);
  puVar17 = *(undefined8 **)(param_1 + 0x108);
  puVar15 = *(undefined8 **)(param_1 + 0x110);
  lVar10 = tpidr_el0;
  if (puVar17 != puVar15) {
    plVar1 = (long *)(param_1 + 0x108);
    puVar2 = (undefined8 *)(param_1 + 0x120);
    if (puVar17 != puVar15) goto LAB_02a69c38;
    while( true ) {
      *(undefined8 **)(param_1 + 0x110) = puVar17;
      if (*(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x148)) break;
      FUN_02a6b330(plVar1,*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 3);
      pvVar16 = *(void **)(param_1 + 0x140);
      pvVar19 = *(void **)(param_1 + 0x148);
      if (0 < (long)pvVar19 - (long)pvVar16) {
        lVar23 = (long)pvVar19 - (long)pvVar16 >> 3;
        uVar11 = *(ulong *)(param_1 + 0x110);
        __src = *(void **)(param_1 + 0x108);
        lVar13 = (long)(uVar11 - (long)__src) >> 3;
        if ((long)(*(long *)(param_1 + 0x118) - uVar11) >> 3 < lVar23) {
          uVar14 = *(ulong *)(param_1 + 0x128);
          uVar11 = lVar13 + lVar23;
          if (0x7ffffffffffffffe < uVar14) {
            uVar14 = 0x7fffffffffffffff;
          }
          if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar13 = *(long *)(param_1 + 0x118) - (long)__src;
          if ((ulong)(lVar13 >> 3) < uVar14 >> 1) {
            uVar12 = lVar13 >> 2;
            uVar14 = uVar11;
            if (uVar11 <= uVar12) {
              uVar14 = uVar12;
            }
          }
          if (uVar14 == 0) {
            lVar13 = 0;
            lVar23 = lVar13;
          }
          else {
            lVar13 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar14 << 3,8);
            lVar23 = lVar13;
            if (lVar13 == 0) {
              (**(code **)(*(long *)*puVar2 + 0xb8))();
            }
          }
          for (; pvVar16 != pvVar19; pvVar16 = (void *)((long)pvVar16 + 8)) {
            FUN_02a6babc(puVar2,lVar13,pvVar16);
            lVar13 = lVar13 + 8;
          }
          pvVar16 = (void *)*plVar1;
          lVar21 = lVar23;
          if (pvVar16 != __src) {
            pvVar19 = __src;
            do {
              lVar21 = lVar21 + -8;
              pvVar19 = (void *)((long)pvVar19 + -8);
              FUN_02a6b9e4(puVar2,lVar21,pvVar19);
            } while (pvVar16 != pvVar19);
          }
          pvVar16 = *(void **)(param_1 + 0x110);
          for (; pvVar16 != __src; __src = (void *)((long)__src + 8)) {
            FUN_02a6b9e4(puVar2,lVar13,__src);
            lVar13 = lVar13 + 8;
          }
          lVar20 = *(long *)(param_1 + 0x108);
          *(long *)(param_1 + 0x108) = lVar21;
          *(long *)(param_1 + 0x110) = lVar13;
          lVar13 = *(long *)(param_1 + 0x118);
          *(ulong *)(param_1 + 0x118) = lVar23 + uVar14 * 8;
          if (lVar20 != 0) {
            plVar22 = (long *)*puVar2;
            lVar13 = lVar13 - lVar20;
            uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
            if ((uVar11 & 1) != 0) {
              if (*(char *)(lVar10 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar10 + 0x38d488) = 1;
                *(undefined8 *)(lVar10 + 0x38d478) = 0;
                *(undefined8 *)(lVar10 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar10 + 0x38d480)) {
                FUN_02bcc824(plVar22,lVar20,lVar13,8);
                goto LAB_02a69bec;
              }
            }
            (**(code **)(*plVar22 + 0x18))(plVar22,lVar20,lVar13,8);
          }
        }
        else {
          uVar14 = uVar11;
          if (lVar13 < lVar23) {
            pvVar5 = (void *)((long)pvVar16 + lVar13 * 8);
            for (pvVar3 = pvVar5; pvVar3 != pvVar19; pvVar3 = (void *)((long)pvVar3 + 8)) {
              FUN_02a6babc(puVar2,uVar14,pvVar3);
              uVar14 = *(long *)(param_1 + 0x110) + 8;
              *(ulong *)(param_1 + 0x110) = uVar14;
            }
            if ((long)(uVar11 - (long)__src) < 1) goto LAB_02a69bec;
            pvVar19 = pvVar5;
          }
          __n = uVar14 - (long)((long)__src + lVar23 * 8);
          uVar4 = uVar14;
          for (uVar12 = uVar14 + lVar23 * -8; uVar12 < uVar11; uVar12 = uVar12 + 8) {
            FUN_02a6b9e4(puVar2,uVar4,uVar12);
            uVar4 = *(long *)(param_1 + 0x110) + 8;
            *(ulong *)(param_1 + 0x110) = uVar4;
          }
          if (__n != 0) {
            memmove((void *)(uVar14 + ((long)__n >> 3) * -8),__src,__n);
          }
          if ((long)pvVar19 - (long)pvVar16 != 0) {
            memmove(__src,pvVar16,(long)pvVar19 - (long)pvVar16);
          }
        }
      }
LAB_02a69bec:
      puVar17 = *(undefined8 **)(param_1 + 0x108);
      puVar15 = *(undefined8 **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x140);
      if (puVar17 == puVar15) break;
      if (puVar17 != puVar15) {
LAB_02a69c38:
        do {
          puVar18 = (undefined8 *)*puVar17;
          plVar22 = (long *)puVar18[1];
          uVar7 = puVar18[2];
          uVar6 = puVar18[3];
          uVar8 = puVar18[4];
          FUN_02bcbe58(auStack_78,0);
          (**(code **)*puVar18)(puVar18);
          uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
          if ((uVar11 & 1) == 0) {
LAB_02a69cb4:
            (**(code **)(*plVar22 + 0x18))(plVar22,uVar7,uVar6,uVar8);
          }
          else {
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02a69cb4;
            FUN_02bcc824(plVar22,uVar7,uVar6,uVar8);
          }
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar9 = *(int *)(lVar10 + 0x38d480) + -1;
          *(int *)(lVar10 + 0x38d480) = iVar9;
          if (iVar9 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar10 + 0x38d484) = 0;
          }
          puVar17 = puVar17 + 1;
        } while (puVar15 != puVar17);
        puVar17 = (undefined8 *)*plVar1;
      }
    }
  }
  if (*(char *)(lVar10 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar10 + 0x38d488) = 1;
    *(undefined8 *)(lVar10 + 0x38d478) = 0;
    *(undefined8 *)(lVar10 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar10 + 0x38d480) + -1;
  *(int *)(lVar10 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar10 + 0x38d484) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}


