/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f9b78; name: FUN_003f9b78
 */


void FUN_003f9b78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  ulong local_190;
  int local_188;
  ulong local_180;
  ulong uStack_178;
  long local_170;
  undefined1 auStack_168 [8];
  ulong local_160 [32];
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 003f9ba4 to 003f9bb3 has its CatchHandler @ 003f9cf4 */
  FUN_003fa020(&local_190,0,param_3);
  do {
    if (local_188 == 2) {
      return;
    }
    puVar6 = local_160 + 1;
    lVar3 = 1;
    while( true ) {
      lVar7 = lVar3;
      puVar6[-1] = local_180;
      *puVar6 = uStack_178;
      if (local_188 == 1) break;
      lVar3 = *(long *)(local_170 + 0x18);
      uVar4 = *(ulong *)(local_170 + 0x20);
                    /* try { // try from 003f9c20 to 003f9c2f has its CatchHandler @ 003f9d14 */
      auVar8 = FUN_004fa098(auStack_168,lVar3,uVar4,local_190);
      if (lVar3 + uVar4 == auVar8._0_8_) {
        local_188 = 1;
      }
      if (uVar4 < local_190) {
                    /* try { // try from 003f9cb8 to 003f9ce3 has its CatchHandler @ 003f9ce4 */
        FUN_002ee770("absl::string_view::substr");
LAB_003f9cc4:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      uVar1 = lVar3 + local_190;
      uVar5 = auVar8._0_8_ - uVar1;
      uVar2 = uVar4 - local_190;
      if (uVar5 <= uVar4 - local_190) {
        uVar2 = uVar5;
      }
      if ((long)uVar2 < 0) goto LAB_003f9cc4;
      local_190 = local_190 + auVar8._8_8_ + uVar2;
      local_180 = uVar1;
      uStack_178 = uVar2;
      if ((lVar7 == 0x10) || (puVar6 = puVar6 + 2, lVar3 = lVar7 + 1, local_188 == 2))
      goto LAB_003f9bdc;
    }
    local_188 = 2;
LAB_003f9bdc:
                    /* try { // try from 003f9be4 to 003f9bef has its CatchHandler @ 003f9d04 */
    FUN_003f9d38(param_1,param_1[1],local_160,local_160 + lVar7 * 2);
  } while( true );
}


