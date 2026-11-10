/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c381c; name: FUN_028c381c
 */


void FUN_028c381c(long param_1,undefined8 param_2,int *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  int *piVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_4 + 0x68) == 0) {
    lVar4 = *(long *)(param_4 + 0x40);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0x1e1) == '\0')) goto LAB_028c3968;
    lVar4 = *(long *)(lVar4 + 0x2d8);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_4 + 0x68) + 0x68);
  }
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0x1e1) != '\0')) &&
     ((long)*(uint **)(lVar4 + 0x250) + (ulong)**(uint **)(lVar4 + 0x250) != 0)) {
    if (*(char *)(param_1 + 0x5c) == '\0') {
      puVar1 = *(undefined8 **)(param_1 + 0x20);
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      fVar8 = (float)param_3[3];
      if (*(char *)((long)param_3 + 0x19) != '\0') {
        fVar8 = (float)(int)(float)param_3[3];
      }
      for (; puVar1 != puVar2; puVar1 = puVar1 + 7) {
        *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(puVar1 + 5);
        piVar6 = (int *)*puVar1;
        puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
        fVar9 = 0.0;
        if (8 < *puVar7) {
          fVar9 = 0.0;
          if ((ulong)puVar7[4] != 0) {
            fVar9 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar6 + (ulong)puVar7[4]));
          }
        }
        if (fVar8 < fVar9) {
          uVar5 = 1;
        }
        else {
          fVar9 = 0.0;
          if (10 < *puVar7) {
            fVar9 = 0.0;
            if ((ulong)puVar7[5] != 0) {
              fVar9 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar6 + (ulong)puVar7[5]));
            }
          }
          uVar5 = 2;
          if (fVar9 <= fVar8) {
            uVar5 = 3;
          }
        }
        *(undefined4 *)(puVar1 + 5) = uVar5;
      }
      if (*(float *)(param_1 + 0x58) != fVar8) {
        *(float *)(param_1 + 0x58) = fVar8;
        if (*param_3 == 1) {
          bVar3 = (char)param_3[6] != '\0';
        }
        else {
          bVar3 = false;
        }
        FUN_028c3ab8(param_1,bVar3);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x5c) = 0;
    }
  }
LAB_028c3968:
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return;
}


