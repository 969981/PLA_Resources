/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a53a0; name: FUN_013a53a0
 */


undefined8 FUN_013a53a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  char local_90 [77];
  char local_43;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar9 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    puVar3 = PTR_DAT_0437f088;
    if ((*PTR_DAT_0437f080 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_0437f080);
      puVar2 = PTR_DAT_0437b300;
      if (iVar4 != 0) {
        if ((*PTR_DAT_0437b2f8 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_0437b2f8);
          puVar1 = PTR_DAT_043794d8;
          if (iVar4 != 0) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
              uVar7 = FUN_0087f8f0();
              *(undefined8 *)puVar1 = uVar7;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(PTR_DAT_0437b2f8);
          }
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_0437f080);
      }
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)puVar3) {
        if (*(char *)(param_1 + 0xb1) == '\x01') {
          FUN_013c7f20(*(undefined8 *)(param_1 + 0x90));
          uVar6 = FUN_013c7f78(*(undefined8 *)(param_1 + 0x90));
          FUN_013c7f80(*(undefined8 *)(param_1 + 0x90));
          FUN_013c7f88(local_90,*(undefined8 *)(param_1 + 0x90));
          FUN_013c8014(*(undefined8 *)(param_1 + 0x90));
          FUN_013a38e0(puVar9 + -10,local_90);
          if ((uVar6 & 0xff) != 0) {
            iVar4 = (int)(uVar6 >> 0x20);
            if (iVar4 == 2) {
              uVar8 = 6;
              if (local_43 == '\0') {
                uVar8 = 7;
              }
            }
            else if (iVar4 == 1) {
              uVar8 = 2;
              if (local_43 != '\0') {
                uVar8 = 5;
              }
            }
            else {
              if (iVar4 != 0) {
                return 0;
              }
              uVar8 = 4;
            }
            *(undefined1 *)(param_1 + 0xb0) = uVar8;
            return 1;
          }
        }
        else if (*(char *)(param_1 + 0xb1) == '\0') {
          (**(code **)(**(long **)(param_1 + 0x90) + 0xa8))();
          *(undefined1 *)(param_1 + 0xb1) = 1;
          return 0;
        }
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


