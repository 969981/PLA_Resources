/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02835968; name: FUN_02835968
 */


void FUN_02835968(byte *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  
  puVar2 = PTR_DAT_04379c28;
  if (0xc < (ulong)*param_1) {
    return;
  }
  pcVar9 = (&PTR_DAT_0426f160)[*param_1];
  if (*pcVar9 == '\0') {
    FUN_02835864();
    return;
  }
  lVar8 = 1;
  do {
    pcVar1 = pcVar9 + lVar8;
    lVar8 = lVar8 + 1;
  } while (*pcVar1 != '\0');
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar4 = PTR_DAT_04379c38;
  puVar3 = PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = *(undefined8 *)PTR_DAT_04379c30;
  uVar6 = FUN_02911ed0();
  if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000,uVar6);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar8 = *(long *)puVar3;
  *(long *)puVar4 = lVar8;
  plVar7 = *(long **)(*(long *)(lVar8 + 0x158) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x02835a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x98))(plVar7,&DAT_03932c38,pcVar9,uVar6);
  return;
}


