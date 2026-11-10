/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130cb7c; name: FUN_0130cb7c
 */


undefined8 FUN_0130cb7c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar5 = FUN_0130abe8();
  if (lVar5 == 0) {
    return 0;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    *(undefined1 *)(lVar5 + 0x76) = 1;
    return 2;
  }
  if (*(int *)(param_1 + 0xf4) == 1) {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_04379ca8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar3 != 0)) {
      uVar9 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_04379c98 = uVar9;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    if (plVar6 != (long *)PTR_DAT_04379c98) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)PTR_DAT_04379c98; plVar6 = (long *)*plVar6) {
      }
    }
    local_50 = &DAT_786441c0fda6345d;
    pcStack_48 = "MessageView";
    local_40 = 0xb;
    local_38 = (long *)0x0;
    lVar7 = FUN_011994dc(puVar10[0x8f],&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (*(int *)(*(long *)(lVar7 + 0x5b0) + 0x80) == 7) {
      *(undefined1 *)(lVar5 + 0x76) = 1;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      uVar8 = FUN_0131e948();
      if (((uVar8 & 1) != 0) || (uVar8 = FUN_0131ef4c(), (uVar8 & 1) != 0)) {
        return 2;
      }
      uVar2 = FUN_00d686a0(lVar7);
      uVar1 = *(uint *)(lVar5 + 0xe4);
      if (uVar1 < 2) {
        if (uVar2 != 0) {
          return 2;
        }
        if (uVar1 != 1) {
          return 2;
        }
      }
      else {
        if (uVar1 <= uVar2) {
          return 2;
        }
        lVar5 = lVar5 + (ulong)uVar2 * 4;
      }
      iVar3 = *(int *)(lVar5 + 0xe8);
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      puVar10 = (undefined8 *)(PTR_DAT_0437edc0 + (long)iVar3 * 0x18);
      uVar9 = *(undefined8 *)PTR_DAT_04379698;
      *(undefined8 *)PTR_DAT_043796a0 = uVar9;
      local_50 = (undefined1 *)*puVar10;
      pcStack_48 = (char *)puVar10[1];
      local_40 = puVar10[2];
      local_38 = (long *)0x0;
      FUN_0286b968(uVar9,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      return 1;
    }
  }
  return 0;
}


