/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2df9c; name: FUN_00d2df9c
 */


undefined8 FUN_00d2df9c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined8 local_190;
  long *local_188;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [104];
  undefined1 auStack_78 [8];
  long local_70 [2];
  
  local_100 = 0;
  local_f8 = (code *)0x0;
  local_1a0 = &DAT_cbf29ce484222645;
  puStack_198 = &DAT_03996322;
  local_f0 = 0;
  uStack_e8 = 0;
  local_190 = 0;
  local_188 = (long *)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = (code *)0x0;
  local_170 = (undefined1 *)0x0;
  puStack_168 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x148) == 0) {
    uVar6 = 0;
    goto LAB_00d2e0f0;
  }
  FUN_0283b1e8();
  puVar9 = (undefined1 *)*param_2;
  puVar10 = (undefined1 *)param_2[1];
  uVar6 = param_2[2];
  plVar4 = (long *)param_2[3];
  local_1a0 = puVar9;
  puStack_198 = puVar10;
  local_190 = uVar6;
  if (plVar4 == (long *)0x0) {
    plVar7 = (long *)0x0;
LAB_00d2e02c:
    bVar2 = true;
    plVar8 = (long *)0x0;
    local_188 = plVar4;
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar6 = param_2[2];
    plVar7 = (long *)param_2[3];
    puVar9 = (undefined1 *)*param_2;
    puVar10 = (undefined1 *)param_2[1];
    if (plVar7 == (long *)0x0) goto LAB_00d2e02c;
    local_188 = plVar4;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    bVar2 = false;
    plVar8 = plVar7;
  }
  local_160 = param_1;
  puStack_158 = puVar9;
  local_150 = puVar10;
  uStack_148 = uVar6;
  local_140 = plVar7;
  if (bVar2) {
    local_180 = &LAB_00d363c8;
    local_178 = FUN_00d363d8;
    local_170 = &LAB_00d363f0;
    puStack_168 = &LAB_00d3642c;
    pcVar3 = (code *)param_3[2];
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar8);
    local_180 = &LAB_00d363c8;
    local_178 = FUN_00d363d8;
    local_170 = &LAB_00d363f0;
    puStack_168 = &LAB_00d3642c;
    (**(code **)(*plVar7 + 0x20))(plVar8);
    pcVar3 = (code *)param_3[2];
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_3 + 4,auStack_e0);
    local_100 = *param_3;
    local_f8 = (code *)param_3[1];
    local_f0 = param_3[2];
    uStack_e8 = param_3[3];
  }
  if (*(char *)(param_1 + 0x3f0) == '\0') {
    plVar4 = (long *)(param_1 + 0x3b0);
  }
  else {
    plVar4 = (long *)(param_1 + 0x3d0);
  }
  lVar5 = *plVar4;
  uVar1 = *(ulong *)(lVar5 + 0x48);
  if (uVar1 < *(ulong *)(lVar5 + 0x50)) {
    FUN_00d373e0(lVar5 + 0x20,*(long *)(lVar5 + 0x40) + uVar1 * 0x120,&local_1a0);
    *(long *)(lVar5 + 0x48) = *(long *)(lVar5 + 0x48) + 1;
    pcVar3 = local_f8;
  }
  else {
    local_70[0] = *(long *)(lVar5 + 0x40) + uVar1 * 0x120;
    FUN_00d372f8(auStack_78,lVar5 + 0x20,local_70,1,&local_1a0);
    pcVar3 = local_f8;
  }
  uVar6 = 1;
  local_f8 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    uVar6 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar3)(auStack_e0);
  }
LAB_00d2e0f0:
  pcVar3 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined1 *)0x0;
    puStack_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar3)(&local_160);
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  return uVar6;
}


