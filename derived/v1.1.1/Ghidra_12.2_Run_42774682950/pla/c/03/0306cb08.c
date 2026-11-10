/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306cb08; name: FUN_0306cb08
 */


void FUN_0306cb08(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if (param_2 != 0) {
    puVar2 = (ulong *)(param_2 + 8);
    puVar4 = (undefined8 *)*puVar2;
    uVar8 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    puVar3 = (ulong *)(param_2 + 0x10);
    uVar5 = *puVar3;
    if (uVar8 <= uVar5) {
      *puVar2 = uVar8;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtCvxCvx";
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = *puVar3;
      }
    }
    uVar8 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    if ((uVar8 <= uVar5) && (*puVar2 = uVar8, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "YtCheckContactCache";
    }
    uVar7 = *(uint *)(param_1 + 0x30);
    if (uVar7 == 0) {
LAB_0306cb58:
      uVar7 = *(uint *)(param_1 + 0x34);
      if (uVar7 == 0) goto LAB_0306cb60;
LAB_0306cddc:
      puVar9 = (undefined8 *)*puVar2;
      puVar6 = (undefined8 *)*puVar3;
      puVar4 = (undefined8 *)((long)puVar9 + 0x17U & 0xfffffffffffffff8);
      if (puVar6 < puVar4) goto LAB_0306cb60;
      *puVar2 = (ulong)puVar4;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = "MimaxPositionExceeded";
        *(float *)(puVar9 + 1) = (float)uVar7;
        goto LAB_0306cb60;
      }
    }
    else {
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((*puVar3 < uVar5) || (*puVar2 = uVar5, puVar4 == (undefined8 *)0x0)) goto LAB_0306cb58;
      *puVar4 = "MimaxRotationExceeded";
      *(float *)(puVar4 + 1) = (float)uVar7;
      uVar7 = *(uint *)(param_1 + 0x34);
      if (uVar7 != 0) goto LAB_0306cddc;
LAB_0306cb60:
      puVar4 = (undefined8 *)*puVar2;
      puVar6 = (undefined8 *)*puVar3;
    }
    puVar9 = (undefined8 *)((long)puVar4 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar9 <= puVar6) && (*puVar2 = (ulong)puVar9, puVar4 != (undefined8 *)0x0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x28);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar10;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
LAB_0306cba4:
      puVar9 = (undefined8 *)*puVar2;
      puVar4 = (undefined8 *)*puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
      if ((uVar5 <= *puVar3) && (*puVar2 = uVar5, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = "YtReuseContactCache";
      }
      uVar7 = *(uint *)(param_1 + 0x50);
      if (uVar7 == 0) {
LAB_0306cce4:
        puVar6 = (undefined8 *)*puVar2;
        puVar4 = (undefined8 *)*puVar3;
      }
      else {
        puVar9 = (undefined8 *)*puVar2;
        puVar6 = (undefined8 *)((long)puVar9 + 0x17U & 0xfffffffffffffff8);
        puVar4 = (undefined8 *)*puVar3;
        if (puVar4 < puVar6) goto LAB_0306cce4;
        *puVar2 = (ulong)puVar6;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = "MicompositeNumCachesReused";
          *(float *)(puVar9 + 1) = (float)uVar7;
          goto LAB_0306cce4;
        }
      }
      puVar9 = (undefined8 *)((long)puVar6 + 0x1fU & 0xfffffffffffffff8);
      if (puVar4 < puVar9) goto LAB_0306cba4;
      *puVar2 = (ulong)puVar9;
      if (puVar6 != (undefined8 *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0x48);
        *puVar6 = &DAT_03965d10;
        puVar6[1] = uVar10;
        goto LAB_0306cba4;
      }
    }
    puVar6 = (undefined8 *)((long)puVar9 + 0xfU & 0xfffffffffffffff8);
    if ((puVar6 <= puVar4) && (*puVar2 = (ulong)puVar6, puVar9 != (undefined8 *)0x0)) {
      *puVar9 = "YtFaceClipGenerator";
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
LAB_0306cbd8:
      puVar9 = (undefined8 *)*puVar2;
      puVar4 = (undefined8 *)*puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
      if ((uVar5 <= *puVar3) && (*puVar2 = uVar5, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = "YtGsk";
      }
      uVar7 = *(uint *)(param_1 + 0xe8);
      if (uVar7 == 0) {
LAB_0306cd58:
        uVar7 = *(uint *)(param_1 + 0xec);
        if (uVar7 == 0) goto LAB_0306cd60;
LAB_0306ce70:
        puVar9 = (undefined8 *)*puVar2;
        puVar6 = (undefined8 *)((long)puVar9 + 0x17U & 0xfffffffffffffff8);
        puVar4 = (undefined8 *)*puVar3;
        if (puVar4 < puVar6) goto LAB_0306cd60;
        *puVar2 = (ulong)puVar6;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = "MiskippedSinceNoPredictedHit";
          *(float *)(puVar9 + 1) = (float)uVar7;
          goto LAB_0306cd60;
        }
      }
      else {
        puVar4 = (undefined8 *)*puVar2;
        uVar5 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((*puVar3 < uVar5) || (*puVar2 = uVar5, puVar4 == (undefined8 *)0x0)) goto LAB_0306cd58;
        *puVar4 = "MirerunGskBecauseOfNormal";
        *(float *)(puVar4 + 1) = (float)uVar7;
        uVar7 = *(uint *)(param_1 + 0xec);
        if (uVar7 != 0) goto LAB_0306ce70;
LAB_0306cd60:
        puVar6 = (undefined8 *)*puVar2;
        puVar4 = (undefined8 *)*puVar3;
      }
      puVar9 = (undefined8 *)((long)puVar6 + 0x1fU & 0xfffffffffffffff8);
      if (puVar4 < puVar9) goto LAB_0306cbd8;
      *puVar2 = (ulong)puVar9;
      if (puVar6 != (undefined8 *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0xd8);
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0xe0);
        *puVar6 = &DAT_03965d10;
        puVar6[1] = uVar10;
        goto LAB_0306cbd8;
      }
    }
    puVar6 = (undefined8 *)((long)puVar9 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar6 <= puVar4) && (*puVar2 = (ulong)puVar6, puVar9 != (undefined8 *)0x0)) {
      uVar10 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_1 + 0xb0);
      *puVar9 = &DAT_03965d10;
      puVar9[1] = uVar10;
    }
    if (*(int *)(param_1 + 200) == 0) {
LAB_0306cc1c:
      if (*(int *)(param_1 + 0x68) == 0) goto LAB_0306cc24;
LAB_0306cefc:
      puVar4 = (undefined8 *)*puVar2;
      uVar8 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
      uVar5 = *puVar3;
      if (uVar8 <= uVar5) {
        *puVar2 = uVar8;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar4 = "YtCvxVsPlaneGenerator";
          puVar4 = (undefined8 *)*puVar2;
          uVar5 = *puVar3;
        }
      }
      uVar8 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
      if ((uVar5 < uVar8) || (*puVar2 = uVar8, puVar4 == (undefined8 *)0x0)) goto LAB_0306cc24;
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x68);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar10;
      if (*(int *)(param_1 + 0x80) != 0) goto LAB_0306cf50;
