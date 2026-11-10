/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124fbcc; name: FUN_0124fbcc
 */


void FUN_0124fbcc(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long alStack_8f0 [10];
  undefined4 local_8a0 [2];
  long local_898;
  undefined1 local_890 [8];
  long local_888 [7];
  undefined4 local_850;
  undefined1 local_84c [892];
  long local_4d0 [10];
  undefined4 local_480 [2];
  long local_478;
  undefined1 local_470 [8];
  long local_468 [7];
  undefined4 local_430;
  undefined1 local_42c [972];
  
  uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4);
  lVar6 = FUN_01234c94(param_1 + 0x9c0);
  lVar9 = 0;
  do {
    puVar2 = (undefined4 *)(lVar6 + lVar9);
    *(undefined4 *)((long)local_480 + lVar9) = *puVar2;
    plVar7 = *(long **)(puVar2 + 2);
    *(long **)((long)local_480 + lVar9 + 8) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    local_470[lVar9] = *(undefined1 *)(puVar2 + 4);
    plVar7 = *(long **)(puVar2 + 6);
    *(long **)((long)local_468 + lVar9) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    plVar7 = *(long **)(puVar2 + 8);
    *(long **)((long)local_468 + lVar9 + 8) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *(undefined8 *)((long)local_468 + lVar9 + 0x10) = *(undefined8 *)(puVar2 + 10);
    plVar7 = *(long **)(puVar2 + 0xc);
    *(long **)((long)local_468 + lVar9 + 0x18) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    uVar3 = *(undefined8 *)(puVar2 + 0xe);
    lVar1 = lVar9 + 0x58;
    uVar8 = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)((long)local_468 + lVar9 + 0x28) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)((long)local_468 + lVar9 + 0x30) = uVar8;
    *(undefined8 *)((long)local_468 + lVar9 + 0x20) = uVar3;
    uVar4 = puVar2[0x14];
    local_42c[lVar9] = *(undefined1 *)(puVar2 + 0x15);
    *(undefined4 *)((long)local_468 + lVar9 + 0x38) = uVar4;
    lVar9 = lVar1;
  } while (lVar1 != 0x420);
  lVar6 = FUN_01234c9c(param_1 + 0x9c0);
  lVar9 = 0;
  do {
    puVar2 = (undefined4 *)(lVar6 + lVar9);
    *(undefined4 *)((long)local_8a0 + lVar9) = *puVar2;
    plVar7 = *(long **)(puVar2 + 2);
    *(long **)((long)local_8a0 + lVar9 + 8) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    local_890[lVar9] = *(undefined1 *)(puVar2 + 4);
    plVar7 = *(long **)(puVar2 + 6);
    *(long **)((long)local_888 + lVar9) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    plVar7 = *(long **)(puVar2 + 8);
    *(long **)((long)local_888 + lVar9 + 8) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *(undefined8 *)((long)local_888 + lVar9 + 0x10) = *(undefined8 *)(puVar2 + 10);
    plVar7 = *(long **)(puVar2 + 0xc);
    *(long **)((long)local_888 + lVar9 + 0x18) = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    uVar3 = *(undefined8 *)(puVar2 + 0xe);
    lVar1 = lVar9 + 0x58;
    uVar8 = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)((long)local_888 + lVar9 + 0x28) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)((long)local_888 + lVar9 + 0x30) = uVar8;
    *(undefined8 *)((long)local_888 + lVar9 + 0x20) = uVar3;
    uVar4 = puVar2[0x14];
    local_84c[lVar9] = *(undefined1 *)(puVar2 + 0x15);
    *(undefined4 *)((long)local_888 + lVar9 + 0x38) = uVar4;
    lVar9 = lVar1;
  } while (lVar1 != 0x420);
  FUN_01246a7c(param_1 + 0x12c0,uVar5,local_480,local_8a0);
  lVar9 = 0x420;
  do {
    plVar7 = *(long **)((long)alStack_8f0 + lVar9 + 0x28);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar7 = *(long **)((long)alStack_8f0 + lVar9 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar7 = *(long **)((long)alStack_8f0 + lVar9 + 0x10);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if (*(long **)((long)alStack_8f0 + lVar9) != (long *)0x0) {
      (**(code **)(**(long **)((long)alStack_8f0 + lVar9) + 0x20))();
    }
    lVar9 = lVar9 + -0x58;
  } while (lVar9 != 0);
  lVar9 = 0x420;
  do {
    plVar7 = *(long **)((long)local_4d0 + lVar9 + 0x28);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar7 = *(long **)((long)local_4d0 + lVar9 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar7 = *(long **)((long)local_4d0 + lVar9 + 0x10);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if (*(long **)((long)local_4d0 + lVar9) != (long *)0x0) {
      (**(code **)(**(long **)((long)local_4d0 + lVar9) + 0x20))();
    }
    lVar9 = lVar9 + -0x58;
  } while (lVar9 != 0);
  return;
}


