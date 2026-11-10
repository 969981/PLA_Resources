/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017c6894; name: FUN_017c6894
 */


void FUN_017c6894(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 uint *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar5 = FUN_017c6a40();
  if ((uVar5 & 1) == 0) {
    iVar4 = FUN_00150310(param_2,param_3);
    *param_5 = (uint)(iVar4 != -1);
    uVar1 = param_5[1];
    if (iVar4 != -1) {
      uVar1 = uVar1 + 1;
    }
    param_5[1] = uVar1;
    *param_1 = 0;
  }
  else {
    lVar6 = FUN_001511d0(param_2,param_3);
    *param_5 = 1;
    param_5[1] = param_5[1] + 1;
    uVar8 = *(undefined8 *)(lVar6 + ((ulong)(uint)-(int)lVar6 & 7));
    if ((*PTR_DAT_043816f8 != '\0') &&
       (iVar4 = FUN_00155630(param_2,param_3,"class_cast"), iVar4 != 0)) {
      pcVar7 = (code *)FUN_001511d0(param_2,0xffffffff);
      puVar2 = PTR_DAT_04381708;
      if (((*PTR_DAT_04381700 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04381700), iVar4 != 0)) {
        if (((*PTR_DAT_04381710 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04381710), puVar3 = PTR_DAT_04381718, iVar4 != 0)) {
          FUN_017c7150(PTR_DAT_04381718);
          FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04381710);
        }
        *(undefined **)puVar2 = PTR_DAT_04381718;
        __cxa_guard_release(PTR_DAT_04381700);
      }
      uVar8 = (*pcVar7)(uVar8,*(undefined8 *)puVar2);
      FUN_0014ff10(param_2,0xfffffffe);
    }
    *param_1 = uVar8;
  }
  return;
}


