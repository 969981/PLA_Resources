/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020aa950; name: FUN_020aa950
 */


undefined8 FUN_020aa950(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  lVar4 = FUN_001511d0();
  *param_3 = 1;
  param_3[1] = param_3[1] + 1;
  uVar6 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437d000 != '\0') &&
     (iVar3 = FUN_00155630(param_1,param_2,"class_cast"), iVar3 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    puVar1 = PTR_DAT_0437d010;
    if (((*PTR_DAT_0437d008 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d008), iVar3 != 0)) {
      if (((*PTR_DAT_0437d018 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d018), puVar2 = PTR_DAT_0437d020, iVar3 != 0)) {
        FUN_00ef79c0(PTR_DAT_0437d020);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d018);
      }
      *(undefined **)puVar1 = PTR_DAT_0437d020;
      __cxa_guard_release(PTR_DAT_0437d008);
    }
    uVar6 = (*pcVar5)(uVar6,*(undefined8 *)puVar1);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  return uVar6;
}


