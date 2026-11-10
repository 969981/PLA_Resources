/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9f690; name: FUN_02b9f690
 */


void FUN_02b9f690(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_44;
  
  uVar4 = *(uint *)(param_1 + 0x140);
  uVar1 = uVar4 + 1;
  *(uint *)(param_1 + 0x140) = uVar1;
  if ((ulong)uVar1 <= (ulong)(*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 5)) {
    lVar16 = *(long *)(param_1 + 0xa8) + (ulong)uVar4 * 0x20;
    plVar8 = *(long **)(lVar16 + 8);
    if (plVar8 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar8 + 0x68))();
    }
                    /* WARNING: Could not recover jumptable at 0x02b9f848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_043f0b60)(param_1,uVar9,*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(param_1 + 0x118));
    return;
  }
  (*DAT_043f0068)(*(undefined8 *)(param_1 + 0x138),0x13,&local_44);
  plVar8 = *(long **)(*(long *)(param_1 + 0x130) + ((ulong)*(byte *)(param_1 + 0x148) ^ 1) * 8);
  (**(code **)(*plVar8 + 0x28))(&local_70,plVar8,*(undefined8 *)(param_1 + 0x118),(long)local_44);
  if (local_68 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*local_68 + 0x68))();
  }
  (*DAT_043f0b60)(param_1,uVar9,local_60,*(undefined8 *)(param_1 + 0x118));
  uVar10 = *(ulong *)(param_1 + 0xb0);
  puVar2 = (undefined8 *)(param_1 + 0xc0);
  if (uVar10 < *(ulong *)(param_1 + 0xb8)) {
    FUN_02b61974(puVar2,uVar10,&local_70);
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 0x20;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 200);
    lVar16 = (long)(uVar10 - *(long *)(param_1 + 0xa8)) >> 5;
    uVar10 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(ulong *)(param_1 + 0xb8) - *(long *)(param_1 + 0xa8);
    if ((ulong)(lVar11 >> 5) < uVar13 >> 1) {
      uVar12 = lVar11 >> 4;
      uVar13 = uVar10;
      if (uVar10 <= uVar12) {
        uVar13 = uVar12;
      }
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar13 << 5,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar17 = lVar11 + lVar16 * 0x20;
    FUN_02b61974(puVar2,lVar17,&local_70);
    lVar15 = *(long *)(param_1 + 0xa8);
    lVar14 = *(long *)(param_1 + 0xb0);
    lVar16 = lVar17 + 0x20;
    if (lVar14 == lVar15) {
      lVar14 = lVar15;
    }
    else {
      do {
        lVar17 = lVar17 + -0x20;
        lVar14 = lVar14 + -0x20;
        FUN_02b61974(puVar2,lVar17,lVar14);
      } while (lVar15 != lVar14);
      lVar15 = *(long *)(param_1 + 0xa8);
      lVar14 = *(long *)(param_1 + 0xb0);
    }
    *(long *)(param_1 + 0xa8) = lVar17;
    *(long *)(param_1 + 0xb0) = lVar16;
    lVar16 = *(long *)(param_1 + 0xb8);
    *(ulong *)(param_1 + 0xb8) = lVar11 + uVar13 * 0x20;
    while (lVar11 = lVar14, lVar11 != lVar15) {
      lVar14 = lVar11 + -0x20;
      plVar8 = *(long **)(lVar11 + -0x18);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,lVar14);
        plVar8 = *(long **)(lVar11 + -0x18);
        *(undefined8 *)(lVar11 + -0x20) = 0;
        *(undefined8 *)(lVar11 + -0x18) = 0;
        if (plVar8 != (long *)0x0) {
          plVar3 = plVar8 + 10;
          do {
            iVar7 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *(int *)plVar3 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        plVar8 = *(long **)(lVar11 + -0x18);
        *(undefined8 *)(lVar11 + -0x10) = 0xffffffffffffffff;
        *(undefined8 *)(lVar11 + -8) = 0;
        if (plVar8 != (long *)0x0) {
          plVar3 = plVar8 + 10;
          do {
            iVar7 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *(int *)plVar3 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      }
    }
    if (lVar15 != 0) {
      plVar8 = (long *)*puVar2;
      lVar16 = lVar16 - lVar15;
      uVar10 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar10 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar15,lVar16,8);
          goto joined_r0x02b9f9d4;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,lVar16,8);
    }
  }
joined_r0x02b9f9d4:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x30))(local_68,&local_70);
    plVar8 = local_68;
    local_70 = 0;
    local_68 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0;
    if (local_68 != (long *)0x0) {
      plVar8 = local_68 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  return;
}


