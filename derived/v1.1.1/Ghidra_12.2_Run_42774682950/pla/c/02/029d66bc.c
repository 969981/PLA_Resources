/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d66bc; name: FUN_029d66bc
 */


void FUN_029d66bc(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  char local_90 [8];
  uint *local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined2 local_68;
  undefined1 local_66;
  
  lStack_80 = *param_3;
  local_88 = (uint *)param_3[1];
  lStack_70 = param_3[2];
  local_78 = param_3[3];
  local_66 = 0;
  local_68 = 0x32;
  FUN_029d59d0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x3a0),local_90,&local_88);
  lVar12 = param_3[3];
  if ((*(char *)(lVar12 + 0x5b) == '\0') && (*(char *)(lVar12 + 0x5d) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = *(char *)(lVar12 + 0x5a) == '\0';
  }
  lVar2 = *param_3;
  puVar3 = (uint *)param_3[1];
  lVar13 = param_3[2];
  FUN_0297cf94(*(undefined8 *)(param_1 + 0x38),puVar3,lVar2,lVar12);
  local_68 = 0x34;
  local_66 = 0;
  local_88 = puVar3;
  lStack_80 = lVar2;
  local_78 = lVar12;
  lStack_70 = lVar13;
  FUN_029d59d0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x3a0),local_90,&local_88);
  FUN_0297d46c(*(undefined8 *)(param_1 + 0x38),puVar3,lVar2,lVar12);
  lVar12 = *param_3;
  puVar3 = (uint *)param_3[1];
  lVar2 = param_3[2];
  plVar4 = (long *)param_3[3];
  lVar13 = (&DAT_0428af30)[(ulong)*puVar3 * 6];
  if (lVar13 == 0) {
    plVar9 = &DAT_0428af30;
  }
  else {
    plVar9 = &DAT_0428af30;
    if (*(char *)(lVar13 + 0x1e1) != '\0') {
      plVar9 = &DAT_0428af30 + (ulong)*puVar3 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
  if ((((0x50 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x28], uVar10 != 0)) &&
      (*(char *)((long)piVar1 + uVar10) != '\0')) &&
     (*(undefined1 *)((long)plVar4 + 0x5c) = 0, *(char *)((long)plVar4 + 0x5a) != '\0')) {
    lVar13 = *plVar4;
    *(undefined1 *)((long)plVar4 + 0x5c) = 1;
    while (lVar13 != 0) {
      if (*(char *)(lVar13 + 900) < '\0') {
        if ((*(byte *)(lVar13 + 0x386) & 1) != 0) {
          lVar8 = (&DAT_0428af30)[(ulong)*puVar3 * 6];
          if (lVar8 == 0) {
            plVar9 = &DAT_0428af30;
          }
          else {
            plVar9 = &DAT_0428af30;
            if (*(char *)(lVar8 + 0x1e1) != '\0') {
              plVar9 = &DAT_0428af30 + (ulong)*puVar3 * 6;
            }
          }
          piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
          if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
              (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar10 == 0)) ||
             (*(char *)((long)piVar1 + uVar10) == '\0')) goto LAB_029d6a20;
        }
        uVar10 = FUN_0298e5c8(*(undefined8 *)(param_1 + 0x38),lVar12,lVar13,puVar3);
        if ((uVar10 & 1) == 0) {
LAB_029d68e4:
          bVar5 = *(byte *)((long)plVar4 + 0x5a);
          uVar7 = puVar3[9];
          if (bVar5 != 0) {
            uVar10 = 0;
LAB_029d68f4:
            if (plVar4[uVar10] != lVar13) goto code_r0x029d6900;
            bVar11 = bVar5;
            if ((int)uVar10 + 1U < (uint)bVar5) {
              do {
                plVar9 = plVar4 + uVar10;
                uVar10 = uVar10 + 1;
                *plVar9 = plVar9[1];
                bVar11 = *(byte *)((long)plVar4 + 0x5a);
              } while ((int)uVar10 + 1U < (uint)bVar11);
            }
            *(byte *)((long)plVar4 + 0x5a) = bVar11 - 1;
            *(char *)((long)plVar4 + 0x5c) = *(char *)((long)plVar4 + 0x5c) + -1;
          }
LAB_029d6958:
          lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          uVar10 = (ulong)*(byte *)(lVar8 + 0x1c8);
          if ((((uint)(1 < bVar5) & (uVar7 & 8) >> 3) == 0) &&
             (*(char *)(lVar8 + uVar10 * 0x40 + 0x43) == '\0')) {
            lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x13c0);
            lVar14 = *(long *)(lVar8 + 0x20);
            uVar7 = FUN_0295462c(*(undefined8 *)(*(long *)(lVar14 + 0x10) + 0xa8),
                                 *(undefined1 *)(lVar13 + 0x7d));
            if ((uVar7 & 0xff) != 6) {
              FUN_02a3e6b8(*(undefined8 *)(lVar14 + 0x18),0x8a,uVar7,0x76);
            }
            FUN_02a3fa08(*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x18),0x9d,0xae,
                         *(undefined1 *)(lVar13 + 0x7d),0xffff0000);
            FUN_0297d944(*(undefined8 *)(lVar8 + 0x38),lVar12,lVar13,puVar3);
            lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
            uVar10 = (ulong)*(byte *)(lVar8 + 0x1c8);
          }
          *(undefined1 *)(lVar8 + uVar10 * 0x40 + 0x43) = 0;
        }
      }
      else {
        uVar10 = FUN_0298e5c8(*(undefined8 *)(param_1 + 0x38),lVar12,lVar13,puVar3);
        if ((uVar10 & 1) == 0) {
          local_66 = 1;
          local_68 = 0x38;
          local_88 = puVar3;
          lStack_80 = lVar12;
          local_78 = lVar13;
          lStack_70 = lVar2;
          FUN_029d5038(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x340),local_90,&local_88);
          if (local_90[0] != '\0') goto LAB_029d68e4;
        }
      }
LAB_029d6a20:
      bVar5 = *(byte *)((long)plVar4 + 0x5c);
      if (*(byte *)((long)plVar4 + 0x5a) <= bVar5) break;
      *(byte *)((long)plVar4 + 0x5c) = bVar5 + 1;
      lVar13 = plVar4[bVar5];
    }
  }
  lStack_80 = *param_3;
  local_88 = (uint *)param_3[1];
  lStack_70 = param_3[2];
  local_78 = param_3[3];
  local_66 = 0;
  local_68 = 0x39;
  FUN_029d59d0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x3a0),local_90,&local_88);
  if (((!bVar6) &&
      (((lVar12 = param_3[3], *(char *)(lVar12 + 0x5b) != '\0' || (*(char *)(lVar12 + 0x5d) != '\0')
        ) && (*(char *)(lVar12 + 0x5a) == '\0')))) && (param_3[4] != 0)) {
    uVar10 = (ulong)*(byte *)(*param_3 + 0x7d);
    lVar12 = *(long *)(param_1 + 0x20);
    if (uVar10 < 0x1e) {
      lVar2 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x10) + 0x128) + uVar10 * 4;
      *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x10;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x4f,uVar10,4);
    return;
  }
  return;
code_r0x029d6900:
  uVar10 = uVar10 + 1;
  if (bVar5 == uVar10) goto LAB_029d6958;
  goto LAB_029d68f4;
}


