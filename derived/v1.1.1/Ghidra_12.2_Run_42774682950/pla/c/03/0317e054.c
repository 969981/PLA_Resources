/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317e054; name: FUN_0317e054
 */


undefined4 FUN_0317e054(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_60;
  long lStack_58;
  long local_50;
  undefined4 local_48;
  
  lVar6 = tpidr_el0;
  if (*(long *)(lVar6 + 0x38d490) == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar4;
    lVar6 = *(long *)(lVar4 + 0x10);
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38d490) + 0x10);
  }
  if (lVar6 != 0) {
    puVar1 = *(undefined8 **)(lVar6 + 8);
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar6 + 0x10)) &&
       (*(ulong *)(lVar6 + 8) = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtStreamingCollectionMediator::GCP";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
  }
  local_50 = *(long *)(param_1 + 0x20);
  local_60 = &PTR_LAB_042efbe0;
  local_48 = 0xffffffff;
  lStack_58 = param_2;
  FUN_001d5b34(*(undefined8 *)(local_50 + 0x20),param_2 + 0x30,param_2 + 0x40,&local_60,param_3);
  uVar2 = local_48;
  if (lVar6 != 0) {
    puVar1 = *(undefined8 **)(lVar6 + 8);
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar6 + 0x10)) &&
       (*(ulong *)(lVar6 + 8) = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
  }
  return uVar2;
}


