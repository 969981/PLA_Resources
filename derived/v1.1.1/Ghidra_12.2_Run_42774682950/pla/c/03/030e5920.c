/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e5920; name: FUN_030e5920
 */


void FUN_030e5920(long param_1,ulong param_2,double *param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  uint local_70;
  undefined2 local_6c;
  ulong local_68;
  double dStack_60;
  double local_58;
  double local_50;
  undefined1 local_48;
  
  local_70 = 0x2000030;
  local_6c = 7;
  local_48 = (undefined1)param_4;
  dStack_60 = *param_3;
  local_58 = param_3[1];
  local_50 = param_3[2];
  plVar1 = *(long **)(param_1 + 0x7f0);
  local_68 = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_70,param_3,param_4,param_4 & 0xffffffff);
  }
  if ((long)param_2 < 0) {
    uVar5 = param_2 & 0xffffffff;
  }
  else {
    uVar2 = FUN_032c0fa4(param_1 + 0x948,param_2,&local_70);
    uVar5 = (ulong)local_70;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0xffffff;
    }
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + (uVar5 & 0xffffff) * 0xc0);
  if ((byte)(ABS(((double)(float)puVar3[6] + (double)(float)puVar3[8]) - *param_3) <=
             1.1920928955078125e-07 |
             (ABS(((double)(float)((ulong)puVar3[6] >> 0x20) +
                  (double)(float)((ulong)puVar3[8] >> 0x20)) - param_3[1]) <= 1.1920928955078125e-07
             ) << 1 | (ABS(((double)(float)puVar3[7] + (double)(float)puVar3[9]) - param_3[2]) <=
                      1.1920928955078125e-07) << 2) != 7) {
    lVar4 = *(long *)(param_1 + 0x38) + (uVar5 & 0xffffff) * 0xc0;
    *puVar3 = *puVar3;
    *(int *)(lVar4 + 8) = (int)puVar3[1];
    puVar3[2] = puVar3[2];
    *(int *)(puVar3 + 3) = (int)puVar3[3];
    puVar3[4] = puVar3[4];
    *(int *)(puVar3 + 5) = (int)puVar3[5];
    dVar10 = *param_3;
    dVar11 = param_3[1];
    fVar13 = (float)dVar11;
    fVar12 = (float)dVar10;
    dVar14 = param_3[2];
    fVar15 = (float)dVar14;
    *(float *)(lVar4 + 0x38) = fVar15;
    *(ulong *)(lVar4 + 0x30) = CONCAT44(fVar13,fVar12);
    *(ulong *)(lVar4 + 0x40) =
         CONCAT44((float)(dVar11 - (double)fVar13),(float)(dVar10 - (double)fVar12));
    *(float *)(lVar4 + 0x48) = (float)(dVar14 - (double)fVar15);
    FUN_0302f5b4(param_1,puVar3,0,0,param_4 & 0xffffffff);
    plVar1 = (long *)(*(ulong *)(param_1 + 0x6e8) & 0xfffffffffffffffc);
    uVar5 = 0;
    *(ulong *)(param_1 + 0x6e8) = (ulong)plVar1 | 1;
    if (plVar1 != (long *)0x0) {
      puVar7 = (ulong *)(param_1 + 0x6e8);
      do {
        while( true ) {
          puVar8 = (ulong *)(plVar1 + 1);
          uVar5 = *puVar8;
          plVar6 = (long *)(uVar5 & 0xfffffffffffffffc);
          if ((uVar5 & 3) == 0) break;
          (**(code **)(*plVar1 + 8))();
          *puVar7 = *puVar7 & 3 | (ulong)plVar6;
          plVar1 = plVar6;
          if (plVar6 == (long *)0x0) goto LAB_030e5b60;
        }
        (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
        plVar1 = plVar6;
        puVar7 = puVar8;
      } while (plVar6 != (long *)0x0);
LAB_030e5b60:
      uVar5 = *(ulong *)(param_1 + 0x6e8) & 0xfffffffffffffffc;
    }
    *(ulong *)(param_1 + 0x6e8) = uVar5;
    plVar1 = (long *)(*(ulong *)(param_1 + 0x740) & 0xfffffffffffffffc);
    puVar7 = (ulong *)(param_1 + 0x740);
    *(ulong *)(param_1 + 0x740) = (ulong)plVar1 | 1;
    puVar8 = puVar7;
    if (plVar1 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      do {
        while( true ) {
          puVar9 = (ulong *)(plVar1 + 1);
          uVar5 = *puVar9;
          plVar6 = (long *)(uVar5 & 0xfffffffffffffffc);
          if ((uVar5 & 3) == 0) break;
          (**(code **)(*plVar1 + 8))();
          *puVar8 = *puVar8 & 3 | (ulong)plVar6;
          plVar1 = plVar6;
          if (plVar6 == (long *)0x0) goto LAB_030e5bcc;
        }
        (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
        plVar1 = plVar6;
        puVar8 = puVar9;
      } while (plVar6 != (long *)0x0);
LAB_030e5bcc:
      uVar5 = *puVar7 & 0xfffffffffffffffc;
    }
    *puVar7 = uVar5;
  }
  return;
}


