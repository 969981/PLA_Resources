/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019382e8; name: FUN_019382e8
 */


void FUN_019382e8(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  ushort uVar6;
  char cVar7;
  int iVar8;
  size_t __n;
  bool bVar9;
  long lVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ushort *puVar14;
  ulong uVar15;
  undefined8 *__dest;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0x138);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 300));
        while (*plVar2 == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01938344;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_01938344:
  lVar10 = *(long *)(param_1 + 0x140);
  lVar3 = *(long *)(param_1 + 0x148);
  if (lVar10 != lVar3) {
    uVar15 = (lVar3 - lVar10) - 0x20;
    uVar1 = ((uint)(uVar15 >> 5) & 0x7ffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar17 = -((ulong)uVar1 & 3);
      do {
        *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
        lVar10 = lVar10 + 0x20;
        bVar9 = lVar17 != -1;
        lVar17 = lVar17 + 1;
      } while (bVar9);
    }
    if (0x5f < uVar15) {
      do {
        *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
        *(int *)(lVar10 + 0x38) = *(int *)(lVar10 + 0x38) + -1;
        *(int *)(lVar10 + 0x58) = *(int *)(lVar10 + 0x58) + -1;
        *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + -1;
        lVar10 = lVar10 + 0x80;
      } while (lVar3 != lVar10);
    }
    __dest = *(undefined8 **)(param_1 + 0x140);
    puVar4 = *(undefined8 **)(param_1 + 0x148);
    if (__dest != puVar4) {
      puVar18 = __dest;
      if (*(int *)(__dest + 3) < 1) {
        if (__dest != puVar4) goto LAB_01938408;
LAB_01938594:
        lVar10 = (long)puVar4 - (long)__dest;
      }
      else {
        do {
          __dest = puVar18 + 4;
          if (puVar4 == __dest) goto LAB_01938470;
          piVar11 = (int *)(puVar18 + 7);
          puVar18 = __dest;
        } while (0 < *piVar11);
        if (__dest == puVar4) goto LAB_01938594;
LAB_01938408:
        puVar18 = __dest + 4;
        puVar16 = __dest;
        if (puVar18 == puVar4) goto LAB_01938594;
        do {
          __dest = puVar16;
          if (0 < *(int *)(puVar18 + 3)) {
            uVar12 = *(undefined4 *)(puVar18 + 3);
            puVar16[1] = puVar18[1];
            uVar19 = *puVar18;
            uVar20 = puVar18[2];
            *(undefined4 *)(puVar16 + 3) = uVar12;
            puVar16[2] = uVar20;
            __dest = puVar16 + 4;
            *puVar16 = uVar19;
          }
          puVar18 = puVar18 + 4;
          puVar16 = __dest;
        } while (puVar4 != puVar18);
        puVar4 = *(undefined8 **)(param_1 + 0x148);
        lVar10 = (long)puVar4 - (long)__dest;
      }
      if (lVar10 != 0) {
        __n = (long)puVar4 - ((long)__dest + lVar10);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + lVar10),__n);
        }
        *(undefined8 **)(param_1 + 0x148) = __dest + ((long)__n >> 5) * 4;
      }
    }
  }
LAB_01938470:
  iVar5 = *(int *)(param_1 + 0x208);
  *(int *)(param_1 + 0x208) = iVar5 + -1;
  if (iVar5 < 2) {
    lVar10 = FUN_0193c0a8(param_1,1);
    if (lVar10 != 0) {
      FUN_0193c824(param_1 + 0x1f8,*(undefined4 *)(lVar10 + 0x10),*(undefined2 *)(lVar10 + 0x14));
    }
    FUN_01938098(param_1 + 0x1f8,param_1 + 0x228);
  }
  iVar5 = *(int *)(param_1 + 0x1d8);
  iVar8 = iVar5 + -1;
  *(int *)(param_1 + 0x1d8) = iVar8;
  if (iVar8 == 0 || iVar5 < 1) {
    lVar10 = FUN_0193c0a8(param_1,0);
    if (lVar10 != 0) {
      FUN_0193c824(param_1 + 0x1c8,*(undefined4 *)(lVar10 + 0x10),*(undefined2 *)(lVar10 + 0x14));
    }
    FUN_01938098(param_1 + 0x1c8,param_1 + 0x228);
  }
  iVar5 = *(int *)(param_1 + 0x220);
  iVar8 = iVar5 + -1;
  *(int *)(param_1 + 0x220) = iVar8;
  if (iVar8 == 0 || iVar5 < 1) {
    piVar11 = (int *)FUN_0193c990(param_1);
    if (piVar11 != (int *)0x0) {
      puVar14 = (ushort *)((long)piVar11 - (long)*piVar11);
      uVar6 = *puVar14;
      if (uVar6 < 5) {
        uVar12 = 0;
LAB_019385f0:
        uVar13 = 0;
      }
      else {
        if ((ulong)puVar14[2] != 0) {
          uVar12 = *(undefined4 *)((long)piVar11 + (ulong)puVar14[2]);
          if (10 < uVar6) goto LAB_019385e8;
          goto LAB_019385f0;
        }
        uVar12 = 0;
        if (uVar6 < 0xb) goto LAB_019385f0;
LAB_019385e8:
        if ((ulong)puVar14[5] == 0) goto LAB_019385f0;
        uVar13 = *(undefined4 *)((long)piVar11 + (ulong)puVar14[5]);
      }
      FUN_0193c824(param_1 + 0x210,uVar12,uVar13);
    }
    FUN_01938098(param_1 + 0x210,param_1 + 0x228);
  }
  iVar5 = *(int *)(param_1 + 0x1f0);
  iVar8 = iVar5 + -1;
  *(int *)(param_1 + 0x1f0) = iVar8;
  if (iVar8 != 0 && 0 < iVar5) goto LAB_019384b4;
  piVar11 = (int *)FUN_0193c990(param_1);
  if (piVar11 != (int *)0x0) {
    puVar14 = (ushort *)((long)piVar11 - (long)*piVar11);
    uVar6 = *puVar14;
    if (uVar6 < 5) {
      uVar12 = 0;
LAB_019385b8:
      uVar13 = 0;
    }
    else {
      if ((ulong)puVar14[2] != 0) {
        uVar12 = *(undefined4 *)((long)piVar11 + (ulong)puVar14[2]);
        if (10 < uVar6) goto LAB_019385b0;
        goto LAB_019385b8;
      }
      uVar12 = 0;
      if (uVar6 < 0xb) goto LAB_019385b8;
LAB_019385b0:
      if ((ulong)puVar14[5] == 0) goto LAB_019385b8;
      uVar13 = *(undefined4 *)((long)piVar11 + (ulong)puVar14[5]);
    }
    FUN_0193c824(param_1 + 0x1e0,uVar12,uVar13);
  }
  FUN_01938098(param_1 + 0x1e0,param_1 + 0x228);
LAB_019384b4:
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 300));
  return;
}


