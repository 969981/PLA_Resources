/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294177c; name: FUN_0294177c
 */


undefined8 FUN_0294177c(long param_1,byte param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x11) == param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0xf8;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x150) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x158) = 0x1f0000001f;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 1;
    *(ushort *)(param_1 + 0x1e0) = (ushort)param_2;
    uVar1 = (uint)param_3 & 7;
    *(ulong *)(param_1 + 0x58) = param_3;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x150) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x158) = 0x1f0000001f;
    if (uVar1 == 3) {
      lVar2 = 8;
    }
    else {
      if (uVar1 != 4) goto LAB_02941824;
      lVar2 = 0xe;
    }
    uVar1 = (uint)(param_3 >> lVar2) & 0x3f;
    if (uVar1 != 0x1f) {
      *(uint *)(param_1 + 0x150) = uVar1;
      *(undefined4 *)(param_1 + 0x1a0) = 1;
    }
  }
LAB_02941824:
  *(byte *)(param_1 + 0x11) = param_2;
  return 1;
}


