/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a0ac; name: FUN_0082a0ac
 */


void FUN_0082a0ac(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_0083fb3c(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = PTR_DAT_043773c0;
  FUN_00847e68(*(long *)PTR_DAT_043773c0 + 0x10);
  if (*(long *)puVar1 != 0) {
    FUN_008549ec();
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_0082ce18(*(undefined8 *)(param_1 + 0x40));
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_0082d830(*(undefined8 *)(param_1 + 0x48));
  }
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_0082c150(*(undefined8 *)(param_1 + 0x50));
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_0082d9ac(*(undefined8 *)(param_1 + 0x30));
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_0082c728(*(undefined8 *)(param_1 + 0x38));
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_0083fb3c(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  }
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_007e8b44(*(undefined8 *)PTR_DAT_04377458);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  memset((void *)(param_1 + 0x88),0,0x20);
  *(undefined4 *)(param_1 + 0x45c) = 0;
  memset((void *)(param_1 + 0x460),0,0x10);
  *(undefined1 *)(param_1 + 0x470) = 0;
  return;
}