LAB_0306cc2c:
      iVar1 = *(int *)(param_1 + 0x98);
    }
    else {
      puVar4 = (undefined8 *)*puVar2;
      uVar8 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
      uVar5 = *puVar3;
      if (uVar8 <= uVar5) {
        *puVar2 = uVar8;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar4 = "YtFullCastGenerator";
          puVar4 = (undefined8 *)*puVar2;
          uVar5 = *puVar3;
        }
      }
      uVar8 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
      if ((uVar5 < uVar8) || (*puVar2 = uVar8, puVar4 == (undefined8 *)0x0)) goto LAB_0306cc1c;
      uVar10 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 200);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar10;
      if (*(int *)(param_1 + 0x68) != 0) goto LAB_0306cefc;
LAB_0306cc24:
      if (*(int *)(param_1 + 0x80) == 0) goto LAB_0306cc2c;
LAB_0306cf50:
      puVar4 = (undefined8 *)*puVar2;
      uVar8 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
      uVar5 = *puVar3;
      if (uVar8 <= uVar5) {
        *puVar2 = uVar8;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar4 = "YtDebrisGenerator";
          puVar4 = (undefined8 *)*puVar2;
          uVar5 = *puVar3;
        }
      }
      uVar8 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
      if ((uVar5 < uVar8) || (*puVar2 = uVar8, puVar4 == (undefined8 *)0x0)) goto LAB_0306cc2c;
      uVar10 = *(undefined8 *)(param_1 + 0x78);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x80);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar10;
      iVar1 = *(int *)(param_1 + 0x98);
    }
    if (iVar1 != 0) {
      puVar4 = (undefined8 *)*puVar2;
      uVar8 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
      uVar5 = *puVar3;
      if (uVar8 <= uVar5) {
        *puVar2 = uVar8;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar4 = "YtCapsCapsGenerator";
          puVar4 = (undefined8 *)*puVar2;
          uVar5 = *puVar3;
        }
      }
      uVar8 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
      if ((uVar8 <= uVar5) && (*puVar2 = uVar8, puVar4 != (undefined8 *)0x0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x90);
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x98);
        *puVar4 = &DAT_03965d10;
        puVar4[1] = uVar10;
        iVar1 = *(int *)(param_1 + 0x108);
        goto joined_r0x0306cc38;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x108);
joined_r0x0306cc38:
  if (iVar1 == 0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    if (param_2 == 0) {
      return;
    }
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = *(ulong *)(param_2 + 0x10);
    uVar8 = (ulong)((long)puVar4 + 0xf) & 0xfffffffffffffff8;
    if (uVar8 <= uVar5) {
      *(ulong *)(param_2 + 8) = uVar8;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar4 = "YtBuildJacobians";
        puVar4 = *(undefined8 **)(param_2 + 8);
        uVar5 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar8 = (ulong)((long)puVar4 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar8 <= uVar5) && (*(ulong *)(param_2 + 8) = uVar8, puVar4 != (undefined8 *)0x0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x100);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x108);
      *puVar4 = &DAT_03965d10;
      puVar4[1] = uVar10;
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 8);
  uVar5 = (long)puVar4 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar5 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar5, puVar4 != (undefined8 *)0x0)) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x10);
    *puVar4 = &DAT_03965d10;
    puVar4[1] = uVar10;
  }
  return;
}


