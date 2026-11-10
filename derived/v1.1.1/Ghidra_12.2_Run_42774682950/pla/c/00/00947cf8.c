/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00947cf8; name: FUN_00947cf8
 */


void FUN_00947cf8(long *param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long local_28;
  
  *param_1 = 0;
  if (*param_2 == '\0') {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    if ((*PTR_DAT_04379ce8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04379ce8);
      if (iVar2 != 0) {
        FUN_00931848(PTR_DAT_04379cf0);
        __cxa_guard_release(PTR_DAT_04379ce8);
      }
    }
    puVar1 = PTR_DAT_04379cf0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    plVar4 = (long *)*param_1;
    *param_1 = (long)puVar1;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00947e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))();
      return;
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar3 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar3;
    FUN_02a47cd8(&local_28,uVar3,param_2);
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    *param_1 = local_28;
  }
  return;
}


