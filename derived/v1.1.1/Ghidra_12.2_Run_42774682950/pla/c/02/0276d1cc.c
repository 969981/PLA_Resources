/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276d1cc; name: FUN_0276d1cc
 */


void FUN_0276d1cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar3 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar3;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 3) {
      local_48 = *param_1;
      local_40 = param_1[1];
      uStack_38 = param_1[2];
      FUN_02790bc8(lVar3,&local_48);
      FUN_0279329c(lVar3,param_1);
    }
  }
  return;
}


