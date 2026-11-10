/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012345dc; name: FUN_012345dc
 */


void FUN_012345dc(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  local_64 = 0;
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    local_6c = 0;
    local_68 = 0;
    puVar11 = &DAT_cbf29ce484222645;
    *(undefined4 *)(param_1 + 0x220) = 0;
    plVar6 = (long *)0x0;
    plVar5 = (long *)0x0;
    local_78 = &DAT_cbf29ce484222645;
    uVar9 = 0;
    plVar7 = (long *)0x0;
    plVar2 = (long *)0x0;
    bVar8 = true;
    puVar10 = &DAT_cbf29ce484222645;
    goto LAB_01234670;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar2 + 8))(plVar2,&local_64);
  uVar1 = *puVar3;
  plVar5 = *(long **)(puVar3 + 2);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar9 = *(undefined1 *)(puVar3 + 4);
  plVar6 = *(long **)(puVar3 + 6);
  if (plVar6 == (long *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    if (plVar7 != (long *)0x0) goto LAB_012347e4;
LAB_01234640:
    puVar10 = *(undefined1 **)(puVar3 + 10);
    plVar2 = *(long **)(puVar3 + 0xc);
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar7 = *(long **)(puVar3 + 8);
    if (plVar7 == (long *)0x0) goto LAB_01234640;
LAB_012347e4:
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puVar10 = *(undefined1 **)(puVar3 + 10);
    plVar2 = *(long **)(puVar3 + 0xc);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_78 = *(undefined1 **)(puVar3 + 0xe);
  puVar11 = *(undefined1 **)(puVar3 + 0x10);
  local_68 = puVar3[0x12];
  local_6c = puVar3[0x13];
  *(undefined4 *)(param_1 + 0x220) = uVar1;
  if (plVar5 == (long *)0x0) {
    bVar8 = true;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    bVar8 = false;
  }
LAB_01234670:
  plVar4 = *(long **)(param_1 + 0x228);
  *(long **)(param_1 + 0x228) = plVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x230) = uVar9;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = *(long **)(param_1 + 0x238);
  *(long **)(param_1 + 0x238) = plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar4 = *(long **)(param_1 + 0x240);
  *(long **)(param_1 + 0x240) = plVar7;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined1 **)(param_1 + 0x248) = puVar10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x250);
  *(long **)(param_1 + 0x250) = plVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined1 **)(param_1 + 600) = local_78;
  *(undefined4 *)(param_1 + 0x268) = local_68;
  *(undefined1 **)(param_1 + 0x260) = puVar11;
  *(undefined4 *)(param_1 + 0x26c) = local_6c;
  *(undefined4 *)(param_1 + 0x270) = local_64;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (!bVar8) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}


