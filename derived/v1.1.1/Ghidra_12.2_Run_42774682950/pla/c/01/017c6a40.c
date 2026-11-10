/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017c6a40; name: FUN_017c6a40
 */


undefined8
FUN_017c6a40(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *pcVar8;
  
  iVar3 = FUN_00150310();
  *param_4 = 1;
  param_4[1] = param_4[1] + 1;
  if (iVar3 == 7) {
    iVar3 = FUN_00152090(param_1,param_2);
    if (iVar3 != 0) {
      uVar4 = FUN_0014fef0(param_1);
      uVar5 = FUN_017c6cc0(param_1,uVar4);
      if (((((uVar5 & 1) == 0) && (uVar5 = FUN_017c6d50(param_1,uVar4), (uVar5 & 1) == 0)) &&
          (uVar5 = FUN_017c6de0(param_1,uVar4), (uVar5 & 1) == 0)) &&
         (uVar5 = FUN_017c6e70(param_1,uVar4), (uVar5 & 1) == 0)) {
        if (*PTR_DAT_043816f8 == '\0') {
LAB_017c6bf8:
          FUN_0014ff10(param_1,0xfffffffe);
        }
        else {
          FUN_00151570(param_1,"class_check");
          FUN_00151d20(param_1,uVar4);
          iVar3 = FUN_00150310(param_1,0xffffffff);
          if (iVar3 == 0) {
            FUN_0014ff10(param_1,0xfffffffe);
            goto LAB_017c6bf8;
          }
          pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
          puVar1 = PTR_DAT_04381708;
          if (((*PTR_DAT_04381700 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04381700), iVar3 != 0)) {
            if (((*PTR_DAT_04381710 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_04381710), puVar2 = PTR_DAT_04381718, iVar3 != 0
               )) {
              FUN_017c7150(PTR_DAT_04381718);
              FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04381710);
            }
            *(undefined **)puVar1 = PTR_DAT_04381718;
            __cxa_guard_release(PTR_DAT_04381700);
          }
          uVar5 = (*pcVar7)(*(undefined8 *)puVar1);
          FUN_0014ff10(param_1,0xfffffffe);
          FUN_0014ff10(param_1,0xfffffffe);
          if ((uVar5 & 1) != 0) goto LAB_017c6b20;
        }
        pcVar7 = (code *)*param_3;
        pcVar8 = "value at this index does not properly reflect the desired type";
        iVar3 = 7;
        goto LAB_017c6b40;
      }
    }
LAB_017c6b20:
    uVar6 = 1;
  }
  else {
    pcVar7 = (code *)*param_3;
    pcVar8 = "value is not a valid userdata";
LAB_017c6b40:
    (*pcVar7)(param_1,param_2,7,iVar3,pcVar8);
    uVar6 = 0;
  }
  return uVar6;
}


