/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02835864; name: FUN_02835864
 */


void FUN_02835864(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar3 = PTR_DAT_04379c38;
  puVar2 = PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = *(undefined8 *)PTR_DAT_04379c30;
  uVar5 = FUN_02911ed0();
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000,uVar5);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar7 = *(long *)puVar2;
  *(long *)puVar3 = lVar7;
  plVar6 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x028358e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x98))(plVar6,&DAT_03932c38,"DEFAULT",uVar5);
  return;
}


