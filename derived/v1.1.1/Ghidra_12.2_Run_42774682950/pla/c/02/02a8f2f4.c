/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8f2f4; name: FUN_02a8f2f4
 */


undefined1  [16] FUN_02a8f2f4(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined2 local_24;
  undefined1 local_22;
  
  pcVar4 = (char *)param_1[5];
  plVar2 = (long *)param_1[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar1 = nn::fs::Commit(pcVar4);
  *(undefined4 *)param_1 = 9;
  *(undefined1 *)((long)param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 7) = local_22;
  *(undefined2 *)((long)param_1 + 5) = local_24;
  uVar3 = *param_1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  auVar5._8_4_ = uVar1;
  auVar5._0_8_ = uVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}


