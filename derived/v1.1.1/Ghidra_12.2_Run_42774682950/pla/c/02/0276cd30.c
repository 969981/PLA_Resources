/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276cd30; name: FUN_0276cd30
 */


void FUN_0276cd30(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((*PTR_DAT_0437b4d0 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_0437b4d0);
    if (iVar4 != 0) {
      FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b4d0);
    }
  }
  lVar6 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar6;
  if (lVar6 == 0) {
    *param_1 = 0;
  }
  else {
    local_50 = *(undefined8 *)(param_2 + 8);
    local_68 = 0;
    local_60 = 0;
    local_48 = 0xaaaaaaaaaaaaaaa;
    local_40 = 0;
    local_38 = 0;
    local_58 = 0;
    plVar5 = (long *)FUN_027927fc(lVar6);
    lVar6 = *plVar5;
    lVar1 = plVar5[1];
    if (lVar6 == lVar1) {
      *param_1 = 0;
    }
    else {
      do {
        FUN_0276ce74(&local_68,lVar6);
        uVar3 = local_58;
        lVar2 = local_60;
        lVar6 = lVar6 + 0x18;
      } while (lVar1 != lVar6);
      *param_1 = 0;
      if (local_68 != local_60) {
        *(long *)(param_1 + 8) = local_68;
        *(undefined8 *)(param_1 + 0x30) = local_40;
        *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_34,local_38);
        local_68 = 0;
        *(undefined8 *)(param_1 + 0x20) = local_50;
        *(undefined8 *)(param_1 + 0x28) = local_48;
        local_60 = 0;
        local_58 = 0;
        *(long *)(param_1 + 0x10) = lVar2;
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        *param_1 = 1;
      }
    }
    FUN_02763dac(&local_68);
  }
  return;
}


