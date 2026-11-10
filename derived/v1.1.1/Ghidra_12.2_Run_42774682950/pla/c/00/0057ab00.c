/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057ab00; name: FUN_0057ab00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057ab00(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  size_t sVar5;
  void *pvVar6;
  char *pcVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte local_80;
  undefined2 uStack_7f;
  char cStack_7d;
  char cStack_7c;
  undefined2 uStack_7b;
  char cStack_79;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar7 = (char *)param_1[3];
  local_80 = 0;
  uStack_7f = 0;
  cStack_7d = 0;
  cStack_7c = 0;
  uStack_7b = 0;
  cStack_79 = 0;
  iStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  sVar5 = strlen(pcVar7);
  if (0xffffffffffffffef < sVar5) goto LAB_0057b008;
  if (sVar5 < 0x17) {
    local_80 = (byte)((int)sVar5 << 1);
    pvVar8 = (void *)((ulong)&local_80 | 1);
    if (sVar5 != 0) goto LAB_0057ab90;
  }
  else {
    uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    local_80 = (byte)uVar10 | 1;
    uStack_70 = SUB84(pvVar8,0);
    uStack_6c = (undefined4)((ulong)pvVar8 >> 0x20);
    uStack_7f = (undefined2)(uVar10 >> 8);
    cStack_7d = (char)(uVar10 >> 0x18);
    cStack_7c = (char)(uVar10 >> 0x20);
    uStack_7b = (undefined2)(uVar10 >> 0x28);
    cStack_79 = (char)(uVar10 >> 0x38);
    uStack_74 = (undefined4)(sVar5 >> 0x20);
    iStack_78 = (int)sVar5;
LAB_0057ab90:
    memcpy(pvVar8,pcVar7,sVar5);
  }
  *(undefined1 *)((long)pvVar8 + sVar5) = 0;
                    /* try { // try from 0057aba4 to 0057abaf has its CatchHandler @ 0057b070 */
  FUN_0057a940(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_6c,uStack_70));
  }
  local_80 = 0x16;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_7f = s_HTTP_1_0_0394b580._0_2_;
  cStack_7d = s_HTTP_1_0_0394b580[2];
  cStack_7c = s_HTTP_1_0_0394b580[3];
  uStack_7b = s_HTTP_1_0_0394b580._4_2_;
  cStack_79 = s_HTTP_1_0_0394b580[6];
  iStack_78._0_1_ = s_HTTP_1_0_0394b580[7];
  iStack_78 = CONCAT31(0xa0d30,(char)iStack_78);
                    /* try { // try from 0057abf8 to 0057ac03 has its CatchHandler @ 0057b060 */
  FUN_0057a940(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_6c,uStack_70));
  }
  local_80 = 0xc;
  uStack_7f = 0x6f48;
  cStack_7d = 0x73;
  cStack_7c = 0x74;
  iStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_7b = 0x203a;
  cStack_79 = 0;
                    /* try { // try from 0057ac40 to 0057ac4b has its CatchHandler @ 0057b050 */
  FUN_0057a940(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_6c,uStack_70));
  }
  pcVar7 = (char *)*param_1;
  iStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_80 = 0;
  uStack_7f = 0;
  cStack_7d = 0;
  cStack_7c = 0;
  uStack_7b = 0;
  cStack_79 = 0;
  sVar5 = strlen(pcVar7);
  if (0xffffffffffffffef < sVar5) {
LAB_0057b008:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_80 = (byte)((int)sVar5 << 1);
    pvVar8 = (void *)((ulong)&local_80 | 1);
    if (sVar5 == 0) goto LAB_0057acdc;
  }
  else {
    uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    local_80 = (byte)uVar10 | 1;
    uStack_70 = SUB84(pvVar8,0);
    uStack_6c = (undefined4)((ulong)pvVar8 >> 0x20);
    uStack_7f = (undefined2)(uVar10 >> 8);
    cStack_7d = (char)(uVar10 >> 0x18);
    cStack_7c = (char)(uVar10 >> 0x20);
    uStack_7b = (undefined2)(uVar10 >> 0x28);
    cStack_79 = (char)(uVar10 >> 0x38);
    uStack_74 = (undefined4)(sVar5 >> 0x20);
    iStack_78 = (int)sVar5;
  }
  memcpy(pvVar8,pcVar7,sVar5);
