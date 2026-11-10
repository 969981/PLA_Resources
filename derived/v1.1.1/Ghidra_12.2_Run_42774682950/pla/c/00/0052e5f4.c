/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052e5f4; name: FUN_0052e5f4
 */


void FUN_0052e5f4(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 != 0) {
    if (PTR_DAT_04374b58[0x10] != '\0') {
      uVar4 = FUN_002f1480(param_2);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xed3,1,"chand=%p calld=%p: failed to pick subchannel: error=%s",uVar5,lVar1,
                   uVar4);
    }
    if (4 < param_2) {
      param_2 = FUN_002f03c0(param_2,
                             "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                             ,0xed7);
    }
    FUN_0052860c(lVar1,param_1,param_2,&LAB_0052f22c);
    return;
  }
  local_108 = *(undefined8 *)(lVar1 + 0x2b0);
  bVar2 = *(byte *)(lVar1 + 0x318);
  local_110 = *(undefined8 *)(lVar1 + 0x1d8);
  *(undefined8 *)(lVar1 + 0x1d8) = 0;
  uStack_100 = *(undefined8 *)(lVar1 + 0xe8);
  local_f8 = *(undefined8 *)(lVar1 + 0xf0);
  local_e8 = *(undefined8 *)(lVar1 + 0x100);
  uStack_f0 = *(undefined8 *)(lVar1 + 0xf8);
  local_b8 = 0x5e8;
  if ((bVar2 & 8) == 0) {
    local_b8 = 0;
  }
  uStack_e0 = *(undefined8 *)(lVar1 + 0x108);
  local_d8 = *(undefined8 *)(lVar1 + 0x110);
  uStack_d0 = *(undefined8 *)(lVar1 + 0x118);
  local_a8[0] = 0;
  local_a8[1] = 0;
  auVar7 = NEON_ext(*(undefined1 (*) [16])(lVar1 + 0x128),*(undefined1 (*) [16])(lVar1 + 0x128),8,1)
  ;
  uStack_c0 = auVar7._8_8_;
  local_c8 = auVar7._0_8_;
                    /* try { // try from 0052e6fc to 0052e70b has its CatchHandler @ 0052e88c */
  local_a8[2] = local_108;
  uStack_90 = uStack_100;
  uStack_88 = local_f8;
  uStack_80 = uStack_f0;
  uStack_78 = local_e8;
  local_70 = uStack_e0;
  uStack_68 = local_d8;
  local_60 = uStack_d0;
  local_58 = local_c8;
  uStack_50 = uStack_c0;
  local_48 = local_b8;
  FUN_00535de0(&local_b0,&local_110,local_a8);
  if (*(long *)(lVar1 + 400) != 0) {
                    /* try { // try from 0052e718 to 0052e71b has its CatchHandler @ 0052e874 */
    FUN_005363ac();
  }
  *(undefined8 *)(lVar1 + 400) = local_b0;
  local_b0 = 0;
  FUN_0052ea88(&local_110);
  if (PTR_DAT_04374b58[0x10] != '\0') {
    uVar6 = *(undefined8 *)(lVar1 + 400);
                    /* try { // try from 0052e828 to 0052e86f has its CatchHandler @ 0052e8a8 */
    uVar4 = FUN_002f1480(local_a8[0]);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xeba,1,"chand=%p calld=%p: create subchannel_call=%p: error=%s",uVar5,lVar1,uVar6
                 ,uVar4);
  }
  if (local_a8[0] == 0) {
    if ((bVar2 >> 3 & 1) != 0) {
                    /* try { // try from 0052e74c to 0052e7c3 has its CatchHandler @ 0052e8a8 */
      puVar3 = (undefined8 *)FUN_00536130(*(undefined8 *)(lVar1 + 400));
      uVar5 = *(undefined8 *)(lVar1 + 0x130);
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined1 *)(puVar3 + 6) = 0;
      *(undefined1 *)(puVar3 + 0x7b) = 0;
      puVar3[0x85] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = uVar5;
      puVar3[8] = 0;
      puVar3[7] = 0;
      puVar3[10] = 0;
      puVar3[9] = 0;
      puVar3[0xc] = 0;
      puVar3[0xb] = 0;
      puVar3[0xe] = 0;
      puVar3[0xd] = 0;
      puVar3[0x10] = 0;
      puVar3[0xf] = 0;
      puVar3[0xa8] = 0;
      puVar3[0xa7] = 0;
      puVar3[0xa4] = 0;
      puVar3[0xa3] = 0;
      puVar3[0xa6] = 0;
      puVar3[0xa5] = 0;
      *(undefined1 *)(puVar3 + 0xb6) = 0;
      puVar3[0xb3] = 0;
      puVar3[0xb2] = 0;
      puVar3[0xb5] = 0;
      puVar3[0xb4] = 0;
      puVar3[0xbb] = 0;
      puVar3[0xb8] = 0;
      puVar3[0xb7] = 0;
      puVar3[0xba] = 0;
      puVar3[0xb9] = 0;
      *(byte *)(puVar3 + 0xbc) = *(byte *)(puVar3 + 0xbc) & 0xfe;
    }
    FUN_00528bc8(lVar1,param_1);
  }
  else {
    FUN_0052860c(lVar1,param_1,local_a8[0],&LAB_0052f22c);
  }
  FUN_0052ea88(local_a8 + 1);
  return;
}


