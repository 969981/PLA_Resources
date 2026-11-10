/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fc8b8; name: FUN_001fc8b8
 */


undefined8 FUN_001fc8b8(long param_1)

{
  if (param_1 != 0) {
    FUN_001e6fb8();
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_001e6dbc(*(long *)(param_1 + 0xd8),param_1);
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_001e8dd0();
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    FUN_001e381c(param_1 + 0x12d8,0);
    *(undefined4 *)(param_1 + 0x16f0) = 0;
    if ((*(byte *)(param_1 + 0x15a5) >> 2 & 1) != 0) {
      FUN_002044d4(*(undefined8 *)(param_1 + 0x14f0));
    }
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    FUN_00203d70(param_1);
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1148));
    *(undefined8 *)(param_1 + 0x1148) = 0;
    FUN_002044d4(*(undefined8 *)(param_1 + 0x11b8));
    *(undefined8 *)(param_1 + 0x11b8) = 0;
    FUN_00203ed8(param_1);
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if ((*(byte *)(param_1 + 0xf68) >> 1 & 1) != 0) {
      FUN_002044d4(*(undefined8 *)(param_1 + 0xf50));
      *(undefined8 *)(param_1 + 0xf50) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0xf50) = 0;
    FUN_001fca84(param_1);
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1130));
    *(undefined8 *)(param_1 + 0x1130) = 0;
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1120));
    *(undefined8 *)(param_1 + 0x1120) = 0;
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1138));
    *(undefined8 *)(param_1 + 0x1138) = 0;
    FUN_001dd8a0(param_1,1);
    FUN_001e33c4(param_1);
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1638));
    *(undefined8 *)(param_1 + 0x1638) = 0;
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1640));
    *(undefined8 *)(param_1 + 0x1640) = 0;
    thunk_FUN_002044d4(*(undefined8 *)(param_1 + 0x1288));
    FUN_001f0c04(param_1);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001f43b0(param_1,1,2);
      *(int *)(*(long *)(param_1 + 0xe8) + 4) = *(int *)(*(long *)(param_1 + 0xe8) + 4) + -1;
      FUN_001f43f8(param_1,1);
    }
    FUN_002043b0(param_1 + 0x15a8);
    FUN_001fc82c(param_1);
    FUN_002044d4(param_1);
  }
  return 0;
}


