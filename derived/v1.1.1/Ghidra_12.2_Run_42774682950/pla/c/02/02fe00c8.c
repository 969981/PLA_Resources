/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe00c8; name: FUN_02fe00c8
 */


void FUN_02fe00c8(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0xbf8000003f800000;
  *(undefined2 *)(param_1 + 4) = 0x101;
  *param_1 = 0x3c23d70a;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined **)(param_1 + 6) = &DAT_042d95d8;
  *(undefined8 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0x3fc0000000000002;
  param_1[0xe] = 0xc47a0000;
  param_1[0x12] = 0xfc;
  *(undefined2 *)(param_1 + 0x13) = 0x100;
  return;
}


