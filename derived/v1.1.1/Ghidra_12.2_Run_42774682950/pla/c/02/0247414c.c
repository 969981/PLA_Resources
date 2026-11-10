/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0247414c; name: FUN_0247414c
 */


undefined8 FUN_0247414c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = FUN_023bcf88();
  uVar5 = FUN_02474090(param_2,uVar4);
  puVar1 = PTR_DAT_04381708;
  if ((uVar5 & 1) == 0) {
    return param_1;
  }
  if (((*PTR_DAT_04381700 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04381700), iVar3 != 0))
  {
    if (((*PTR_DAT_04381710 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04381710), puVar2 = PTR_DAT_04381718, iVar3 != 0)) {
      FUN_017c7150(PTR_DAT_04381718);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04381710);
    }
    *(undefined **)puVar1 = PTR_DAT_04381718;
    __cxa_guard_release(PTR_DAT_04381700);
  }
  uVar5 = FUN_02474090(param_2,*(undefined8 *)puVar1);
  uVar4 = 0;
  if ((uVar5 & 1) == 0) {
    uVar4 = param_1;
  }
  return uVar4;
}


