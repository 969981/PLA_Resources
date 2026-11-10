/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02952ce8; name: FUN_02952ce8
 */


void FUN_02952ce8(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = (ulong)*(byte *)(param_1 + 0x493);
  pbVar1 = (byte *)(param_1 + uVar4 + 0x490);
  bVar3 = *(byte *)(param_1 + uVar4 + 0x490);
  uVar5 = (ulong)bVar3;
  if (bVar3 == 6) {
    lVar6 = param_1 + uVar4 * 0x48;
    *(undefined8 *)(lVar6 + 0x3b8) = *(undefined8 *)(lVar6 + 0x3c4);
    *(undefined4 *)(lVar6 + 0x3bf) = *(undefined4 *)(lVar6 + 0x3cb);
    *(undefined8 *)(lVar6 + 0x3c4) = *(undefined8 *)(lVar6 + 0x3d0);
    *(undefined4 *)(lVar6 + 0x3cb) = *(undefined4 *)(lVar6 + 0x3d7);
    *(undefined8 *)(lVar6 + 0x3d0) = *(undefined8 *)(lVar6 + 0x3dc);
    *(undefined4 *)(lVar6 + 0x3d7) = *(undefined4 *)(lVar6 + 0x3e3);
    *(undefined8 *)(lVar6 + 0x3dc) = *(undefined8 *)(lVar6 + 1000);
    *(undefined4 *)(lVar6 + 0x3e3) = *(undefined4 *)(lVar6 + 0x3ef);
    *(undefined8 *)(lVar6 + 1000) = *(undefined8 *)(lVar6 + 0x3f4);
    *(undefined4 *)(lVar6 + 0x3ef) = *(undefined4 *)(lVar6 + 0x3fb);
    uVar5 = 5;
  }
  lVar6 = param_1 + uVar4 * 0x48 + uVar5 * 0xc;
  uVar2 = *(undefined4 *)((long)param_2 + 7);
  *(undefined8 *)(lVar6 + 0x3b8) = *param_2;
  *(undefined4 *)(lVar6 + 0x3bf) = uVar2;
  bVar3 = *pbVar1;
  if (bVar3 < 6) {
    *pbVar1 = bVar3 + 1;
  }
  return;
}


