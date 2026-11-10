/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5a2a0; name: FUN_02f5a2a0
 */


void FUN_02f5a2a0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  MutexType *pMVar7;
  
  pMVar7 = *(MutexType **)(param_1 + 0x1bf8);
  lVar2 = tpidr_el0;
  if (pMVar7 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar7);
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,pMVar7,0x20);
  }
  puVar3 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x19c0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x19c4)) && (*(long *)(param_1 + 0x19b8) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x19b8),
               ((ulong)*(uint *)(param_1 + 0x19c4) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined4 *)(param_1 + 0x19c4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1968) = 0;
  if ((-1 < *(int *)(param_1 + 0x196c)) && (*(long *)(param_1 + 0x1960) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x1960),*(int *)(param_1 + 0x196c) << 2);
  }
  *(undefined8 *)(param_1 + 0x1960) = 0;
  *(undefined4 *)(param_1 + 0x196c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1898) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x189c)) && (*(long *)(param_1 + 0x1890) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x1890),
               ((ulong)*(uint *)(param_1 + 0x189c) & 0x3fffffff) * 0xc);
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_LAB_04363a18;
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined4 *)(param_1 + 0x189c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x58),((ulong)*(uint *)(param_1 + 100) & 0x3fffffff) << 5)
    ;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x48),((ulong)*(uint *)(param_1 + 0x54) & 0x3fffffff) << 4
              );
  }
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x14) & 0x7fffffff;
  if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x10)) {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar5 + param_1 + 8;
  }
  lVar6 = *(long *)(lVar2 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x02f5a44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,(ulong)uVar1 << 7);
  return;
}


