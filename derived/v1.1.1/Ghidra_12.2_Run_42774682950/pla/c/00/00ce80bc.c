/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce80bc; name: FUN_00ce80bc
 */


void FUN_00ce80bc(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar3 = uVar1 + *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  plVar11 = (long *)(lVar2 + (uVar3 >> 4 & 0xffffffffffffff8));
  if (lVar4 == lVar2) {
    lVar5 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    lVar5 = *plVar11 + (uVar3 & 0x7f) * 0x20;
    if (lVar5 == param_3) {
      return;
    }
  }
  lVar9 = param_3 - *param_2 >> 5;
  lVar6 = ((lVar5 - *plVar11 >> 5) + ((long)plVar11 - (long)param_2) * 0x10) - lVar9;
  if (lVar6 < 1) {
    return;
  }
  plVar11 = (long *)(lVar2 + (uVar1 >> 4 & 0xffffffffffffff8));
  lVar2 = lVar4 - lVar2;
  if (lVar2 == 0) {
    lVar7 = 0;
    if (param_3 == 0) goto joined_r0x00ce8314;
  }
  else {
    lVar7 = *plVar11 + (uVar1 & 0x7f) * 0x20;
    if (param_3 == lVar7) goto joined_r0x00ce8314;
  }
  uVar3 = lVar9 + ((long)param_2 - (long)plVar11) * 0x10;
  if (uVar3 != lVar7 - *plVar11 >> 5) {
    if ((long)uVar3 < 1) {
      uVar8 = 0x7f - uVar3;
      uVar3 = 0xfe - uVar3;
      if (-1 < (long)uVar8) {
        uVar3 = uVar8;
      }
      plVar11 = plVar11 + -((long)uVar3 >> 7);
      lVar7 = *plVar11 + ((uVar3 & 0x7ffffffffffff80) - uVar8) * 0x20 + 0xfe0;
    }
    else {
      plVar11 = (long *)((long)plVar11 + (uVar3 >> 4 & 0xffffffffffffff8));
      lVar7 = *plVar11 + (uVar3 & 0x7f) * 0x20;
    }
  }
joined_r0x00ce8314:
  while (lVar7 != lVar5) {
    while (lVar7 = lVar7 + 0x20, lVar7 - *plVar11 == 0x1000) {
      plVar11 = plVar11 + 1;
      lVar7 = *plVar11;
      if (lVar7 == lVar5) goto LAB_00ce81d0;
    }
  }
LAB_00ce81d0:
  lVar5 = 0;
  if (lVar2 != 0) {
    lVar5 = lVar2 * 0x10 + -1;
  }
  lVar6 = *(long *)(param_1 + 0x48) - lVar6;
  *(long *)(param_1 + 0x48) = lVar6;
  if (0xff < (lVar5 - uVar1) - lVar6) {
    lVar2 = tpidr_el0;
    do {
      plVar11 = *(long **)(param_1 + 0x50);
      uVar10 = *(undefined8 *)(lVar4 + -8);
      uVar3 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar3 & 1) == 0) {
LAB_00ce8274:
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar10,0x1000,8);
      }
      else {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00ce8274;
        FUN_02bcc824(plVar11,uVar10,0x1000,8);
      }
      lVar4 = *(long *)(param_1 + 0x10) + -8;
      lVar6 = lVar4 - *(long *)(param_1 + 8);
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar5 = lVar6 * 0x10 + -1;
      }
      *(long *)(param_1 + 0x10) = lVar4;
    } while (0xff < (ulong)(lVar5 - (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40))));
  }
  return;
}


