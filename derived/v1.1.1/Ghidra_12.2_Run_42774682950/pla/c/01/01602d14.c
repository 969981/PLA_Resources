/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01602d14; name: FUN_01602d14
 */


undefined8 FUN_01602d14(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  
  if ((*PTR_DAT_04380660 != '\0') &&
     (iVar3 = FUN_00155630(param_1,param_3,"class_cast"), iVar3 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    puVar1 = PTR_DAT_04380670;
    if (((*PTR_DAT_04380668 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04380668), iVar3 != 0)) {
      if (((*PTR_DAT_04380678 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04380678), puVar2 = PTR_DAT_04380680, iVar3 != 0)) {
        FUN_01602e50(PTR_DAT_04380680);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04380678);
      }
      *(undefined **)puVar1 = PTR_DAT_04380680;
      __cxa_guard_release(PTR_DAT_04380668);
    }
    param_2 = (*pcVar4)(param_2,*(undefined8 *)puVar1);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  return param_2;
}


