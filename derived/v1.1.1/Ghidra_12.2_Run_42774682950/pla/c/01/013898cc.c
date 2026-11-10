/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013898cc; name: FUN_013898cc
 */


void FUN_013898cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_38;
  
  local_60 = &DAT_7167f64cea5b86b8;
  local_58 = "execute";
  local_50 = 7;
  FUN_00d18d1c(&local_38,&local_60);
  plVar4 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x88) = local_38;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  puVar5 = (undefined8 *)(**(code **)*puVar9)(puVar9);
  puVar2 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar3 != 0))
  {
    uVar10 = FUN_009311a8();
    *(undefined8 *)puVar2 = uVar10;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (puVar5 != (undefined8 *)puVar2) {
    for (puVar5 = (undefined8 *)*puVar5; puVar5 != (undefined8 *)puVar2;
        puVar5 = (undefined8 *)*puVar5) {
    }
  }
  uVar10 = puVar9[0x8f];
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18);
    if (puVar9 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(**(code **)*puVar9)(puVar9);
      if (((*PTR_DAT_0437f000 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0437f000), puVar2 = PTR_DAT_0437b300, iVar3 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b2f8), puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
            uVar8 = FUN_0087f8f0();
            *(undefined8 *)puVar1 = uVar8;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437f008 = puVar2;
        __cxa_guard_release(PTR_DAT_0437f000);
      }
      if (puVar6 != (undefined8 *)0x0) {
        do {
          if (puVar6 == (undefined8 *)PTR_DAT_0437f008) {
            puVar5 = puVar9 + -10;
            break;
          }
          puVar6 = (undefined8 *)*puVar6;
          puVar5 = (undefined8 *)0x0;
        } while (puVar6 != (undefined8 *)0x0);
        goto LAB_013899d4;
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_013899d4:
  local_60 = (undefined1 *)puVar5[0xd];
  local_58 = (char *)puVar5[0xe];
  local_50 = puVar5[0xf];
  local_48 = (long *)puVar5[0x10];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  lVar7 = FUN_013893ac(uVar10,&local_60);
  *(long *)(param_1 + 0x90) = lVar7;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))(local_48);
    lVar7 = *(long *)(param_1 + 0x90);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0138a554();
  return;
}


