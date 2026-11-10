/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234864; name: FUN_01234864
 */


void FUN_01234864(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  local_64 = 0;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    local_6c = 0;
    local_68 = 0;
    puVar12 = &DAT_cbf29ce484222645;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    plVar6 = (long *)0x0;
    plVar5 = (long *)0x0;
    local_78 = &DAT_cbf29ce484222645;
    uVar10 = 0;
    plVar7 = (long *)0x0;
    plVar8 = (long *)0x0;
    bVar9 = true;
    puVar11 = &DAT_cbf29ce484222645;
    goto LAB_012348f8;
  }
  puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2,&local_64);
  uVar1 = *puVar3;
  plVar5 = *(long **)(puVar3 + 2);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar10 = *(undefined1 *)(puVar3 + 4);
  plVar6 = *(long **)(puVar3 + 6);
  if (plVar6 == (long *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    if (plVar7 != (long *)0x0) goto LAB_01234a6c;
LAB_012348c8:
    puVar11 = *(undefined1 **)(puVar3 + 10);
    plVar8 = *(long **)(puVar3 + 0xc);
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar7 = *(long **)(puVar3 + 8);
    if (plVar7 == (long *)0x0) goto LAB_012348c8;
LAB_01234a6c:
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puVar11 = *(undefined1 **)(puVar3 + 10);
    plVar8 = *(long **)(puVar3 + 0xc);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_78 = *(undefined1 **)(puVar3 + 0xe);
  puVar12 = *(undefined1 **)(puVar3 + 0x10);
  local_68 = puVar3[0x12];
  local_6c = puVar3[0x13];
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
  if (plVar5 == (long *)0x0) {
    bVar9 = true;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    bVar9 = false;
  }
LAB_012348f8:
  plVar4 = *(long **)(param_1 + 0x1d0);
  *(long **)(param_1 + 0x1d0) = plVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x1d8) = uVar10;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = *(long **)(param_1 + 0x1e0);
  *(long **)(param_1 + 0x1e0) = plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar4 = *(long **)(param_1 + 0x1e8);
  *(long **)(param_1 + 0x1e8) = plVar7;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined1 **)(param_1 + 0x1f0) = puVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar4 = *(long **)(param_1 + 0x1f8);
  *(long **)(param_1 + 0x1f8) = plVar8;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined1 **)(param_1 + 0x200) = local_78;
  *(undefined4 *)(param_1 + 0x210) = local_68;
  *(undefined1 **)(param_1 + 0x208) = puVar12;
  *(undefined4 *)(param_1 + 0x214) = local_6c;
  *(undefined4 *)(param_1 + 0x218) = local_64;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (!bVar9) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}


