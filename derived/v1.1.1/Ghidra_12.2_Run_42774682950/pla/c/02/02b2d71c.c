/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2d71c; name: FUN_02b2d71c
 */


void FUN_02b2d71c(long param_1,long *param_2,int param_3,undefined8 param_4,char *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_78;
  int local_6c;
  int aiStack_68 [2];
  
  uVar4 = (*(long *)(*param_2 + 0xb8) - *(long *)(*param_2 + 0xb0) >> 4) * 0xc4ec4ec5;
  if ((int)uVar4 != 0) {
    uVar7 = 0;
    do {
      plVar9 = *(long **)(param_1 + 0x150);
      plVar1 = *(long **)(param_1 + 0x158);
      if (plVar9 != plVar1) {
        iVar3 = *(int *)(*(long *)(*param_2 + 0xb0) + uVar7 * 0xd0 + 0x44);
        do {
          lVar8 = *(long *)(*plVar9 + 0xe0);
          FUN_02bb0c88(*(undefined8 *)(*(long *)(lVar8 + uVar7 * 8) + 0x60),iVar3,param_3,param_4);
          if (*param_5 != '\0') {
            lVar8 = *(long *)(*(long *)(lVar8 + uVar7 * 8) + 0x60);
            local_78 = 0;
            for (piVar5 = *(int **)(lVar8 + 0xe8); local_6c = param_3, aiStack_68[0] = iVar3,
                piVar5 != *(int **)(lVar8 + 0xf0); piVar5 = piVar5 + 8) {
              if ((*piVar5 == iVar3) && (piVar5[1] == param_3)) {
                if (((char)piVar5[4] != '\0') && (*(long *)(piVar5 + 6) == *(long *)(param_5 + 8)))
                goto LAB_02b2d7c4;
                uVar2 = *(undefined8 *)(param_5 + 8);
                *(undefined8 *)(piVar5 + 4) = *(undefined8 *)param_5;
                *(undefined8 *)(piVar5 + 6) = uVar2;
                goto LAB_02b2d880;
              }
            }
            FUN_02bb1e80((undefined8 *)(lVar8 + 0xe8),aiStack_68,&local_6c,&local_78,param_5);
LAB_02b2d880:
            lVar6 = *(long *)(lVar8 + 0x240);
            for (lVar8 = *(long *)(lVar8 + 0x238); lVar8 != lVar6; lVar8 = lVar8 + 0x18) {
              *(undefined1 *)(lVar8 + 0x10) = 1;
            }
          }
LAB_02b2d7c4:
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != (uVar4 & 0xffffffff));
  }
  return;
}


