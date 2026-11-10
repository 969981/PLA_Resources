/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bba6fc; name: FUN_02bba6fc
 */


void FUN_02bba6fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_48 [8];
  
  puVar4 = PTR_nothrow_04373ab8;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    lVar1 = *(long *)(param_1 + 0x70);
    lVar2 = *(long *)(param_1 + 0x78);
    uVar9 = lVar2 - lVar1 >> 3;
    if (0x400 < lVar2 - lVar1) {
      uVar10 = uVar9;
      if (0xffffffffffffffe < (long)uVar9) {
        uVar10 = 0xfffffffffffffff;
      }
      do {
        pvVar6 = operator_new(uVar10 << 3,(nothrow_t *)puVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_02bbae20(lVar1,lVar2,auStack_48,uVar9,pvVar6,uVar10);
          plVar5 = DAT_043f1798;
          lVar1 = tpidr_el0;
          plVar8 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar8 = plVar5;
          }
          uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar8,pvVar6,0,8);
              goto LAB_02bba848;
            }
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,pvVar6,0,8);
          goto LAB_02bba848;
        }
        uVar10 = uVar10 >> 1;
      } while (uVar10 != 0);
    }
    FUN_02bbae20(lVar1,lVar2,auStack_48,uVar9,0,0);
LAB_02bba848:
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x78);
  for (puVar7 = *(undefined8 **)(param_1 + 0x70); puVar7 != puVar3; puVar7 = puVar7 + 1) {
    FUN_02bbd4cc(*puVar7);
  }
  return;
}


