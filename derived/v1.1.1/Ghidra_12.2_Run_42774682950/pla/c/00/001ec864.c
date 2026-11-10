/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ec864; name: FUN_001ec864
 */


int FUN_001ec864(undefined8 *param_1,long *param_2,long *param_3,long param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  void *__src;
  long lVar7;
  size_t sVar8;
  long lVar9;
  long *plVar10;
  long *plStack_70;
  ulong local_68;
  
  lVar5 = *param_2;
  plVar10 = (long *)*param_1;
  lVar9 = *(long *)(lVar5 + 0x1e8);
  uVar2 = *(undefined4 *)((long)param_2 + (long)param_5 * 4 + 600);
  __src = (void *)*plVar10;
  uVar6 = plVar10[2];
  sVar8 = uVar6;
  plStack_70 = plVar10;
  if ((((*(byte *)(param_2[0x84] + 0x84) & 1) != 0) || ((int)param_2[0x2f] == 2)) &&
     ((int)param_2[0x46] != 0x14)) {
    if (0x3fff < uVar6) {
      sVar8 = 0x4000;
    }
    iVar3 = FUN_001f90e0(lVar5);
    if (iVar3 != 0) goto LAB_001ec9c8;
    memcpy(*(void **)(lVar5 + 0x1138),__src,sVar8);
    __src = *(void **)(lVar5 + 0x1138);
  }
  iVar3 = FUN_001f3bd8(param_2,uVar2,__src,sVar8,&local_68);
  if (iVar3 == 0) {
    uVar1 = uVar6 - param_4;
    if (local_68 <= uVar6 - param_4) {
      uVar1 = local_68;
    }
    lVar7 = local_68 - uVar1;
    if (((*(byte *)(lVar5 + 0xf43) >> 2 & 1) != 0) &&
       (FUN_001f3a38(lVar5,2,__src,uVar1), lVar7 != 0)) {
      FUN_001f3a38(lVar5,4,(long)__src + uVar1,lVar7);
    }
    *param_3 = *param_3 + local_68;
    if (lVar9 == 0) {
      if (local_68 != uVar6) {
        return 0x37;
      }
      FUN_001f2374(param_2);
    }
    else {
      *(long *)(lVar5 + 0x108) = *(long *)(lVar5 + 0x108) + lVar7;
      FUN_001f3068(lVar5);
      if (uVar6 - local_68 != 0) {
        lVar7 = *plVar10;
        *(undefined8 *)(lVar9 + 0x1e8) = *(undefined8 *)(lVar5 + 0x1528);
        uVar4 = *(undefined8 *)(lVar5 + 0x1530);
        *(undefined8 *)(lVar9 + 0x1f8) = *(undefined8 *)(lVar9 + 0x10);
        *(undefined8 *)(lVar9 + 0x200) = *(undefined8 *)(lVar9 + 8);
        *(undefined8 *)(lVar9 + 0x1f0) = uVar4;
        *(undefined1 **)(lVar5 + 0x1528) = &LAB_001eca44;
        *(long **)(lVar5 + 0x1530) = param_2;
        *(ulong *)(lVar9 + 8) = uVar6 - local_68;
        *(ulong *)(lVar9 + 0x10) = lVar7 + local_68;
        *(long **)(lVar9 + 0x210) = plVar10;
        *(undefined4 *)(lVar9 + 0x208) = 1;
        return 0;
      }
      *(undefined4 *)(lVar9 + 0x208) = 2;
    }
  }
LAB_001ec9c8:
  FUN_001ec82c(&plStack_70);
  return iVar3;
}


