/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057b0e0; name: FUN_0057b0e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b0e0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  ulong local_70;
  undefined *local_68;
  ulong local_60;
  byte *local_58;
  byte *local_50;
  undefined8 uStack_48;
  
  local_58 = (byte *)0x0;
  uStack_98 = 0;
  local_90 = (char *)0x0;
  local_a0 = 0x2054534f500a;
  local_50 = (byte *)0x0;
  uStack_48 = 0;
                    /* try { // try from 0057b130 to 0057b13b has its CatchHandler @ 0057b428 */
  FUN_0057a940(&local_58,&local_a0);
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
                    /* try { // try from 0057b154 to 0057b163 has its CatchHandler @ 0057b418 */
  FUN_0057ab00(param_2,1,&local_58);
  if (param_3 != 0) {
    uVar11 = *(ulong *)(param_2 + 0x28);
    if (uVar11 != 0) {
      puVar13 = *(undefined8 **)(param_2 + 0x30);
      uVar12 = 0;
      do {
        iVar10 = strcmp((char *)*puVar13,"Content-Type");
        if (iVar10 == 0) goto LAB_0057b200;
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 2;
      } while (uVar12 < uVar11);
    }
    local_90 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar7 = s_Content_Type__text_plain_038a2567._0_8_;
    uVar3 = CONCAT62(s_Content_Type__text_plain_038a2567._10_6_,
                     s_Content_Type__text_plain_038a2567._8_2_);
    uStack_98 = _UNK_038897f8;
    local_a0 = _DAT_038897f0;
    uVar4 = CONCAT26(s_Content_Type__text_plain_038a2567._16_2_,
                     s_Content_Type__text_plain_038a2567._10_6_);
    *(undefined8 *)(local_90 + 0x12) = s_Content_Type__text_plain_038a2567._18_8_;
    *(undefined8 *)(local_90 + 10) = uVar4;
    *(undefined8 *)(local_90 + 8) = uVar3;
    *(undefined8 *)local_90 = uVar7;
    local_90[0x1a] = '\0';
                    /* try { // try from 0057b1dc to 0057b1e7 has its CatchHandler @ 0057b3a4 */
    FUN_0057a940(&local_58,&local_a0);
    if ((local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
LAB_0057b200:
    local_68 = PTR_LAB_04374a10;
                    /* try { // try from 0057b20c to 0057b227 has its CatchHandler @ 0057b3d4 */
    local_70 = param_4;
    FUN_002e6390(&local_a0,"Content-Length: %lu\r\n",0x15,&local_70,1);
                    /* try { // try from 0057b228 to 0057b233 has its CatchHandler @ 0057b3c4 */
    FUN_0057a940(&local_58,&local_a0);
    if ((local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
  }
  uStack_98 = 0;
  local_90 = (char *)0x0;
  local_a0 = 0xa0d04;
                    /* try { // try from 0057b268 to 0057b273 has its CatchHandler @ 0057b408 */
  FUN_0057a940(&local_58,&local_a0);
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
                    /* try { // try from 0057b290 to 0057b2a3 has its CatchHandler @ 0057b3f8 */
  FUN_002e5790(&local_70,local_58,local_50,&DAT_03996322,0);
  if (param_3 != 0) {
    if ((long)param_4 < 0) {
                    /* try { // try from 0057b384 to 0057b3a3 has its CatchHandler @ 0057b3b4 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
                    /* try { // try from 0057b2b0 to 0057b2bb has its CatchHandler @ 0057b3b4 */
    local_a0 = param_3;
    uStack_98 = param_4;
    FUN_002ed430(&local_70,&local_a0);
  }
  puVar1 = (undefined *)(local_70 >> 1 & 0x7f);
  uVar11 = (ulong)&local_70 | 1;
  if ((local_70 & 1) != 0) {
    puVar1 = local_68;
    uVar11 = local_60;
  }
                    /* try { // try from 0057b2dc to 0057b2e3 has its CatchHandler @ 0057b3e4 */
  FUN_002f2f40(param_1,uVar11,puVar1);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  pbVar8 = local_58;
  puVar1 = PTR_LAB_04373088;
  if (local_58 != (byte *)0x0) {
    if (local_50 != local_58) {
      bVar2 = local_50[-0x18];
      pbVar9 = local_50 + -0x18;
      pbVar6 = local_50;
      while( true ) {
        pbVar5 = pbVar9;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar6 + -8));
        }
        if (pbVar8 == pbVar5) break;
        bVar2 = pbVar5[-0x18];
        pbVar9 = pbVar5 + -0x18;
        pbVar6 = pbVar5;
      }
    }
    local_50 = pbVar8;
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return;
}


