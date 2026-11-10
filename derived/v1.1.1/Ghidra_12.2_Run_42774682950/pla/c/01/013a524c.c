/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a524c; name: FUN_013a524c
 */


undefined8 FUN_013a524c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 local_18;
  
  switch(*(undefined1 *)(param_1 + 0xb1)) {
  case 0:
    (**(code **)(**(long **)(param_1 + 0x90) + 0x90))();
    FUN_013ce040(*(undefined8 *)(param_1 + 0xa0));
    uVar4 = 1;
    break;
  case 1:
    uVar2 = (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_013ce098(*(undefined8 *)(param_1 + 0xa0)), (uVar2 & 1) != 0)) {
      return 0;
    }
    uVar2 = FUN_013a6ce8();
    uVar4 = 2;
    if ((uVar2 & 1) != 0) {
      uVar4 = 3;
    }
    *(undefined1 *)(param_1 + 0xb1) = uVar4;
    return 0;
  case 2:
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379678), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    uVar3 = *(undefined8 *)PTR_DAT_04379680;
    *(undefined8 *)PTR_DAT_04379688 = uVar3;
    local_18 = 0xfc51a1ce2f9d1452;
    FUN_014a7fb4(uVar3,&local_18);
    uVar4 = 3;
    break;
  case 3:
    (**(code **)(**(long **)(param_1 + 0x90) + 0xa8))();
    *(undefined1 *)(param_1 + 0xb0) = 3;
    return 1;
  default:
    return 0;
  }
  *(undefined1 *)(param_1 + 0xb1) = uVar4;
  return 0;
}


