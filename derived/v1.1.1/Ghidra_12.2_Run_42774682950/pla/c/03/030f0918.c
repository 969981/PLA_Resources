/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f0918; name: FUN_030f0918
 */


void FUN_030f0918(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar3;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar3 != 0) {
    puVar1 = *(undefined8 **)(lVar3 + 8);
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar3 + 0x10)) &&
       (*(ulong *)(lVar3 + 8) = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtCharacterProxyDeferredUpdate";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
  }
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*param_2 + lVar6);
      (**(code **)(**(long **)(param_1 + 0x50) + 0xd0))
                (*(long **)(param_1 + 0x50),*puVar1,puVar1 + 2,puVar1 + 4,0);
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar3 < (int)param_2[1]);
  }
  if (*(long *)(param_1 + 0x38) != -1) {
    local_60 = (double)(float)*(undefined8 *)(param_1 + 0x90);
    dStack_58 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
    local_50 = (double)(float)*(undefined8 *)(param_1 + 0x98);
    dStack_48 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x88))
              (*(long **)(param_1 + 0x50),*(long *)(param_1 + 0x38),param_1 + 0x60,&local_60,0);
  }
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar3;
    lVar4 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar4 != 0) {
    puVar1 = *(undefined8 **)(lVar4 + 8);
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar4 + 0x10)) &&
       (*(ulong *)(lVar4 + 8) = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
  }
  return;
}


