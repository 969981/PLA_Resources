/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bd4bc; name: FUN_002bd4bc
 */


void FUN_002bd4bc(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_98 [2];
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long alStack_60 [4];
  long *local_40;
  undefined1 auStack_38 [8];
  undefined1 local_24 [4];
  
  pbVar6 = (byte *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  if ((*pbVar6 & 1) == 0) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 4);
  uVar7 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)pbVar6 = uVar7;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  pbVar6 = (byte *)(param_1 + 0x78);
  if ((*pbVar6 & 1) == 0) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 10);
  uVar7 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  *(undefined8 *)pbVar6 = uVar7;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  local_24[0] = 1;
  plVar2 = *(long **)(param_1 + 0x50);
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,auStack_38 + 8,local_24);
  puVar1 = PTR_DAT_04373140;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (plVar2 == *(long **)(param_1 + 0x50)) {
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 == (long *)0x0) goto LAB_002bd670;
LAB_002bd608:
    if ((long *)(param_1 + 0x20) == plVar2) {
      local_40 = alStack_60;
                    /* try { // try from 002bd630 to 002bd637 has its CatchHandler @ 002bd83c */
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
      plVar4 = *(long **)(param_1 + 0x40);
    }
    else {
      plVar4 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      local_40 = plVar2;
    }
  }
  else {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"ignored == ops_",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/callback_common.h",0x79);
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 != (long *)0x0) goto LAB_002bd608;
LAB_002bd670:
    plVar4 = (long *)0x0;
    local_40 = (long *)0x0;
  }
  local_98[0] = *(undefined4 *)(param_1 + 0x58);
  uStack_88 = *(undefined8 *)(param_1 + 0x68);
  local_90 = *(ulong *)(param_1 + 0x60);
  local_80 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  local_78 = *(ulong *)(param_1 + 0x78);
  local_68 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((long *)(param_1 + 0x20) == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002bd6d4:
    (*pcVar5)(plVar4);
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_002bd6d4;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x60) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x61) = 0;
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x78) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x79) = 0;
                    /* try { // try from 002bd798 to 002bd7b7 has its CatchHandler @ 002bd840 */
  FUN_002bd8c0(alStack_60,local_98);
  (**(code **)(**(long **)puVar1 + 0x120))(*(long **)puVar1,*(undefined8 *)(param_1 + 0x18));
  if ((local_78 & 1) == 0) {
    if ((local_90 & 1) != 0) goto LAB_002bd800;
LAB_002bd7c8:
    if (alStack_60 == local_40) goto LAB_002bd820;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
    if ((local_90 & 1) == 0) goto LAB_002bd7c8;
LAB_002bd800:
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
    if (alStack_60 == local_40) {
LAB_002bd820:
      pcVar5 = *(code **)(*local_40 + 0x20);
      goto LAB_002bd828;
    }
  }
  if (local_40 == (long *)0x0) {
    return;
  }
  pcVar5 = *(code **)(*local_40 + 0x28);
LAB_002bd828:
  (*pcVar5)();
  return;
}


