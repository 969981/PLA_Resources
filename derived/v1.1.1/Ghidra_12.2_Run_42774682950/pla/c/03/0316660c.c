/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0316660c; name: FUN_0316660c
 */


void FUN_0316660c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(param_2 + 8);
  uVar3 = (long)puVar5 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar3, puVar5 != (undefined8 *)0x0)) {
    *puVar5 = "YtProcessFace";
  }
  FUN_03166198(param_1 + 0x18,param_2);
  puVar5 = *(undefined8 **)(param_2 + 8);
  uVar3 = (long)puVar5 + 0xfU & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar3, puVar5 != (undefined8 *)0x0)) {
    *puVar5 = "YtFindMcps";
  }
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 == 0) {
LAB_031666b0:
    uVar1 = *(uint *)(param_1 + 0x74);
  }
  else {
    puVar5 = *(undefined8 **)(param_2 + 8);
    uVar3 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_2 + 0x10) < uVar3) ||
       (*(ulong *)(param_2 + 8) = uVar3, puVar5 == (undefined8 *)0x0)) goto LAB_031666b0;
    *puVar5 = "MimaxTpqSwaps";
    *(float *)(puVar5 + 1) = (float)uVar1;
    uVar1 = *(uint *)(param_1 + 0x74);
  }
  if (uVar1 != 0) {
    puVar5 = *(undefined8 **)(param_2 + 8);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    puVar2 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar2 <= puVar4) {
      *(undefined8 **)(param_2 + 8) = puVar2;
      if (puVar5 == (undefined8 *)0x0) goto LAB_031666d0;
      *puVar5 = "MimaxLoopBreakingSteps";
      *(float *)(puVar5 + 1) = (float)uVar1;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
LAB_031666d0:
  puVar5 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (*(undefined8 **)(param_2 + 8) = puVar5, puVar2 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x68);
    *puVar2 = &DAT_03965d10;
    puVar2[1] = uVar6;
  }
  FUN_03166340(param_1 + 0x78,param_2);
  puVar5 = *(undefined8 **)(param_2 + 8);
  uVar3 = (long)puVar5 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar3, puVar5 != (undefined8 *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar5 = &DAT_03965d10;
    puVar5[1] = uVar6;
  }
  return;
}


