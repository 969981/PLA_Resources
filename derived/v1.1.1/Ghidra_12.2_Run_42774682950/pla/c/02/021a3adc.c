/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021a3adc; name: FUN_021a3adc
 */


undefined8 FUN_021a3adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_04381708;
  if (((*PTR_DAT_04381700 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04381700), iVar4 != 0))
  {
    if (((*PTR_DAT_04381710 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04381710), puVar3 = PTR_DAT_04381718, iVar4 != 0)) {
      FUN_017c7150(PTR_DAT_04381718);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04381710);
    }
    *(undefined **)puVar2 = PTR_DAT_04381718;
    __cxa_guard_release(PTR_DAT_04381700);
  }
  uVar5 = FUN_021a3a20(param_2,*(undefined8 *)puVar2);
  uVar1 = 0;
  if ((uVar5 & 1) == 0) {
    uVar1 = param_1;
  }
  return uVar1;
}


