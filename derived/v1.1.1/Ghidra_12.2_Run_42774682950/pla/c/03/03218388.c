/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03218388; name: FUN_03218388
 */


void FUN_03218388(float param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  float local_40 [2];
  long local_38;
  
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x38d490) == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar5;
    lVar7 = *(long *)(lVar5 + 0x10);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x38d490) + 0x10);
  }
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 8);
    uVar4 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtadvanceAsyncProcessingRun";
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0x4e8) + 0x68);
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x18);
  }
  local_38 = lVar7;
  uVar4 = (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(param_2 + 0x4f8));
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 0x4e8);
    lVar5 = nn::os::GetSystemTick();
    dVar8 = (double)NEON_ucvtf(*(undefined8 *)(lVar6 + 0x38));
    FUN_0332ab14(lVar6,lVar5 + (long)((double)param_1 * dVar8));
  }
  local_40[0] = param_1;
  FUN_032184e8(param_2 + 0xe0,param_2,local_40);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 8);
    uVar4 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
  }
  return;
}


