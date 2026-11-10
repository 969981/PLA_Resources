/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c41b0; name: FUN_003c41b0
 */


undefined8 FUN_003c41b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  int iVar6;
  void *__src;
  void *__dest;
  ulong uVar7;
  undefined8 uVar8;
  byte local_98 [16];
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = param_3;
  local_48 = param_4;
  uVar2 = FUN_003c5260(param_1,*(undefined8 *)(param_2 + 0xb0),&local_50);
  if ((uVar2 & 1) == 0) {
    FUN_0030f640(&local_80,2,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor_database.cc"
                 ,0x78);
                    /* try { // try from 003c420c to 003c4227 has its CatchHandler @ 003c4570 */
    uVar4 = FUN_0030f3ac(&local_80,"File already exists in database: ");
    uVar4 = FUN_0030f3e8(uVar4,*(undefined8 *)(param_2 + 0xb0));
                    /* try { // try from 003c4228 to 003c422f has its CatchHandler @ 003c456c */
    FUN_0030f41c(local_98,uVar4);
    FUN_0030f658(&local_80);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
  }
  else {
    puVar5 = *(ulong **)(param_2 + 0xb8);
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    if ((*puVar5 & 1) == 0) {
      uStack_78 = puVar5[1];
      local_80 = *puVar5;
      local_70 = (void *)puVar5[2];
    }
    else {
      uVar2 = puVar5[1];
      if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = (void *)puVar5[2];
      if (uVar2 < 0x17) {
        local_80 = (ulong)(byte)((int)uVar2 << 1);
        __dest = (void *)((ulong)&local_80 | 1);
        if (uVar2 != 0) goto LAB_003c42c0;
      }
      else {
        uVar7 = uVar2 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
        local_80 = uVar7 | 1;
        uStack_78 = uVar2;
        local_70 = __dest;
LAB_003c42c0:
        memcpy(__dest,__src,uVar2);
      }
      *(undefined1 *)((long)__dest + uVar2) = 0;
    }
  }
  uVar2 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    uVar2 = uStack_78;
  }
  if (uVar2 != 0) {
                    /* try { // try from 003c42ec to 003c42f7 has its CatchHandler @ 003c4568 */
    FUN_002e6a9c(&local_80,0x2e);
  }
  puVar1 = PTR_LAB_04373088;
  if (0 < *(int *)(param_2 + 0x38)) {
    iVar6 = 0;
    do {
                    /* try { // try from 003c4314 to 003c432f has its CatchHandler @ 003c4604 */
      lVar3 = FUN_00365e80(param_2 + 0x30,iVar6);
      FUN_003786a0(local_98,&local_80,*(undefined8 *)(lVar3 + 0xd8));
                    /* try { // try from 003c4334 to 003c433f has its CatchHandler @ 003c45c0 */
      uVar2 = FUN_003c54d0(param_1,local_98,local_50,local_48);
      if ((local_98[0] & 1) != 0) {
        FUN_002e2ea0(puVar1,local_88);
      }
      if ((uVar2 & 1) == 0) goto LAB_003c4528;
      uVar8 = *(undefined8 *)(param_2 + 0xb0);
                    /* try { // try from 003c4360 to 003c437f has its CatchHandler @ 003c4600 */
      uVar4 = FUN_00365e80(param_2 + 0x30,iVar6);
      uVar2 = FUN_003c5a80(param_1,uVar8,uVar4,local_50,local_48);
      if ((uVar2 & 1) == 0) goto LAB_003c4528;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x38));
  }
  puVar1 = PTR_LAB_04373088;
  if (0 < *(int *)(param_2 + 0x50)) {
    iVar6 = 0;
    do {
                    /* try { // try from 003c43b0 to 003c43cb has its CatchHandler @ 003c45fc */
      lVar3 = FUN_00365f68(param_2 + 0x48,iVar6);
      FUN_003786a0(local_98,&local_80,*(undefined8 *)(lVar3 + 0x60));
                    /* try { // try from 003c43d0 to 003c43db has its CatchHandler @ 003c45b0 */
      uVar2 = FUN_003c54d0(param_1,local_98,local_50,local_48);
      if ((local_98[0] & 1) != 0) {
        FUN_002e2ea0(puVar1,local_88);
      }
      if ((uVar2 & 1) == 0) goto LAB_003c4528;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x50));
  }
  puVar1 = PTR_LAB_04373088;
  if (0 < *(int *)(param_2 + 0x80)) {
    iVar6 = 0;
    do {
                    /* try { // try from 003c4424 to 003c443f has its CatchHandler @ 003c45ac */
      lVar3 = FUN_00366138(param_2 + 0x78,iVar6);
      FUN_003786a0(local_98,&local_80,*(undefined8 *)(lVar3 + 0x18));
                    /* try { // try from 003c4444 to 003c444f has its CatchHandler @ 003c4594 */
      uVar2 = FUN_003c54d0(param_1,local_98,local_50,local_48);
      if ((local_98[0] & 1) != 0) {
        FUN_002e2ea0(puVar1,local_88);
      }
      if ((uVar2 & 1) == 0) goto LAB_003c4528;
      uVar8 = *(undefined8 *)(param_2 + 0xb0);
                    /* try { // try from 003c4470 to 003c448f has its CatchHandler @ 003c45a8 */
      uVar4 = FUN_00366138(param_2 + 0x78,iVar6);
      uVar2 = FUN_003c5b5c(param_1,uVar8,uVar4,local_50,local_48);
      if ((uVar2 & 1) == 0) goto LAB_003c4528;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x80));
  }
  puVar1 = PTR_LAB_04373088;
  if (0 < *(int *)(param_2 + 0x68)) {
    iVar6 = 0;
    do {
                    /* try { // try from 003c44c0 to 003c44db has its CatchHandler @ 003c45a4 */
      lVar3 = FUN_00366050(param_2 + 0x60,iVar6);
      FUN_003786a0(local_98,&local_80,*(undefined8 *)(lVar3 + 0x30));
                    /* try { // try from 003c44e0 to 003c44eb has its CatchHandler @ 003c4584 */
      uVar2 = FUN_003c54d0(param_1,local_98,local_50,local_48);
      if ((local_98[0] & 1) != 0) {
        FUN_002e2ea0(puVar1,local_88);
      }
      if ((uVar2 & 1) == 0) goto LAB_003c4528;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x68));
  }
  uVar4 = 1;
joined_r0x003c4530:
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return uVar4;
LAB_003c4528:
  uVar4 = 0;
  goto joined_r0x003c4530;
}


