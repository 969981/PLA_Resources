/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22b7c; name: FUN_02e22b7c
 */


void FUN_02e22b7c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  undefined1 auStack_6c [4];
  int local_68 [2];
  
  plVar6 = param_1 + 4;
  lVar10 = 0;
  if ((long *)*plVar6 != (long *)0x0) {
    plVar11 = (long *)0x0;
    plVar9 = (long *)*plVar6;
    do {
      iVar3 = *(int *)((long)plVar9 + 0x74);
      if (iVar3 == 1) {
        iVar3 = (**(code **)(*(long *)plVar9[1] + 0x68))();
        if (iVar3 == 2) {
          iVar4 = 1;
LAB_02e22cdc:
          iVar3 = *(int *)((long)plVar9 + 0x74);
          iVar2 = iVar4;
          if (iVar3 == 2) goto LAB_02e22ce8;
          goto LAB_02e22c78;
        }
        if (iVar3 != 1) {
          iVar4 = 2;
          goto LAB_02e22cdc;
        }
        FUN_02e22714(plVar9);
        uVar1 = *(uint *)(plVar9 + 3);
        if ((uVar1 == 0) && ((char)plVar9[0xf] != '\0')) {
          (**(code **)(*(long *)plVar9[1] + 0x50))((long *)plVar9[1],0,0,local_68);
          fVar12 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar9 + 0x4c));
          uVar5 = 0x44;
          if (*(short *)((long)plVar9 + 0x7a) != 0) {
            uVar5 = 0x34;
          }
          iVar4 = (**(code **)(*(long *)plVar9[1] + 0x40))
                            (1.31072e+08 / fVar12,(long *)plVar9[1],plVar9 + 6,uVar5,0,0x32,
                             auStack_6c);
          *(undefined4 *)((long)plVar9 + 0x74) = 2;
          goto LAB_02e22ce8;
        }
        *(undefined4 *)((long)plVar9 + 0x74) = 0;
        iVar4 = 1;
        if (uVar1 < 2) goto LAB_02e22c48;
LAB_02e22c88:
        local_68[0] = 0x20000;
LAB_02e22c8c:
        fVar12 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar9 + 0x4c));
        iVar4 = (**(code **)(*(long *)plVar9[1] + 0x40))
                          (1.31072e+08 / fVar12,(long *)plVar9[1],*(undefined8 *)plVar9[2],
                           local_68[0],0,0x32,local_68);
        *(undefined4 *)((long)plVar9 + 0x74) = 1;
      }
      else {
        iVar4 = 1;
        iVar2 = 1;
        if (iVar3 == 2) {
LAB_02e22ce8:
          iVar3 = (**(code **)(*(long *)plVar9[1] + 0x68))();
          if (iVar3 != 2) {
            iVar4 = 0x11;
          }
        }
        else {
LAB_02e22c78:
          iVar4 = iVar2;
          if (iVar3 == 0) {
            uVar1 = *(uint *)(plVar9 + 3);
            if (1 < uVar1) goto LAB_02e22c88;
LAB_02e22c48:
            if ((uVar1 == 1) && ((char)plVar9[0xf] != '\0')) {
              local_68[0] = 0x20000;
              if ((int)plVar9[4] != 0) {
                local_68[0] = (int)plVar9[4];
              }
              goto LAB_02e22c8c;
            }
          }
        }
      }
      plVar7 = (long *)*plVar9;
      if ((param_2 == 0x80) || (iVar4 != 1)) {
        plVar8 = plVar6;
        if ((long *)param_1[4] != plVar9) {
          plVar8 = plVar11;
        }
        *plVar8 = (long)plVar7;
        plVar8 = (long *)*param_1;
        FUN_02e224d0(plVar9);
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar9);
      }
      else {
        plVar11 = plVar9;
      }
      plVar9 = plVar7;
    } while (plVar7 != (long *)0x0);
    lVar10 = *plVar6;
  }
  if ((lVar10 == 0) && (*(int *)(param_1 + 3) == 0)) {
    plVar6 = (long *)*param_1;
    (**(code **)(*(long *)param_1[2] + 0x50))((long *)param_1[2],&LAB_02e2286c,0x90);
    param_1[4] = 0;
    DAT_044094f8 = 0;
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1);
  }
  return;
}


