/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091fdcc; name: FUN_0091fdcc
 */


void FUN_0091fdcc(long param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  long local_148;
  undefined5 local_140;
  undefined3 uStack_13b;
  undefined5 local_138;
  undefined4 local_130;
  long local_128;
  undefined5 uStack_120;
  undefined3 local_11b;
  undefined5 uStack_118;
  undefined4 local_110;
  long local_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined5 uStack_f8;
  undefined4 local_f0;
  long local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined5 uStack_d8;
  undefined4 local_d0;
  long local_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined5 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined5 uStack_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  
  local_148 = 0;
  cVar3 = *(char *)(*(long *)(param_4 + 0x70) + 0x7d);
  lVar13 = *(long *)(param_3 + 0x70);
  cVar4 = *(char *)(lVar13 + 0x7d);
  local_130 = 0;
  local_140 = 0;
  uStack_13b = 0;
  local_138 = 0;
  local_110 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_11b = 0;
  uStack_118 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_fb = 0;
  uStack_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  local_84 = 0x1f;
  local_80 = 0;
  cVar5 = *(char *)(lVar13 + 0x7d);
  bVar11 = *(byte *)(lVar13 + 0x391);
  cVar6 = *(char *)(*(long *)(param_4 + 0x70) + 0x7d);
  FUN_0091abfc(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x110),&local_148);
  lVar13 = local_148;
  lVar14 = *(long *)(param_3 + 0x70);
  local_84 = *(undefined1 *)(lVar14 + 0x7d);
  local_80 = *(undefined4 *)(param_3 + 0xac);
  uVar8 = *(undefined2 *)(lVar14 + 0x70);
  uVar7 = *(undefined1 *)(lVar14 + 0x369);
  if ((local_148 == 0) || (*(char *)(*(long *)(local_148 + 0x70) + 0x7d) != cVar5)) {
    if ((local_128 != 0) && (*(char *)(*(long *)(local_128 + 0x70) + 0x7d) == cVar5)) {
      plVar15 = &local_128;
      goto LAB_0091fed4;
    }
    if ((local_108 != 0) && (*(char *)(*(long *)(local_108 + 0x70) + 0x7d) == cVar5)) {
      plVar15 = &local_108;
      goto LAB_0091fed4;
    }
    if ((local_e8 != 0) && (*(char *)(*(long *)(local_e8 + 0x70) + 0x7d) == cVar5)) {
      plVar15 = &local_e8;
      goto LAB_0091fed4;
    }
    if ((local_c8 != 0) && (*(char *)(*(long *)(local_c8 + 0x70) + 0x7d) == cVar5)) {
      plVar15 = &local_c8;
      goto LAB_0091fed4;
    }
    if ((local_a8 != 0) && (*(char *)(*(long *)(local_a8 + 0x70) + 0x7d) == cVar5)) {
      plVar15 = &local_a8;
      goto LAB_0091fed4;
    }
  }
  else {
    plVar15 = &local_148;
LAB_0091fed4:
    lVar14 = *(long *)(*(long *)(param_1 + 0x68) + 0x110);
    iVar9 = FUN_00929498(*(undefined8 *)(*(long *)(lVar14 + 0x68) + 0xe0),uVar8,uVar7,param_5,
                         param_6);
    if ((param_6 == 2) && (iVar9 < 0)) {
      iVar10 = FUN_00929498(*(undefined8 *)(*(long *)(lVar14 + 0x68) + 0xe0),uVar8,uVar7,param_5,0);
      bVar12 = bVar11;
      if (3 < bVar11) {
        bVar12 = 4;
      }
      fVar16 = powf(3.0,(float)bVar12);
      iVar9 = (int)(float)(int)((float)iVar9 / fVar16);
      iVar1 = -iVar9;
      if (-1 < iVar9) {
        iVar1 = iVar9;
      }
      iVar2 = -iVar10;
      if (-1 < iVar10) {
        iVar2 = iVar10;
      }
      if (iVar1 < iVar2) {
        iVar9 = iVar10;
      }
    }
    *(int *)(plVar15 + 2) = iVar9;
  }
  if ((lVar13 == 0) || (*(char *)(*(long *)(lVar13 + 0x70) + 0x7d) != cVar6)) {
    if ((local_128 != 0) && (*(char *)(*(long *)(local_128 + 0x70) + 0x7d) == cVar6)) {
      plVar15 = &local_128;
      goto LAB_0091ff28;
    }
    if ((local_108 != 0) && (*(char *)(*(long *)(local_108 + 0x70) + 0x7d) == cVar6)) {
      plVar15 = &local_108;
      goto LAB_0091ff28;
    }
    if ((local_e8 != 0) && (*(char *)(*(long *)(local_e8 + 0x70) + 0x7d) == cVar6)) {
      plVar15 = &local_e8;
      goto LAB_0091ff28;
    }
    if ((local_c8 != 0) && (*(char *)(*(long *)(local_c8 + 0x70) + 0x7d) == cVar6)) {
      plVar15 = &local_c8;
      goto LAB_0091ff28;
    }
    if ((local_a8 != 0) && (*(char *)(*(long *)(local_a8 + 0x70) + 0x7d) == cVar6)) {
      plVar15 = &local_a8;
      goto LAB_0091ff28;
    }
  }
  else {
    plVar15 = &local_148;
LAB_0091ff28:
    lVar13 = *(long *)(*(long *)(param_1 + 0x68) + 0x110);
    iVar9 = FUN_00929ec4(*(undefined8 *)(*(long *)(lVar13 + 0x68) + 0xe0),uVar8,uVar7,param_5,
                         param_6);
    if ((param_6 == 2) && (0 < iVar9)) {
      iVar10 = FUN_00929ec4(*(undefined8 *)(*(long *)(lVar13 + 0x68) + 0xe0),uVar8,uVar7,param_5,0);
      if (3 < bVar11) {
        bVar11 = 4;
      }
      fVar16 = powf(3.0,(float)bVar11);
      iVar9 = (int)(float)(int)((float)iVar9 / fVar16);
      iVar1 = -iVar9;
      if (-1 < iVar9) {
        iVar1 = iVar9;
      }
      iVar2 = -iVar10;
      if (-1 < iVar10) {
        iVar2 = iVar10;
      }
      if (iVar1 < iVar2) {
        iVar9 = iVar10;
      }
    }
    *(int *)(plVar15 + 2) = iVar9;
  }
  FUN_0091adf0(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x110),&local_148);
  if ((local_148 == 0) || (*(char *)(*(long *)(local_148 + 0x70) + 0x7d) != cVar4)) {
    if ((local_128 != 0) && (*(char *)(*(long *)(local_128 + 0x70) + 0x7d) == cVar4)) {
      plVar15 = &local_128;
      goto LAB_00920004;
    }
    if ((local_108 != 0) && (*(char *)(*(long *)(local_108 + 0x70) + 0x7d) == cVar4)) {
      plVar15 = &local_108;
      goto LAB_00920004;
    }
    if (((local_e8 == 0) ||
        (iVar9 = local_e0, *(char *)(*(long *)(local_e8 + 0x70) + 0x7d) != cVar4)) &&
       ((local_c8 == 0 || (iVar9 = local_c0, *(char *)(*(long *)(local_c8 + 0x70) + 0x7d) != cVar4))
       )) {
      if ((local_a8 == 0) || (*(char *)(*(long *)(local_a8 + 0x70) + 0x7d) != cVar4)) {
        iVar9 = 0;
        goto joined_r0x009203b0;
      }
      goto joined_r0x00920380;
    }
joined_r0x009203b0:
    local_a0 = iVar9;
    if (local_148 != 0) goto LAB_00920014;
LAB_0092021c:
    if ((local_128 == 0) || (*(char *)(*(long *)(local_128 + 0x70) + 0x7d) != cVar3)) {
      if ((local_108 == 0) || (*(char *)(*(long *)(local_108 + 0x70) + 0x7d) != cVar3)) {
        if ((local_e8 == 0) || (*(char *)(*(long *)(local_e8 + 0x70) + 0x7d) != cVar3)) {
          if ((local_c8 == 0) || (*(char *)(*(long *)(local_c8 + 0x70) + 0x7d) != cVar3)) {
            iVar9 = 0;
            if (local_a8 == 0) goto LAB_0092002c;
            if (*(char *)(*(long *)(local_a8 + 0x70) + 0x7d) != cVar3) {
              iVar9 = 0;
              goto LAB_0092002c;
            }
            plVar15 = &local_a8;
          }
          else {
            plVar15 = &local_c8;
          }
        }
        else {
          plVar15 = &local_e8;
        }
      }
      else {
        plVar15 = &local_108;
      }
    }
    else {
      plVar15 = &local_128;
    }
  }
  else {
    plVar15 = &local_148;
LAB_00920004:
    local_a0 = (int)plVar15[1];
joined_r0x00920380:
    if (local_148 == 0) goto LAB_0092021c;
LAB_00920014:
    if (*(char *)(*(long *)(local_148 + 0x70) + 0x7d) != cVar3) goto LAB_0092021c;
    plVar15 = &local_148;
  }
  iVar9 = (int)plVar15[1];
LAB_0092002c:
  *(bool *)param_2 = local_a0 < iVar9;
  return;
}


