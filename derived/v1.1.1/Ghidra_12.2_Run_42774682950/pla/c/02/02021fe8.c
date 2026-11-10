/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02021fe8; name: FUN_02021fe8
 */


undefined8 FUN_02021fe8(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar4 = FUN_001511d0();
  *param_3 = 1;
  param_3[1] = param_3[1] + 1;
  uVar5 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if (*PTR_DAT_04383980 != '\0') {
    iVar3 = FUN_00155630(param_1,param_2,"class_cast");
    if (iVar3 != 0) {
      pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
      puVar1 = PTR_DAT_04383990;
      if (((*PTR_DAT_04383988 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04383988), iVar3 != 0)) {
        if (((*PTR_DAT_04383998 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04383998), puVar2 = PTR_DAT_043839a0, iVar3 != 0)) {
          FUN_02020fd0(PTR_DAT_043839a0);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04383998);
        }
        *(undefined **)puVar1 = PTR_DAT_043839a0;
        __cxa_guard_release(PTR_DAT_04383988);
      }
      uVar5 = (*pcVar6)(uVar5,*(undefined8 *)puVar1);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  return uVar5;
}


