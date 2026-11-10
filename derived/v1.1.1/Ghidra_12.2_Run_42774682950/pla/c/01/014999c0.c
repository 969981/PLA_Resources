/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014999c0; name: FUN_014999c0
 */


void FUN_014999c0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xd0));
  if ((uVar3 & 1) != 0) {
    uVar1 = FUN_00d686a0(*(undefined8 *)(param_1 + 0xd0));
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    if (((*PTR_DAT_04379e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e28);
    }
    uVar4 = *(undefined8 *)PTR_DAT_04379e30;
    *(undefined8 *)PTR_DAT_04379e38 = uVar4;
    FUN_00d264cc(uVar4,0,0,&DAT_043c3e10,&DAT_043c3e10,8,0,0);
    *(undefined8 *)(param_1 + 0x90) = 2;
  }
  return;
}


