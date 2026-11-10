/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03166790; name: FUN_03166790
 */


void FUN_03166790(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  FUN_03166198(param_1 + 0x18);
  if (param_2 != 0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    uVar4 = (ulong)((long)puVar1 + 0xf) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar1 = "YtFindThresholdedInterpolants";
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0x1f) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000018;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x60);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x68);
        *puVar1 = &DAT_03965d10;
        puVar1[1] = uVar3;
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0xf) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar1 = "YtPartitionBoundaryEdges";
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0x1f) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000018;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x78);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x80);
        *puVar1 = &DAT_03965d10;
        puVar1[1] = uVar3;
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0xf) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar1 = "YtPairClearance";
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0x1f) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000018;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x90);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x98);
        *puVar1 = &DAT_03965d10;
        puVar1[1] = uVar3;
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0xf) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar1 = "YtOpenClearance";
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0x1f) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000018;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0xa8);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0xb0);
        *puVar1 = &DAT_03965d10;
        puVar1[1] = uVar3;
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar4 <= uVar2) && (*(ulong *)(param_2 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
      *puVar1 = &DAT_03965d10;
      puVar1[1] = uVar3;
    }
  }
  return;
}