LAB_0057acdc:
  *(undefined1 *)((long)pvVar8 + sVar5) = 0;
                    /* try { // try from 0057ace0 to 0057aceb has its CatchHandler @ 0057b040 */
  FUN_0057a940(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_6c,uStack_70));
  }
  cStack_7c = '\0';
  uStack_7b = 0;
  cStack_79 = '\0';
  iStack_78 = 0;
  uStack_74 = 0;
  local_80 = 4;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_7f = 0xa0d;
  cStack_7d = '\0';
                    /* try { // try from 0057ad20 to 0057ad2b has its CatchHandler @ 0057b030 */
  FUN_0057a940(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_6c,uStack_70));
  }
  if ((param_2 & 1) != 0) {
    local_80 = 0x26;
    uStack_6c = 0;
    iStack_78._1_3_ = s_Connection__close_0397292a._8_3_;
    uStack_74 = s_Connection__close_0397292a._11_4_;
    uStack_70 = CONCAT31(0xa0d65,s_Connection__close_0397292a[0xf]);
    uStack_7f = s_Connection__close_0397292a._0_2_;
    cStack_7d = s_Connection__close_0397292a[2];
    cStack_7c = s_Connection__close_0397292a[3];
    uStack_7b = s_Connection__close_0397292a._4_2_;
    cStack_79 = s_Connection__close_0397292a[6];
    iStack_78._0_1_ = s_Connection__close_0397292a[7];
                    /* try { // try from 0057ad78 to 0057ad83 has its CatchHandler @ 0057b010 */
    FUN_0057a940(param_3,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_6c,uStack_70));
    }
  }
  pcVar7 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar3 = s_User_Agent__grpc_httpcli_0_0_03919bfc._0_8_;
  uVar1 = CONCAT26(s_User_Agent__grpc_httpcli_0_0_03919bfc._14_2_,
                   s_User_Agent__grpc_httpcli_0_0_03919bfc._8_6_);
  uStack_70 = SUB84(pcVar7,0);
  uStack_6c = (undefined4)((ulong)pcVar7 >> 0x20);
  iStack_78 = (int)_UNK_03889aa8;
  uStack_74 = (undefined4)((ulong)_UNK_03889aa8 >> 0x20);
  local_80 = (byte)_DAT_03889aa0;
  uStack_7f = (undefined2)((ulong)_DAT_03889aa0 >> 8);
  cStack_7d = (char)((ulong)_DAT_03889aa0 >> 0x18);
  cStack_7c = (char)((ulong)_DAT_03889aa0 >> 0x20);
  uStack_7b = (undefined2)((ulong)_DAT_03889aa0 >> 0x28);
  cStack_79 = (char)((ulong)_DAT_03889aa0 >> 0x38);
  uVar2 = CONCAT62(s_User_Agent__grpc_httpcli_0_0_03919bfc._16_6_,
                   s_User_Agent__grpc_httpcli_0_0_03919bfc._14_2_);
  *(undefined8 *)(pcVar7 + 0x16) = s_User_Agent__grpc_httpcli_0_0_03919bfc._22_8_;
  *(undefined8 *)(pcVar7 + 0xe) = uVar2;
  *(undefined8 *)(pcVar7 + 8) = uVar1;
  *(undefined8 *)pcVar7 = uVar3;
  pcVar7[0x1e] = '\0';
                    /* try { // try from 0057add8 to 0057ade3 has its CatchHandler @ 0057b020 */
  FUN_0057a940(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_6c,uStack_70));
  }
  puVar4 = PTR_LAB_04373088;
  if (param_1[5] != 0) {
    lVar11 = 0;
    uVar10 = 0;
    pvVar8 = (void *)((ulong)&local_80 | 1);
    do {
      pcVar7 = *(char **)(param_1[6] + lVar11);
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_80 = 0;
      uStack_7f = 0;
      cStack_7d = 0;
      cStack_7c = 0;
      uStack_7b = 0;
      cStack_79 = 0;
      sVar5 = strlen(pcVar7);
      if (0xffffffffffffffef < sVar5) goto LAB_0057b008;
      if (sVar5 < 0x17) {
        local_80 = (byte)((int)sVar5 << 1);
        pvVar6 = pvVar8;
        if (sVar5 != 0) goto LAB_0057aea0;
      }
      else {
        uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
        local_80 = (byte)uVar9 | 1;
        uStack_70 = SUB84(pvVar6,0);
        uStack_6c = (undefined4)((ulong)pvVar6 >> 0x20);
        uStack_7f = (undefined2)(uVar9 >> 8);
        cStack_7d = (char)(uVar9 >> 0x18);
        cStack_7c = (char)(uVar9 >> 0x20);
        uStack_7b = (undefined2)(uVar9 >> 0x28);
        cStack_79 = (char)(uVar9 >> 0x38);
        uStack_74 = (undefined4)(sVar5 >> 0x20);
        iStack_78 = (int)sVar5;
LAB_0057aea0:
        memcpy(pvVar6,pcVar7,sVar5);
      }
      *(undefined1 *)((long)pvVar6 + sVar5) = 0;
                    /* try { // try from 0057aeb4 to 0057aebf has its CatchHandler @ 0057b0b0 */
      FUN_0057a940(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      cStack_7c = 0;
      uStack_7b = 0;
      cStack_79 = 0;
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_80 = 4;
      uStack_7f = 0x203a;
      cStack_7d = 0;
                    /* try { // try from 0057aeec to 0057aef7 has its CatchHandler @ 0057b0a0 */
      FUN_0057a940(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      pcVar7 = *(char **)(param_1[6] + lVar11 + 8);
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_80 = 0;
      uStack_7f = 0;
      cStack_7d = 0;
      cStack_7c = 0;
      uStack_7b = 0;
      cStack_79 = 0;
      sVar5 = strlen(pcVar7);
      if (0xffffffffffffffef < sVar5) goto LAB_0057b008;
      if (sVar5 < 0x17) {
        local_80 = (byte)((int)sVar5 << 1);
        pvVar6 = pvVar8;
        if (sVar5 != 0) goto LAB_0057af78;
      }
      else {
        uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
        local_80 = (byte)uVar9 | 1;
        uStack_70 = SUB84(pvVar6,0);
        uStack_6c = (undefined4)((ulong)pvVar6 >> 0x20);
        uStack_7f = (undefined2)(uVar9 >> 8);
        cStack_7d = (char)(uVar9 >> 0x18);
        cStack_7c = (char)(uVar9 >> 0x20);
        uStack_7b = (undefined2)(uVar9 >> 0x28);
        cStack_79 = (char)(uVar9 >> 0x38);
        uStack_74 = (undefined4)(sVar5 >> 0x20);
        iStack_78 = (int)sVar5;
LAB_0057af78:
        memcpy(pvVar6,pcVar7,sVar5);
      }
      *(undefined1 *)((long)pvVar6 + sVar5) = 0;
                    /* try { // try from 0057af8c to 0057af97 has its CatchHandler @ 0057b090 */
      FUN_0057a940(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      cStack_7c = 0;
      uStack_7b = 0;
      cStack_79 = 0;
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_80 = 4;
      uStack_7f = 0xa0d;
      cStack_7d = 0;
                    /* try { // try from 0057afc4 to 0057afcf has its CatchHandler @ 0057b080 */
      FUN_0057a940(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while (uVar10 < (ulong)param_1[5]);
  }
  return;
}


