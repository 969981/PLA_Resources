/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f9a3c; name: FUN_003f9a3c
 */


void FUN_003f9a3c(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  if (*(byte **)(param_2 + 0x18) != pbVar1) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    return;
  }
  if ((*param_1 & 1) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((*param_1 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x10));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)param_1 = uVar3;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((*param_1 & 1) == 0) {
    *(byte **)(param_1 + 0x18) = param_1 + 1;
    *(ulong *)(param_1 + 0x20) = (ulong)(*param_1 >> 1);
    bVar2 = *param_2;
  }
  else {
    if (*(long *)(param_1 + 8) < 0) {
                    /* try { // try from 003f9b30 to 003f9b4f has its CatchHandler @ 003f9b74 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 8);
    bVar2 = *param_2;
  }
  if ((bVar2 & 1) == 0) {
    *(byte **)(param_2 + 0x18) = param_2 + 1;
    *(ulong *)(param_2 + 0x20) = (ulong)(bVar2 >> 1);
    return;
  }
  if (*(long *)(param_2 + 8) < 0) {
                    /* try { // try from 003f9b50 to 003f9b6f has its CatchHandler @ 003f9b70 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 8);
  return;
}


