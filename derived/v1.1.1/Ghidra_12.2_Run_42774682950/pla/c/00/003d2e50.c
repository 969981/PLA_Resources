/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d2e50; name: FUN_003d2e50
 */


void FUN_003d2e50(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  char cVar5;
  undefined2 uVar6;
  char cVar7;
  undefined2 uVar8;
  char cVar9;
  char cVar10;
  byte *pbVar11;
  char cVar12;
  undefined2 uVar13;
  char cVar14;
  undefined2 uVar15;
  char cVar16;
  char cVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  char *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  byte local_90;
  char acStack_8f [5];
  undefined2 uStack_8a;
  char cStack_88;
  undefined2 uStack_87;
  char cStack_85;
  undefined2 uStack_84;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  undefined2 uStack_7f;
  undefined5 uStack_7d;
  undefined *puStack_78;
  byte local_60 [16];
  undefined8 local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  
  cVar17 = cStack_81;
  cVar16 = cStack_82;
  uVar15 = uStack_84;
  cVar14 = cStack_85;
  uVar13 = uStack_87;
  cVar12 = cStack_88;
  puVar4 = PTR_LAB_043737e8;
  local_38 = 0;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
  lVar21 = *(long *)(param_2 + 8);
  cStack_88 = (char)PTR_LAB_043737e8;
  cVar5 = cStack_88;
  cStack_85 = (char)((ulong)PTR_LAB_043737e8 >> 0x18);
  cVar7 = cStack_85;
  cStack_82 = (char)((ulong)PTR_LAB_043737e8 >> 0x30);
  cVar9 = cStack_82;
  cStack_81 = (char)((ulong)PTR_LAB_043737e8 >> 0x38);
  cVar10 = cStack_81;
  uStack_87 = (undefined2)((ulong)PTR_LAB_043737e8 >> 8);
  uVar6 = uStack_87;
  uStack_84 = (undefined2)((ulong)PTR_LAB_043737e8 >> 0x20);
  uVar8 = uStack_84;
  if (lVar21 != 0) {
                    /* try { // try from 003d2e80 to 003d2eaf has its CatchHandler @ 003d32dc */
    uVar19 = FUN_003d3430(*(undefined4 *)(param_2 + 0x10));
    local_90 = (byte)lVar21;
    acStack_8f = SUB85((ulong)lVar21 >> 8,0);
    uStack_8a = (undefined2)((ulong)lVar21 >> 0x30);
    cStack_80 = (char)uVar19;
    uStack_7f = (undefined2)((ulong)uVar19 >> 8);
    uStack_7d = (undefined5)((ulong)uVar19 >> 0x18);
    puStack_78 = PTR_LAB_043737d8;
    FUN_002e6390(&local_c0," START_CONNECTIVITY_WATCH:watcher=%p:from=%s",0x2c,&local_90,2);
                    /* try { // try from 003d2eb0 to 003d2ebb has its CatchHandler @ 003d3290 */
    FUN_003d2904(&local_48,&local_c0);
    cVar12 = cStack_88;
    uVar13 = uStack_87;
    cVar14 = cStack_85;
    uVar15 = uStack_84;
    cVar16 = cStack_82;
    cVar17 = cStack_81;
    if (((ulong)local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      cVar12 = cStack_88;
      uVar13 = uStack_87;
      cVar14 = cStack_85;
      uVar15 = uStack_84;
      cVar16 = cStack_82;
      cVar17 = cStack_81;
    }
  }
  cStack_81 = cVar17;
  cStack_82 = cVar16;
  uStack_84 = uVar15;
  cStack_85 = cVar14;
  uStack_87 = uVar13;
  cStack_88 = cVar12;
  if (*(char **)(param_2 + 0x18) != (char *)0x0) {
    local_b8 = puVar4;
                    /* try { // try from 003d2ee0 to 003d2efb has its CatchHandler @ 003d32a4 */
    local_c0 = *(char **)(param_2 + 0x18);
    FUN_002e6390(&local_90," STOP_CONNECTIVITY_WATCH:watcher=%p",0x23,&local_c0,1);
                    /* try { // try from 003d2efc to 003d2f07 has its CatchHandler @ 003d3280 */
    FUN_003d2904(&local_48,&local_90);
    if ((local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_7d,CONCAT21(uStack_7f,cStack_80)));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    local_90 = 0x84;
    acStack_8f[0] = -0x5d;
    acStack_8f[1] = -0x65;
    acStack_8f[2] = '\x03';
    acStack_8f[3] = '\0';
    acStack_8f[4] = '\0';
    uStack_8a = 0;
    cStack_88 = '\f';
    uStack_87 = 0;
    cStack_85 = '\0';
    uStack_84 = 0;
    cStack_82 = '\0';
    cStack_81 = '\0';
                    /* try { // try from 003d2f38 to 003d2f5f has its CatchHandler @ 003d32d8 */
    local_c0 = (char *)FUN_002f1480();
    puVar20 = (undefined *)0x0;
    if ((local_c0 != (char *)0x0) && (puVar20 = (undefined *)strlen(local_c0), (long)puVar20 < 0)) {
                    /* try { // try from 003d31e8 to 003d3207 has its CatchHandler @ 003d32d8 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    local_b8 = puVar20;
    FUN_002eced0(local_60,&local_90,&local_c0);
                    /* try { // try from 003d2f60 to 003d2f6b has its CatchHandler @ 003d326c */
    FUN_003d2904(&local_48,local_60);
    if ((local_60[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    local_90 = 0x45;
    acStack_8f[0] = '|';
    acStack_8f[1] = -0x6a;
    acStack_8f[2] = '\x03';
    acStack_8f[3] = '\0';
    acStack_8f[4] = '\0';
    uStack_8a = 0;
    cStack_88 = '\x0f';
    uStack_87 = 0;
    cStack_85 = '\0';
    uStack_84 = 0;
    cStack_82 = '\0';
    cStack_81 = '\0';
                    /* try { // try from 003d2f9c to 003d2fc3 has its CatchHandler @ 003d32d4 */
    local_c0 = (char *)FUN_002f1480();
    puVar20 = (undefined *)0x0;
    if ((local_c0 != (char *)0x0) && (puVar20 = (undefined *)strlen(local_c0), (long)puVar20 < 0)) {
                    /* try { // try from 003d3208 to 003d3227 has its CatchHandler @ 003d32d4 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    local_b8 = puVar20;
    FUN_002eced0(local_60,&local_90,&local_c0);
                    /* try { // try from 003d2fc4 to 003d2fcf has its CatchHandler @ 003d3258 */
    FUN_003d2904(&local_48,local_60);
    if ((local_60[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    uVar19 = *(undefined8 *)(param_2 + 0x38);
    local_90 = (byte)uVar19;
    acStack_8f = SUB85((ulong)uVar19 >> 8,0);
    uStack_8a = (undefined2)((ulong)uVar19 >> 0x30);
    uVar19 = *(undefined8 *)(param_2 + 0x40);
    cStack_80 = (char)uVar19;
    uStack_7f = (undefined2)((ulong)uVar19 >> 8);
    uStack_7d = (undefined5)((ulong)uVar19 >> 0x18);
    puStack_78 = puVar4;
                    /* try { // try from 003d3000 to 003d301b has its CatchHandler @ 003d3268 */
    cStack_88 = cVar5;
    uStack_87 = uVar6;
    cStack_85 = cVar7;
    uStack_84 = uVar8;
    cStack_82 = cVar9;
    cStack_81 = cVar10;
    FUN_002e6390(&local_c0," SET_ACCEPT_STREAM:%p(%p,...)",0x1d,&local_90,2);
                    /* try { // try from 003d301c to 003d3027 has its CatchHandler @ 003d3248 */
    FUN_003d2904(&local_48,&local_c0);
    if (((ulong)local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    cStack_81 = '\0';
    local_90 = 0x1a;
    acStack_8f[0] = s_BIND_POLLSET_03979dd9[0];
    acStack_8f[1] = s_BIND_POLLSET_03979dd9[1];
    acStack_8f[2] = s_BIND_POLLSET_03979dd9[2];
    acStack_8f[3] = s_BIND_POLLSET_03979dd9[3];
    acStack_8f[4] = s_BIND_POLLSET_03979dd9[4];
    cStack_80 = '\0';
    uStack_7f = 0;
    uStack_7d = 0;
    cStack_82 = '\0';
    uStack_8a = s_BIND_POLLSET_03979dd9._5_2_;
    cStack_88 = s_BIND_POLLSET_03979dd9[7];
    uStack_87 = s_BIND_POLLSET_03979dd9._8_2_;
    cStack_85 = s_BIND_POLLSET_03979dd9[10];
    uStack_84 = s_BIND_POLLSET_03979dd9._11_2_;
                    /* try { // try from 003d3074 to 003d307f has its CatchHandler @ 003d3238 */
    FUN_003d2904(&local_48,&local_90);
    if ((local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_7d,CONCAT21(uStack_7f,cStack_80)));
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    uStack_7d = 0;
    local_90 = 0x22;
    uStack_7f = 0x54;
    uStack_87 = s_BIND_POLLSET_SET_038db085._8_2_;
    cStack_85 = s_BIND_POLLSET_SET_038db085[10];
    uStack_84 = s_BIND_POLLSET_SET_038db085._11_2_;
    cStack_82 = s_BIND_POLLSET_SET_038db085[0xd];
    cStack_81 = s_BIND_POLLSET_SET_038db085[0xe];
    cStack_80 = s_BIND_POLLSET_SET_038db085[0xf];
    acStack_8f = s_BIND_POLLSET_SET_038db085._0_5_;
    uStack_8a = s_BIND_POLLSET_SET_038db085._5_2_;
    cStack_88 = s_BIND_POLLSET_SET_038db085[7];
                    /* try { // try from 003d30c8 to 003d30d3 has its CatchHandler @ 003d3228 */
    FUN_003d2904(&local_48,&local_90);
    if ((local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_7d,CONCAT21(uStack_7f,cStack_80)));
    }
  }
  if ((*(long *)(param_2 + 0x58) != 0) || (*(long *)(param_2 + 0x60) != 0)) {
    uStack_84 = 0;
    cStack_82 = '\0';
    cStack_81 = '\0';
    local_90 = 0x14;
    uStack_87 = 0x474e;
    cStack_80 = '\0';
    uStack_7f = 0;
    uStack_7d = 0;
    cStack_85 = '\0';
    acStack_8f = s_SEND_PING_0397135e._0_5_;
    uStack_8a = s_SEND_PING_0397135e._5_2_;
    cStack_88 = s_SEND_PING_0397135e[7];
                    /* try { // try from 003d3128 to 003d3133 has its CatchHandler @ 003d32a8 */
    FUN_003d2904(&local_48,&local_90);
    if ((local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_7d,CONCAT21(uStack_7f,cStack_80)));
    }
  }
                    /* try { // try from 003d3150 to 003d3163 has its CatchHandler @ 003d32d0 */
  FUN_002e5790(param_1,local_48,local_40,&DAT_03996322,0);
  pbVar11 = local_48;
  puVar4 = PTR_LAB_04373088;
  if (local_48 != (byte *)0x0) {
    if (local_40 != local_48) {
      bVar1 = local_40[-0x18];
      pbVar18 = local_40 + -0x18;
      pbVar3 = local_40;
      while( true ) {
        pbVar2 = pbVar18;
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar3 + -8));
        }
        if (pbVar11 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar18 = pbVar2 + -0x18;
        pbVar3 = pbVar2;
      }
    }
    local_40 = pbVar11;
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


