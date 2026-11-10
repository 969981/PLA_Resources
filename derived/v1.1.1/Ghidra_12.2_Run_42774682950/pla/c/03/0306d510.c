/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306d510; name: FUN_0306d510
 */


void FUN_0306d510(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if (param_2 == 0) {
    return;
  }
  puVar2 = (ulong *)(param_2 + 8);
  puVar4 = (undefined8 *)*puVar2;
  uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
  puVar3 = (ulong *)(param_2 + 0x10);
  uVar5 = *puVar3;
  if (uVar9 <= uVar5) {
    *puVar2 = uVar9;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar4 = "YtgetData";
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = *puVar3;
    }
  }
  uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
  if (uVar9 <= uVar5) {
    *puVar2 = uVar9;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x30);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar7;
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = *puVar3;
    }
  }
  uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
  if (uVar9 <= uVar5) {
    *puVar2 = uVar9;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar4 = "YtgetLeafShapes";
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = *puVar3;
    }
  }
  uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
  if (uVar9 <= uVar5) {
    *puVar2 = uVar9;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x48);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar7;
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = *puVar3;
    }
  }
  uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
  if (uVar9 <= uVar5) {
    *puVar2 = uVar9;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000008;
    }
    else {
      *puVar4 = "YtcreateNewCache";
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = *puVar3;
    }
  }
  uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
  if (uVar9 <= uVar5) {
    *puVar2 = uVar9;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000018;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x60);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar7;
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = *puVar3;
    }
  }
  uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
  if ((uVar9 <= uVar5) && (*puVar2 = uVar9, puVar4 != (undefined8 *)0x0)) {
    *puVar4 = "YtFaceClipGenerator";
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
LAB_0306d5ac:
    puVar10 = (undefined8 *)*puVar2;
    puVar4 = (undefined8 *)*puVar3;
  }
  else {
    puVar4 = (undefined8 *)*puVar2;
    uVar5 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
    if ((uVar5 <= *puVar3) && (*puVar2 = uVar5, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "YtGsk";
    }
    uVar8 = *(uint *)(param_1 + 0xf8);
    if (uVar8 == 0) {
LAB_0306d740:
      uVar8 = *(uint *)(param_1 + 0xfc);
      if (uVar8 == 0) goto LAB_0306d748;
LAB_0306d7dc:
      puVar10 = (undefined8 *)*puVar2;
      puVar6 = (undefined8 *)((long)puVar10 + 0x17U & 0xfffffffffffffff8);
      puVar4 = (undefined8 *)*puVar3;
      if (puVar4 < puVar6) goto LAB_0306d748;
      *puVar2 = (ulong)puVar6;
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = "MiskippedSinceNoPredictedHit";
        *(float *)(puVar10 + 1) = (float)uVar8;
        goto LAB_0306d748;
      }
    }
    else {
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((*puVar3 < uVar5) || (*puVar2 = uVar5, puVar4 == (undefined8 *)0x0)) goto LAB_0306d740;
      *puVar4 = "MirerunGskBecauseOfNormal";
      *(float *)(puVar4 + 1) = (float)uVar8;
      uVar8 = *(uint *)(param_1 + 0xfc);
      if (uVar8 != 0) goto LAB_0306d7dc;
LAB_0306d748:
      puVar6 = (undefined8 *)*puVar2;
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar10 = (undefined8 *)((long)puVar6 + 0x1fU & 0xfffffffffffffff8);
    if (puVar4 < puVar10) goto LAB_0306d5ac;
    *puVar2 = (ulong)puVar10;
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0xf0);
      *puVar6 = &DAT_03965d10;
      puVar6[1] = uVar7;
      goto LAB_0306d5ac;
    }
  }
  puVar6 = (undefined8 *)((long)puVar10 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar6 <= puVar4) && (*puVar2 = (ulong)puVar6, puVar10 != (undefined8 *)0x0)) {
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_1 + 0xc0);
    *puVar10 = &DAT_03965d10;
    puVar10[1] = uVar7;
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
LAB_0306d5f0:
    if (*(int *)(param_1 + 0x78) == 0) goto LAB_0306d5f8;
