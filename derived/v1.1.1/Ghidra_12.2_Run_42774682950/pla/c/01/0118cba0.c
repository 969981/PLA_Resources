/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0118cba0; name: FUN_0118cba0
 */


long FUN_0118cba0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_2;
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  local_48 = param_2[1];
  local_40 = param_2[2];
  plVar2 = (long *)param_2[3];
  plStack_38 = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar6 = (long *)FUN_0118c9d0(uVar8,uVar1,&local_50);
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar6 = (long *)FUN_0118c9d0(uVar8,uVar1,&local_50);
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if ((*(long **)(param_1 + 0x78) != plVar6) && (lVar9 = *plVar6, lVar9 != 0)) {
    puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
    if (((*PTR_DAT_0437e5e0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437e5e0), puVar4 = PTR_DAT_0437b330, iVar5 != 0)) {
      if (((*PTR_DAT_0437b328 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b328), puVar3 = PTR_DAT_043794d8, iVar5 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
          uVar8 = FUN_0087f8f0();
          *(undefined8 *)puVar3 = uVar8;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar4 = puVar3;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
      *(undefined **)PTR_DAT_0437e5e8 = puVar4;
      __cxa_guard_release(PTR_DAT_0437e5e0);
    }
    if (puVar7 != (undefined8 *)0x0) {
      do {
        if (puVar7 == (undefined8 *)PTR_DAT_0437e5e8) {
          return lVar9;
        }
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


