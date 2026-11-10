/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00803b6c; name: FUN_00803b6c
 */


undefined8 FUN_00803b6c(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [16];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_1 + 0xa0) = 0x13;
  lVar4 = *(long *)(param_1 + 0xf0);
  if (*(int *)(lVar4 + 0x1c0) != 0) {
    *(undefined4 *)(lVar4 + 0x1c0) = 0;
  }
  if (*(int *)(lVar4 + 0x1c4) != 4) {
    *(undefined4 *)(lVar4 + 0x1c4) = 4;
  }
  (**(code **)(**(long **)(lVar4 + 0x278) + 0x10))();
  local_50 = CONCAT44(local_50._4_4_,0xc406);
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_60);
  piVar5 = (int *)(param_1 + 0x90);
  if (*piVar5 != (int)local_50) {
    local_28[0] = 0;
    local_60[0] = 0xc47f;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_28);
    if (*piVar5 != local_60[0]) {
      local_70[0] = 0xc480;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_28);
      if (*piVar5 != local_70[0]) {
        local_80[0] = 0xc482;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_28);
        if (*piVar5 != local_80[0]) {
          local_90[0] = 0xc481;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_28);
          if (*piVar5 != local_90[0]) {
            local_a0[0] = 0xc420;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_28);
            if (*piVar5 != local_a0[0]) {
              local_b0[0] = 0xc421;
              local_28[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_b0 | 4),(Result *)local_28);
              if (*piVar5 != local_b0[0]) goto LAB_00803d94;
            }
          }
        }
      }
    }
  }
  uVar2 = FUN_00805440(param_1);
  plVar6 = *(long **)(*(long *)(param_1 + 0xf0) + 0x120);
  FUN_007f0ce0(&local_50);
  (**(code **)(*plVar6 + 0x58))(plVar6,&local_50);
  uVar3 = FUN_007f0ee4(&local_50);
  if ((uVar3 & 1) == 0) {
    if ((uVar2 & 1) == 0) goto LAB_00803d94;
  }
  else {
    (**(code **)(*plVar6 + 0x78))(plVar6,&local_50);
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0xf0) + 0xf8);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(*(long *)(param_1 + 0xf0) + 0x118);
  local_48 = 0;
  local_50 = 0x100;
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_50);
  *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x24b) = 1;
  nn::os::UnlockMutex(pMVar1);
LAB_00803d94:
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  FUN_007ee578(auStack_c0,piVar5);
  FUN_007e5cac(uVar7,auStack_c0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


