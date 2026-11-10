/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00564d80; name: FUN_00564d80
 */


void FUN_00564d80(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  long lVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  
  if (param_3 == 1) {
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        puVar2 = (undefined2 *)(*(long *)(param_2 + 0x10) + lVar10);
        FUN_005644b4(param_1,*puVar2,puVar2[1],param_4);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 4;
      } while (lVar11 < *(int *)(param_2 + 0x18));
    }
    if (0 < *(int *)(param_2 + 0x28)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        puVar3 = (undefined4 *)(*(long *)(param_2 + 0x20) + lVar10);
        FUN_005644b4(param_1,*puVar3,puVar3[1],param_4);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar11 < *(int *)(param_2 + 0x28));
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      iVar6 = *(int *)(param_2 + 0x18);
      if (iVar6 < 1) {
        uVar5 = 0;
      }
      else {
        puVar7 = *(ushort **)(param_2 + 0x10);
        lVar11 = 0;
        uVar5 = 0;
        uVar4 = *puVar7;
        lVar10 = 0;
        if (uVar4 != 0) goto LAB_00564e80;
        while( true ) {
          lVar1 = lVar10 + 4;
          lVar11 = lVar11 + 1;
          uVar5 = *(ushort *)((long)puVar7 + lVar10 + 2) + 1;
          if (iVar6 <= lVar11) break;
          uVar4 = *(ushort *)((long)puVar7 + lVar1);
          lVar10 = lVar1;
          if (uVar5 < uVar4) {
LAB_00564e80:
            FUN_005644b4(param_1,uVar5,uVar4 - 1,param_4);
            puVar7 = *(ushort **)(param_2 + 0x10);
            iVar6 = *(int *)(param_2 + 0x18);
          }
        }
      }
      iVar6 = *(int *)(param_2 + 0x28);
      if (0 < iVar6) {
        piVar8 = *(int **)(param_2 + 0x20);
        lVar11 = 0;
        iVar9 = *piVar8;
        lVar10 = 0;
        if ((int)uVar5 < iVar9) goto LAB_00564fc0;
        while( true ) {
          lVar1 = lVar10 + 8;
          lVar11 = lVar11 + 1;
          uVar5 = *(int *)((long)piVar8 + lVar10 + 4) + 1;
          if (iVar6 <= lVar11) break;
          iVar9 = *(int *)((long)piVar8 + lVar1);
          lVar10 = lVar1;
          if ((int)uVar5 < iVar9) {
LAB_00564fc0:
            FUN_005644b4(param_1,uVar5,iVar9 + -1,param_4);
            piVar8 = *(int **)(param_2 + 0x20);
            iVar6 = *(int *)(param_2 + 0x28);
          }
        }
        if (0x10ffff < (int)uVar5) {
          return;
        }
      }
      FUN_005644b4(param_1,uVar5,0x10ffff,param_4);
      return;
    }
    FUN_0055fb3c(auStack_58);
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        puVar2 = (undefined2 *)(*(long *)(param_2 + 0x10) + lVar10);
                    /* try { // try from 00564ec8 to 00564ed3 has its CatchHandler @ 00565020 */
        FUN_005644b4(auStack_58,*puVar2,puVar2[1],param_4);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 4;
      } while (lVar11 < *(int *)(param_2 + 0x18));
    }
    if (0 < *(int *)(param_2 + 0x28)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        puVar3 = (undefined4 *)(*(long *)(param_2 + 0x20) + lVar10);
                    /* try { // try from 00564f08 to 00564f13 has its CatchHandler @ 0056501c */
        FUN_005644b4(auStack_58,*puVar3,puVar3[1],param_4);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar11 < *(int *)(param_2 + 0x28));
    }
    if ((param_4 & 0x804) != 4) {
                    /* try { // try from 00564f38 to 00564f5f has its CatchHandler @ 00565018 */
      FUN_0055fb58(auStack_58,10,10);
    }
    FUN_005603a8(auStack_58);
    FUN_00560028(param_1,auStack_58);
    FUN_00560e20(auStack_48,local_40);
  }
  return;
}


