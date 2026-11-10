/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef7a94; name: FUN_01ef7a94
 */


bool FUN_01ef7a94(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  bVar3 = false;
  if ((param_1 != &DAT_cbf29ce484222645) && (param_2 != &DAT_cbf29ce484222645)) {
    local_30 = param_2;
    puStack_28 = param_1;
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    uVar7 = *(undefined8 *)PTR_DAT_0437a788;
    *(undefined8 *)PTR_DAT_0437a790 = uVar7;
    lVar5 = FUN_01e65c40(uVar7,&puStack_28);
    lVar6 = FUN_01e65c40(uVar7,&local_30);
    plVar1 = (long *)PTR_DAT_04379c88;
    if (*(long *)(lVar5 + 8) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x58);
    }
    plVar2 = (long *)PTR_DAT_04379c88;
    if (*(long *)(lVar6 + 8) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x58);
    }
    bVar3 = *plVar1 != *plVar2;
  }
  return bVar3;
}


