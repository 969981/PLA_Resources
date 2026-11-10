/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291a920; name: FUN_0291a920
 */


void FUN_0291a920(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x448) == 4) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar5 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar5;
    plVar3 = *(long **)(param_1 + 0x478);
    if (plVar3 == (long *)0x0) {
      return;
    }
    if (plVar3[1] == *plVar3) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x430);
    uVar4 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x448) != 3) {
      FUN_0290d21c();
      return;
    }
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar5 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar5;
    plVar3 = *(long **)(param_1 + 0x478);
    if ((plVar3 == (long *)0x0) || (plVar3[1] == *plVar3)) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x430);
    uVar4 = 2;
  }
  FUN_02934bd4(*(undefined8 *)(lVar5 + 0x158),uVar2,plVar3,uVar4);
  return;
}


