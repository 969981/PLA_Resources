/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120ba60; name: FUN_0120ba60
 */


void FUN_0120ba60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18);
    if (puVar8 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_0437e7c0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0437e7c0), puVar2 = PTR_DAT_0437b300, iVar3 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b2f8), puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
            uVar5 = FUN_0087f8f0();
            *(undefined8 *)puVar1 = uVar5;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437e7c8 = puVar2;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar4 != (undefined8 *)0x0) {
        do {
          if (puVar4 == (undefined8 *)PTR_DAT_0437e7c8) {
            puVar6 = puVar8 + -10;
            break;
          }
          puVar4 = (undefined8 *)*puVar4;
          puVar6 = (undefined8 *)0x0;
        } while (puVar4 != (undefined8 *)0x0);
        goto LAB_0120bac4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_0120bac4:
  uVar5 = FUN_011fb248(puVar6);
  FUN_01227afc(uVar7,uVar5,1);
  FUN_01227f04(*(undefined8 *)(param_1 + 0xa0),1,1);
  return;
}


