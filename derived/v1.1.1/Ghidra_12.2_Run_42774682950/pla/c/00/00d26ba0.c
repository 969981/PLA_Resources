/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d26ba0; name: FUN_00d26ba0
 */


bool FUN_00d26ba0(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  bool bVar15;
  char *pcVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != lVar7) {
    uVar4 = 0;
    puVar13 = (undefined8 *)(param_1 + 0xb8);
    do {
      lVar7 = lVar7 + uVar4 * 0x20;
      uVar6 = *(ulong *)(param_1 + 0xa8);
      if (uVar6 < *(ulong *)(param_1 + 0xb0)) {
        FUN_00d2739c(puVar13,uVar6,lVar7);
        *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 0x20;
      }
      else {
        uVar12 = *(ulong *)(param_1 + 0xc0);
        lVar14 = (long)(uVar6 - *(long *)(param_1 + 0xa0)) >> 5;
        uVar6 = lVar14 + 1;
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = *(ulong *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa0);
        uVar9 = lVar8 >> 4;
        if (uVar6 <= uVar9) {
          uVar6 = uVar9;
        }
        if ((ulong)(lVar8 >> 5) < uVar12 >> 1) {
          uVar12 = uVar6;
        }
        if (uVar12 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,uVar12 << 5,8);
          if (lVar8 == 0) {
            (**(code **)(*(long *)*puVar13 + 0xb8))();
          }
        }
        lVar14 = lVar8 + lVar14 * 0x20;
        FUN_00d2739c(puVar13,lVar14,lVar7);
        plVar10 = *(long **)(param_1 + 0xa0);
        plVar18 = *(long **)(param_1 + 0xa8);
        lVar7 = lVar14 + 0x20;
        if (plVar18 == plVar10) {
          plVar18 = plVar10;
        }
        else {
          do {
            lVar14 = lVar14 + -0x20;
            plVar18 = plVar18 + -4;
            FUN_00d2739c(puVar13,lVar14,plVar18);
          } while (plVar10 != plVar18);
          plVar10 = *(long **)(param_1 + 0xa0);
          plVar18 = *(long **)(param_1 + 0xa8);
        }
        *(long *)(param_1 + 0xa0) = lVar14;
        *(long *)(param_1 + 0xa8) = lVar7;
        lVar7 = *(long *)(param_1 + 0xb0);
        *(ulong *)(param_1 + 0xb0) = lVar8 + uVar12 * 0x20;
        if (plVar18 != plVar10) {
          do {
            plVar17 = plVar18 + -4;
            lVar14 = *plVar17;
            *plVar17 = 0;
            if (lVar14 != 0) {
              FUN_02bcbe58(auStack_78,0);
              FUN_00d27480(lVar14);
              plVar1 = (long *)plVar18[-3];
              lVar8 = plVar18[-2];
              lVar11 = plVar18[-1];
              uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
              lVar3 = tpidr_el0;
              if ((uVar6 & 1) == 0) {
LAB_00d26e4c:
                (**(code **)(*plVar1 + 0x18))(plVar1,lVar14,lVar8,lVar11);
              }
              else {
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_00d26e4c;
                FUN_02bcc824(plVar1,lVar14,lVar8,lVar11);
              }
              if (*(char *)(lVar3 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar3 + 0x38d488) = 1;
                *(undefined8 *)(lVar3 + 0x38d478) = 0;
                *(undefined8 *)(lVar3 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
              }
              iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
              *(int *)(lVar3 + 0x38d480) = iVar2;
              if (iVar2 == 0) {
                FUN_02bcc320();
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                *(undefined4 *)(lVar3 + 0x38d484) = 0;
              }
            }
            plVar18 = plVar17;
          } while (plVar10 != plVar17);
        }
        if (plVar10 != (long *)0x0) {
          lVar7 = lVar7 - (long)plVar10;
          plVar18 = (long *)*puVar13;
          uVar6 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar6 & 1) != 0) {
            lVar14 = tpidr_el0;
            if (*(char *)(lVar14 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar14 + 0x38d488) = 1;
              *(undefined8 *)(lVar14 + 0x38d478) = 0;
              *(undefined8 *)(lVar14 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar14 + 0x38d480)) {
              FUN_02bcc824(plVar18,plVar10,lVar7,8);
              goto LAB_00d26d40;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,plVar10,lVar7,8);
        }
      }
LAB_00d26d40:
      lVar7 = *(long *)(param_1 + 0x68);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(param_1 + 0x70) - lVar7 >> 5));
  }
  FUN_00d27108((long *)(param_1 + 0x68));
  puVar13 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar13 != *(undefined8 **)(param_1 + 0xa8)) {
    bVar15 = true;
    do {
      pcVar16 = (char *)*puVar13;
      if (*pcVar16 == '\0') {
        uVar4 = (*(code *)**(undefined8 **)(pcVar16 + 8))(*(undefined8 **)(pcVar16 + 8) + 4);
        if ((uVar4 & 1) == 0) {
          bVar15 = false;
        }
        else {
          puVar5 = *(undefined8 **)(pcVar16 + 0x28);
          if (puVar5 != (undefined8 *)0x0) {
            (*(code *)*puVar5)(puVar5 + 4);
          }
          *pcVar16 = '\x01';
        }
      }
      puVar13 = puVar13 + 4;
    } while (puVar13 != *(undefined8 **)(param_1 + 0xa8));
    if (!bVar15) {
      return false;
    }
  }
  return *(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x68);
}


