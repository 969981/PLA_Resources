/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027810d4; name: FUN_027810d4
 */


void FUN_027810d4(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_40 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_02bcde30();
  FUN_02bcde70(0);
  FUN_02bcde80(auStack_40,*param_1,1);
  plVar4 = DAT_043f1798;
  lVar1 = tpidr_el0;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar4;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
  *puVar3 = &PTR_LAB_0426bd18;
  *(undefined4 *)(puVar3 + 1) = *param_2;
  plVar4 = (long *)param_1[1];
  param_1[1] = puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_02bcde70(uVar2 & 1);
  FUN_02bcdf00(auStack_40);
  return;
}


