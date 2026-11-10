/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306d114; name: FUN_0306d114
 */


void FUN_0306d114(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_2 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(param_2 + 8);
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar4 = (ulong)((long)puVar7 + 0xf) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar7 = "YtDebris";
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0xf) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar7 = "YtGetClosestPoint";
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0x1f) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_1 + 0x28);
      *puVar7 = &DAT_03965d10;
      puVar7[1] = uVar6;
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0xf) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar7 = "YtCollideDebrisWithHits";
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0x1f) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_1 + 0x40);
      *puVar7 = &DAT_03965d10;
      puVar7[1] = uVar6;
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0xf) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar7 = "YtCollideDebrisWithHitsCollide";
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0x1f) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_1 + 0x58);
      *puVar7 = &DAT_03965d10;
      puVar7[1] = uVar6;
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0xf) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar7 = "YtCollideDebrisWithHitsCollideProject";
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0x1f) & 0xfffffffffffffff8;
  if (uVar4 <= uVar1) {
    *(ulong *)(param_2 + 8) = uVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_1 + 0x70);
      *puVar7 = &DAT_03965d10;
      puVar7[1] = uVar6;
      puVar7 = *(undefined8 **)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar4 = (ulong)((long)puVar7 + 0xf) & 0xfffffffffffffff8;
  if ((uVar4 <= uVar1) && (*(ulong *)(param_2 + 8) = uVar4, puVar7 != (undefined8 *)0x0)) {
    *puVar7 = "YtCheckContactCache";
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  if (uVar3 == 0) {
LAB_0306d1ec:
    uVar3 = *(uint *)(param_1 + 0x94);
    if (uVar3 == 0) goto LAB_0306d1f4;
LAB_0306d474:
    puVar5 = *(undefined8 **)(param_2 + 8);
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    puVar7 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 < puVar7) goto LAB_0306d1f4;
    *(undefined8 **)(param_2 + 8) = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = "MimaxPositionExceeded";
      *(float *)(puVar5 + 1) = (float)uVar3;
      goto LAB_0306d1f4;
    }
  }
  else {
    puVar7 = *(undefined8 **)(param_2 + 8);
    uVar1 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar1) ||
       (*(ulong *)(param_2 + 8) = uVar1, puVar7 == (undefined8 *)0x0)) goto LAB_0306d1ec;
    *puVar7 = "MimaxRotationExceeded";
    *(float *)(puVar7 + 1) = (float)uVar3;
    uVar3 = *(uint *)(param_1 + 0x94);
    if (uVar3 != 0) goto LAB_0306d474;
LAB_0306d1f4:
    puVar7 = *(undefined8 **)(param_2 + 8);
    puVar2 = *(undefined8 **)(param_2 + 0x10);
  }
  puVar5 = (undefined8 *)((long)puVar7 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar2) && (*(undefined8 **)(param_2 + 8) = puVar5, puVar7 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_1 + 0x88);
    *puVar7 = &DAT_03965d10;
    puVar7[1] = uVar6;
  }
  if (*(int *)(param_1 + 0xa8) == 0) goto LAB_0306d234;
  puVar7 = *(undefined8 **)(param_2 + 8);
  uVar1 = (long)puVar7 + 0xfU & 0xfffffffffffffff8;
  if ((uVar1 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar1, puVar7 != (undefined8 *)0x0)) {
    *puVar7 = "YtReuseContactCache";
  }
  uVar3 = *(uint *)(param_1 + 0xb0);
  if (uVar3 == 0) {
LAB_0306d400:
    puVar5 = *(undefined8 **)(param_2 + 8);
    puVar2 = *(undefined8 **)(param_2 + 0x10);
  }
  else {
    puVar7 = *(undefined8 **)(param_2 + 8);
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    puVar5 = (undefined8 *)((long)puVar7 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 < puVar5) goto LAB_0306d400;
    *(undefined8 **)(param_2 + 8) = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = "MicompositeNumCachesReused";
      *(float *)(puVar7 + 1) = (float)uVar3;
      goto LAB_0306d400;
    }
  }
  puVar7 = (undefined8 *)((long)puVar5 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar7 <= puVar2) && (*(undefined8 **)(param_2 + 8) = puVar7, puVar5 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_1 + 0xa8);
    *puVar5 = &DAT_03965d10;
    puVar5[1] = uVar6;
  }
LAB_0306d234:
  FUN_0306d510(param_1 + 0xb8,param_2);
  puVar7 = *(undefined8 **)(param_2 + 8);
  uVar1 = (long)puVar7 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar1 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar1, puVar7 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar7 = &DAT_03965d10;
    puVar7[1] = uVar6;
  }
  return;
}


