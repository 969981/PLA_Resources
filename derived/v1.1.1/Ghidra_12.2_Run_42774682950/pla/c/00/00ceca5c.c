/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ceca5c; name: FUN_00ceca5c
 */


void FUN_00ceca5c(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  char *__s;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar6 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar19 = DAT_043f1798;
  lVar4 = tpidr_el0;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar4 + 0x20), *(long *)(lVar4 + 0x20) == 0)) {
    *(long *)(lVar4 + 0x20) = DAT_043f1798;
    lVar7 = lVar19;
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = param_2;
  param_1[4] = lVar7;
  param_1[5] = 0x7ffffffffffffff;
  if (*param_3 != 0) {
    uVar14 = 0;
    puVar1 = param_1 + 4;
    lVar19 = (long)param_3 + 9;
    do {
      puVar8 = &DAT_cbf29ce484222645;
      puVar2 = param_3 + uVar14 + 1;
      uVar13 = (ulong)*puVar2;
      __s = (char *)((long)puVar2 + uVar13 + 4);
      local_70 = strlen(__s);
      bVar3 = *(byte *)((long)puVar2 + uVar13 + 4);
      if (bVar3 != 0) {
        pbVar11 = (byte *)(lVar19 + uVar13);
        do {
          puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar3 != 0);
      }
      local_68 = (long *)0x0;
      uVar13 = param_1[2];
      local_80 = puVar8;
      pcStack_78 = __s;
      if (uVar13 < (ulong)param_1[3]) {
        FUN_00b834f4(puVar1,uVar13,&local_80);
        param_1[2] = param_1[2] + 0x20;
      }
      else {
        uVar12 = param_1[5];
        lVar7 = (long)(uVar13 - param_1[1]) >> 5;
        uVar13 = lVar7 + 1;
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = param_1[3] - param_1[1];
        if ((ulong)(lVar9 >> 5) < uVar12 >> 1) {
          uVar10 = lVar9 >> 4;
          uVar12 = uVar13;
          if (uVar13 <= uVar10) {
            uVar12 = uVar10;
          }
        }
        if (uVar12 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 5,8);
          if (lVar9 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar16 = lVar9 + lVar7 * 0x20;
        FUN_00b834f4(puVar1,lVar16,&local_80);
        lVar17 = param_1[1];
        lVar15 = param_1[2];
        lVar7 = lVar16 + 0x20;
        if (lVar15 == lVar17) {
          lVar15 = lVar17;
        }
        else {
          do {
            lVar16 = lVar16 + -0x20;
            lVar15 = lVar15 + -0x20;
            FUN_00b835e0(puVar1,lVar16,lVar15);
          } while (lVar17 != lVar15);
          lVar17 = param_1[2];
          lVar15 = param_1[1];
        }
        param_1[1] = lVar16;
        param_1[2] = lVar7;
        lVar7 = param_1[3];
        param_1[3] = lVar9 + uVar12 * 0x20;
        while (lVar17 != lVar15) {
          plVar18 = (long *)(lVar17 + -8);
          lVar17 = lVar17 + -0x20;
          if ((long *)*plVar18 != (long *)0x0) {
            (**(code **)(*(long *)*plVar18 + 0x20))();
          }
        }
        if (lVar15 != 0) {
          plVar18 = (long *)*puVar1;
          uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar15,lVar7 - lVar15,8);
              goto joined_r0x00cecdb0;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar15,lVar7 - lVar15,8);
        }
      }
joined_r0x00cecdb0:
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      uVar14 = uVar14 + 1;
      lVar19 = lVar19 + 4;
    } while (uVar14 < *param_3);
  }
  return;
}