LAB_0306d868:
    puVar4 = (undefined8 *)*puVar2;
    uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    uVar5 = *puVar3;
    if (uVar9 <= uVar5) {
      *puVar2 = uVar9;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtCvxVsPlaneGenerator";
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = *puVar3;
      }
    }
    uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar5 < uVar9) || (*puVar2 = uVar9, puVar4 == (undefined8 *)0x0)) goto LAB_0306d5f8;
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x78);
    *puVar4 = &DAT_03965d10;
    puVar4[1] = uVar7;
    if (*(int *)(param_1 + 0x90) != 0) goto LAB_0306d8bc;
LAB_0306d600:
    if (*(int *)(param_1 + 0xa8) == 0) goto LAB_0306d608;
LAB_0306d910:
    puVar4 = (undefined8 *)*puVar2;
    uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    uVar5 = *puVar3;
    if (uVar9 <= uVar5) {
      *puVar2 = uVar9;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtCapsCapsGenerator";
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = *puVar3;
      }
    }
    uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar5 < uVar9) || (*puVar2 = uVar9, puVar4 == (undefined8 *)0x0)) goto LAB_0306d608;
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0xa8);
    *puVar4 = &DAT_03965d10;
    puVar4[1] = uVar7;
    iVar1 = *(int *)(param_1 + 0x130);
  }
  else {
    puVar4 = (undefined8 *)*puVar2;
    uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    uVar5 = *puVar3;
    if (uVar9 <= uVar5) {
      *puVar2 = uVar9;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtFullCastGenerator";
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = *puVar3;
      }
    }
    uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar5 < uVar9) || (*puVar2 = uVar9, puVar4 == (undefined8 *)0x0)) goto LAB_0306d5f0;
    uVar7 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0xd8);
    *puVar4 = &DAT_03965d10;
    puVar4[1] = uVar7;
    if (*(int *)(param_1 + 0x78) != 0) goto LAB_0306d868;
LAB_0306d5f8:
    if (*(int *)(param_1 + 0x90) == 0) goto LAB_0306d600;
LAB_0306d8bc:
    puVar4 = (undefined8 *)*puVar2;
    uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    uVar5 = *puVar3;
    if (uVar9 <= uVar5) {
      *puVar2 = uVar9;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtDebrisGenerator";
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = *puVar3;
      }
    }
    uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar5 < uVar9) || (*puVar2 = uVar9, puVar4 == (undefined8 *)0x0)) goto LAB_0306d600;
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x90);
    *puVar4 = &DAT_03965d10;
    puVar4[1] = uVar7;
    if (*(int *)(param_1 + 0xa8) != 0) goto LAB_0306d910;
LAB_0306d608:
    iVar1 = *(int *)(param_1 + 0x130);
  }
  if (iVar1 != 0) {
    puVar4 = (undefined8 *)*puVar2;
    uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    uVar5 = *puVar3;
    if (uVar9 <= uVar5) {
      *puVar2 = uVar9;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtweldingModifier";
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = *puVar3;
      }
    }
    uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar9 <= uVar5) && (*puVar2 = uVar9, puVar4 != (undefined8 *)0x0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x128);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x130);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar7;
      iVar1 = *(int *)(param_1 + 0x148);
      goto joined_r0x0306d9b4;
    }
  }
  iVar1 = *(int *)(param_1 + 0x148);
joined_r0x0306d9b4:
  if (iVar1 != 0) {
    puVar4 = (undefined8 *)*puVar2;
    uVar9 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    uVar5 = *puVar3;
    if (uVar9 <= uVar5) {
      *puVar2 = uVar9;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtprocessModifiers";
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = *puVar3;
      }
    }
    uVar9 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar9 <= uVar5) && (*puVar2 = uVar9, puVar4 != (undefined8 *)0x0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x140);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x148);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar7;
      return;
    }
  }
  return;
}


