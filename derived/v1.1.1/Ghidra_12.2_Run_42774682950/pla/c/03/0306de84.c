/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306de84; name: FUN_0306de84
 */


void FUN_0306de84(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x10);
  uVar5 = (ulong)((long)puVar6 + 0xf) & 0xfffffffffffffff8;
  if (uVar5 <= uVar3) {
    *(ulong *)(param_2 + 8) = uVar5;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar6 = "YtCompositeVsComposite";
      puVar6 = *(undefined8 **)(param_2 + 8);
      uVar3 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar5 = (ulong)((long)puVar6 + 0xf) & 0xfffffffffffffff8;
  if (uVar5 <= uVar3) {
    *(ulong *)(param_2 + 8) = uVar5;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar6 = "YtCheckAndQueryAabb";
      puVar6 = *(undefined8 **)(param_2 + 8);
      uVar3 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar5 = (ulong)((long)puVar6 + 0xf) & 0xfffffffffffffff8;
  if ((uVar5 <= uVar3) && (*(ulong *)(param_2 + 8) = uVar5, puVar6 != (undefined8 *)0x0)) {
    *puVar6 = "YtQueryAabb";
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 == 0) {
LAB_0306df00:
    if (*(int *)(param_1 + 0x58) == 0) goto LAB_0306df08;
LAB_0306e0a8:
    puVar6 = *(undefined8 **)(param_2 + 8);
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    puVar4 = (undefined8 *)((ulong)((long)puVar6 + 0xf) & 0xfffffffffffffff8);
    if (puVar4 <= puVar2) {
      *(undefined8 **)(param_2 + 8) = puVar4;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar6 = "Ytsort";
        puVar6 = *(undefined8 **)(param_2 + 8);
        puVar2 = *(undefined8 **)(param_2 + 0x10);
      }
    }
    puVar4 = (undefined8 *)((ulong)((long)puVar6 + 0x1f) & 0xfffffffffffffff8);
    if (puVar2 < puVar4) goto LAB_0306df08;
    *(undefined8 **)(param_2 + 8) = puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0x58);
      *puVar6 = &DAT_03965d10;
      puVar6[1] = uVar7;
      goto LAB_0306df08;
    }
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 == (undefined8 *)0x0)) goto LAB_0306df00;
    *puVar6 = "MinumHits";
    *(float *)(puVar6 + 1) = (float)uVar1;
    if (*(int *)(param_1 + 0x58) != 0) goto LAB_0306e0a8;
LAB_0306df08:
    puVar4 = *(undefined8 **)(param_2 + 8);
    puVar2 = *(undefined8 **)(param_2 + 0x10);
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8);
  if (puVar6 <= puVar2) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x40);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar7;
      puVar4 = *(undefined8 **)(param_2 + 8);
      puVar2 = *(undefined8 **)(param_2 + 0x10);
    }
  }
  puVar6 = (undefined8 *)((ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8);
  if ((puVar6 <= puVar2) && (*(undefined8 **)(param_2 + 8) = puVar6, puVar4 != (undefined8 *)0x0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x28);
    *puVar4 = &DAT_03965d10;
    puVar4[1] = uVar7;
  }
  if (*(int *)(param_1 + 0x1f0) == 0) {
LAB_0306df58:
    puVar6 = *(undefined8 **)(param_2 + 8);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0xfU & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "YtReuseContactCache";
    }
    uVar1 = *(uint *)(param_1 + 0x1f8);
    if (uVar1 == 0) {
LAB_0306e138:
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
    else {
      puVar6 = *(undefined8 **)(param_2 + 8);
      puVar4 = *(undefined8 **)(param_2 + 0x10);
      puVar2 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff8);
      if (puVar4 < puVar2) goto LAB_0306e138;
      *(undefined8 **)(param_2 + 8) = puVar2;
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = "MicompositeNumCachesReused";
        *(float *)(puVar6 + 1) = (float)uVar1;
        goto LAB_0306e138;
      }
    }
    puVar6 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if (puVar4 < puVar6) goto LAB_0306df58;
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0x1e8);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x1f0);
      *puVar2 = &DAT_03965d10;
      puVar2[1] = uVar7;
      goto LAB_0306df58;
    }
  }
  puVar2 = (undefined8 *)((long)puVar6 + 0xfU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar4) && (*(undefined8 **)(param_2 + 8) = puVar2, puVar6 != (undefined8 *)0x0)) {
    *puVar6 = "YtCheckContactCache";
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if (uVar1 == 0) {
LAB_0306df88:
    uVar1 = *(uint *)(param_1 + 0x84);
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 == (undefined8 *)0x0)) goto LAB_0306df88;
    *puVar6 = "MimaxRotationExceeded";
    *(float *)(puVar6 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 0x84);
  }
  if (uVar1 != 0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    puVar6 = (undefined8 *)((long)puVar2 + 0x17U & 0xfffffffffffffff8);
    if (puVar6 <= puVar4) {
      *(undefined8 **)(param_2 + 8) = puVar6;
      if (puVar2 == (undefined8 *)0x0) goto LAB_0306df94;
      *puVar2 = "MimaxPositionExceeded";
      *(float *)(puVar2 + 1) = (float)uVar1;
    }
  }
  puVar6 = *(undefined8 **)(param_2 + 8);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
LAB_0306df94:
  puVar2 = (undefined8 *)((long)puVar6 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar4) && (*(undefined8 **)(param_2 + 8) = puVar2, puVar6 != (undefined8 *)0x0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0x78);
    *puVar6 = &DAT_03965d10;
    puVar6[1] = uVar7;
  }
  FUN_0306d510(param_1 + 0x88,param_2);
  puVar6 = *(undefined8 **)(param_2 + 8);
  uVar3 = (long)puVar6 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar3, puVar6 != (undefined8 *)0x0)) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar6 = &DAT_03965d10;
    puVar6[1] = uVar7;
  }
  return;
}


