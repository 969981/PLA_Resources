/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f3974; name: FUN_010f3974
 */


void FUN_010f3974(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  local_54 = 0;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  puVar2 = PTR_DAT_04379c88;
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x278) - *(long *)(lVar8 + 0x270), lVar8 != 0)) {
    uVar9 = *(undefined8 *)(lVar7 + 0x100);
    lVar7 = 0;
    do {
      FUN_010f5a90(&local_68,param_1,lVar7);
      uVar4 = local_54;
      plVar3 = local_68;
      plVar1 = (long *)puVar2;
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 0xb;
      }
      puVar6 = (undefined4 *)FUN_010f8318(param_2,plVar1);
      *puVar6 = uVar4;
      local_58 = (undefined4)*plVar1;
      FUN_010f856c(uVar9,&local_58,&local_54);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      lVar7 = lVar7 + 1;
    } while (lVar8 >> 3 != lVar7);
  }
  return;
}


