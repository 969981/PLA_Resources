/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005cd560; name: FUN_005cd560
 */


void FUN_005cd560(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  
  if (*(long *)(param_2 + 0x68) == 0) {
    bVar2 = *(byte *)(param_2 + 0x38);
    if ((bVar2 & 1) == 0) {
      *param_1 = param_2 + 0x39;
      param_1[1] = (ulong)(bVar2 >> 1);
      param_1[2] = 0;
      param_1[3] = 0;
      return;
    }
    lVar3 = *(long *)(param_2 + 0x40);
    *param_1 = *(long *)(param_2 + 0x48);
    if (lVar3 < 0) {
                    /* try { // try from 005cd660 to 005cd67f has its CatchHandler @ 005cd680 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = lVar3;
    return;
  }
  lVar3 = *(long *)(param_2 + 0x58);
  bVar2 = *(byte *)(lVar3 + 0x18);
  if ((bVar2 & 1) == 0) {
    *param_1 = lVar3 + 0x19;
    param_1[1] = (ulong)(bVar2 >> 1);
    bVar2 = *(byte *)(lVar3 + 0x30);
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x20);
    *param_1 = *(long *)(lVar3 + 0x28);
    if (lVar1 < 0) {
                    /* try { // try from 005cd620 to 005cd63f has its CatchHandler @ 005cd688 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    param_1[1] = lVar1;
    bVar2 = *(byte *)(lVar3 + 0x30);
  }
  if ((bVar2 & 1) == 0) {
    param_1[2] = lVar3 + 0x31;
    param_1[3] = (ulong)(bVar2 >> 1);
    return;
  }
  lVar1 = *(long *)(lVar3 + 0x38);
  param_1[2] = *(long *)(lVar3 + 0x40);
  if (lVar1 < 0) {
                    /* try { // try from 005cd640 to 005cd65f has its CatchHandler @ 005cd684 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  param_1[3] = lVar1;
  return;
}


