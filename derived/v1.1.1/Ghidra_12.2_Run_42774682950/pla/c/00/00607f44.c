/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607f44; name: FUN_00607f44
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00607f44(undefined8 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  time_t tVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_498 [8];
  ulong local_490;
  ulong local_488;
  byte local_98 [16];
  undefined8 local_88;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_78;
  ulong local_70;
  byte local_68 [16];
  undefined8 local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[4] = 0;
  puVar1 = PTR_DAT_043752a8;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*puVar1 != '\0') {
                    /* try { // try from 00607f98 to 00607fe7 has its CatchHandler @ 00608528 */
    uVar3 = FUN_00607720();
    if (((DAT_0439f310 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0439f310), iVar2 != 0)) {
                    /* try { // try from 00608348 to 0060834b has its CatchHandler @ 00608418 */
      DAT_0439f308 = FUN_00607720();
      __cxa_guard_release(&DAT_0439f310);
    }
    lVar4 = FUN_00607750(uVar3,DAT_0439f308);
    if (((DAT_0439f318 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0439f318), iVar2 != 0)) {
                    /* try { // try from 00608374 to 0060837b has its CatchHandler @ 006083fc */
      tVar9 = time((time_t *)0x0);
      DAT_0439f300 = (undefined4)tVar9;
      __cxa_guard_release(&DAT_0439f318);
    }
    FUN_002e4094(param_1,&DAT_038aa492,1);
                    /* try { // try from 00608004 to 0060800f has its CatchHandler @ 00608488 */
    FUN_00609900(local_68,lVar4 / 1000);
                    /* try { // try from 00608010 to 00608023 has its CatchHandler @ 00608478 */
    FUN_006095c0(local_498,0x30,3,local_68);
    if ((local_498[0] & 1) == 0) {
      uVar10 = (ulong)local_498 | 1;
      uVar11 = (ulong)(local_498[0] >> 1);
    }
    else {
      if ((long)local_490 < 0) {
                    /* try { // try from 006083b4 to 006083d3 has its CatchHandler @ 006083f8 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      uVar10 = local_488;
      uVar11 = local_490;
    }
                    /* try { // try from 00608048 to 00608063 has its CatchHandler @ 006084e8 */
    FUN_002e4094(param_1,uVar10,uVar11);
    FUN_002e4094(param_1,&DAT_039b07fe,1);
                    /* try { // try from 0060806c to 00608073 has its CatchHandler @ 00608468 */
    FUN_00609900(local_98,lVar4 % 1000);
                    /* try { // try from 00608074 to 00608087 has its CatchHandler @ 00608458 */
    FUN_006095c0(&local_80,0x30,3,local_98);
    if ((local_80 & 1) == 0) {
      local_78 = (ulong)(local_80 >> 1);
      uVar10 = (ulong)&local_80 | 1;
    }
    else {
      if ((long)local_78 < 0) {
                    /* try { // try from 006083d4 to 006083f3 has its CatchHandler @ 006083f4 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      uVar10 = local_70;
    }
                    /* try { // try from 006080ac to 006080c7 has its CatchHandler @ 0060848c */
    FUN_002e4094(param_1,uVar10,local_78);
    FUN_002e4094(param_1,&DAT_038be0e9,2);
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if ((local_98[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_88);
    }
    if ((local_498[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_488);
    }
    if ((local_68[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
  }
  if (*PTR_DAT_043752b0 != '\0') {
                    /* try { // try from 00608108 to 00608133 has its CatchHandler @ 0060852c */
    uVar3 = FUN_00609040();
    FUN_002e4094(param_1,&DAT_038aa492,1);
    FUN_006099e0(local_498,uVar3);
    uVar10 = (ulong)(local_498[0] >> 1);
    uVar11 = (ulong)local_498 | 1;
    if ((local_498[0] & 1) != 0) {
      uVar10 = local_490;
      uVar11 = local_488;
    }
                    /* try { // try from 00608150 to 00608157 has its CatchHandler @ 00608444 */
    FUN_002e4094(param_1,uVar11,uVar10);
    if ((local_498[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_488);
    }
                    /* try { // try from 00608170 to 00608183 has its CatchHandler @ 0060852c */
    FUN_002e4094(param_1,&DAT_038be0e9,2);
  }
  if (param_2 != (char *)0x0) {
                    /* try { // try from 00608188 to 0060820b has its CatchHandler @ 00608534 */
    FUN_002e4094(param_1,&DAT_03979c4d,1);
    pcVar5 = strrchr(param_2,0x2f);
    pcVar6 = strrchr(param_2,0x5c);
    pcVar8 = pcVar5;
    if (pcVar5 <= pcVar6) {
      pcVar8 = pcVar6;
    }
    if (pcVar5 != (char *)0x0 || pcVar6 != (char *)0x0) {
      param_2 = pcVar8 + 1;
    }
    sVar7 = strlen(param_2);
    if ((long)sVar7 < 0) {
                    /* try { // try from 00608394 to 006083b3 has its CatchHandler @ 00608534 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    FUN_002e4094(param_1,param_2,sVar7);
    FUN_002e4094(param_1,&DAT_039b07fe,1);
    FUN_00609740(local_498,param_3);
    uVar10 = (ulong)(local_498[0] >> 1);
    uVar11 = (ulong)local_498 | 1;
    if ((local_498[0] & 1) != 0) {
      uVar10 = local_490;
      uVar11 = local_488;
    }
                    /* try { // try from 00608228 to 0060822f has its CatchHandler @ 00608434 */
    FUN_002e4094(param_1,uVar11,uVar10);
    if ((local_498[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_488);
    }
                    /* try { // try from 00608248 to 0060825b has its CatchHandler @ 00608534 */
    FUN_002e4094(param_1,&DAT_03938f28,3);
  }
  if (param_5 != 0) {
                    /* try { // try from 00608260 to 006082cf has its CatchHandler @ 00608530 */
    FUN_00609050(&local_80,local_498,0x400);
    FUN_0060930c(&local_80,"[0x%08X]",param_6);
    if (param_5 == 1) {
      uVar3 = FUN_0060916c(&local_80,&DAT_038bdc00);
      pcVar8 = strerror(param_6);
      FUN_0060916c(uVar3,pcVar8);
    }
    sVar7 = strlen((char *)CONCAT71(uStack_7f,local_80));
    FUN_00291910(param_1 + 4,(char *)CONCAT71(uStack_7f,local_80),sVar7);
  }
  return;
}


