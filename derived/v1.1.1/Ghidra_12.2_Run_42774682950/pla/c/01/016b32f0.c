/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b32f0; name: FUN_016b32f0
 */


void FUN_016b32f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(char *)(param_1 + 0xb9) == '\0') {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    puVar1 = PTR_DAT_04379e28;
    if (((*PTR_DAT_04379e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e28);
    }
    puVar3 = PTR_DAT_04379e38;
    puVar2 = PTR_DAT_04379e30;
    uVar5 = *(undefined8 *)PTR_DAT_04379e30;
    *(undefined8 *)PTR_DAT_04379e38 = uVar5;
    uVar6 = FUN_00d26848(uVar5,0);
    if ((uVar6 & 1) == 0) {
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e28);
      }
      uVar5 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar5;
      FUN_00d26748(uVar5,0,0);
      return;
    }
  }
  return;
}


