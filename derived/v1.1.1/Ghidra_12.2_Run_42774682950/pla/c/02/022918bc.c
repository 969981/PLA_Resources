/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022918bc; name: FUN_022918bc
 */


undefined8 FUN_022918bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0437d010;
  if (((*PTR_DAT_0437d008 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d008), iVar3 != 0))
  {
    if ((*PTR_DAT_0437d018 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_0437d018);
      puVar2 = PTR_DAT_0437d020;
      if (iVar3 != 0) {
        FUN_00ef79c0(PTR_DAT_0437d020);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d018);
      }
    }
    *(undefined **)puVar1 = PTR_DAT_0437d020;
    __cxa_guard_release(PTR_DAT_0437d008);
  }
  uVar4 = FUN_02291800(param_2,*(undefined8 *)puVar1);
  if ((uVar4 & 1) == 0) {
    return param_1;
  }
  uVar5 = FUN_01fd9b5c();
  uVar4 = FUN_02291800(param_2,uVar5);
  uVar5 = param_1;
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00fc1470();
    uVar4 = FUN_02291800(param_2,uVar5);
    uVar5 = 0;
    if ((uVar4 & 1) == 0) {
      uVar5 = param_1;
    }
  }
  return uVar5;
}


