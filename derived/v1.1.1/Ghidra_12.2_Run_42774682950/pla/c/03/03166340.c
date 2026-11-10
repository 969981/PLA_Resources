/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03166340; name: FUN_03166340
 */


void FUN_03166340(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_2 + 8);
  uVar3 = (long)puVar6 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar3, puVar6 != (undefined8 *)0x0)) {
    *puVar6 = "YtCalculateClearances";
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 == 0) {
LAB_03166388:
    uVar1 = *(uint *)(param_1 + 100);
    if (uVar1 == 0) goto LAB_03166390;
LAB_03166568:
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 == (undefined8 *)0x0)) goto LAB_03166390;
    *puVar6 = "MiincidentMcpHits";
    *(float *)(puVar6 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 0x68);
    if (uVar1 != 0) goto LAB_031665a0;
LAB_03166398:
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 == (undefined8 *)0x0)) goto LAB_03166388;
    *puVar6 = "MisimpleTransitiveHits";
    *(float *)(puVar6 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 100);
    if (uVar1 != 0) goto LAB_03166568;
LAB_03166390:
    uVar1 = *(uint *)(param_1 + 0x68);
    if (uVar1 == 0) goto LAB_03166398;
LAB_031665a0:
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 == (undefined8 *)0x0)) goto LAB_03166398;
    *puVar6 = "MicomplexTransitiveHits";
    *(float *)(puVar6 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  if (uVar1 != 0) {
    puVar6 = *(undefined8 **)(param_2 + 8);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    puVar2 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar4) {
      *(undefined8 **)(param_2 + 8) = puVar2;
      if (puVar6 == (undefined8 *)0x0) goto LAB_031663b8;
      *puVar6 = "MifullCalculations";
      *(float *)(puVar6 + 1) = (float)uVar1;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
LAB_031663b8:
  puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0xf) & 0xfffffffffffffff8);
  if (puVar6 <= puVar4) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar2 = "YtPartitionBoundaryEdges";
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0x1f) & 0xfffffffffffffff8);
  if (puVar6 <= puVar4) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x28);
      *puVar2 = &DAT_03965d10;
      puVar2[1] = uVar5;
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0xf) & 0xfffffffffffffff8);
  if (puVar6 <= puVar4) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar2 = "YtPairClearance";
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0x1f) & 0xfffffffffffffff8);
  if (puVar6 <= puVar4) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x40);
      *puVar2 = &DAT_03965d10;
      puVar2[1] = uVar5;
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0xf) & 0xfffffffffffffff8);
  if (puVar6 <= puVar4) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar2 = "YtOpenClearance";
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0x1f) & 0xfffffffffffffff8);
  if (puVar6 <= puVar4) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x58);
      *puVar2 = &DAT_03965d10;
      puVar2[1] = uVar5;
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0x1f) & 0xfffffffffffffff8);
  if ((puVar6 <= puVar4) && (*(undefined8 **)(param_2 + 8) = puVar6, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar2 = &DAT_03965d10;
    puVar2[1] = uVar5;
  }
  return;
}


