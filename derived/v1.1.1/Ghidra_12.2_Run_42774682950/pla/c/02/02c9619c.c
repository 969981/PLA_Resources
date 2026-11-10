/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9619c; name: FUN_02c9619c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c9619c(undefined8 param_1,undefined8 *param_2,float *param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_748 [4];
  undefined4 local_744;
  undefined4 local_73c;
  int local_738;
  uint local_734;
  undefined4 local_730;
  uint local_72c;
  undefined4 local_718;
  float local_714;
  undefined4 local_710;
  float local_70c;
  undefined1 auStack_3d8 [128];
  float local_358 [7];
  float afStack_33c [25];
  undefined1 auStack_2d8 [128];
  float local_258 [7];
  float afStack_23c [126];
  float fStack_44;
  
  uVar2 = _DAT_03888fc0;
  fVar11 = 1.0;
  param_2[1] = _UNK_03888fc8;
  *param_2 = uVar2;
  iVar1 = *(int *)(param_4 + 8);
  if (iVar1 == 1) {
    lVar6 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    if (*(char *)(lVar6 + 0x99c) != '\x02') {
      if (*(char *)(lVar6 + 0x99c) == '\0') {
        uVar2 = *(undefined8 *)(lVar6 + 0x9a0);
        param_2[1] = (ulong)*(uint *)(lVar6 + 0x9a8);
        *param_2 = uVar2;
        fVar11 = *(float *)(lVar6 + 0x9ac);
      }
      goto joined_r0x02c9664c;
    }
    pvVar3 = memcpy(auStack_748,(void *)(lVar6 + 0x50),0x700);
    FUN_02c966a4(*(float *)(param_5 + 0x44) - *(float *)(*(long *)(param_5 + 0xb0) + 8),local_718,
                 *(undefined4 *)(*(long *)(param_5 + 0xb0) + 0xc),pvVar3,param_2,local_738,
                 auStack_3d8,*(undefined1 *)(lVar6 + 0x8d8));
    fVar11 = local_358[0];
    if (8 < (int)local_734) goto joined_r0x02c9664c;
    fVar7 = *(float *)(param_5 + 0x44) - *(float *)(*(long *)(param_5 + 0xb0) + 8);
    if (*(char *)(lVar6 + 0x8d9) == '\0') {
      fVar9 = *(float *)(*(long *)(param_5 + 0xb0) + 0xc);
      fVar8 = 0.0;
      if (1.1920929e-07 < fVar9) {
        fVar8 = fVar7 / fVar9;
      }
    }
    else if (1.1920929e-07 < local_714) {
      fVar8 = modff(fVar7 / local_714,&fStack_44);
    }
    else {
      fVar8 = 0.0;
    }
    if ((local_734 == 1) || (fVar8 < local_358[3])) goto joined_r0x02c9664c;
    if (local_358[((long)(int)local_734 + -1) * 4 + 3] <= fVar8) {
      fVar11 = local_358[((long)(int)local_734 + -1) * 4];
      goto joined_r0x02c9664c;
    }
    if ((int)local_734 < 1) goto joined_r0x02c9664c;
    uVar4 = 0;
    lVar6 = -0x100000000;
    pfVar5 = afStack_33c;
    do {
      if ((ulong)local_734 - 1 == uVar4) goto joined_r0x02c9664c;
      fVar7 = *pfVar5;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x100000000;
      pfVar5 = pfVar5 + 4;
    } while (fVar7 <= fVar8);
    fVar11 = *(float *)((long)local_358 + (lVar6 >> 0x1c));
    fVar7 = *(float *)((long)local_358 + (lVar6 >> 0x1c) + 0xc);
    fVar9 = local_358[(uVar4 & 0xffffffff) * 4 + 3] - fVar7;
    if (fVar9 <= 1.1920929e-07) goto joined_r0x02c9664c;
    fVar10 = local_358[(uVar4 & 0xffffffff) * 4];
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 4) {
        pvVar3 = memcpy(auStack_748,(void *)(param_4 + 0xc),0x94);
        FUN_02c966a4(*(float *)(param_5 + 0x44) - *(float *)(*(long *)(param_5 + 0xb0) + 8),
                     (float)local_738,*(undefined4 *)(*(long *)(param_5 + 0xb0) + 0xc),pvVar3,
                     param_2,local_73c,&local_734,local_744);
        fVar11 = 1.0;
      }
      goto joined_r0x02c9664c;
    }
    lVar6 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    if (*(char *)(lVar6 + 0x99d) != '\x02') {
      if (*(char *)(lVar6 + 0x99d) == '\0') {
        uVar2 = *(undefined8 *)(lVar6 + 0x9b0);
        param_2[1] = (ulong)*(uint *)(lVar6 + 0x9b8);
        *param_2 = uVar2;
        fVar11 = *(float *)(lVar6 + 0x9bc);
      }
      goto joined_r0x02c9664c;
    }
    pvVar3 = memcpy(auStack_748,(void *)(lVar6 + 0x50),0x700);
    FUN_02c966a4(*(float *)(param_5 + 0x44) - *(float *)(*(long *)(param_5 + 0xb0) + 8),local_710,
                 *(undefined4 *)(*(long *)(param_5 + 0xb0) + 0xc),pvVar3,param_2,local_730,
                 auStack_2d8,*(undefined1 *)(lVar6 + 0x8d8));
    fVar11 = local_258[0];
    if (8 < (int)local_72c) goto joined_r0x02c9664c;
    fVar7 = *(float *)(param_5 + 0x44) - *(float *)(*(long *)(param_5 + 0xb0) + 8);
    if (*(char *)(lVar6 + 0x8db) == '\0') {
      fVar9 = *(float *)(*(long *)(param_5 + 0xb0) + 0xc);
      fVar8 = 0.0;
      if (1.1920929e-07 < fVar9) {
        fVar8 = fVar7 / fVar9;
      }
    }
    else if (1.1920929e-07 < local_70c) {
      fVar8 = modff(fVar7 / local_70c,&fStack_44);
    }
    else {
      fVar8 = 0.0;
    }
    if ((local_72c == 1) || (fVar8 < local_258[3])) goto joined_r0x02c9664c;
    if (local_258[((long)(int)local_72c + -1) * 4 + 3] <= fVar8) {
      fVar11 = local_258[((long)(int)local_72c + -1) * 4];
      goto joined_r0x02c9664c;
    }
    if ((int)local_72c < 1) goto joined_r0x02c9664c;
    uVar4 = 0;
    lVar6 = -0x100000000;
    pfVar5 = afStack_23c;
    do {
      if ((ulong)local_72c - 1 == uVar4) goto joined_r0x02c9664c;
      fVar7 = *pfVar5;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x100000000;
      pfVar5 = pfVar5 + 4;
    } while (fVar7 <= fVar8);
    fVar11 = *(float *)((long)local_258 + (lVar6 >> 0x1c));
    fVar7 = *(float *)((long)local_258 + (lVar6 >> 0x1c) + 0xc);
    fVar9 = local_258[(uVar4 & 0xffffffff) * 4 + 3] - fVar7;
    if (fVar9 <= 1.1920929e-07) goto joined_r0x02c9664c;
    fVar10 = local_258[(uVar4 & 0xffffffff) * 4];
  }
  fVar11 = fVar11 + (fVar10 - fVar11) * (1.0 / fVar9) * (fVar8 - fVar7);
joined_r0x02c9664c:
  if (param_3 != (float *)0x0) {
    *param_3 = fVar11;
  }
  return;
}


