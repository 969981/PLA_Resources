/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d469b4; name: FUN_00d469b4
 */


void FUN_00d469b4(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_1 + 0x58);
  if ((param_3 & 1) == 0) {
    plVar4 = (long *)(param_1 + 0x60);
  }
  lVar8 = *plVar4;
  plVar4 = (long *)(**(code **)(**(long **)(lVar8 + 0x580) + 0x10))();
  if ((long *)plVar4[1] != (long *)*plVar4) {
    lVar9 = *(long *)(param_1 + 0x68);
    lVar6 = *(long *)*plVar4;
    if ((lVar6 != 0) && (puVar7 = *(undefined8 **)(lVar6 + 0x18), puVar7 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar7)(puVar7);
      puVar1 = PTR_DAT_0437b330;
      if (((*PTR_DAT_0437b328 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b328), puVar2 = PTR_DAT_043794d8,
         puVar1 = PTR_DAT_0437b330, iVar3 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
          uVar5 = FUN_0087f8f0();
          *(undefined8 *)puVar2 = uVar5;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        puVar1 = PTR_DAT_0437b330;
        *(undefined **)PTR_DAT_0437b330 = puVar2;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)puVar1) {
          puVar7 = puVar7 + -10;
          goto LAB_00d46a60;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_00d46a60:
    FUN_00d42be0(*(undefined8 *)(lVar9 + 0x580),puVar7);
  }
  if (param_2 == 0) {
    return;
  }
  FUN_00d42be0(*(undefined8 *)(lVar8 + 0x580),param_2);
  return;
}


