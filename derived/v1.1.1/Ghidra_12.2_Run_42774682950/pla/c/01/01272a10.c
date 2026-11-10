/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01272a10; name: FUN_01272a10
 */


void FUN_01272a10(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if (2 < (ulong)*(byte *)(param_1 + 0x904)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar1 = *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x904) * 4 + 0x8f8);
  if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0xa08) = *(undefined1 *)(param_1 + 0xa78);
    plVar3 = *(long **)(param_1 + 0xa80);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(param_1 + 0xa10);
    *(long **)(param_1 + 0xa10) = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar3 = *(long **)(param_1 + 0xa88);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(param_1 + 0xa18);
    *(long **)(param_1 + 0xa18) = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0xa20) = *(undefined8 *)(param_1 + 0xa90);
    *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_1 + 0xaa0);
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x9e8) = *(undefined1 *)(param_1 + 0xa58);
    plVar3 = *(long **)(param_1 + 0xa60);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(param_1 + 0x9f0);
    *(long **)(param_1 + 0x9f0) = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar3 = *(long **)(param_1 + 0xa68);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(param_1 + 0x9f8);
    *(long **)(param_1 + 0x9f8) = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(param_1 + 0xa70);
    *(undefined4 *)(param_1 + 0xa2c) = *(undefined4 *)(param_1 + 0xa9c);
  }
  else if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x9c8) = *(undefined1 *)(param_1 + 0xa38);
    plVar3 = *(long **)(param_1 + 0xa40);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(param_1 + 0x9d0);
    *(long **)(param_1 + 0x9d0) = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar3 = *(long **)(param_1 + 0xa48);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(param_1 + 0x9d8);
    *(long **)(param_1 + 0x9d8) = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x9e0) = *(undefined8 *)(param_1 + 0xa50);
    *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_1 + 0xa98);
  }
  FUN_01271080(param_1);
  FUN_0281a2d0();
  FUN_012727ac(param_1);
  FUN_0126be58(param_1 + 0x948,*(undefined1 *)(param_1 + 0x904),param_1 + 0x9c8);
  FUN_00d42438(param_1,1,1);
  return;
}


