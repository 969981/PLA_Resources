/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b3670; name: FUN_011b3670
 */


long FUN_011b3670(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  plVar11 = *(long **)(param_1 + 0x70);
  plVar2 = *(long **)(param_1 + 0x78);
  lVar12 = *param_2;
  plVar9 = (long *)param_2[3];
  plVar3 = (long *)PTR_DAT_04379c88;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar3 = (long *)PTR_DAT_04379c88;
  }
  PTR_DAT_04379c88 = (undefined *)plVar3;
  if (plVar11 != plVar2) {
    do {
      plVar10 = *(long **)(*plVar11 + 0x5a0);
      plVar1 = plVar3;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 0xb;
      }
      lVar13 = *plVar1;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if (lVar13 == lVar12) goto LAB_011b3700;
      plVar11 = plVar11 + 1;
    } while (plVar2 != plVar11);
    plVar11 = plVar2;
  }
LAB_011b3700:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if ((plVar11 != *(long **)(param_1 + 0x78)) && (lVar12 = *plVar11, lVar12 != 0)) {
    puVar7 = (undefined8 *)
             (*(code *)**(undefined8 **)(lVar12 + 0x50))((undefined8 *)(lVar12 + 0x50));
    if (((*PTR_DAT_0437e648 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437e648), puVar5 = PTR_DAT_0437b330, iVar6 != 0)) {
      if (((*PTR_DAT_0437b328 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b328), puVar4 = PTR_DAT_043794d8, iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar8 = FUN_0087f8f0();
          *(undefined8 *)puVar4 = uVar8;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = puVar4;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
      *(undefined **)PTR_DAT_0437e650 = puVar5;
      __cxa_guard_release(PTR_DAT_0437e648);
    }
    if (puVar7 != (undefined8 *)0x0) {
      do {
        if (puVar7 == (undefined8 *)PTR_DAT_0437e650) {
          return lVar12;
        }
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


