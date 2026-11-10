/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013eadac; name: FUN_013eadac
 */


long FUN_013eadac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_2;
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  local_48 = param_2[1];
  local_40 = param_2[2];
  plVar2 = (long *)param_2[3];
  plStack_38 = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar4 = (long *)FUN_013ead20(uVar6,uVar1,&local_50);
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar4 = (long *)FUN_013ead20(uVar6,uVar1,&local_50);
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if ((*(long **)(param_1 + 0x78) != plVar4) && (lVar7 = *plVar4, lVar7 != 0)) {
    puVar5 = (undefined8 *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
    if (((*PTR_DAT_0437f350 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437f350), iVar3 != 0)) {
      uVar6 = FUN_013e8d28();
      *(undefined8 *)PTR_DAT_0437f358 = uVar6;
      __cxa_guard_release(PTR_DAT_0437f350);
    }
    if (puVar5 != (undefined8 *)0x0) {
      do {
        if (puVar5 == (undefined8 *)PTR_DAT_0437f358) {
          return lVar7;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


