/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284fda8; name: FUN_0284fda8
 */


void FUN_0284fda8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04379e40;
  if (((*PTR_DAT_04379e40 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40,param_2,param_2), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  puVar3 = PTR_DAT_04379e50;
  puVar2 = PTR_DAT_04379e48;
  uVar5 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar5;
  FUN_02928520(uVar5,param_1,param_2);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_02928980(uVar5,param_1,0,0);
  return;
}


