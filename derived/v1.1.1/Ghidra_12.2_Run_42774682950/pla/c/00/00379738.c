/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00379738; name: FUN_00379738
 */


undefined8 FUN_00379738(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte local_58;
  undefined7 uStack_57;
  char cStack_50;
  undefined7 uStack_4f;
  undefined4 local_48;
  undefined4 uStack_44;
  
  iVar1 = *(int *)(param_1 + 0xec);
  *(int *)(param_1 + 0xec) = iVar1 + -1;
  if (iVar1 < 1) {
    local_58 = 0x26;
    uStack_44 = 0;
    uStack_4f = s_Message_is_too_deep_039a882e._8_7_;
    local_48 = CONCAT31(0x706565,s_Message_is_too_deep_039a882e[0xf]);
    uStack_57 = s_Message_is_too_deep_039a882e._0_7_;
    cStack_50 = s_Message_is_too_deep_039a882e[7];
                    /* try { // try from 00379834 to 0037983f has its CatchHandler @ 00379a7c */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_58);
    if ((local_58 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_44,local_48));
    }
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar2 = FUN_00370edc(lVar6,param_4);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  cStack_50 = 0;
  uStack_4f = 0;
  local_48 = 0;
  uStack_44 = 0;
  local_58 = 0;
  uStack_57 = 0;
                    /* try { // try from 00379790 to 0037979b has its CatchHandler @ 00379a84 */
  uVar3 = FUN_0037ac2c(param_1,&local_58);
  if ((uVar3 & 1) != 0) {
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 == (long *)0x0) {
      uVar2 = 0;
      if (*(int *)(param_4 + 0x3c) == 3) goto LAB_003797c8;
LAB_00379870:
                    /* try { // try from 00379870 to 0037987f has its CatchHandler @ 00379a80 */
      uVar2 = FUN_0038c3b8(param_3,param_2,param_4,uVar2);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
      if ((local_58 & 1) == 0) {
        uStack_88 = CONCAT71(uStack_4f,cStack_50);
        local_90 = CONCAT71(uStack_57,local_58);
        local_80 = (void *)CONCAT44(uStack_44,local_48);
      }
      else {
        uVar3 = CONCAT71(uStack_4f,cStack_50);
        if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        pvVar5 = (void *)CONCAT44(uStack_44,local_48);
        if (uVar3 < 0x17) {
          local_90 = (ulong)(byte)((int)uVar3 << 1);
          pvVar7 = (void *)((ulong)&local_90 | 1);
          if (uVar3 != 0) goto LAB_00379994;
        }
        else {
          uVar8 = uVar3 + 0x10 & 0xfffffffffffffff0;
          pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
          local_90 = uVar8 | 1;
          uStack_88 = uVar3;
          local_80 = pvVar7;
LAB_00379994:
          memcpy(pvVar7,pvVar5,uVar3);
        }
        *(undefined1 *)((long)pvVar7 + uVar3) = 0;
      }
                    /* try { // try from 003799a8 to 003799b7 has its CatchHandler @ 00379a40 */
      uVar3 = FUN_0037ad74(param_1,uVar2,&local_90);
      uVar3 = uVar3 & 0xffffffff;
      if ((local_90 & 1) != 0) {
        pvVar5 = local_80;
LAB_003799cc:
        FUN_002e2ea0(PTR_LAB_04373088,pvVar5);
      }
    }
    else {
                    /* try { // try from 003797b0 to 003797d7 has its CatchHandler @ 00379a80 */
      uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,param_4);
      if (*(int *)(param_4 + 0x3c) != 3) goto LAB_00379870;
LAB_003797c8:
      uVar2 = FUN_0038d598(param_3,param_2,param_4);
      local_70 = 0;
      uStack_68 = 0;
      local_60 = (void *)0x0;
      if ((local_58 & 1) == 0) {
        uStack_68 = CONCAT71(uStack_4f,cStack_50);
        local_70 = CONCAT71(uStack_57,local_58);
        local_60 = (void *)CONCAT44(uStack_44,local_48);
      }
      else {
        uVar3 = CONCAT71(uStack_4f,cStack_50);
        if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 00379a30 to 00379a3f has its CatchHandler @ 00379a80 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        pvVar5 = (void *)CONCAT44(uStack_44,local_48);
        if (uVar3 < 0x17) {
          local_70 = (ulong)(byte)((int)uVar3 << 1);
          pvVar7 = (void *)((ulong)&local_70 | 1);
          if (uVar3 != 0) goto LAB_00379930;
        }
        else {
          uVar8 = uVar3 + 0x10 & 0xfffffffffffffff0;
          pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
          local_70 = uVar8 | 1;
          uStack_68 = uVar3;
          local_60 = pvVar7;
LAB_00379930:
          memcpy(pvVar7,pvVar5,uVar3);
        }
        *(undefined1 *)((long)pvVar7 + uVar3) = 0;
      }
                    /* try { // try from 00379944 to 00379953 has its CatchHandler @ 00379a54 */
      uVar3 = FUN_0037ad74(param_1,uVar2,&local_70);
      uVar3 = uVar3 & 0xffffffff;
      if ((local_70 & 1) != 0) {
        pvVar5 = local_60;
        goto LAB_003799cc;
      }
    }
    if ((uVar3 & 1) != 0) {
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      *(long *)(param_1 + 0x10) = lVar6;
      uVar2 = 1;
      goto joined_r0x00379a00;
    }
  }
  uVar2 = 0;
joined_r0x00379a00:
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_44,local_48));
  }
  return uVar2;
}


