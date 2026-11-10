/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092a580; name: FUN_0092a580
 */


void FUN_0092a580(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char *__dest;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  __dest = *(char **)(param_1 + 0x70);
  pcVar4 = *(char **)(param_1 + 0x78);
  if (__dest == pcVar4) {
LAB_0092a5b8:
    if ((__dest != pcVar4) && (pcVar9 = __dest + 0xc, pcVar9 != pcVar4)) {
      do {
        if ((*param_2 != *pcVar9) ||
           ((param_2[1] != pcVar9[1] || (*(int *)(param_2 + 4) != *(int *)(pcVar9 + 4))))) {
          uVar7 = *(undefined8 *)pcVar9;
          __dest[8] = pcVar9[8];
          *(undefined8 *)__dest = uVar7;
          __dest = __dest + 0xc;
        }
        pcVar9 = pcVar9 + 0xc;
      } while (pcVar4 != pcVar9);
      pcVar4 = *(char **)(param_1 + 0x78);
      lVar5 = (long)pcVar4 - (long)__dest;
      goto joined_r0x0092a654;
    }
  }
  else {
    pcVar9 = __dest + 1;
    do {
      if (((*param_2 == pcVar9[-1]) && (param_2[1] == *pcVar9)) &&
         (*(int *)(param_2 + 4) == *(int *)(pcVar9 + 3))) goto LAB_0092a5b8;
      __dest = pcVar9 + 0xb;
      pcVar9 = pcVar9 + 0xc;
    } while (__dest != pcVar4);
    __dest = pcVar4;
  }
  lVar5 = (long)pcVar4 - (long)__dest;
joined_r0x0092a654:
  if (lVar5 != 0) {
    __n = (long)pcVar4 - (long)(__dest + lVar5);
    if (__n != 0) {
      memmove(__dest,__dest + lVar5,__n);
    }
    pcVar4 = __dest + ((long)__n >> 2) * 4;
    *(char **)(param_1 + 0x78) = pcVar4;
  }
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (pcVar4 == *(char **)(param_1 + 0x80)) {
    lVar5 = (long)pcVar4 - *(long *)(param_1 + 0x70) >> 2;
    uVar8 = *(ulong *)(param_1 + 0x90);
    uVar3 = lVar5 * -0x5555555555555555 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 <= (ulong)(lVar5 * 0x5555555555555556)) {
      uVar3 = lVar5 * 0x5555555555555556;
    }
    if ((ulong)(lVar5 * -0x5555555555555555) < uVar8 >> 1) {
      uVar8 = uVar3;
    }
    if (uVar8 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 * 0xc,4);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar12 = lVar2 + lVar5 * 4;
    FUN_0092b128(puVar1,lVar12,param_2);
    lVar11 = *(long *)(param_1 + 0x70);
    lVar6 = *(long *)(param_1 + 0x78);
    lVar5 = lVar12 + 0xc;
    if (lVar6 != lVar11) {
      do {
        lVar12 = lVar12 + -0xc;
        lVar6 = lVar6 + -0xc;
        FUN_0092b210(puVar1,lVar12,lVar6);
      } while (lVar11 != lVar6);
      lVar11 = *(long *)(param_1 + 0x70);
    }
    lVar6 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x70) = lVar12;
    *(long *)(param_1 + 0x78) = lVar5;
    *(ulong *)(param_1 + 0x80) = lVar2 + uVar8 * 0xc;
    if (lVar11 != 0) {
      plVar10 = (long *)*puVar1;
      lVar6 = lVar6 - lVar11;
      uVar3 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar3 & 1) != 0) {
        lVar5 = tpidr_el0;
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar11,lVar6,4);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0092a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar6,4);
      return;
    }
  }
  else {
    FUN_0092b128(puVar1,pcVar4,param_2);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 0xc;
  }
  return;
}


