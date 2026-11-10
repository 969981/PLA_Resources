/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013893ac; name: FUN_013893ac
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_013893ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_2;
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  local_48 = param_2[1];
  local_40 = param_2[2];
  plVar6 = (long *)param_2[3];
  plStack_38 = plVar6;
  if (plVar6 == (long *)0x0) {
    plVar5 = (long *)FUN_01389840(uVar7,uVar1,&local_50);
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar5 = (long *)FUN_01389840(uVar7,uVar1,&local_50);
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if ((*(long **)(param_1 + 0x78) != plVar5) && (lVar8 = *plVar5, lVar8 != 0)) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))((undefined8 *)(lVar8 + 0x50));
    if (((*PTR_DAT_0437f010 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437f010), puVar3 = PTR_DAT_0437b330, iVar4 != 0)) {
      if (((*PTR_DAT_0437b328 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b328), puVar2 = PTR_DAT_043794d8, iVar4 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
          uVar7 = FUN_0087f8f0();
          *(undefined8 *)puVar2 = uVar7;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
      *(undefined **)PTR_DAT_0437f018 = puVar3;
      __cxa_guard_release(PTR_DAT_0437f010);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_0437f018) {
        return lVar8;
      }
    }
  }
  return 0;
}


