/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03166198; name: FUN_03166198
 */


void FUN_03166198(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_2 + 8);
  uVar3 = (long)puVar6 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar3, puVar6 != (undefined8 *)0x0)) {
    *puVar6 = "YtGatherBoundaryEdges";
  }
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_031661cc:
    uVar1 = *(uint *)(param_1 + 0x30);
    if (uVar1 == 0) goto LAB_031661e8;
LAB_031661d4:
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 == (undefined8 *)0x0)) goto LAB_031661e8;
    *puVar6 = "MinumEdges";
    *(float *)(puVar6 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 0x34);
    if (uVar1 != 0) goto LAB_031661f0;
LAB_03166204:
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = *(ulong *)(param_2 + 0x10);
    uVar7 = (ulong)((long)puVar6 + 0xf) & 0xfffffffffffffff8;
    if (uVar7 <= uVar3) {
      *(ulong *)(param_2 + 8) = uVar7;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar6 = "YtClearanceFilter";
        puVar6 = *(undefined8 **)(param_2 + 8);
        uVar3 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar7 = (ulong)((long)puVar6 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar3 < uVar7) || (*(ulong *)(param_2 + 8) = uVar7, puVar6 == (undefined8 *)0x0))
    goto LAB_031661cc;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0x28);
    *puVar6 = &DAT_03965d10;
    puVar6[1] = uVar5;
    uVar1 = *(uint *)(param_1 + 0x30);
    if (uVar1 != 0) goto LAB_031661d4;
LAB_031661e8:
    uVar1 = *(uint *)(param_1 + 0x34);
    if (uVar1 == 0) goto LAB_03166204;
LAB_031661f0:
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar6 == (undefined8 *)0x0)) goto LAB_03166204;
    *puVar6 = "MinumVisitedFaces";
    *(float *)(puVar6 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  if (uVar1 != 0) {
    puVar6 = *(undefined8 **)(param_2 + 8);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    puVar2 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar4) {
      *(undefined8 **)(param_2 + 8) = puVar2;
      if (puVar6 == (undefined8 *)0x0) goto LAB_03166224;
      *puVar6 = "MinumVisitedBoundaryEdges";
      *(float *)(puVar6 + 1) = (float)uVar1;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
LAB_03166224:
  puVar6 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar6 <= puVar4) && (*(undefined8 **)(param_2 + 8) = puVar6, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar2 = &DAT_03965d10;
    puVar2[1] = uVar5;
  }
  return;
}


