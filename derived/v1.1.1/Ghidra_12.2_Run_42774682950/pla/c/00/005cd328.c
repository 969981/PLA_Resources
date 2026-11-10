/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005cd328; name: FUN_005cd328
 */


undefined1  [16] FUN_005cd328(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*(long *)(param_1 + 0x68) == 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      auVar4[8] = *(byte *)(param_1 + 0x38) >> 1;
      auVar4._0_8_ = param_1 + 0x39;
      auVar4._9_7_ = 0;
      return auVar4;
    }
    auVar7._8_8_ = *(long *)(param_1 + 0x40);
    if (auVar7._8_8_ < 0) {
                    /* try { // try from 005cd3fc to 005cd41b has its CatchHandler @ 005cd440 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    auVar7._0_8_ = *(undefined8 *)(param_1 + 0x48);
    return auVar7;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  bVar1 = *(byte *)(lVar2 + 0x30);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
LAB_005cd384:
      if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
        auVar5[8] = *(byte *)(lVar2 + 0x18) >> 1;
        auVar5._0_8_ = lVar2 + 0x19;
        auVar5._9_7_ = 0;
        return auVar5;
      }
      auVar8._8_8_ = *(long *)(lVar2 + 0x20);
      if (auVar8._8_8_ < 0) {
                    /* try { // try from 005cd41c to 005cd43b has its CatchHandler @ 005cd43c */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      auVar8._0_8_ = *(undefined8 *)(lVar2 + 0x28);
      return auVar8;
    }
  }
  else if (*(long *)(lVar2 + 0x38) == 0) goto LAB_005cd384;
  if ((bVar1 & 1) == 0) {
    auVar3[8] = bVar1 >> 1;
    auVar3._0_8_ = lVar2 + 0x31;
    auVar3._9_7_ = 0;
    return auVar3;
  }
  auVar6._8_8_ = *(long *)(lVar2 + 0x38);
  if (auVar6._8_8_ < 0) {
                    /* try { // try from 005cd3dc to 005cd3fb has its CatchHandler @ 005cd444 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  auVar6._0_8_ = *(undefined8 *)(lVar2 + 0x40);
  return auVar6;
}


