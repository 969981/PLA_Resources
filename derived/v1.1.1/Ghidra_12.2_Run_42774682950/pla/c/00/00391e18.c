/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00391e18; name: FUN_00391e18
 */


long * FUN_00391e18(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined **local_58;
  long *plStack_50;
  long local_28;
  undefined *puStack_20;
  undefined ***local_18;
  
  if (*(int *)(param_2 + 0x3c) != 3) {
    FUN_0030f640(&local_58,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message.cc"
                 ,0x126);
                    /* try { // try from 00391e48 to 00391e5b has its CatchHandler @ 003921d8 */
    uVar2 = FUN_0030f3ac(&local_58,"CHECK failed: field->is_repeated(): ");
                    /* try { // try from 00391e5c to 00391e63 has its CatchHandler @ 003921d4 */
    FUN_0030f41c(&local_18,uVar2);
    FUN_0030f658(&local_58);
  }
  puVar3 = *(ulong **)(param_2 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_20 = PTR_LAB_04373a98, local_28 = param_2, *puVar3 != 0xffffffffffffffff)) {
    local_58 = &puStack_20;
    plStack_50 = &local_28;
    local_18 = &local_58;
    std::__call_once(puVar3,&local_18,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  uVar5 = *(uint *)(param_2 + 0x38);
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)uVar5 * 4)) {
  case 1:
    if ((DAT_04399b18 & 1) != 0) {
      return &DAT_04399b10;
    }
    iVar1 = __cxa_guard_acquire(&DAT_04399b18);
    puVar6 = PTR_DAT_04373cc8;
    goto joined_r0x00392098;
  case 2:
    if ((DAT_04399b38 & 1) != 0) {
      return &DAT_04399b30;
    }
    plVar7 = &DAT_04399b30;
    iVar1 = __cxa_guard_acquire(&DAT_04399b38);
    if (iVar1 == 0) {
      return plVar7;
    }
    puVar6 = PTR_DAT_04373c98;
    break;
  case 3:
    if ((DAT_04399b28 & 1) != 0) {
      return &DAT_04399b20;
    }
    plVar7 = &DAT_04399b20;
    iVar1 = __cxa_guard_acquire(&DAT_04399b28);
    if (iVar1 == 0) {
      return plVar7;
    }
    puVar6 = PTR_DAT_04373ca0;
    break;
  case 4:
    if ((DAT_04399b48 & 1) != 0) {
      return &DAT_04399b40;
    }
    plVar7 = &DAT_04399b40;
    iVar1 = __cxa_guard_acquire(&DAT_04399b48);
    if (iVar1 == 0) {
      return plVar7;
    }
    puVar6 = PTR_DAT_04373ca8;
    break;
  case 5:
    if ((DAT_04399b68 & 1) != 0) {
      return &DAT_04399b60;
    }
    plVar7 = &DAT_04399b60;
    iVar1 = __cxa_guard_acquire(&DAT_04399b68);
    if (iVar1 == 0) {
      return plVar7;
    }
    puVar6 = PTR_DAT_04373cb0;
    break;
  case 6:
    if ((DAT_04399b58 & 1) != 0) {
      return &DAT_04399b50;
    }
    plVar7 = &DAT_04399b50;
    iVar1 = __cxa_guard_acquire(&DAT_04399b58);
    if (iVar1 == 0) {
      return plVar7;
    }
    puVar6 = PTR_DAT_04373cb8;
    break;
  case 7:
    if ((DAT_04399b78 & 1) != 0) {
      return &DAT_04399b70;
    }
    plVar7 = &DAT_04399b70;
    iVar1 = __cxa_guard_acquire(&DAT_04399b78);
    if (iVar1 == 0) {
      return plVar7;
    }
    puVar6 = PTR_DAT_04373cc0;
    break;
  case 8:
    if ((DAT_04399b18 & 1) != 0) {
      return &DAT_04399b10;
    }
    iVar1 = __cxa_guard_acquire(&DAT_04399b18);
    puVar6 = PTR_DAT_04373cc8;
joined_r0x00392098:
    if (iVar1 == 0) {
      PTR_DAT_04373cc8 = puVar6;
      return &DAT_04399b10;
    }
    plVar7 = &DAT_04399b10;
    PTR_DAT_04373cc8 = puVar6;
    break;
  case 9:
    if ((DAT_04399b88 & 1) != 0) {
      return &DAT_04399b80;
    }
    plVar7 = &DAT_04399b80;
    iVar1 = __cxa_guard_acquire(&DAT_04399b88);
    if (iVar1 == 0) {
      return plVar7;
    }
    puVar6 = PTR_DAT_04373cd0;
    break;
  case 10:
    puVar3 = *(ulong **)(param_2 + 0x30);
    if (puVar3 != (ulong *)0x0) {
      puStack_20 = PTR_LAB_04373a98;
      local_28 = param_2;
      if (*puVar3 != 0xffffffffffffffff) {
        local_58 = &puStack_20;
        plStack_50 = &local_28;
        local_18 = &local_58;
        std::__call_once(puVar3,&local_18,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar5 = *(uint *)(param_2 + 0x38);
    }
    if ((uVar5 == 0xb) && (uVar4 = FUN_00344344(param_2), (uVar4 & 1) != 0)) {
      if ((DAT_04399b98 & 1) != 0) {
        return &DAT_04399b90;
      }
      plVar7 = &DAT_04399b90;
      iVar1 = __cxa_guard_acquire(&DAT_04399b98);
      if (iVar1 == 0) {
        return plVar7;
      }
      puVar6 = PTR_DAT_04373cd8;
    }
    else {
      if ((DAT_04399ba8 & 1) != 0) {
        return &DAT_04399ba0;
      }
      plVar7 = &DAT_04399ba0;
      iVar1 = __cxa_guard_acquire(&DAT_04399ba8);
      if (iVar1 == 0) {
        return plVar7;
      }
      puVar6 = PTR_DAT_04373ce0;
    }
    break;
  default:
    FUN_0030f640(&local_58,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message.cc"
                 ,0x142);
                    /* try { // try from 00391f24 to 00391f37 has its CatchHandler @ 003921d0 */
    uVar2 = FUN_0030f3ac(&local_58,"Should not reach here.");
                    /* try { // try from 00391f38 to 00391f3f has its CatchHandler @ 003921cc */
    FUN_0030f41c(&local_18,uVar2);
    FUN_0030f658(&local_58);
    return (long *)0x0;
  }
  *plVar7 = (long)(puVar6 + 0x10);
  __cxa_guard_release(plVar7 + 1);
  return plVar7;
}


