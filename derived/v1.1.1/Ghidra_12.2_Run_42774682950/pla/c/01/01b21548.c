/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b21548; name: FUN_01b21548
 */


void FUN_01b21548(undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined4 uStack_64;
  
  if (0 < param_3) {
    iVar12 = 0;
    uStack_64 = param_2;
    do {
      plVar13 = (long *)*param_1;
      plVar11 = plVar13 + 3;
      lVar8 = plVar13[1];
      if (lVar8 == plVar13[2]) {
        uVar6 = plVar13[4];
        lVar8 = lVar8 - *plVar13 >> 2;
        uVar3 = lVar8 + 1;
        if (0x7ffffffffffffffe < uVar6) {
          uVar6 = 0x7fffffffffffffff;
        }
        if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar4 = plVar13[2] - *plVar13;
        uVar5 = lVar4 >> 1;
        if (uVar3 <= uVar5) {
          uVar3 = uVar5;
        }
        if ((ulong)(lVar4 >> 2) < uVar6 >> 1) {
          uVar6 = uVar3;
        }
        if (uVar6 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar6 << 2,4);
          if (lVar4 == 0) {
            (**(code **)(*(long *)*plVar11 + 0xb8))();
          }
        }
        lVar8 = lVar4 + lVar8 * 4;
        FUN_01b21860(plVar11,lVar8,&uStack_64);
        lVar14 = *plVar13;
        lVar9 = plVar13[1];
        lVar10 = lVar8;
        if (lVar9 != lVar14) {
          do {
            lVar7 = *plVar11;
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(PTR_DAT_04379520), iVar1 != 0)) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar2 == 0) {
              *(undefined4 *)(lVar10 + -4) = *(undefined4 *)(lVar9 + -4);
            }
            else {
              if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar7;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
              *(undefined4 *)(lVar10 + -4) = *(undefined4 *)(lVar9 + -4);
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
            }
            lVar9 = lVar9 + -4;
            lVar10 = lVar10 + -4;
          } while (lVar14 != lVar9);
          lVar14 = *plVar13;
        }
        *plVar13 = lVar10;
        plVar13[1] = lVar8 + 4;
        lVar8 = plVar13[2];
        plVar13[2] = lVar4 + uVar6 * 4;
        if (lVar14 != 0) {
          plVar11 = (long *)*plVar11;
          uVar3 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar3 & 1) != 0) {
            lVar4 = tpidr_el0;
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar11,lVar14,lVar8 - lVar14,4);
              goto LAB_01b2159c;
            }
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar14,lVar8 - lVar14,4);
        }
      }
      else {
        FUN_01b21860(plVar11,lVar8,&uStack_64);
        plVar13[1] = plVar13[1] + 4;
      }
LAB_01b2159c:
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_3);
  }
  return;
}


