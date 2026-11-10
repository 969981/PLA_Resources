/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a01d74; name: FUN_02a01d74
 */


void FUN_02a01d74(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  long local_50;
  undefined2 local_48;
  undefined1 auStack_38 [8];
  
  if (*(char *)((long)param_3 + 0x19) == '\0') {
    uVar5 = (ulong)*(byte *)(param_3[1] + 0x7d);
    lVar8 = *(long *)(param_1 + 0x20);
    if (uVar5 < 0x1e) {
      lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 0x128) + uVar5 * 4;
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 1;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x4f,uVar5,0);
  }
  *(byte *)(param_3[1] + 900) = *(byte *)(param_3[1] + 900) | 8;
  if ((char)param_3[3] == '\0') {
    if (*(char *)((long)param_3 + 0x1a) == '\0') {
      puVar10 = (uint *)param_3[2];
      if (*puVar10 != 0xa5) goto LAB_02a01f20;
      goto LAB_02a01df8;
    }
    uVar7 = (uint)*(undefined8 *)(param_3[1] + 0x170);
    uVar11 = uVar7 & 7;
    if ((uVar11 == 1) || (uVar11 == 2)) {
      uVar11 = uVar7 >> 0xe & 0xffff;
    }
    else {
      uVar11 = 0;
    }
    puVar10 = (uint *)param_3[2];
    if ((uVar11 == *puVar10) || (*puVar10 == 0xa5)) goto LAB_02a01df8;
LAB_02a01f20:
    lVar8 = param_3[1];
    if ((*(char *)(lVar8 + 0x38f) != '\0') && ((*(byte *)(*param_3 + 4) >> 3 & 1) == 0)) {
      lVar9 = *(long *)(param_1 + 0x20);
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 8) +
                  (ulong)*(byte *)(lVar8 + 0x7d) * 8 + 0x120) + 0x38f) = 0;
      FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x33,*(undefined1 *)(lVar8 + 0x7d),3,0);
      lVar8 = param_3[1];
    }
    lVar9 = *(long *)(param_1 + 0x20);
LAB_02a01f78:
    *(undefined1 *)
     (*(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 8) +
                (ulong)*(byte *)(lVar8 + 0x7d) * 8 + 0x120) + 0x391) = 0;
    uVar4 = *(undefined8 *)(lVar9 + 0x18);
    uVar2 = *(undefined1 *)(lVar8 + 0x7d);
    iVar6 = 0;
  }
  else {
    puVar10 = (uint *)param_3[2];
LAB_02a01df8:
    lVar9 = *(long *)(param_1 + 0x20);
    lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 8) +
                       (ulong)*(byte *)(param_3[1] + 0x7d) * 8 + 0x120);
    uVar11 = *puVar10;
    lVar8 = param_3[4];
    uVar2 = *(undefined1 *)((long)puVar10 + 10);
    bVar3 = *(byte *)((long)param_3 + 0x19);
    uVar1 = *(undefined4 *)((long)param_3 + 0x1c);
    uVar7 = *(uint *)(lVar12 + 0x378);
    *(uint *)(lVar12 + 0x378) = uVar11;
    *(undefined4 *)(lVar12 + 0x37c) = uVar1;
    *(char *)(lVar12 + 0x376) = (char)lVar8;
    *(undefined1 *)(lVar12 + 0x36d) = uVar2;
    if (uVar7 == uVar11) {
      if (bVar3 == 0) {
        *(undefined2 *)(lVar12 + 0x374) = 0;
      }
      else {
        *(short *)(lVar12 + 0x374) = *(short *)(lVar12 + 0x374) + 1;
      }
    }
    else {
      *(ushort *)(lVar12 + 0x374) = (ushort)bVar3;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x1d);
    lVar8 = param_3[1];
    lVar9 = *(long *)(param_1 + 0x20);
    if (*(int *)(param_3[2] + 0x20) != 2) goto LAB_02a01f78;
    if (lVar8 == 0) goto LAB_02a01fac;
    if (*(byte *)(lVar8 + 0x391) == 0xff) {
      iVar6 = 0xff;
    }
    else {
      iVar6 = *(byte *)(lVar8 + 0x391) + 1;
      *(char *)(lVar8 + 0x391) = (char)iVar6;
    }
    uVar4 = *(undefined8 *)(lVar9 + 0x18);
    uVar2 = *(undefined1 *)(lVar8 + 0x7d);
  }
  FUN_02a3e6b8(uVar4,0x33,uVar2,5,iVar6);
LAB_02a01fac:
  if ((*(char *)((long)param_3 + 0x1b) != '\0') && ((*(byte *)(param_3[1] + 0x387) & 0x78) != 0)) {
    local_50 = param_3[1];
    FUN_029f8728(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1860),auStack_38,&local_50);
  }
  lVar8 = param_3[1];
  if ((*(byte *)(lVar8 + 0x385) >> 3 & 1) != 0) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6f,
                 *(undefined1 *)(lVar8 + 0x7d),0);
    local_50 = param_3[1];
    local_48 = 0x101;
    FUN_029e0ab8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9a0),auStack_38,&local_50);
    lVar8 = param_3[1];
  }
  FUN_0297b618(*(undefined8 *)(param_1 + 0x38),lVar8,*(undefined4 *)param_3[2],
               *(undefined1 *)((long)param_3 + 0x19),*param_3);
  lVar9 = *(long *)(param_1 + 0x20);
  bVar3 = *(byte *)(param_3[1] + 0x7d);
  lVar8 = *(long *)(lVar9 + 0x20);
  uVar1 = *(undefined4 *)((long)param_3 + 0x1c);
  FUN_02a17860(*(undefined8 *)(lVar8 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x10) + 8) + (ulong)bVar3 * 8 + 0x120),
               uVar1);
  FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x57,(ulong)bVar3,uVar1);
  lVar9 = *(long *)(param_1 + 0x20);
  bVar3 = *(byte *)(param_3[1] + 0x7d);
  lVar8 = *(long *)(lVar9 + 0x20);
  uVar1 = *(undefined4 *)param_3[2];
  FUN_02a17860(*(undefined8 *)(lVar8 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x10) + 8) + (ulong)bVar3 * 8 + 0x120),
               uVar1);
  FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x57,(ulong)bVar3,uVar1);
  return;
}


