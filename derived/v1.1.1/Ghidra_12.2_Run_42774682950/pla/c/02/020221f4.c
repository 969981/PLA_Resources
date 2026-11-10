/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020221f4; name: FUN_020221f4
 */


undefined8
FUN_020221f4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 *param_5,undefined4 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *pcVar8;
  
  *param_6 = 1;
  param_6[1] = param_6[1] + 1;
  if ((int)param_4 == 7) {
    iVar3 = FUN_00152090(param_2,param_3);
    if (iVar3 != 0) {
      uVar4 = FUN_0014fef0(param_2);
      uVar5 = FUN_02020980(param_2,uVar4);
      if (((((uVar5 & 1) == 0) && (uVar5 = FUN_02020a10(param_2,uVar4), (uVar5 & 1) == 0)) &&
          (uVar5 = FUN_02020c70(param_2,uVar4), (uVar5 & 1) == 0)) &&
         (uVar5 = FUN_02020d00(param_2,uVar4), (uVar5 & 1) == 0)) {
        if (*PTR_DAT_04383980 == '\0') {
LAB_02022364:
          FUN_0014ff10(param_2,0xfffffffe);
        }
        else {
          FUN_00151570(param_2,"class_check");
          FUN_00151d20(param_2,uVar4);
          iVar3 = FUN_00150310(param_2,0xffffffff);
          if (iVar3 == 0) {
            FUN_0014ff10(param_2,0xfffffffe);
            goto LAB_02022364;
          }
          pcVar7 = (code *)FUN_001511d0(param_2,0xffffffff);
          puVar1 = PTR_DAT_04383990;
          if (((*PTR_DAT_04383988 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04383988), iVar3 != 0)) {
            if (((*PTR_DAT_04383998 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_04383998), puVar2 = PTR_DAT_043839a0, iVar3 != 0
               )) {
              FUN_02020fd0(PTR_DAT_043839a0);
              FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04383998);
            }
            *(undefined **)puVar1 = PTR_DAT_043839a0;
            __cxa_guard_release(PTR_DAT_04383988);
          }
          uVar5 = (*pcVar7)(*(undefined8 *)puVar1);
          FUN_0014ff10(param_2,0xfffffffe);
          FUN_0014ff10(param_2,0xfffffffe);
          if ((uVar5 & 1) != 0) goto LAB_0202228c;
        }
        pcVar7 = (code *)*param_5;
        pcVar8 = "value at this index does not properly reflect the desired type";
        param_4 = 7;
        goto LAB_020222ac;
      }
    }
LAB_0202228c:
    uVar6 = 1;
  }
  else {
    pcVar7 = (code *)*param_5;
    pcVar8 = "value is not a valid userdata";
LAB_020222ac:
    (*pcVar7)(param_2,param_3,7,param_4,pcVar8);
    uVar6 = 0;
  }
  return uVar6;
}


