/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006b6818; name: FUN_006b6818
 */


void FUN_006b6818(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                 long param_5,long param_6,long *param_7)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  undefined1 auStack_150 [8];
  byte local_148;
  undefined8 local_138;
  byte local_130;
  undefined8 local_120;
  int local_118 [2];
  byte local_110;
  undefined8 local_100;
  byte local_f8;
  undefined8 local_e8;
  long alStack_e0 [4];
  long *local_c0;
  long *local_b0 [2];
  undefined8 local_a0;
  undefined4 local_80;
  uint uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  puVar7 = PTR_DAT_04373140;
  if (lVar8 == 0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"cq != nullptr",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/client_callback_impl.h",
               0x40);
  }
  (**(code **)(*param_2 + 0x18))(local_b0,param_2,param_3,param_4,lVar8);
  plVar9 = *(long **)puVar7;
  plVar9 = (long *)(**(code **)(*plVar9 + 0x128))(plVar9,local_a0,0x300);
  *(undefined2 *)(plVar9 + 1) = 0;
  *(undefined1 *)(plVar9 + 5) = 0;
  plVar12 = plVar9 + 6;
  *plVar12 = 0;
  *(undefined2 *)(plVar9 + 7) = 0;
  plVar9[8] = 0;
  *(undefined4 *)(plVar9 + 9) = 0;
  *(undefined1 *)((long)plVar9 + 0x4c) = 0;
  plVar9[0xe] = 0;
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar9[0x11] = 0;
  *(undefined1 *)(plVar9 + 0x12) = 0;
  *(undefined1 *)(plVar9 + 0x16) = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  *(undefined8 *)((long)plVar9 + 0xa5) = 0;
  *plVar9 = (long)(PTR_DAT_04375ef0 + 0x10);
  plVar9[0x22] = 0;
  *(undefined4 *)(plVar9 + 0x25) = 0xffffffff;
  *(undefined1 *)(plVar9 + 0x28) = 0;
  plVar9[0x20] = (long)plVar9;
  plVar9[0x21] = (long)plVar9;
  plVar9[0x23] = 0;
  plVar9[0x24] = 0;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  puVar1 = PTR_DAT_043734a0 + 0x10;
  plVar9[0x2d] = 0;
  *(undefined2 *)(plVar9 + 0x2e) = 0;
  plVar9[0x36] = 0;
  plVar9[0x40] = 0;
  plVar9[0x2a] = (long)puVar1;
  plVar9[0x2b] = 0;
  *(undefined8 *)((long)plVar9 + 0x15d) = 0;
  plVar9[0x3a] = 0;
  plVar9[0x2f] = 0;
  plVar9[0x30] = 0;
  plVar9[0x38] = 0;
  plVar9[0x39] = 0;
  plVar9[0x4b] = 0;
  plVar9[0x48] = 0;
  plVar9[0x47] = 0;
  plVar9[0x4a] = 0;
  plVar9[0x49] = 0;
  plVar9[0x44] = 0;
  plVar9[0x43] = 0;
  plVar9[0x46] = 0;
  plVar9[0x45] = 0;
  plVar10 = (long *)param_7[4];
  if (plVar10 == (long *)0x0) {
    local_c0 = (long *)0x0;
  }
  else if (param_7 == plVar10) {
    local_c0 = alStack_e0;
    (**(code **)(*plVar10 + 0x18))(plVar10,alStack_e0);
  }
  else {
                    /* try { // try from 006b6978 to 006b69a3 has its CatchHandler @ 006b6bd8 */
    local_c0 = (long *)(**(code **)(*plVar10 + 0x10))();
  }
  plVar10 = plVar9 + 0x4e;
                    /* try { // try from 006b69a8 to 006b69bf has its CatchHandler @ 006b6be0 */
  FUN_002bd390(plVar10,local_a0,alStack_e0,plVar9);
  if (alStack_e0 == local_c0) {
    pcVar11 = *(code **)(*local_c0 + 0x20);
  }
  else {
    if (local_c0 == (long *)0x0) goto LAB_006b69e8;
    pcVar11 = *(code **)(*local_c0 + 0x28);
  }
  (*pcVar11)();
LAB_006b69e8:
  *plVar12 = param_5;
  local_80 = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_006b61d0(local_118,plVar12,param_5,&local_80);
  if (local_118[0] == 0) {
    bVar2 = param_4[1];
    bVar3 = param_4[3];
    bVar4 = param_4[4];
    bVar5 = param_4[2];
    bVar6 = param_4[0x130];
    plVar9[3] = (long)(param_4 + 0x98);
    *(undefined1 *)(plVar9 + 5) = 0;
    *(undefined1 *)((long)plVar9 + 9) = 1;
    *(uint *)((long)plVar9 + 0xc) =
         (uint)bVar2 << 5 | (uint)bVar3 << 4 | (uint)bVar4 << 6 | (uint)bVar5 << 7 |
         (uint)bVar6 << 8;
    *param_4 = 1;
    plVar9[0x11] = (long)(param_4 + 0xb0);
    plVar9[0x13] = param_6;
    *(undefined1 *)(plVar9 + 0x15) = 1;
    *(undefined1 *)((long)plVar9 + 0xac) = 1;
    plVar9[0x17] = (long)param_4;
    plVar9[0x18] = (long)(param_4 + 0xe8);
    plVar9[0x19] = (long)(plVar9 + 0x59);
                    /* try { // try from 006b6ad8 to 006b6b03 has its CatchHandler @ 006b6c38 */
    (**(code **)(**(long **)puVar7 + 0x138))(&local_80);
    plVar9[0x1d] = lStack_78;
    plVar9[0x1c] = CONCAT44(uStack_7c,local_80);
    plVar9[0x1f] = lStack_68;
    plVar9[0x1e] = lStack_70;
    plVar9[0x20] = (long)plVar10;
    (**(code **)(*local_b0[0] + 0x10))(local_b0[0],plVar9,local_b0);
  }
  else {
                    /* try { // try from 006b6a10 to 006b6a1b has its CatchHandler @ 006b6c38 */
    FUN_002bb1a0(auStack_150,local_118);
                    /* try { // try from 006b6a1c to 006b6a27 has its CatchHandler @ 006b6b7c */
    FUN_002bd4bc(plVar10,auStack_150);
    if ((local_130 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_120);
    }
    if ((local_148 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_138);
    }
  }
  if ((local_f8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_e8);
  }
  if ((local_110 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_100);
  }
  return;
}


