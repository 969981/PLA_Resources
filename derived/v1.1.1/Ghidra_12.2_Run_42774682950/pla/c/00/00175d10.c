/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00175d10; name: FUN_00175d10
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00175d10(long param_1,double *param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  double local_40;
  uint local_38;
  
  uVar9 = *(uint *)(param_2 + 1);
  uVar1 = *(uint *)(param_3 + 1);
  if ((uVar9 & 0x3f) != (uVar1 & 0x3f)) {
    if ((uVar9 & 0xf) != 3 || (uVar9 & 0xf) != (uVar1 & 0xf)) {
      return 0;
    }
    if (uVar9 == 0x13) {
      dVar10 = *param_2;
    }
    else {
      while (uVar9 != 0x13) {
        if (uVar9 == 3) {
          dVar10 = (double)(long)*param_2;
          bVar3 = true;
          bVar5 = false;
          if (*param_2 == dVar10) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN(dVar10)) {
              bVar3 = dVar10 < -9.223372036854776e+18;
              bVar5 = false;
            }
          }
          bVar4 = false;
          if ((bVar3 == bVar5) && (bVar4 = false, !NAN(dVar10))) {
            bVar4 = dVar10 < 9.223372036854776e+18;
          }
          if (!bVar4) {
            return 0;
          }
          dVar10 = (double)(long)dVar10;
          uVar1 = *(uint *)(param_3 + 1);
          goto joined_r0x0017602c;
        }
        if ((uVar9 & 0xf) != 4) {
          return 0;
        }
        lVar7 = FUN_00162710((long)*param_2 + 0x18,&local_40);
        dVar10 = *param_2;
        if (*(char *)((long)dVar10 + 8) == '\x04') {
          uVar6 = (ulong)*(byte *)((long)dVar10 + 0xb);
        }
        else {
          uVar6 = *(ulong *)((long)dVar10 + 0x10);
        }
        if (lVar7 != uVar6 + 1) {
          return 0;
        }
        param_2 = &local_40;
        uVar9 = local_38;
      }
      dVar10 = *param_2;
      uVar1 = *(uint *)(param_3 + 1);
    }
joined_r0x0017602c:
    if (uVar1 != 0x13) {
      while (uVar1 != 0x13) {
        if (uVar1 == 3) {
          dVar8 = (double)(long)*param_3;
          bVar3 = true;
          bVar5 = false;
          if (*param_3 == dVar8) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN(dVar8)) {
              bVar3 = dVar8 < -9.223372036854776e+18;
              bVar5 = false;
            }
          }
          bVar4 = false;
          if ((bVar3 == bVar5) && (bVar4 = false, !NAN(dVar8))) {
            bVar4 = dVar8 < 9.223372036854776e+18;
          }
          if (!bVar4) {
            return 0;
          }
          dVar8 = (double)(long)dVar8;
          goto LAB_00175dc4;
        }
        if ((uVar1 & 0xf) != 4) {
          return 0;
        }
        lVar7 = FUN_00162710((long)*param_3 + 0x18,&local_40);
        dVar8 = *param_3;
        if (*(char *)((long)dVar8 + 8) == '\x04') {
          uVar6 = (ulong)*(byte *)((long)dVar8 + 0xb);
        }
        else {
          uVar6 = *(ulong *)((long)dVar8 + 0x10);
        }
        param_3 = &local_40;
        uVar1 = local_38;
        if (lVar7 != uVar6 + 1) {
          return 0;
        }
      }
    }
    dVar8 = *param_3;
LAB_00175dc4:
    return (ulong)(dVar10 == dVar8);
  }
  uVar6 = 1;
  switch(uVar9 & 0x3f) {
  case 0:
    break;
  case 1:
    uVar6 = (ulong)(*(int *)param_2 == *(int *)param_3);
    break;
  default:
    uVar6 = (ulong)(*param_2 == *param_3);
    break;
  case 3:
    uVar6 = (ulong)(*param_2 == *param_3);
    break;
  case 5:
    dVar10 = *param_3;
    if (*param_2 != dVar10) {
      if (param_1 == 0) {
        return 0;
      }
      lVar7 = *(long *)((long)*param_2 + 0x28);
      if ((lVar7 == 0) || ((*(byte *)(lVar7 + 10) >> 5 & 1) != 0)) {
LAB_00175ea0:
        lVar7 = *(long *)((long)dVar10 + 0x28);
        if (lVar7 == 0) {
          return 0;
        }
        goto LAB_00175ef4;
      }
      lVar7 = FUN_001738a0(lVar7,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x108));
      if (lVar7 == 0) {
        dVar10 = *param_3;
        goto LAB_00175ea0;
      }
      goto LAB_00175f14;
    }
    goto LAB_00175f6c;
  case 7:
    dVar10 = *param_3;
    if (*param_2 == dVar10) goto LAB_00175f6c;
    if (param_1 == 0) {
      return 0;
    }
    lVar7 = *(long *)((long)*param_2 + 0x10);
    if ((lVar7 != 0) && ((*(byte *)(lVar7 + 10) >> 5 & 1) == 0)) {
      lVar7 = FUN_001738a0(lVar7,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x108));
      if (lVar7 != 0) goto LAB_00175f14;
      dVar10 = *param_3;
    }
    lVar7 = *(long *)((long)dVar10 + 0x10);
    if (lVar7 == 0) {
      return 0;
    }
LAB_00175ef4:
    if ((*(byte *)(lVar7 + 10) >> 5 & 1) != 0) {
      return 0;
    }
    lVar7 = FUN_001738a0(lVar7,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x108));
    if (lVar7 == 0) {
      return 0;
    }
LAB_00175f14:
    FUN_00173a20(param_1,lVar7,param_2,param_3,*(undefined8 *)(param_1 + 0x10),1);
    iVar2 = (*(int **)(param_1 + 0x10))[2];
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 == 1) {
      return (ulong)(**(int **)(param_1 + 0x10) != 0);
    }
LAB_00175f6c:
    uVar6 = 1;
    break;
  case 0x14:
    uVar6 = FUN_0016d230(*param_2,*param_3);
    return uVar6;
  }
  return uVar6;
}


