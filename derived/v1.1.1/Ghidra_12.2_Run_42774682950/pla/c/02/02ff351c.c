/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff351c; name: FUN_02ff351c
 */


int FUN_02ff351c(long param_1,long param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  plVar13 = (long *)(param_1 + 0x40);
  uStack_288 = *(undefined8 *)(param_5 + 4);
  lVar1 = 0;
  if (*plVar13 != 0) {
    lVar1 = *plVar13 + (long)plVar13;
  }
  local_298 = *(undefined8 *)param_5;
  local_290 = *(undefined8 *)(param_5 + 2);
  if (param_4 == 0xffffffff) {
    param_4 = 0;
    iVar2 = -1;
    iVar11 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar11 = param_4 + 1 << (ulong)(*(byte *)(lVar1 + 0x1c) & 0x1f);
    param_4 = param_4 >> (ulong)(-(uint)*(byte *)(lVar1 + 0x1c) & 0x1f);
    iVar2 = iVar11 + -1;
    if (iVar11 == 0) {
      param_4 = param_4 + 1;
    }
    iVar11 = *(int *)(param_1 + 0x50);
  }
  if (iVar11 == 0) {
    FUN_0331fefc(auStack_280,auStack_270,0x200);
    FUN_0332448c(auStack_280,
                 "Trying to get enabled instances without calling MaskWriter::commitChanges() after modifying the mask. The result might be wrong. Please call commitChanges first."
                );
    FUN_03320af0(0x50ec5c95,auStack_270,
                 "../..\\Physics/Physics/Collide/Shape/Decorator/Masked/Compound/hknpMaskedCompoundShape.inl"
                 ,0x12);
    FUN_0331ff7c(auStack_280);
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_02ff37d8;
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    uVar10 = 0;
LAB_02ff3610:
    iVar11 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x50);
      uVar6 = uVar10;
      if ((iVar4 != 0) && (0 < *(int *)(param_1 + 0x98))) {
        uVar6 = (uint)*(ushort *)
                       (param_1 + 0x90 + (long)(int)uVar10 * 2 + *(long *)(param_1 + 0x90));
      }
      uVar6 = uVar6 & 0xffff;
      if ((int)param_4 <= (int)uVar6) {
        iVar4 = param_5[1] + (uint)*(byte *)(lVar1 + 0x1c);
        local_298 = CONCAT44(iVar4,(uVar6 + 1 << (ulong)(-iVar4 & 0x1f)) - 1 |
                                   (&DAT_03aa74b0)[(int)param_5[1]] & *param_5);
        local_290 = 0;
        plVar5 = (long *)(lVar1 + 0x48 + (ulong)uVar6 * 0x40 + *(long *)(lVar1 + 0x48) + 0x30);
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar7 + (long)plVar5;
        }
        iVar2 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar7 + 0x18) * 0x200 + 0xb0))
                          (lVar7,param_2 + (long)iVar11 * 4,param_3 - iVar11,iVar2,&local_298);
        iVar11 = iVar2 + iVar11;
        if (iVar11 == param_3) {
          return param_3;
        }
        iVar4 = *(int *)(param_1 + 0x50);
        iVar2 = -1;
      }
      if ((iVar4 == 0) || (*(int *)(param_1 + 0x98) < 1)) {
        lVar7 = 0;
        if (*plVar13 != 0) {
          lVar7 = *plVar13 + (long)plVar13;
        }
        lVar8 = *(long *)(param_1 + 0x48);
        uVar6 = *(uint *)(lVar7 + 0x50);
        uVar10 = uVar10 + 1;
        lVar9 = 0;
        if (lVar8 != 0) {
          lVar9 = lVar8 + param_1 + 0x48;
        }
        if ((int)uVar6 <= (int)uVar10) {
          return iVar11;
        }
        plVar5 = (long *)(lVar7 + 0x48);
        while (((uVar12 = (ulong)(uVar10 & 0xffff),
                (*(byte *)((long)plVar5 + uVar12 * 0x40 + *plVar5 + 0x1e) & 1) != 0 ||
                (uVar3 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar9 + 0x18) * 0x40 + 0x4040)
                         )(lVar9,uVar12), (uVar3 & 1) == 0)) ||
               ((*(byte *)((long)plVar5 + uVar12 * 0x40 + *plVar5 + 0x1e) >> 6 & 1) == 0))) {
          uVar10 = uVar10 + 1;
          if (uVar6 == uVar10) {
            return iVar11;
          }
        }
      }
      else {
        uVar10 = uVar10 + 1;
        if (*(int *)(param_1 + 0x98) <= (int)uVar10) {
          return iVar11;
        }
      }
      if (uVar10 == 0xffffffff) {
        return iVar11;
      }
    } while( true );
  }
LAB_02ff37d8:
  lVar9 = *(long *)(param_1 + 0x48);
  lVar7 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar7 = *(long *)(param_1 + 0x40) + (long)plVar13;
  }
  uVar6 = *(uint *)(lVar7 + 0x50);
  lVar8 = 0;
  if (lVar9 != 0) {
    lVar8 = lVar9 + param_1 + 0x48;
  }
  if (0 < (int)uVar6) {
    uVar10 = 0;
    plVar5 = (long *)(lVar7 + 0x48);
    do {
      uVar12 = (ulong)(uVar10 & 0xffff);
      if ((((*(byte *)((long)plVar5 + uVar12 * 0x40 + *plVar5 + 0x1e) & 1) == 0) &&
          (uVar3 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar8 + 0x18) * 0x40 + 0x4040))
                             (lVar8,uVar12), (uVar3 & 1) != 0)) &&
         ((*(byte *)((long)plVar5 + uVar12 * 0x40 + *plVar5 + 0x1e) >> 6 & 1) != 0))
      goto LAB_02ff3610;
      uVar10 = uVar10 + 1;
    } while (uVar6 != uVar10);
  }
  return 0;
}


