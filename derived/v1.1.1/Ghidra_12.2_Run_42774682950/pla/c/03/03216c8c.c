/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03216c8c; name: FUN_03216c8c
 */


void FUN_03216c8c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined2 local_3c;
  
  lVar6 = tpidr_el0;
  if (*(long *)(lVar6 + 0x38d490) == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar5;
    lVar6 = *(long *)(lVar5 + 0x10);
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38d490) + 0x10);
  }
  if (lVar6 != 0) {
    puVar2 = *(undefined8 **)(lVar6 + 8);
    uVar4 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar6 + 0x10)) &&
       (*(ulong *)(lVar6 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtcompleteAsyncProcessingRunImmediately";
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
  }
  local_40 = 0x8000010;
  local_3c = 0x1d;
  FUN_031aa380(param_1 + 0x28,param_1,&local_40);
  lVar5 = *(long *)(*(long *)(param_1 + 0x4e8) + 0x68);
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x18);
  }
  uVar4 = (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(param_1 + 0x4f8));
  if ((uVar4 & 1) == 0) {
    FUN_0332b5b4(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4f8));
  }
  local_48[0] = 0xbf800000;
  FUN_032184e8(param_1 + 0xe0,param_1,local_48);
  if (lVar6 != 0) {
    puVar2 = *(undefined8 **)(lVar6 + 8);
    uVar4 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar6 + 0x10)) &&
       (*(ulong *)(lVar6 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
  }
  return;
}


