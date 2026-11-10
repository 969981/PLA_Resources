/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01338384; name: FUN_01338384
 */


void FUN_01338384(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80 [4];
  undefined1 local_60;
  uint local_5e;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar3 = FUN_0130abe8();
  if ((lVar3 != 0) && (*(undefined1 *)(lVar3 + 0x76) = 0, *(int *)(lVar3 + 0xe4) != 0)) {
    *(undefined4 *)(param_1 + 0xdc) = 1;
    uVar4 = FUN_0131e948();
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_0131ef4c(), (uVar4 & 1) == 0)) {
      FUN_013386d8(param_1);
      local_48 = 0x101;
      local_46 = 0;
      local_58 = *(undefined8 *)(param_1 + 0xa0);
      uStack_50 = 0;
      local_5e = 0xffff;
      local_5e._0_2_ = 0xffff;
      local_98 = (long *)0x0;
      local_90 = (char *)0x0;
      local_80[3] = (long *)0x0;
      local_60 = 1;
      local_88 = 0;
      local_80[0] = (long *)0x0;
      local_80[1] = (long *)0x0;
      local_80[2] = (long *)0x0;
      if (*(uint *)(lVar3 + 0xe4) < 2) {
        if (*(uint *)(lVar3 + 0xe4) == 1) {
          local_98 = *(long **)(param_1 + 0xa8);
          local_90 = *(char **)(param_1 + 0xb0);
        }
      }
      else {
        local_98 = *(long **)(param_1 + 0xa8);
        if (((*(int *)(lVar3 + 0xe4) != 0) &&
            (local_90 = *(char **)(param_1 + 0xb0), 1 < *(uint *)(lVar3 + 0xe4))) &&
           (local_88 = *(undefined8 *)(param_1 + 0xb8), 2 < *(uint *)(lVar3 + 0xe4))) {
          uVar4 = 3;
          do {
            uVar1 = (int)uVar4 + 1;
            (&local_98)[uVar4] = *(long **)(param_1 + uVar4 * 8 + 0xa8);
            uVar4 = (ulong)uVar1;
          } while (uVar1 <= *(uint *)(lVar3 + 0xe4));
        }
      }
      local_5e = (uint)(ushort)local_5e;
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
      plVar5 = (long *)(**(code **)*puVar7)(puVar7);
      if (((*PTR_DAT_04379ca8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar2 != 0)) {
        uVar6 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_04379c98 = uVar6;
        __cxa_guard_release(PTR_DAT_04379ca8);
      }
      if (plVar5 != (long *)PTR_DAT_04379c98) {
        for (plVar5 = (long *)*plVar5; plVar5 != (long *)PTR_DAT_04379c98; plVar5 = (long *)*plVar5)
        {
        }
      }
      local_40 = &DAT_786441c0fda6345d;
      pcStack_38 = "MessageView";
      local_30 = 0xb;
      local_28 = (long *)0x0;
      plVar5 = (long *)FUN_011994dc(puVar7[0x8f],&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      FUN_00d42690(plVar5,1,1);
      FUN_00d428b0(plVar5,0);
      (**(code **)(*plVar5 + 0x90))(plVar5,&local_58,&local_98);
    }
    else {
      FUN_01338f18(param_1);
      local_30 = CONCAT53(local_30._3_5_,0x101);
      local_40 = *(undefined1 **)(param_1 + 0xa0);
      pcStack_38 = (char *)0x0;
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
      plVar5 = (long *)(**(code **)*puVar7)(puVar7);
      if (((*PTR_DAT_04379ca8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar2 != 0)) {
        uVar6 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_04379c98 = uVar6;
        __cxa_guard_release(PTR_DAT_04379ca8);
      }
      if (plVar5 != (long *)PTR_DAT_04379c98) {
        for (plVar5 = (long *)*plVar5; plVar5 != (long *)PTR_DAT_04379c98; plVar5 = (long *)*plVar5)
        {
        }
      }
      local_98 = (long *)&DAT_786441c0fda6345d;
      local_90 = "MessageView";
      local_88 = 0xb;
      local_80[0] = (long *)0x0;
      uVar6 = FUN_011994dc(puVar7[0x8f],&local_98);
      if (local_80[0] != (long *)0x0) {
        (**(code **)(*local_80[0] + 0x20))();
      }
      FUN_00d42690(uVar6,1,1);
      FUN_00d428b0(uVar6,0);
      FUN_00d67ea8(uVar6,&local_40);
    }
  }
  return;
}


