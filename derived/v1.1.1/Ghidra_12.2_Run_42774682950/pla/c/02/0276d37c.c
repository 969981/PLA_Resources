/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276d37c; name: FUN_0276d37c
 */


void FUN_0276d37c(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long *local_b0;
  long lStack_a8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_38;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  local_38 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = local_38;
  if (local_38 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 8);
    local_48 = 0;
    local_58 = 0xaaaaaaaaaaaaaaa;
    uStack_50 = 0;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    lVar5 = *param_2;
    lVar1 = param_2[1];
    if (lVar5 != lVar1) {
      do {
        local_b0 = &local_38;
        lStack_a8 = lVar5;
        uVar3 = FUN_0276d52c(&local_b0);
        if ((uVar3 & 1) != 0) {
          FUN_0279130c(local_38,lVar5 + 100);
        }
        FUN_0276ce74(&local_78,lVar5 + 100);
        lVar5 = lVar5 + 0x98;
      } while (lVar5 != lVar1);
    }
    uVar4 = FUN_0279214c(local_38);
    local_e8 = *(long *)(param_1 + 8);
    local_d0 = (ulong)local_d0._4_4_ << 0x20;
    local_d8 = 0;
    lStack_e0 = 0xaaaaaaaaaaaaaaa;
    FUN_02763a78(&local_b0,uVar4,&local_e8);
    FUN_0277fcd0(local_b0,lStack_a8);
    FUN_0277fcd0(local_78,uStack_70);
    local_d0 = *(undefined8 *)(param_1 + 8);
    local_b8 = 0;
    local_e8 = 0;
    lStack_e0 = 0;
    local_d8 = 0;
    local_c8 = 0xaaaaaaaaaaaaaaa;
    uStack_c0 = 0;
    FUN_02780840(local_b0,lStack_a8,local_78,uStack_70,&local_e8,0);
    lVar1 = lStack_e0;
    for (lVar5 = local_e8; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      FUN_02792804(local_38,lVar5);
    }
    FUN_02763dac(&local_e8);
    FUN_02763dac(&local_b0);
    FUN_02763dac(&local_78);
  }
  return;
}


