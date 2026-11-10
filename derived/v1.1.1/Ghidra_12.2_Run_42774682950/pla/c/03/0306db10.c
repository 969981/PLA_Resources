/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306db10; name: FUN_0306db10
 */


void FUN_0306db10(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  uVar6 = *(ulong *)(param_2 + 0x10);
  uVar5 = (ulong)((long)puVar2 + 0xf) & 0xfffffffffffffff8;
  if (uVar5 <= uVar6) {
    *(ulong *)(param_2 + 8) = uVar5;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar2 = "YtCvxVsComposite";
      puVar2 = *(undefined8 **)(param_2 + 8);
      uVar6 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar5 = (ulong)((long)puVar2 + 0xf) & 0xfffffffffffffff8;
  if ((uVar5 <= uVar6) && (*(ulong *)(param_2 + 8) = uVar5, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtQueryAabb";
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 == 0) {
LAB_0306db78:
    if (*(int *)(param_1 + 0x40) == 0) goto LAB_0306db80;
LAB_0306dce4:
    puVar2 = *(undefined8 **)(param_2 + 8);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    puVar7 = (undefined8 *)((ulong)((long)puVar2 + 0xf) & 0xfffffffffffffff8);
    if (puVar7 <= puVar4) {
      *(undefined8 **)(param_2 + 8) = puVar7;
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar2 = "Ytsort";
        puVar2 = *(undefined8 **)(param_2 + 8);
        puVar4 = *(undefined8 **)(param_2 + 0x10);
      }
    }
    puVar7 = (undefined8 *)((ulong)((long)puVar2 + 0x1f) & 0xfffffffffffffff8);
    if (puVar4 < puVar7) goto LAB_0306db80;
    *(undefined8 **)(param_2 + 8) = puVar7;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x40);
      *puVar2 = &DAT_03965d10;
      puVar2[1] = uVar3;
      goto LAB_0306db80;
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar6) ||
       (*(ulong *)(param_2 + 8) = uVar6, puVar2 == (undefined8 *)0x0)) goto LAB_0306db78;
    *puVar2 = "MinumHits";
    *(float *)(puVar2 + 1) = (float)uVar1;
    if (*(int *)(param_1 + 0x40) != 0) goto LAB_0306dce4;
LAB_0306db80:
    puVar7 = *(undefined8 **)(param_2 + 8);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
  }
  puVar2 = (undefined8 *)((long)puVar7 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar2 <= puVar4) && (*(undefined8 **)(param_2 + 8) = puVar2, puVar7 != (undefined8 *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_1 + 0x28);
    *puVar7 = &DAT_03965d10;
    puVar7[1] = uVar3;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
LAB_0306dbc4:
    puVar2 = *(undefined8 **)(param_2 + 8);
    puVar7 = *(undefined8 **)(param_2 + 0x10);
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar6 = (long)puVar2 + 0xfU & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "YtReuseContactCache";
    }
    uVar1 = *(uint *)(param_1 + 0x68);
    if (uVar1 == 0) {
LAB_0306dd80:
      puVar4 = *(undefined8 **)(param_2 + 8);
      puVar7 = *(undefined8 **)(param_2 + 0x10);
    }
    else {
      puVar2 = *(undefined8 **)(param_2 + 8);
      puVar7 = *(undefined8 **)(param_2 + 0x10);
      puVar4 = (undefined8 *)((long)puVar2 + 0x17U & 0xfffffffffffffff8);
      if (puVar7 < puVar4) goto LAB_0306dd80;
      *(undefined8 **)(param_2 + 8) = puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = "MicompositeNumCachesReused";
        *(float *)(puVar2 + 1) = (float)uVar1;
        goto LAB_0306dd80;
      }
    }
    puVar2 = (undefined8 *)((long)puVar4 + 0x1fU & 0xfffffffffffffff8);
    if (puVar7 < puVar2) goto LAB_0306dbc4;
    *(undefined8 **)(param_2 + 8) = puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x60);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar3;
      goto LAB_0306dbc4;
    }
  }
  puVar4 = (undefined8 *)((long)puVar2 + 0xfU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar7) && (*(undefined8 **)(param_2 + 8) = puVar4, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = "YtCheckContactCache";
  }
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 == 0) {
LAB_0306dbf8:
    uVar1 = *(uint *)(param_1 + 0x8c);
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar6) ||
       (*(ulong *)(param_2 + 8) = uVar6, puVar2 == (undefined8 *)0x0)) goto LAB_0306dbf8;
    *puVar2 = "MimaxRotationExceeded";
    *(float *)(puVar2 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 0x8c);
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    puVar7 = *(undefined8 **)(param_2 + 0x10);
    puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar7) {
      *(undefined8 **)(param_2 + 8) = puVar2;
      if (puVar4 == (undefined8 *)0x0) goto LAB_0306dc08;
      *puVar4 = "MimaxPositionExceeded";
      *(float *)(puVar4 + 1) = (float)uVar1;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  puVar7 = *(undefined8 **)(param_2 + 0x10);
LAB_0306dc08:
  puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar7) && (*(undefined8 **)(param_2 + 8) = puVar4, puVar2 != (undefined8 *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x80);
    *puVar2 = &DAT_03965d10;
    puVar2[1] = uVar3;
  }
  FUN_0306d510(param_1 + 0x90,param_2);
  puVar2 = *(undefined8 **)(param_2 + 8);
  uVar6 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar6 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar2 = &DAT_03965d10;
    puVar2[1] = uVar3;
  }
  return;
}


