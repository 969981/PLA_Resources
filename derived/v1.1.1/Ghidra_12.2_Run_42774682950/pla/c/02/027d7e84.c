/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d7e84; name: FUN_027d7e84
 */


void FUN_027d7e84(long param_1,undefined2 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_28;
  undefined2 local_24 [2];
  
  if (*(long *)(param_1 + 0x70) != 0) {
    local_24[0] = param_2;
    uVar1 = FUN_02daaf40();
    uVar2 = FUN_02daaf50();
    FUN_02daaf60(auStack_48,uVar1,uVar2);
    local_28 = 2;
    FUN_027d80b4(auStack_50,&local_28,auStack_48);
    FUN_027d81fc(&local_28,local_24,auStack_48);
    uVar3 = FUN_02da34e0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x88));
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x70);
      uVar1 = FUN_02daaf40();
      uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar1,local_38,(undefined8 *)(param_1 + 0x88));
      if ((uVar3 & 1) != 0) {
        *(undefined2 *)(param_1 + 0x92) = local_24[0];
        *(undefined1 *)(param_1 + 0x90) = 1;
      }
    }
  }
  return;
}


