/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c9d20; name: FUN_030c9d20
 */


void FUN_030c9d20(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_70;
  undefined2 local_68;
  undefined2 uStack_66;
  int iStack_64;
  
  local_70 = *(undefined8 *)(param_1 + 0x138);
  local_68 = (undefined2)*(undefined4 *)(param_1 + 0x140);
  uStack_66 = (undefined2)*(int *)(param_1 + 0x144);
  iStack_64 = -(*(int *)(param_1 + 0x144) + *(int *)(*(long *)(param_1 + 0x128) + 8));
  lVar5 = *(long *)(param_1 + 0xe0);
  lVar12 = *(long *)(param_1 + 0x298);
  if (lVar5 == 0) goto LAB_030c9e70;
  if (*(char *)(param_1 + 0xfa) == '\0') {
    FUN_0301e778(param_1 + 0x80,lVar12,param_1);
    goto LAB_030c9e70;
  }
  uVar13 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(lVar5 + 8) = 0x7777;
  FUN_032bffbc(param_1 + 0xd0,*(undefined8 *)(param_1 + 200));
  plVar10 = *(long **)(param_1 + 200);
  uVar4 = *(uint *)((long)plVar10 + 0x1c);
  lVar5 = *plVar10;
  if (uVar4 == 0) {
    piVar11 = (int *)(lVar5 + 0x18);
    iVar2 = *piVar11;
    if (iVar2 < 2) goto LAB_030c9dec;
    puVar9 = (undefined8 *)plVar10[1];
    iVar1 = *(int *)(puVar9 + 0xb);
    lVar8 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(iVar2 + -2) * 8);
    lVar6 = puVar9[1];
    *(undefined8 *)(lVar6 + (long)iVar1 * 8) =
         *(undefined8 *)(*(long *)(lVar5 + 0x10) + (long)(iVar2 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar1 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar1 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar1 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar1 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar4 = 0xffffffff;
  }
  else {
LAB_030c9dec:
    puVar7 = (uint *)plVar10[2];
    piVar11 = (int *)(lVar5 + 8);
    lVar5 = plVar10[3];
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = *puVar7 & 0xffff0000 | uVar4 & 0xffff;
    *puVar7 = *puVar7 & 0xffff | (int)lVar5 << 0x10;
  }
  *piVar11 = *piVar11 + uVar4;
  *plVar10 = 0;
  plVar10[2] = 0;
  FUN_032bf658(*(undefined8 *)(param_1 + 200),uVar13,param_1 + 0xd0);
  plVar10 = *(long **)(param_1 + 200);
  lVar5 = plVar10[3];
  iVar2 = *(int *)((long)plVar10 + 0x1c);
  iVar1 = *(int *)(*plVar10 + 8);
  *(long *)(param_1 + 0xd0) = plVar10[2];
  *(short *)(param_1 + 0xd8) = (short)lVar5;
  *(short *)(param_1 + 0xda) = (short)iVar2;
  *(int *)(param_1 + 0xdc) = -(iVar2 + iVar1);
  *(long *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_030c9e70:
  plVar10 = *(long **)(param_1 + 0xb8);
  bVar3 = true;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(long **)(param_1 + 200) = plVar10;
  if ((*(byte *)(param_1 + 0x88) >> 1 & 1) == 0) {
    bVar3 = (*(byte *)((long)param_4 + 10) & 0x90) != 0;
  }
  *(bool *)(param_1 + 0xf8) = bVar3;
  *(byte *)(param_1 + 0xf9) = *(byte *)((long)param_4 + 10) >> 4 & 1;
  iVar1 = *(int *)(*plVar10 + 8);
  lVar5 = plVar10[3];
  iVar2 = *(int *)((long)plVar10 + 0x1c);
  *(long *)(param_1 + 0xd0) = plVar10[2];
  *(short *)(param_1 + 0xd8) = (short)lVar5;
  *(short *)(param_1 + 0xda) = (short)iVar2;
  *(int *)(param_1 + 0xdc) = -(iVar2 + iVar1);
  if ((int)plVar10[3] < 0xdd1) {
    lVar5 = plVar10[2] + (long)(int)plVar10[3] + 0x20;
  }
  else {
    lVar5 = FUN_032bf82c();
    plVar10 = *(long **)(param_1 + 200);
  }
  *(long *)(param_1 + 0xe0) = lVar5;
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 0x10;
  *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 4) = param_4[1];
  **(undefined4 **)(param_1 + 0xe0) = *param_4;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0xe) = 0;
  *(undefined2 *)(*(long *)(param_1 + 0xe0) + 0xc) = *(undefined2 *)((long)param_4 + 10);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(char *)(param_1 + 0x84) != '\0') {
    plVar10 = *(long **)(*(long *)(lVar12 + 8) + 0x658);
    (**(code **)(*plVar10 + 0x60))
              (plVar10,0,
               *(long *)(lVar12 + 0x500) + ((ulong)*(uint *)(param_1 + 0x80) & 0xffffff) * 0x20);
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = param_4[1];
  *(undefined4 *)(param_1 + 0xf4) = 2;
  plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x298) + 0x40) +
                       (ulong)*(byte *)(param_4 + 2) * 8 + 0x13b8);
  (**(code **)(*plVar10 + 0x28))
            (plVar10,*(long *)(param_1 + 0x298),param_1,param_2,param_3,param_4,param_5,
             param_1 + 0x128,0,0,param_1 + 0x80,*(undefined8 *)(param_1 + 0x290),&DAT_0442d540);
  FUN_032bffbc(&local_70,param_1 + 0x128);
  *(ulong *)(param_4 + 10) = CONCAT44(iStack_64,CONCAT22(uStack_66,local_68));
  *(undefined8 *)(param_4 + 8) = local_70;
  return;
}


