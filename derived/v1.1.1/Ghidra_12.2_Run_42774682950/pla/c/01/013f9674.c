/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f9674; name: FUN_013f9674
 */


void FUN_013f9674(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar4 = FUN_013f80d4();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  puVar2 = PTR_DAT_04379ca8;
  puVar1 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar3 != 0))
  {
    uVar6 = FUN_009311a8();
    *(undefined8 *)puVar1 = uVar6;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar5 != (long *)puVar1) {
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)puVar1; plVar5 = (long *)*plVar5) {
    }
  }
  local_60 = (undefined1 *)0xc3ea7ae1fd807b8c;
  pcStack_58 = "View_Research";
  local_50 = 0xd;
  local_48 = (long *)0x0;
  uVar6 = FUN_013eb034(puVar8[0x8f],&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar3 != 0)) {
    uVar7 = FUN_009311a8();
    *(undefined8 *)puVar1 = uVar7;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar5 != (long *)puVar1) {
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)puVar1; plVar5 = (long *)*plVar5) {
    }
  }
  local_60 = &DAT_982ac928c78c196b;
  pcStack_58 = "View_Distribution";
  local_50 = 0x11;
  local_48 = (long *)0x0;
  uVar7 = FUN_013eb178(puVar8[0x8f],&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (*(int *)(lVar4 + 0x74) != 1) {
    if (*(int *)(lVar4 + 0x74) != 2) {
      return;
    }
    uVar6 = uVar7;
  }
  FUN_013da08c(uVar6);
  return;
}


