/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec7ec4; name: FUN_01ec7ec4
 */


void FUN_01ec7ec4(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  float fVar10;
  double dVar11;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_008c4b3c(param_1 + 0x3e0,param_3);
  FUN_0108c26c(&local_50,param_2);
  *(undefined8 *)(param_1 + 0x378) = local_50;
  *(undefined8 *)(param_1 + 0x380) = local_48;
  plVar5 = *(long **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x388) = local_40;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x399) = 0;
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(long **)(param_1 + 0x390) = local_38;
  if (*(char *)(param_1 + 0x3b8) == '\0') {
    if (*param_2 == '\0') {
      piVar8 = *(int **)(param_2 + 0x10);
      if (piVar8 == (int *)0x0) {
        piVar8 = *(int **)(param_2 + 8);
      }
      if (0x30 < *(ushort *)((long)piVar8 - (long)*piVar8)) {
        uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[0x18];
        goto joined_r0x01ec8098;
      }
    }
    else {
      piVar8 = *(int **)(param_2 + 0x18);
      if (0x2c < *(ushort *)((long)piVar8 - (long)*piVar8)) {
        uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[0x16];
joined_r0x01ec8098:
        if ((ulong)uVar2 != 0) {
          *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)((long)piVar8 + (ulong)uVar2);
          cVar1 = *param_2;
          goto joined_r0x01ec818c;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x3bc) = 0;
    if (*param_2 == '\0') goto LAB_01ec80ac;
LAB_01ec7f8c:
    piVar8 = *(int **)(param_2 + 0x18);
    if ((0x4c < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x26], uVar9 != 0))
    goto LAB_01ec7fac;
LAB_01ec7fb8:
    *(undefined1 *)(param_1 + 0x3a9) = 0;
    *(undefined4 *)(param_1 + 0x3a0) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x3b8) = 0;
    cVar1 = *param_2;
joined_r0x01ec818c:
    if (cVar1 != '\0') goto LAB_01ec7f8c;
LAB_01ec80ac:
    piVar8 = *(int **)(param_2 + 0x10);
    if (piVar8 == (int *)0x0) {
      piVar8 = *(int **)(param_2 + 8);
    }
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x51) ||
       (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x28], uVar9 == 0))
    goto LAB_01ec7fb8;
LAB_01ec7fac:
    if (*(int *)((long)piVar8 + uVar9) == 0) goto LAB_01ec7fb8;
    *(undefined1 *)(param_1 + 0x3a9) = 1;
    if (*param_2 == '\0') {
      piVar8 = *(int **)(param_2 + 0x10);
      if (piVar8 == (int *)0x0) {
        piVar8 = *(int **)(param_2 + 8);
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x51) ||
         (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x28], uVar9 == 0))
      goto LAB_01ec8134;
LAB_01ec8208:
      uVar4 = *(undefined4 *)((long)piVar8 + uVar9);
    }
    else {
      piVar8 = *(int **)(param_2 + 0x18);
      if ((0x4c < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
         (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x26], uVar9 != 0))
      goto LAB_01ec8208;
LAB_01ec8134:
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = uVar4;
    *(undefined1 *)(param_1 + 0x39a) = 0;
    iVar3 = FUN_0108d3d8(param_2);
    if (*param_2 == '\0') {
      piVar8 = *(int **)(param_2 + 0x10);
      if (piVar8 == (int *)0x0) {
        piVar8 = *(int **)(param_2 + 8);
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x51) ||
         (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x28], uVar9 == 0))
      goto LAB_01ec8170;
LAB_01ec8238:
      iVar7 = *(int *)((long)piVar8 + uVar9);
    }
    else {
      piVar8 = *(int **)(param_2 + 0x18);
      if ((0x4c < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
         (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x26], uVar9 != 0))
      goto LAB_01ec8238;
LAB_01ec8170:
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x3b4) = (iVar7 + -1) * iVar3;
  }
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  if (*param_2 == '\0') {
    piVar8 = *(int **)(param_2 + 0x10);
    if (piVar8 == (int *)0x0) {
      piVar8 = *(int **)(param_2 + 8);
    }
    if ((0x58 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x2c], uVar9 != 0))
    goto LAB_01ec7ff0;
LAB_01ec7ffc:
    *(undefined1 *)(param_1 + 0x3aa) = 0;
    if (*param_2 == '\0') goto LAB_01ec8008;
LAB_01ec8274:
    piVar8 = *(int **)(param_2 + 0x18);
    if (0xe < *(ushort *)((long)piVar8 - (long)*piVar8)) {
      uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[7];
      goto joined_r0x01ec8290;
    }
  }
  else {
    piVar8 = *(int **)(param_2 + 0x18);
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x55) ||
       (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x2a], uVar9 == 0))
    goto LAB_01ec7ffc;
LAB_01ec7ff0:
    iVar3 = *(int *)((long)piVar8 + uVar9);
    if (iVar3 == 0) goto LAB_01ec7ffc;
    *(undefined1 *)(param_1 + 0x3aa) = 1;
    lVar6 = FUN_0108d4f8(param_2,0);
    dVar11 = atof((char *)(lVar6 + 4));
    *(float *)(param_1 + 0x3a4) = (float)dVar11;
    uVar4 = FUN_01ec5980(param_1);
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    *(undefined4 *)(param_1 + 0x218) = uVar4;
    if (iVar3 == 1) {
      fVar10 = -0.5;
LAB_01ec8244:
      *(float *)(param_1 + 0x3ac) =
           *(float *)(param_1 + 0x3a4) * (float)*(int *)(param_1 + 0x3b4) * fVar10;
    }
    else if (iVar3 == 2) {
      fVar10 = -0.25;
      goto LAB_01ec8244;
    }
    *(byte *)(param_1 + 0x3a8) = ~*(byte *)(param_1 + 0x3a0) & 1;
    if (*param_2 != '\0') goto LAB_01ec8274;
LAB_01ec8008:
    piVar8 = *(int **)(param_2 + 0x10);
    if (piVar8 == (int *)0x0) {
      piVar8 = *(int **)(param_2 + 8);
    }
    if (0x10 < *(ushort *)((long)piVar8 - (long)*piVar8)) {
      uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[8];
joined_r0x01ec8290:
      if ((ulong)uVar2 != 0) {
        iVar3 = *(int *)((long)piVar8 + (ulong)uVar2);
        *(int *)(param_1 + 0x3b0) = iVar3;
        if (iVar3 != 0) {
          return;
        }
        goto LAB_01ec8034;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
LAB_01ec8034:
  FUN_0108c59c(&local_50,param_2);
  FUN_01ec5bc0(param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


