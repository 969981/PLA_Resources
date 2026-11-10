/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276cec8; name: FUN_0276cec8
 */


void FUN_0276cec8(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  char local_b98 [16];
  int local_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar4 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar4;
  if (lVar4 == 0) {
    *param_1 = 0;
  }
  else {
    local_70 = *(undefined8 *)(param_2 + 8);
    local_58 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_68 = 0x555555555555555;
    local_60 = 0;
    iVar3 = FUN_027884b0(lVar4);
    if (iVar3 == 0) {
      *param_1 = 0;
    }
    else {
      iVar5 = 0;
      do {
        FUN_02788704(local_b98,lVar4,iVar5);
        if ((local_b98[0] != '\0') && (local_b88 == 1)) {
          local_bc8 = local_b80;
          local_bc0 = uStack_b78;
          uStack_bb8 = local_b70;
          local_bb0 = local_b68;
          local_ba8 = uStack_b60;
          uStack_ba0 = local_b58;
          FUN_0276d070(&local_88,&local_bc8);
        }
        uVar2 = local_78;
        lVar1 = local_80;
        if (local_b98[0] != '\0') {
          local_b98[0] = '\0';
        }
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
      *param_1 = 0;
      if (local_88 != local_80) {
        *(long *)(param_1 + 8) = local_88;
        *(undefined8 *)(param_1 + 0x30) = local_60;
        *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_54,local_58);
        local_88 = 0;
        *(undefined8 *)(param_1 + 0x20) = local_70;
        *(undefined8 *)(param_1 + 0x28) = local_68;
        local_80 = 0;
        local_78 = 0;
        *(long *)(param_1 + 0x10) = lVar1;
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *param_1 = 1;
      }
    }
    FUN_0276e270(&local_88);
  }
  return;
}


