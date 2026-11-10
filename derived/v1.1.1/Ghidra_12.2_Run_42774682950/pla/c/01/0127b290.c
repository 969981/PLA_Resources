/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0127b290; name: FUN_0127b290
 */


void FUN_0127b290(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar6 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_0437eac8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437eac8), puVar2 = PTR_DAT_0437b300, iVar3 != 0)) {
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
      *(undefined **)PTR_DAT_0437ead0 = puVar2;
      __cxa_guard_release(PTR_DAT_0437eac8);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_0437ead0) {
        FUN_0127a6b4(puVar6 + -10,param_2);
        FUN_0127a6a8(puVar6 + -10,0);
        break;
      }
    }
  }
  FUN_0127c204(*(undefined8 *)(param_1 + 0x90));
  return;
}


