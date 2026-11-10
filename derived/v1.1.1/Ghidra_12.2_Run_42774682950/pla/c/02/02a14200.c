/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14200; name: FUN_02a14200
 */


undefined8 FUN_02a14200(long param_1,byte param_2,ulong *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  if (*(byte *)(lVar2 + 0x11) == param_2) {
    return 0;
  }
  uVar3 = *param_3;
  if (*(int *)(lVar2 + 0x1c8) != 0) {
    *(undefined8 *)(lVar2 + 0x58) = 0xf8;
    *(undefined4 *)(lVar2 + 0x88) = 0;
    *(undefined4 *)(lVar2 + 0x1a0) = 0;
    *(undefined4 *)(lVar2 + 0x1c8) = 0;
    *(undefined8 *)(lVar2 + 0x160) = 0x1f0000001f;
    *(undefined8 *)(lVar2 + 0x150) = 0x1f0000001f;
    *(undefined8 *)(lVar2 + 0x158) = 0x1f0000001f;
  }
  if (param_2 != 0) {
    *(undefined4 *)(lVar2 + 0x1c8) = 1;
    *(ushort *)(lVar2 + 0x1e0) = (ushort)param_2;
    uVar1 = (uint)uVar3 & 7;
    *(ulong *)(lVar2 + 0x58) = uVar3;
    *(undefined4 *)(lVar2 + 0x88) = 0;
    *(undefined4 *)(lVar2 + 0x1a0) = 0;
    *(undefined8 *)(lVar2 + 0x160) = 0x1f0000001f;
    *(undefined8 *)(lVar2 + 0x150) = 0x1f0000001f;
    *(undefined8 *)(lVar2 + 0x158) = 0x1f0000001f;
    if (uVar1 == 3) {
      lVar4 = 8;
    }
    else {
      if (uVar1 != 4) goto LAB_02a142b4;
      lVar4 = 0xe;
    }
    uVar1 = (uint)(uVar3 >> lVar4) & 0x3f;
    if (uVar1 != 0x1f) {
      *(uint *)(lVar2 + 0x150) = uVar1;
      *(undefined4 *)(lVar2 + 0x1a0) = 1;
    }
  }
LAB_02a142b4:
  *(byte *)(lVar2 + 0x11) = param_2;
  return 1;
}


