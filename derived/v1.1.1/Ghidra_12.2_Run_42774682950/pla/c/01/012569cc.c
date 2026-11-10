/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012569cc; name: FUN_012569cc
 */


undefined8 FUN_012569cc(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  
  puVar6 = (undefined4 *)
           FUN_01236d4c(param_1 + 0x5c0,
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x13e0) + (ulong)*(byte *)(param_1 + 0x1418) * 4),
                        param_2);
  uVar4 = *puVar6;
  plVar10 = *(long **)(puVar6 + 2);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  uVar5 = *(undefined1 *)(puVar6 + 4);
  plVar11 = *(long **)(puVar6 + 6);
  if (plVar11 == (long *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
  }
  else {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    plVar13 = *(long **)(puVar6 + 8);
  }
  if (plVar13 == (long *)0x0) {
    uVar12 = *(undefined8 *)(puVar6 + 10);
    plVar2 = *(long **)(puVar6 + 0xc);
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    uVar12 = *(undefined8 *)(puVar6 + 10);
    plVar2 = *(long **)(puVar6 + 0xc);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar1 = *(undefined8 *)(puVar6 + 0xe);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  uVar9 = *(undefined8 *)(puVar6 + 0x12);
  uVar7 = FUN_01253da0(uVar5,uVar4);
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1498) = uVar4;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar8 = *(long **)(param_1 + 0x14a0);
    *(long **)(param_1 + 0x14a0) = plVar10;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x14a8) = uVar5;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar8 = *(long **)(param_1 + 0x14b0);
    *(long **)(param_1 + 0x14b0) = plVar11;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar8 = *(long **)(param_1 + 0x14b8);
    *(long **)(param_1 + 0x14b8) = plVar13;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x14c0) = uVar12;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar8 = *(long **)(param_1 + 0x14c8);
    *(long **)(param_1 + 0x14c8) = plVar2;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x14e0) = uVar9;
    *(undefined8 *)(param_1 + 0x14d8) = uVar3;
    *(undefined8 *)(param_1 + 0x14d0) = uVar1;
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  return uVar12;
}


