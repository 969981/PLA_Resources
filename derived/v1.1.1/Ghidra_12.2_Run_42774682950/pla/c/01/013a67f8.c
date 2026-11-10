/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a67f8; name: FUN_013a67f8
 */


undefined8 FUN_013a67f8(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar9 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_0437f080 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437f080), puVar3 = PTR_DAT_0437b300, iVar4 != 0)) {
      if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b2f8), puVar2 = PTR_DAT_043794d8, iVar4 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
          uVar7 = FUN_0087f8f0();
          *(undefined8 *)puVar2 = uVar7;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_0437b2f8);
      }
      *(undefined **)PTR_DAT_0437f088 = puVar3;
      __cxa_guard_release(PTR_DAT_0437f080);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_0437f088) {
        cVar1 = *(char *)(param_1 + 0xb1);
        if (cVar1 != '\x02') {
          if (cVar1 == '\x01') {
            uVar6 = (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
            if (((uVar6 & 1) != 0) &&
               (uVar6 = FUN_013ce098(*(undefined8 *)(param_1 + 0xa0)), (uVar6 & 1) != 0)) {
              return 0;
            }
            FUN_013a38c8(puVar9 + -10,1);
            uVar8 = 2;
          }
          else {
            if (cVar1 != '\0') {
              return 0;
            }
            (**(code **)(**(long **)(param_1 + 0x90) + 0x98))();
            (**(code **)(**(long **)(param_1 + 0x90) + 0xb0))();
            FUN_013ce0b4(*(undefined8 *)(param_1 + 0xa0));
            uVar8 = 1;
          }
          *(undefined1 *)(param_1 + 0xb1) = uVar8;
          return 0;
        }
        iVar4 = FUN_013a38d0(puVar9 + -10);
        if (iVar4 != 0) {
          return 0;
        }
        uVar8 = 2;
        goto LAB_013a6904;
      }
    }
  }
  uVar8 = 8;
LAB_013a6904:
  *(undefined1 *)(param_1 + 0xb0) = uVar8;
  return 1;
}


