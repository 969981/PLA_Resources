/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ef7104; name: FUN_00ef7104
 */


void FUN_00ef7104(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
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
  
  uVar5 = FUN_00ef72b0();
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
    if ((*PTR_DAT_0437d000 != '\0') &&
       (iVar4 = FUN_00155630(param_2,param_3,"class_cast"), iVar4 != 0)) {
      pcVar7 = (code *)FUN_001511d0(param_2,0xffffffff);
      puVar2 = PTR_DAT_0437d010;
      if (((*PTR_DAT_0437d008 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0437d008), iVar4 != 0)) {
        if (((*PTR_DAT_0437d018 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_0437d018), puVar3 = PTR_DAT_0437d020, iVar4 != 0)) {
          FUN_00ef79c0(PTR_DAT_0437d020);
          FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437d018);
        }
        *(undefined **)puVar2 = PTR_DAT_0437d020;
        __cxa_guard_release(PTR_DAT_0437d008);
      }
      uVar8 = (*pcVar7)(uVar8,*(undefined8 *)puVar2);
      FUN_0014ff10(param_2,0xfffffffe);
    }
    *param_1 = uVar8;
  }
  return;
}


