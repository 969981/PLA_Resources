/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbc0e0; name: FUN_02bbc0e0
 */


void FUN_02bbc0e0(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long local_60;
  undefined1 auStack_58 [8];
  
  lVar12 = *(long *)(param_2 + 0x58);
  local_60 = lVar12;
  lVar7 = FUN_02ba378c(auStack_58,*(undefined8 *)(lVar12 + 8),&local_60,param_3);
  *param_1 = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bb9f68(*(undefined8 *)(lVar12 + 0x78),param_1);
  lVar7 = *(long *)(param_2 + 0x118);
  puVar2 = (undefined8 *)(param_2 + 0x128);
  if (lVar7 == *(long *)(param_2 + 0x120)) {
    uVar11 = *(ulong *)(param_2 + 0x130);
    lVar7 = lVar7 - *(long *)(param_2 + 0x110) >> 3;
    uVar8 = lVar7 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = *(long *)(param_2 + 0x120) - *(long *)(param_2 + 0x110);
    if ((ulong)(lVar12 >> 3) < uVar11 >> 1) {
      uVar10 = lVar12 >> 2;
      uVar11 = uVar8;
      if (uVar8 <= uVar10) {
        uVar11 = uVar10;
      }
    }
    if (uVar11 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar11 << 3,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar15 = lVar12 + lVar7 * 8;
    FUN_02b0b42c(puVar2,lVar15,param_1);
    plVar14 = *(long **)(param_2 + 0x110);
    plVar13 = *(long **)(param_2 + 0x118);
    lVar7 = lVar15 + 8;
    if (plVar13 == plVar14) {
      plVar13 = plVar14;
    }
    else {
      do {
        lVar15 = lVar15 + -8;
        plVar13 = plVar13 + -1;
        FUN_02b0b42c(puVar2,lVar15,plVar13);
      } while (plVar14 != plVar13);
      plVar14 = *(long **)(param_2 + 0x110);
      plVar13 = *(long **)(param_2 + 0x118);
    }
    *(long *)(param_2 + 0x110) = lVar15;
    *(long *)(param_2 + 0x118) = lVar7;
    lVar7 = *(long *)(param_2 + 0x120);
    *(ulong *)(param_2 + 0x120) = lVar12 + uVar11 * 8;
    while (plVar13 != plVar14) {
      plVar13 = plVar13 + -1;
      plVar9 = (long *)*plVar13;
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 10;
        do {
          iVar6 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar13 = (long *)*puVar2;
      lVar7 = lVar7 - (long)plVar14;
      uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar8 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar13,plVar14,lVar7,8);
          goto LAB_02bbc2dc;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar14,lVar7,8);
    }
  }
  else {
    FUN_02b0b42c(puVar2,lVar7,param_1);
    *(long *)(param_2 + 0x118) = *(long *)(param_2 + 0x118) + 8;
  }
LAB_02bbc2dc:
  *(long *)(*param_1 + 0x148) = param_2;
  FUN_02bbc3b4(*param_1,*(undefined8 *)(param_2 + 0x1c0));
  return;
}


