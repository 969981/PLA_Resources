/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079807c; name: FUN_0079807c
 */


void FUN_0079807c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  int local_1b0;
  undefined4 uStack_1ac;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined1 *local_180;
  int local_178 [2];
  ulong local_170;
  undefined8 uStack_168;
  undefined1 *local_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [112];
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 ****local_c0;
  undefined8 ****ppppuStack_b8;
  undefined **local_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined **local_68;
  undefined8 uStack_60;
  
  FUN_0060fb2c(auStack_140,param_2);
  pppuVar7 = *(undefined8 ****)(param_2 + 0x58);
  puStack_c8 = (undefined *)FUN_00612290();
  local_d0 = PTR_DAT_04376ed8 + 0x10;
  local_b0 = &local_d0;
                    /* try { // try from 007980cc to 007980d7 has its CatchHandler @ 007983e4 */
  local_c0 = (undefined8 ****)pppuVar7;
  FUN_0060fd20(auStack_140,&local_d0);
  if (local_b0 != (undefined **)0x0) {
    if (local_b0 == &local_d0) {
      pcVar5 = *(code **)(*local_b0 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*local_b0 + 0x18);
    }
    (*pcVar5)();
  }
  local_68 = (undefined **)0x0;
  uStack_60 = 0;
  puVar1 = PTR_DAT_04373168 + 0x10;
  puVar2 = PTR_DAT_04373170 + 0x10;
  local_d0 = puVar1;
  puStack_c8 = puVar2;
  local_c0 = &local_c0;
  ppppuStack_b8 = &local_c0;
  (**(code **)(**(long **)(param_2 + 0x68) + 0x10))(*(long **)(param_2 + 0x68),auStack_a8);
  local_68 = &puStack_c8;
  thunk_FUN_00783af0(&local_d0);
  local_d0 = puVar1;
  FUN_00782f18(&puStack_c8);
  local_68 = (undefined **)0x0;
  uStack_60 = 0;
  local_d0 = puVar1;
  puStack_c8 = puVar2;
  local_c0 = &local_c0;
  ppppuStack_b8 = &local_c0;
  (**(code **)(**(long **)(param_2 + 0x78) + 0x10))(*(long **)(param_2 + 0x78),auStack_a8);
  local_68 = &puStack_c8;
  thunk_FUN_00783af0(&local_d0);
  local_d0 = puVar1;
  FUN_00782f18(&puStack_c8);
  FUN_002937d4(*(long *)(param_2 + 0x58) + 0x238);
  FUN_002934f8(&local_d0,param_2 + 0x48);
  puVar1 = PTR_DAT_04373140;
  local_178[0] = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  uStack_150 = 0;
  lVar8 = *(long *)(param_2 + 0x88);
  if (*(char *)(lVar8 + 0x48) != '\x01') {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",0xfa
              );
  }
  pcVar6 = *(char **)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 0x5d0) = local_90;
  if (*pcVar6 == '\0') {
    *pcVar6 = '\x01';
    *(char **)(lVar8 + 0x570) = pcVar6 + 0xb0;
  }
  *(char **)(lVar8 + 0x580) = pcVar6;
  *(char **)(lVar8 + 0x588) = pcVar6 + 0xe8;
  *(int **)(lVar8 + 0x590) = local_178;
                    /* try { // try from 0079821c to 007983df has its CatchHandler @ 007983f8 */
  (**(code **)(**(long **)puVar1 + 0x138))(&local_1b0);
  *(ulong *)(lVar8 + 0x5b0) = uStack_1a8;
  *(ulong *)(lVar8 + 0x5a8) = CONCAT44(uStack_1ac,local_1b0);
  *(undefined1 **)(lVar8 + 0x5c0) = local_198;
  *(undefined8 *)(lVar8 + 0x5b8) = local_1a0;
  plVar3 = *(long **)(lVar8 + 0x18);
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar8 + 0x560,(undefined8 *)(lVar8 + 0x18));
  FUN_002937d4(&local_d0);
  if (((*(long *)(param_2 + 0xa8) != 0) && (uVar4 = FUN_00619a40(), (uVar4 & 1) != 0)) &&
     (local_178[0] == 1)) {
    FUN_006dddf0(&local_1b0);
    local_178[0] = local_1b0;
    if ((local_170 & 1) != 0) {
      *local_160 = 0;
      uStack_168 = 0;
      if ((local_170 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_160);
      }
    }
    local_170 = uStack_1a8;
    uStack_1a8 = 0;
    uStack_168 = local_1a0;
    local_160 = local_198;
    local_1a0 = 0;
    local_198 = (undefined1 *)0x0;
    if ((local_158 & 1) != 0) {
      *puStack_148 = 0;
      uStack_150 = 0;
      if ((local_158 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,puStack_148);
      }
    }
    uStack_150 = uStack_188;
    local_158 = local_190;
    puStack_148 = local_180;
    uStack_188 = 0;
    local_180 = (undefined1 *)0x0;
    local_190 = 0;
    if ((uStack_1a8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_198);
    }
  }
  FUN_00789644(param_1,local_178);
  if ((local_158 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,puStack_148);
  }
  if ((local_170 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_160);
  }
  FUN_00293ad8(&local_d0);
  FUN_0060fb78(auStack_140);
  return;
}


