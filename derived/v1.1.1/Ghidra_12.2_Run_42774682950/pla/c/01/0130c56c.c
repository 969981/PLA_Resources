/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130c56c; name: FUN_0130c56c
 */


void FUN_0130c56c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar3 = FUN_0130abe8();
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0xe0);
    *(undefined1 *)(lVar3 + 0x76) = 0;
    *(undefined4 *)(lVar3 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xfc) = uVar1;
    *(undefined4 *)(param_1 + 0xf4) = 1;
    uVar4 = FUN_0131e948();
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_0131ef4c(), (uVar4 & 1) == 0)) {
      FUN_0130cdec(param_1);
      local_48 = 0x101;
      local_46 = 0;
      local_58 = *(undefined8 *)(param_1 + 0xa0);
      uStack_50 = 0;
      local_5e = 0xffff;
      local_88 = 0;
      local_80 = (long *)0x0;
      local_68 = 0;
      local_60 = 1;
      local_78 = 0;
      uStack_70 = 0;
      local_98 = *(undefined1 **)(param_1 + 0xa8);
      local_90 = *(char **)(param_1 + 0xb0);
      local_5c = 0;
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
      FUN_00d469b4(plVar5[0xd],plVar5,0);
      (**(code **)(*plVar5 + 0x90))(plVar5,&local_58,&local_98);
    }
    else {
      FUN_0130d1cc(param_1);
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
      local_98 = &DAT_786441c0fda6345d;
      local_90 = "MessageView";
      local_88 = 0xb;
      local_80 = (long *)0x0;
      lVar3 = FUN_011994dc(puVar7[0x8f],&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      FUN_00d42690(lVar3,1,1);
      FUN_00d469b4(*(undefined8 *)(lVar3 + 0x68),lVar3,0);
      FUN_00d67ea8(lVar3,&local_40);
    }
  }
  return;
}


