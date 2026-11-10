/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f426f4; name: FUN_02f426f4
 */


ulong FUN_02f426f4(long param_1,uint param_2,int param_3,undefined4 *param_4,uint param_5,
                  uint *param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  uint uVar7;
  
  puVar5 = *(undefined4 **)(param_1 + 0x100);
  uVar2 = puVar5[(ulong)*(uint *)(param_1 + 0x108) * 4 + -3] - puVar5[1];
  if (uVar2 < param_2) {
LAB_02f42744:
    return 2;
  }
  if (param_3 == 7) {
    *param_6 = uVar2;
    *param_4 = *(undefined4 *)
                (*(long *)(param_1 + 0x100) + (ulong)*(uint *)(param_1 + 0x108) * 0x10 + -0x10);
    return 1;
  }
  switch(param_3) {
  case 0:
    *param_4 = 0;
    *param_6 = param_2;
    return 1;
  case 1:
    if ((*(byte *)(param_1 + 0xf4) >> 2 & 1) == 0) {
      do {
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 == 0) break;
        param_1 = lVar6;
      } while ((*(byte *)(lVar6 + 0xf4) >> 2 & 1) == 0);
    }
    iVar1 = *(int *)(param_1 + 0xec);
    uVar7 = *(uint *)(param_1 + 0xf0);
    param_2 = (param_5 & 1) + param_2;
    *param_6 = uVar7;
    if (iVar1 == 0) {
      uVar7 = param_2 + 1;
    }
    else {
      if (param_2 <= uVar7) goto LAB_02f42828;
      do {
        uVar7 = uVar7 + iVar1;
      } while (uVar7 < param_2);
    }
    *param_6 = uVar7;
    goto LAB_02f42828;
  case 2:
    if ((*(byte *)(param_1 + 0xf4) >> 2 & 1) == 0) {
      do {
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 == 0) break;
        param_1 = lVar6;
      } while ((*(byte *)(lVar6 + 0xf4) >> 2 & 1) == 0);
    }
    iVar1 = *(int *)(param_1 + 0xe8);
    param_2 = (param_5 & 1) + param_2;
    *param_6 = 0;
    if (iVar1 == 0) {
LAB_02f428d8:
      uVar7 = param_2 + 1;
    }
    else {
      uVar7 = 0;
      if (param_2 == 0) goto LAB_02f42828;
      do {
        uVar7 = uVar7 + iVar1;
      } while (uVar7 < param_2);
    }
    break;
  case 3:
    if ((*(byte *)(param_1 + 0xf4) >> 2 & 1) == 0) {
      do {
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 == 0) break;
        param_1 = lVar6;
      } while ((*(byte *)(lVar6 + 0xf4) >> 2 & 1) == 0);
    }
    iVar1 = *(int *)(param_1 + 0xe4);
    param_2 = (param_5 & 1) + param_2;
    *param_6 = 0;
    if (iVar1 == 0) goto LAB_02f428d8;
    uVar7 = 0;
    if (param_2 == 0) goto LAB_02f42828;
    do {
      uVar7 = uVar7 + iVar1;
    } while (uVar7 < param_2);
    break;
  case 4:
    uVar2 = FUN_02f428e8(param_1,param_2,param_4,param_5 & 1);
    *param_6 = uVar2;
    return 1;
  case 5:
    uVar3 = FUN_02f42994(param_1,param_2,param_4,param_6);
    return uVar3;
  case 6:
    if (param_2 != 0) {
      return 2;
    }
    if ((param_5 & 1) == 0) {
      *param_4 = *puVar5;
      *param_6 = 0;
      return 1;
    }
    return 2;
  default:
    goto LAB_02f42744;
  }
  *param_6 = uVar7;
LAB_02f42828:
  uVar4 = 1;
  if (uVar2 < uVar7) {
    uVar4 = 2;
  }
  *param_4 = 0;
  return (ulong)uVar4;
}


