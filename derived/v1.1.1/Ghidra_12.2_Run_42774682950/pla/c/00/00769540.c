/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00769540; name: FUN_00769540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769540(undefined4 *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long local_c8;
  char local_c0;
  undefined *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  *param_4 = 1;
  uVar4 = (**(code **)(*param_2 + 0x48))();
  puVar3 = PTR_DAT_04373508;
  puVar2 = PTR_DAT_04373140;
  if (uVar4 < 0x18) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x140))(&local_70);
    lVar6 = local_60;
    uVar8 = uStack_68;
    puVar3 = local_70;
    lVar5 = (long)&uStack_68 + 1;
    if (local_70 != (undefined *)0x0) {
      lVar5 = local_60;
    }
                    /* try { // try from 007695b8 to 007695bf has its CatchHandler @ 0076983c */
    lVar5 = FUN_0031e8a4(param_2,lVar5);
    lVar6 = lVar6 + uVar8;
    if (puVar3 == (undefined *)0x0) {
      lVar6 = (long)&uStack_68 + (uVar8 & 0xff) + 1;
    }
    if (lVar6 != lVar5) {
                    /* try { // try from 00769810 to 00769827 has its CatchHandler @ 0076983c */
      (**(code **)(**(long **)puVar2 + 0x10))
                (*(long **)puVar2,
                 "slice.end() == msg.SerializeWithCachedSizesToArray( const_cast<uint8_t*>(slice.begin()))"
                 ,"external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/proto_utils.h",0x39);
    }
                    /* try { // try from 007695e8 to 007695f3 has its CatchHandler @ 00769838 */
    lVar6 = (**(code **)(**(long **)puVar2 + 0xf0))(*(long **)puVar2,&local_70,1);
    lVar5 = *param_3;
    *param_3 = lVar6;
                    /* try { // try from 00769608 to 00769617 has its CatchHandler @ 00769844 */
    uVar7 = (**(code **)(**(long **)puVar2 + 0x1a0))();
    FUN_002bb1a0(param_1,uVar7);
    if (lVar5 != 0) {
                    /* try { // try from 00769628 to 0076962f has its CatchHandler @ 0076982c */
      (**(code **)(**(long **)puVar2 + 0xc0))(*(long **)puVar2,lVar5);
    }
    uStack_d8 = uStack_68;
    local_e0 = local_70;
    local_c8 = uStack_58;
    local_d0 = local_60;
                    /* try { // try from 00769644 to 0076964b has its CatchHandler @ 00769834 */
    (**(code **)(**(long **)puVar2 + 0x148))(*(long **)puVar2,&local_e0);
  }
  else {
    local_d0 = 0;
    local_c0 = '\0';
    local_e0 = PTR_DAT_04373508 + 0x10;
    uStack_d8 = CONCAT44(uVar4,0x100000);
    if (*param_3 != 0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
                (*(long **)PTR_DAT_04373140,"!byte_buffer->Valid()",
                 "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/proto_buffer_writer.h",
                 0x41);
    }
    lVar6 = (**(code **)(**(long **)puVar2 + 0xf0))(*(long **)puVar2,0,0);
    if (*param_3 != 0) {
      (**(code **)(**(long **)puVar2 + 0xc0))();
      *param_3 = 0;
    }
    local_c8 = lVar6 + 0x18;
    *param_3 = lVar6;
                    /* try { // try from 007696c4 to 007696ef has its CatchHandler @ 0076988c */
    uVar8 = FUN_0031ea04(param_2,&local_e0);
    puVar1 = PTR_FUN_04373078;
    if ((uVar8 & 1) == 0) {
      pcVar9 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
      uVar7 = s_Failed_to_serialize_message_038e4c8d._0_8_;
      *(ulong *)(pcVar9 + 8) =
           CONCAT53(s_Failed_to_serialize_message_038e4c8d._11_5_,
                    s_Failed_to_serialize_message_038e4c8d._8_3_);
      *(undefined8 *)pcVar9 = uVar7;
      pcVar9[0x1b] = '\0';
      uVar7 = CONCAT35(s_Failed_to_serialize_message_038e4c8d._16_3_,
                       s_Failed_to_serialize_message_038e4c8d._11_5_);
      *(undefined8 *)(pcVar9 + 0x13) = s_Failed_to_serialize_message_038e4c8d._19_8_;
      *(undefined8 *)(pcVar9 + 0xb) = uVar7;
      *param_1 = 0xd;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      puVar10 = (undefined8 *)FUN_002e2e80(puVar1,0x20);
      uVar11 = _UNK_03888f48;
      uVar7 = _DAT_03888f40;
      *(undefined8 **)(param_1 + 6) = puVar10;
      *(undefined8 *)(param_1 + 4) = uVar11;
      *(undefined8 *)(param_1 + 2) = uVar7;
      uVar11 = *(undefined8 *)(pcVar9 + 8);
      uVar7 = *(undefined8 *)pcVar9;
      uVar13 = *(undefined8 *)(pcVar9 + 0x13);
      uVar12 = *(undefined8 *)(pcVar9 + 0xb);
      *(undefined1 *)((long)puVar10 + 0x1b) = 0;
      *(undefined8 *)((long)puVar10 + 0x13) = uVar13;
      *(undefined8 *)((long)puVar10 + 0xb) = uVar12;
      puVar10[1] = uVar11;
      *puVar10 = uVar7;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_002e2ea0(PTR_LAB_04373088,pcVar9);
    }
    else {
      uVar7 = (**(code **)(**(long **)puVar2 + 0x1a0))();
      FUN_002bb1a0(param_1,uVar7);
    }
    if (local_c0 != '\0') {
      local_e0 = puVar3 + 0x10;
                    /* try { // try from 007697b8 to 007697bf has its CatchHandler @ 00769830 */
      (**(code **)(**(long **)puVar2 + 0x148))(*(long **)puVar2,&local_70);
    }
  }
  return;
}


