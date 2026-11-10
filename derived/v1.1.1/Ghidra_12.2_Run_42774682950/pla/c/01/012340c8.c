/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012340c8; name: FUN_012340c8
 */


long FUN_012340c8(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = 0;
  do {
    puVar1 = (undefined4 *)(param_2 + lVar8);
    *(undefined4 *)(param_1 + lVar8) = *puVar1;
    plVar7 = *(long **)(puVar1 + 2);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    lVar2 = param_1 + lVar8;
    plVar5 = *(long **)(lVar2 + 8);
    *(long **)(lVar2 + 8) = plVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 4);
    plVar7 = *(long **)(puVar1 + 6);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar5 = *(long **)(lVar2 + 0x18);
    *(long **)(lVar2 + 0x18) = plVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar7 = *(long **)(puVar1 + 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar5 = *(long **)(lVar2 + 0x20);
    *(long **)(lVar2 + 0x20) = plVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(puVar1 + 10);
    plVar7 = *(long **)(puVar1 + 0xc);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar5 = *(long **)(lVar2 + 0x30);
    *(long **)(lVar2 + 0x30) = plVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    uVar3 = *(undefined8 *)(puVar1 + 0xe);
    lVar8 = lVar8 + 0x58;
    uVar6 = *(undefined8 *)(puVar1 + 0x12);
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(lVar2 + 0x48) = uVar6;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    uVar4 = puVar1[0x14];
    *(undefined1 *)(lVar2 + 0x54) = *(undefined1 *)(puVar1 + 0x15);
    *(undefined4 *)(lVar2 + 0x50) = uVar4;
  } while (lVar8 != 0x420);
  return param_1;
}


