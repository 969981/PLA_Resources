/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a3dd8; name: FUN_031a3dd8
 */


undefined8 FUN_031a3dd8(float param_1,long param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  int local_14;
  
  iVar1 = *(int *)(param_2 + 0x40);
  if (0 < iVar1) {
    plVar2 = *(long **)(param_2 + 0x38);
    if ((*plVar2 == 0) || (lVar4 = *(long *)(*plVar2 + 0x20), lVar4 == 0)) {
      iVar3 = 0;
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      iVar3 = ((*(int *)(lVar4 + 0xd8) * 9 + *(int *)(lVar4 + 0x160) * -7) - *(int *)(lVar4 + 0x164)
              ) + *(int *)(lVar4 + 0xe8) * 3 + *(int *)(lVar4 + 0xf8);
      iVar6 = *(int *)(lVar4 + 0x160) + *(int *)(lVar4 + 0x164);
      iVar5 = *(int *)(lVar4 + 0xd8) + *(int *)(lVar4 + 0xe8);
    }
    if (iVar1 != 1) {
      if ((plVar2[0x1e] != 0) && (lVar4 = *(long *)(plVar2[0x1e] + 0x20), lVar4 != 0)) {
        iVar6 = *(int *)(lVar4 + 0x160) + iVar6 + *(int *)(lVar4 + 0x164);
        iVar5 = *(int *)(lVar4 + 0xd8) + iVar5 + *(int *)(lVar4 + 0xe8);
        iVar3 = ((*(int *)(lVar4 + 0xd8) * 9 + iVar3 + *(int *)(lVar4 + 0x160) * -7) -
                *(int *)(lVar4 + 0x164)) + *(int *)(lVar4 + 0xe8) * 3 + *(int *)(lVar4 + 0xf8);
      }
      if (iVar1 != 2) {
        lVar4 = (long)iVar1 + -2;
        plVar7 = plVar2 + 0x3c;
        do {
          if ((*plVar7 != 0) && (lVar8 = *(long *)(*plVar7 + 0x20), lVar8 != 0)) {
            iVar6 = *(int *)(lVar8 + 0x160) + iVar6 + *(int *)(lVar8 + 0x164);
            iVar5 = *(int *)(lVar8 + 0xd8) + iVar5 + *(int *)(lVar8 + 0xe8);
            iVar3 = ((*(int *)(lVar8 + 0xd8) * 9 + iVar3 + *(int *)(lVar8 + 0x160) * -7) -
                    *(int *)(lVar8 + 0x164)) + *(int *)(lVar8 + 0xe8) * 3 + *(int *)(lVar8 + 0xf8);
          }
          lVar4 = lVar4 + -1;
          plVar7 = plVar7 + 0x1e;
        } while (lVar4 != 0);
      }
    }
    if (iVar5 != 0) {
      fVar9 = (float)NEON_fminnm((float)iVar6 / ((float)iVar5 * param_1),0x3f800000);
      local_14 = (int)(fVar9 * (float)iVar3);
      if ((char)param_3[1] == '\x03') goto LAB_031a3f98;
      iVar1 = *param_3;
      while( true ) {
        iVar1 = FUN_031a3cd0(plVar2[(long)iVar1 * 0x1e],param_2,param_3,&local_14,param_4);
        if (iVar1 == 0) {
          FUN_033299e0(0x14c9c224);
          return 0;
        }
LAB_031a3f98:
        FUN_033299e0(0xeb69ee9e);
        iVar3 = *(int *)(param_2 + 0x40);
        if (iVar3 < 1) break;
        iVar6 = iVar3;
        iVar5 = *param_3;
        while( true ) {
          iVar1 = 0;
          if (iVar5 + 1 < iVar3) {
            iVar1 = iVar5 + 1;
          }
          *param_3 = iVar1;
          lVar4 = *(long *)(*(long *)(param_2 + 0x38) + (long)iVar1 * 0xf0);
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
             ((*(int *)(lVar4 + 0x164) != 0 || (*(int *)(lVar4 + 0x160) != 0)))) break;
          iVar6 = iVar6 + -1;
          iVar5 = iVar1;
          if (iVar6 == 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_3 + 1) = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        plVar2 = *(long **)(param_2 + 0x38);
      }
    }
  }
  return 1;
}


