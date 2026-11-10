/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00548b50; name: FUN_00548b50
 */


void FUN_00548b50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                 undefined8 param_5)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *local_60;
  size_t local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    puVar2 = &DAT_03996322;
    uVar3 = 0;
    do {
                    /* try { // try from 00548b90 to 00548bbb has its CatchHandler @ 00548c14 */
      FUN_002e4094(param_1,puVar2,uVar3);
      local_60 = (char *)*param_2;
      sVar1 = 0;
      if ((local_60 != (char *)0x0) && (sVar1 = strlen(local_60), (long)sVar1 < 0)) {
                    /* try { // try from 00548be4 to 00548c03 has its CatchHandler @ 00548c04 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      local_58 = sVar1;
      FUN_002ed430(param_1,&local_60);
      param_2 = param_2 + 1;
      puVar2 = param_4;
      uVar3 = param_5;
    } while (param_3 != param_2);
  }
  return;
}


