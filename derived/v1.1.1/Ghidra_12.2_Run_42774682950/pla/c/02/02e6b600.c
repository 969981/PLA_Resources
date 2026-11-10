/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6b600; name: FUN_02e6b600
 */


undefined8 FUN_02e6b600(long *param_1,float *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  
  if (100 < *(byte *)((long)param_2 + 0xd)) {
    return 0x1f;
  }
  *(byte *)((long)param_1 + 100) = *(byte *)((long)param_2 + 0xd);
  fVar20 = *param_2;
  fVar7 = param_2[2];
  if ((*(long *)param_1[4] < (long)(ulong)(uint)fVar7) && (*(char *)((long)param_1 + 0x69) != '\0'))
  {
    fVar7 = (float)*(long *)param_1[4];
  }
  if (fVar20 <= 1.0) {
    fVar20 = 1.0;
  }
  if ((*(float *)(param_1 + 0x12) == fVar7) && (*(float *)((long)param_1 + 0x8c) == param_2[1])) {
    cVar5 = *(char *)(param_2 + 3);
    if (cVar5 == '\0') {
      cVar5 = '\x01';
    }
    if ((*(float *)((long)param_1 + 0x84) == fVar20) && (*(char *)((long)param_1 + 0xc1) == cVar5))
    {
      return 1;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 5));
    *(char *)((long)param_1 + 0xc1) = cVar5;
    *(float *)((long)param_1 + 0x84) = fVar20;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 5));
    *(float *)((long)param_1 + 0x84) = fVar20;
    cVar5 = *(char *)(param_2 + 3);
    if (cVar5 == '\0') {
      cVar5 = '\x01';
    }
    *(char *)((long)param_1 + 0xc1) = cVar5;
    uVar11 = *(uint *)(param_1 + 0xc);
    uVar4 = 0;
    if (uVar11 != 0) {
      uVar4 = (uint)param_2[1] / uVar11;
    }
    uVar4 = uVar4 * uVar11;
    *(uint *)((long)param_1 + 0x8c) = uVar4;
    (**(code **)(*param_1 + 0x110))(param_1,fVar7);
    plVar8 = param_1 + 0x17;
    plVar10 = (long *)*plVar8;
    uVar11 = (uint)*(byte *)(param_1 + 0x18);
    if (uVar11 == 0) {
      uVar15 = param_1[0xf];
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = plVar10;
      plVar10 = (long *)*plVar10;
      while (uVar11 = uVar11 - 1, uVar11 != 0) {
        plVar12 = plVar10;
        plVar10 = (long *)*plVar10;
      }
      uVar15 = *(long *)plVar12[1] + (ulong)*(uint *)((long *)plVar12[1] + 3);
    }
    uVar1 = uVar15;
    if ((uint)fVar7 <= uVar15) {
      uVar1 = (ulong)uVar4;
    }
    uVar17 = uVar15;
    if (fVar7 != 0.0) {
      uVar17 = uVar1;
    }
    if (plVar10 != (long *)0x0) {
      if (fVar7 == 0.0) {
        plVar19 = (long *)0x0;
        uVar17 = uVar15;
        do {
          lVar16 = *(long *)plVar10[1];
          if (lVar16 + (ulong)*(uint *)(plVar10 + 2) == uVar17) {
            uVar17 = lVar16 + (ulong)*(uint *)((long *)plVar10[1] + 3);
            plVar12 = plVar10;
            plVar13 = (long *)*plVar10;
          }
          else {
            plVar13 = (long *)*plVar10;
            plVar18 = plVar8;
            if ((long *)param_1[0x17] != plVar10) {
              plVar18 = plVar12;
            }
            *plVar18 = (long)plVar13;
            if ((long *)param_1[0x16] == plVar10) {
              param_1[0x16] = (long)plVar12;
            }
            *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
            if (plVar19 == (long *)0x0) {
              *plVar10 = 0;
              plVar19 = plVar10;
            }
            else {
              *plVar10 = (long)plVar19;
              plVar19 = plVar10;
            }
          }
          plVar10 = plVar13;
        } while (plVar10 != (long *)0x0);
      }
      else {
        plVar18 = (long *)0x0;
        do {
          while( true ) {
            plVar19 = plVar10;
            lVar16 = *(long *)plVar19[1];
            if (lVar16 + (ulong)*(uint *)(plVar19 + 2) == uVar17) break;
            plVar10 = (long *)*plVar19;
            plVar13 = plVar8;
            if ((long *)param_1[0x17] != plVar19) {
              plVar13 = plVar12;
            }
            *plVar13 = (long)plVar10;
            if ((long *)param_1[0x16] == plVar19) {
              param_1[0x16] = (long)plVar12;
            }
            *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
            if (plVar18 == (long *)0x0) {
              *plVar19 = 0;
            }
            else {
              *plVar19 = (long)plVar18;
            }
            plVar18 = plVar19;
            if (plVar10 == (long *)0x0) goto LAB_02e6b7e0;
          }
          uVar17 = lVar16 + (ulong)*(uint *)((long *)plVar19[1] + 3);
          plVar10 = (long *)*plVar19;
          if ((uint)fVar7 <= uVar17) {
            uVar17 = (ulong)uVar4;
          }
          plVar12 = plVar19;
          plVar19 = plVar18;
        } while (plVar10 != (long *)0x0);
      }
LAB_02e6b7e0:
      if (plVar19 != (long *)0x0) {
        lVar16 = param_1[10];
        nn::os::LockMutex((MutexType *)(lVar16 + 0x1e8));
        puVar2 = (undefined8 *)*plVar19;
        lVar14 = *(long *)plVar19[1];
        uVar11 = *(uint *)(param_1 + 0x12);
        uVar4 = *(uint *)((long *)plVar19[1] + 3);
        uVar15 = lVar14 + (ulong)*(uint *)(plVar19 + 2);
        if ((uVar15 < uVar11) && ((ulong)uVar11 < lVar14 + (ulong)uVar4)) {
          iVar6 = uVar11 - (int)uVar15;
        }
        else {
          iVar6 = uVar4 - *(uint *)(plVar19 + 2);
        }
        *(int *)(param_1 + 0x13) = (int)param_1[0x13] - iVar6;
        lVar9 = param_1[10];
        lVar14 = plVar19[1];
        plVar19[1] = 0;
        if (lVar14 != 0) {
          FUN_02e6d800(lVar9 + 0x2a8);
        }
        (*DAT_0442d150)(7,plVar19);
        if (puVar2 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar2;
          lVar14 = *(long *)puVar2[1];
          uVar11 = *(uint *)(param_1 + 0x12);
          uVar4 = *(uint *)((long *)puVar2[1] + 3);
          uVar15 = lVar14 + (ulong)*(uint *)(puVar2 + 2);
          if ((uVar15 < uVar11) && ((ulong)uVar11 < lVar14 + (ulong)uVar4)) {
            iVar6 = uVar11 - (int)uVar15;
          }
          else {
            iVar6 = uVar4 - *(uint *)(puVar2 + 2);
          }
          *(int *)(param_1 + 0x13) = (int)param_1[0x13] - iVar6;
          lVar9 = param_1[10];
          lVar14 = puVar2[1];
          puVar2[1] = 0;
          if (lVar14 != 0) {
            FUN_02e6d800(lVar9 + 0x2a8);
          }
          (*DAT_0442d150)(7,puVar2);
          while (puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            lVar14 = *(long *)puVar3[1];
            uVar11 = *(uint *)((long *)puVar3[1] + 3);
            uVar4 = *(uint *)(param_1 + 0x12);
            uVar15 = lVar14 + (ulong)*(uint *)(puVar3 + 2);
            iVar6 = uVar11 - *(uint *)(puVar3 + 2);
            if (uVar15 < uVar4 && (ulong)uVar4 < lVar14 + (ulong)uVar11) {
              iVar6 = uVar4 - (int)uVar15;
            }
            *(int *)(param_1 + 0x13) = (int)param_1[0x13] - iVar6;
            lVar9 = param_1[10];
            lVar14 = puVar3[1];
            puVar3[1] = 0;
            if (lVar14 != 0) {
              FUN_02e6d800(lVar9 + 0x2a8);
            }
            (*DAT_0442d150)(7,puVar3);
            puVar3 = puVar2;
          }
        }
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x1e8));
      }
    }
    (**(code **)(*param_1 + 0x100))(param_1,uVar17);
  }
  FUN_02e6ba60(param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return 1;
}


