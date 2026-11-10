/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0b864; name: FUN_00b0b864
 */


void FUN_00b0b864(long param_1,undefined4 *param_2,long param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 local_98 [2];
  undefined **local_90;
  undefined1 auStack_88 [16];
  long local_78;
  long local_70;
  long local_68;
  
  local_98[0] = *param_2;
  local_90 = &PTR_LAB_041d4500;
  FUN_00b0ee38(auStack_88,param_3 + 8);
  local_78 = *(long *)(param_3 + 0x18);
  if (local_78 != 0) {
    piVar1 = (int *)(local_78 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_70 = *(long *)(param_3 + 0x20);
  if (local_70 != 0) {
    piVar1 = (int *)(local_70 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_68 = *(long *)(param_3 + 0x28);
  if (local_68 != 0) {
    lVar10 = *(long *)(local_68 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_90 = &PTR_LAB_041d4580;
  lVar10 = *(long *)(param_1 + 0x118);
  puVar2 = (undefined8 *)(param_1 + 0x128);
  if (lVar10 == *(long *)(param_1 + 0x120)) {
    uVar9 = *(ulong *)(param_1 + 0x130);
    lVar10 = lVar10 - *(long *)(param_1 + 0x110) >> 3;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar3 = lVar10 * 0x6db6db6db6db6db7 + 1;
    if (uVar9 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x110) >> 3;
    uVar8 = lVar7 * -0x2492492492492492;
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    if ((ulong)(lVar7 * 0x6db6db6db6db6db7) < uVar9 >> 1) {
      uVar9 = uVar3;
    }
    if (uVar9 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar9 * 0x38,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar13 = lVar7 + lVar10 * 8;
    FUN_00b16c88(puVar2,lVar13,local_98);
    lVar12 = *(long *)(param_1 + 0x110);
    lVar16 = *(long *)(param_1 + 0x118);
    lVar15 = lVar13 + 0x38;
    if (lVar16 == lVar12) {
      lVar10 = lVar12;
    }
    else {
      lVar14 = lVar13 + -0x38;
      FUN_00b16c88(puVar2,lVar14,lVar16 + -0x38);
      if (lVar16 + -0x38 != lVar12) {
        lVar14 = lVar13 + -0x70;
        FUN_00b16c88(puVar2,lVar14,lVar16 + -0x70);
        if (lVar16 + -0x70 != lVar12) {
          lVar14 = lVar13 + -0xa8;
          FUN_00b16c88(puVar2,lVar14,lVar16 + -0xa8);
          if (lVar16 + -0xa8 != lVar12) {
            lVar10 = lVar7 + lVar10 * 8 + -0xe0;
            do {
              lVar14 = lVar10;
              FUN_00b16c88(puVar2,lVar14,lVar16 + -0xe0);
              lVar16 = lVar16 + -0x38;
              lVar10 = lVar14 + -0x38;
            } while (lVar12 + 0xa8 != lVar16);
          }
        }
      }
      lVar12 = *(long *)(param_1 + 0x110);
      lVar13 = lVar14;
      lVar10 = *(long *)(param_1 + 0x118);
    }
    *(long *)(param_1 + 0x110) = lVar13;
    *(long *)(param_1 + 0x118) = lVar15;
    lVar15 = *(long *)(param_1 + 0x120);
    *(ulong *)(param_1 + 0x120) = lVar7 + uVar9 * 0x38;
    if ((((lVar10 != lVar12) && (FUN_00b0ebd0(lVar10 + -0x30), lVar10 + -0x38 != lVar12)) &&
        (FUN_00b0ebd0(lVar10 + -0x68), lVar10 + -0x70 != lVar12)) &&
       (FUN_00b0ebd0(lVar10 + -0xa0), lVar10 + -0xa8 != lVar12)) {
      do {
        FUN_00b0ebd0(lVar10 + -0xd8);
        lVar10 = lVar10 + -0x38;
      } while (lVar12 + 0xa8 != lVar10);
    }
    if (lVar12 != 0) {
      plVar11 = (long *)*puVar2;
      lVar15 = lVar15 - lVar12;
      uVar9 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar9 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar11,lVar12,lVar15,8);
          goto LAB_00b0b940;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar15,8);
    }
  }
  else {
    FUN_00b16c88(puVar2,lVar10,local_98);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 0x38;
  }
LAB_00b0b940:
  FUN_00b0ebd0(&local_90);
  return;
}


