/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e990c; name: FUN_030e990c
 */


void FUN_030e990c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar3;
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtWorldCastShape";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0xd0))
            (*(long **)(param_1 + 0x4c0),param_2,param_3,*(undefined8 *)(param_1 + 0x510),param_4,
             param_5,0);
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
  }
  return;
}


