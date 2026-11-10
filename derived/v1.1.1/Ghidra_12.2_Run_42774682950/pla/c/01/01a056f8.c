/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a056f8; name: FUN_01a056f8
 */


undefined8 FUN_01a056f8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_0437a130;
  puVar5 = PTR_DAT_0437a128;
  puVar4 = PTR_DAT_043795e0;
  puVar3 = PTR_DAT_043794d0;
  plVar12 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar12 != plVar2) {
    lVar1 = *param_1;
    puVar10 = *(undefined8 **)param_1[1];
    do {
      lVar11 = *plVar12;
      if (lVar11 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar7 != 0)) {
            if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
              uVar9 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar9;
              __cxa_guard_release(puVar3);
            }
            *(undefined **)puVar4 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(puVar5);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar6) {
            if (*(long *)*puVar10 == lVar11 + -0x48) goto LAB_01a057a0;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
    plVar12 = plVar2;
LAB_01a057a0:
    if (plVar12 != (long *)param_2[1]) {
      (**(code **)(*(long *)*plVar12 + 0x70))();
      *(undefined1 *)(lVar1 + 0x123) = 1;
      return 1;
    }
  }
  return 0;
}


