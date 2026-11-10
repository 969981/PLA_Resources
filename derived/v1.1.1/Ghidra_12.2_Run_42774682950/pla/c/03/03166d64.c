/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03166d64; name: FUN_03166d64
 */


void FUN_03166d64(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
  if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtTraversability";
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtPointPoint";
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 8);
      uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
      if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
         (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "YtUncacheable";
      }
      FUN_03166790(param_1 + 0x30,param_2);
    }
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x28);
      *puVar2 = &DAT_03965d10;
      puVar2[1] = uVar3;
    }
  }
  FUN_031669d0(param_1 + 0xe8,param_2);
  FUN_03166b2c(param_1 + 0x358,param_2);
  FUN_03166c48(param_1 + 0x5c8,param_2);
  if (*(int *)(param_1 + 0x848) == 0) {
LAB_03166dec:
    if (*(int *)(param_1 + 0xa00) == 0) goto LAB_03166df4;
LAB_03167064:
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtEdgeEdges";
    }
    FUN_0316660c(param_1 + 0xa08,param_2);
    if (*(int *)(param_1 + 0xb00) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 8);
      uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
      if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
         (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "YtUncached";
      }
      FUN_03166790(param_1 + 0xaf0,param_2);
    }
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar4) ||
       (*(ulong *)(param_2 + 8) = uVar4, puVar2 == (undefined8 *)0x0)) goto LAB_03166df4;
    uVar3 = *(undefined8 *)(param_1 + 0x9f8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xa00);
    *puVar2 = &DAT_03965d10;
    puVar2[1] = uVar3;
    iVar1 = *(int *)(param_1 + 3000);
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtEdgeEdge";
    }
    FUN_0316660c(param_1 + 0x850,param_2);
    if (*(int *)(param_1 + 0x948) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 8);
      uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
      if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
         (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "YtUncached";
      }
      FUN_03166790(param_1 + 0x938,param_2);
    }
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar4) ||
       (*(ulong *)(param_2 + 8) = uVar4, puVar2 == (undefined8 *)0x0)) goto LAB_03166dec;
    uVar3 = *(undefined8 *)(param_1 + 0x840);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x848);
    *puVar2 = &DAT_03965d10;
    puVar2[1] = uVar3;
    if (*(int *)(param_1 + 0xa00) != 0) goto LAB_03167064;
LAB_03166df4:
    iVar1 = *(int *)(param_1 + 3000);
  }
  if (iVar1 != 0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtVertex";
    }
    FUN_0316660c(param_1 + 0xbc0,param_2);
    puVar2 = *(undefined8 **)(param_2 + 8);
    puVar5 = *(undefined8 **)(param_2 + 0x10);
    puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0xf) & 0xfffffffffffffff8);
    if (puVar6 <= puVar5) {
      *(undefined8 **)(param_2 + 8) = puVar6;
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar2 = "YtUncached";
        puVar2 = *(undefined8 **)(param_2 + 8);
        puVar5 = *(undefined8 **)(param_2 + 0x10);
      }
    }
    puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0x1f) & 0xfffffffffffffff8);
    if (puVar6 <= puVar5) {
      *(undefined8 **)(param_2 + 8) = puVar6;
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&DAT_00000018;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0xcb0);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0xcb8);
        *puVar2 = &DAT_03965d10;
        puVar2[1] = uVar3;
        puVar2 = *(undefined8 **)(param_2 + 8);
        puVar5 = *(undefined8 **)(param_2 + 0x10);
      }
    }
    puVar6 = (undefined8 *)((ulong)((long)puVar2 + 0x1f) & 0xfffffffffffffff8);
    if (puVar6 <= puVar5) {
      *(undefined8 **)(param_2 + 8) = puVar6;
      if (puVar2 == (undefined8 *)0x0) goto LAB_03166e68;
      uVar3 = *(undefined8 *)(param_1 + 0xbb0);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 3000);
      *puVar2 = &DAT_03965d10;
      puVar2[1] = uVar3;
    }
  }
  puVar6 = *(undefined8 **)(param_2 + 8);
  puVar5 = *(undefined8 **)(param_2 + 0x10);
LAB_03166e68:
  puVar2 = (undefined8 *)((long)puVar6 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar5) && (*(undefined8 **)(param_2 + 8) = puVar2, puVar6 != (undefined8 *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar6 = &DAT_03965d10;
    puVar6[1] = uVar3;
  }
  return;
}


