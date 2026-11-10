/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124f4d0; name: FUN_0124f4d0
 */


void FUN_0124f4d0(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long alStack_8e0 [10];
  undefined4 local_890 [2];
  long local_888;
  undefined1 local_880 [8];
  long local_878 [7];
  int local_840;
  undefined1 local_83c [84];
  int local_7e8;
  int local_790;
  int local_738;
  int local_6e0;
  int local_688;
  int local_630;
  int local_5d8;
  int local_580;
  int local_528;
  int local_4d0;
  long local_4c0 [9];
  int local_478;
  undefined4 local_470 [2];
  long local_468;
  undefined1 local_460 [8];
  long local_458 [7];
  int local_420;
  undefined1 local_41c [84];
  int local_3c8;
  int local_370;
  int local_318;
  int local_2c0;
  int local_268;
  int local_210;
  int local_1b8;
  int local_160;
  int local_108;
  int local_b0;
  int local_58;
  
  lVar4 = FUN_01234c94(param_1 + 0x9c0);
  lVar8 = 0;
  do {
    puVar2 = (undefined4 *)(lVar4 + lVar8);
    *(undefined4 *)((long)local_470 + lVar8) = *puVar2;
    plVar5 = *(long **)(puVar2 + 2);
    *(long **)((long)local_470 + lVar8 + 8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    local_460[lVar8] = *(undefined1 *)(puVar2 + 4);
    plVar5 = *(long **)(puVar2 + 6);
    *(long **)((long)local_458 + lVar8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    plVar5 = *(long **)(puVar2 + 8);
    *(long **)((long)local_458 + lVar8 + 8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *(undefined8 *)((long)local_458 + lVar8 + 0x10) = *(undefined8 *)(puVar2 + 10);
    plVar5 = *(long **)(puVar2 + 0xc);
    *(long **)((long)local_458 + lVar8 + 0x18) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    uVar3 = *(undefined8 *)(puVar2 + 0xe);
    lVar1 = lVar8 + 0x58;
    uVar7 = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)((long)local_458 + lVar8 + 0x28) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)((long)local_458 + lVar8 + 0x30) = uVar7;
    *(undefined8 *)((long)local_458 + lVar8 + 0x20) = uVar3;
    uVar6 = puVar2[0x14];
    local_41c[lVar8] = *(undefined1 *)(puVar2 + 0x15);
    *(undefined4 *)((long)local_458 + lVar8 + 0x38) = uVar6;
    lVar8 = lVar1;
  } while (lVar1 != 0x420);
  lVar4 = FUN_01234c9c(param_1 + 0x9c0);
  lVar8 = 0;
  do {
    puVar2 = (undefined4 *)(lVar4 + lVar8);
    *(undefined4 *)((long)local_890 + lVar8) = *puVar2;
    plVar5 = *(long **)(puVar2 + 2);
    *(long **)((long)local_890 + lVar8 + 8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    local_880[lVar8] = *(undefined1 *)(puVar2 + 4);
    plVar5 = *(long **)(puVar2 + 6);
    *(long **)((long)local_878 + lVar8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    plVar5 = *(long **)(puVar2 + 8);
    *(long **)((long)local_878 + lVar8 + 8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *(undefined8 *)((long)local_878 + lVar8 + 0x10) = *(undefined8 *)(puVar2 + 10);
    plVar5 = *(long **)(puVar2 + 0xc);
    *(long **)((long)local_878 + lVar8 + 0x18) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    uVar3 = *(undefined8 *)(puVar2 + 0xe);
    lVar1 = lVar8 + 0x58;
    uVar7 = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)((long)local_878 + lVar8 + 0x28) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)((long)local_878 + lVar8 + 0x30) = uVar7;
    *(undefined8 *)((long)local_878 + lVar8 + 0x20) = uVar3;
    uVar6 = puVar2[0x14];
    local_83c[lVar8] = *(undefined1 *)(puVar2 + 0x15);
    *(undefined4 *)((long)local_878 + lVar8 + 0x38) = uVar6;
    lVar8 = lVar1;
  } while (lVar1 != 0x420);
  if ((((((local_420 == local_840) && (local_3c8 == local_7e8)) && (local_370 == local_790)) &&
       ((local_318 == local_738 && (local_2c0 == local_6e0)))) &&
      ((local_268 == local_688 && ((local_210 == local_630 && (local_1b8 == local_5d8)))))) &&
     ((local_160 == local_580 && ((local_108 == local_528 && (local_b0 == local_4d0)))))) {
    uVar6 = 1;
    if (local_58 != local_478) {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 2;
  }
  *(undefined4 *)(param_1 + 0x1334) = uVar6;
  lVar8 = 0x420;
  do {
    plVar5 = *(long **)((long)alStack_8e0 + lVar8 + 0x28);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)alStack_8e0 + lVar8 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)alStack_8e0 + lVar8 + 0x10);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    if (*(long **)((long)alStack_8e0 + lVar8) != (long *)0x0) {
      (**(code **)(**(long **)((long)alStack_8e0 + lVar8) + 0x20))();
    }
    lVar8 = lVar8 + -0x58;
  } while (lVar8 != 0);
  lVar8 = 0x420;
  do {
    plVar5 = *(long **)((long)local_4c0 + lVar8 + 0x28);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)local_4c0 + lVar8 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)local_4c0 + lVar8 + 0x10);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    if (*(long **)((long)local_4c0 + lVar8) != (long *)0x0) {
      (**(code **)(**(long **)((long)local_4c0 + lVar8) + 0x20))();
    }
    lVar8 = lVar8 + -0x58;
  } while (lVar8 != 0);
  return;
}


