/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00232bf0; name: FUN_00232bf0
 */


long FUN_00232bf0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int *param_5,long param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 local_c0;
  char *local_b8;
  undefined8 *local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  *(undefined4 *)(param_6 + 0x40) = 0;
  *(undefined2 *)(param_6 + 0x44) = 0;
  *(undefined8 *)(param_6 + 0x48) = 0;
  *(undefined8 *)(param_6 + 200) = 0;
  if (param_5 == (int *)0x0) {
    if ((param_1[3] == 0) && (*(char *)(param_6 + 0xd0) != '\0')) {
      local_b8 = (char *)param_4[1];
      local_b0 = (undefined8 *)param_4[2];
      local_a8 = param_4[3];
      uStack_a0 = param_4[4];
      local_98 = param_4[5];
      uStack_90 = param_4[6];
      uStack_78 = param_4[9];
      local_88 = param_4[7];
      local_80 = param_4[8];
      local_70 = *(undefined4 *)(param_4 + 10);
      uStack_6c = 0;
      local_c0._4_4_ = (undefined4)((ulong)*param_4 >> 0x20);
      local_c0 = CONCAT44(local_c0._4_4_,0x31747270);
      local_68 = 0x3f8000003f800000;
      lVar9 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,0x31747270,&local_c0,0,param_6)
      ;
      *(long **)(lVar9 + 0xe8) = param_1;
      goto joined_r0x00232d2c;
    }
LAB_00232d60:
    puVar12 = (undefined8 *)0x0;
  }
  else if (param_1[3] == 0) {
    lVar9 = *(long *)(param_5 + 6);
joined_r0x00232d2c:
    puVar12 = (undefined8 *)0x0;
    if (lVar9 != 0) goto LAB_00232da4;
  }
  else {
    if (*param_5 < 1) goto LAB_00232d60;
    lVar4 = *(long *)(param_5 + 2);
    uVar7 = 0;
    lVar9 = lVar4;
    do {
      uVar11 = 0;
      while (cVar2 = *(char *)((long)param_4 + uVar11 + 0xc), cVar2 == *(char *)(lVar9 + uVar11)) {
        if ((cVar2 == '\0') || (uVar11 = uVar11 + 1, 0x17 < uVar11)) {
          uVar7 = uVar7 & 0xffffffff;
          if (lVar4 + uVar7 * 0x28 == 0) goto LAB_00232d60;
          uVar1 = *(uint *)(lVar4 + uVar7 * 0x28 + 0x1c);
          if (uVar1 == 0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            puVar12 = (undefined8 *)(*(long *)(param_5 + 4) + (ulong)uVar1);
          }
          lVar9 = lVar4 + uVar7 * 0x28;
          *(ushort *)(param_6 + 0x40) = (ushort)*(byte *)(lVar9 + 0x18);
          *(ushort *)(param_6 + 0x42) = (ushort)*(byte *)(lVar9 + 0x19);
          *(ushort *)(param_6 + 0x44) = (ushort)*(byte *)(lVar9 + 0x1a);
          if (*(uint *)(lVar9 + 0x24) == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(long *)(param_5 + 4) + (ulong)*(uint *)(lVar9 + 0x24);
          }
          *(long *)(param_6 + 0x48) = lVar9;
          puVar10 = (uint *)(lVar4 + uVar7 * 0x28 + 0x20);
          uVar1 = *puVar10;
          if (uVar1 != 0) {
            if (uVar1 == 1) {
LAB_00232f78:
              lVar9 = 0;
            }
            else {
              cVar2 = *(char *)(lVar4 + uVar7 * 0x28 + 0x1b);
              if (cVar2 == '\x01') goto LAB_00232f8c;
              if (cVar2 == '\x02') goto LAB_00232f78;
              lVar9 = *(long *)(param_5 + 4) + (ulong)uVar1;
            }
            *(long *)(param_6 + 0xc0) = lVar9;
          }
LAB_00232f8c:
          if (*(char *)(lVar4 + uVar7 * 0x28 + 0x1b) != '\0') {
            *(ulong *)(param_6 + 200) = *(long *)(param_5 + 4) + (ulong)*puVar10;
          }
          goto LAB_00232d64;
        }
      }
      uVar7 = uVar7 + 1;
      puVar12 = (undefined8 *)0x0;
      lVar9 = lVar9 + 0x28;
    } while (uVar7 != (long)*param_5);
  }
LAB_00232d64:
  lVar9 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_8,param_4,puVar12,param_6);
  if (lVar9 == 0) {
    return 0;
  }
LAB_00232da4:
  if (param_1[3] == 0) {
    param_1[3] = lVar9;
  }
  if (*(long *)(param_6 + 0x98) != 0) {
    FUN_00242d3c(*(long *)(param_6 + 0x98),lVar9);
  }
  if (param_8 == 0x31747270) {
    local_b0 = param_4;
    if (puVar12 != (undefined8 *)0x0) {
      local_b0 = puVar12;
    }
    local_b8 = (char *)(local_b0 + 0xc);
    uStack_a0 = param_7;
    if (puVar12 != (undefined8 *)0x0) {
      uStack_a0 = *(undefined8 *)(param_6 + 0x38);
    }
    iVar3 = *(int *)((long)local_b0 + 0x54);
    lVar4 = (long)iVar3;
    local_c0 = CONCAT44(local_c0._4_4_,iVar3);
    local_98 = CONCAT44((*(float *)(lVar9 + 0x54) / *(float *)(param_4 + 10)) *
                        *(float *)((long)local_b0 + 0x5c),
                        (*(float *)(lVar9 + 0x50) / *(float *)((long)param_4 + 0x4c)) *
                        *(float *)(local_b0 + 0xb));
    if ((0 < iVar3) && (pcVar8 = local_b8, *(int *)(param_6 + 0x94) < 0)) {
      do {
        if (*pcVar8 != '\0') {
          *(undefined4 *)(param_6 + 0x94) = *(undefined4 *)(param_6 + 0x90);
          break;
        }
        lVar4 = lVar4 + -1;
        pcVar8 = pcVar8 + 0x28;
      } while (lVar4 != 0);
    }
    *(long *)(param_6 + (long)*(int *)(param_6 + 0x90) * 8 + 0x50) = lVar9 + 0xb0;
    *(int *)(param_6 + 0x90) = *(int *)(param_6 + 0x90) + 1;
    local_a8 = lVar9;
    lVar4 = (**(code **)(*param_1 + 0xa0))
                      (param_1,param_2,param_3,
                       local_b0 + (ulong)*(uint *)((long)local_b0 + 0x54) * 5 + 0xc,&local_c0,
                       param_6);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar9 + 0xd8);
      lVar6 = *plVar5;
      *(long *)(lVar9 + 0xe8) = lVar4;
      param_1 = param_1 + 9;
      *plVar5 = *param_1;
      *(long **)(lVar6 + 8) = param_1;
      *(long **)(*param_1 + 8) = plVar5;
      *param_1 = lVar6;
    }
    *(int *)(param_6 + 0x90) = *(int *)(param_6 + 0x90) + -1;
    if (*(int *)(param_6 + 0x94) == 0) {
      *(undefined4 *)(param_6 + 0x94) = 0xffffffff;
    }
  }
  return lVar9;
}


