/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d760; name: FUN_02e7d760
 */


void FUN_02e7d760(ulong *param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  ushort *puVar13;
  
  if (*param_1 != param_1[1]) {
    do {
      plVar8 = DAT_0440a170;
      puVar13 = (ushort *)*param_1;
      switch(puVar13[1]) {
      case 1:
        pMVar2 = (MutexType *)(DAT_0440a170 + 3);
        uVar4 = *(uint *)(puVar13 + 6);
        nn::os::LockMutex(pMVar2);
        uVar5 = *(uint *)(plVar8 + 1);
        if (uVar5 != 0) {
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar4 / uVar5;
          }
          for (lVar11 = *(long *)(*plVar8 + (ulong)(uVar4 - uVar6 * uVar5) * 8); lVar11 != 0;
              lVar11 = *(long *)(lVar11 + 0x68)) {
            if (*(uint *)(lVar11 + 0x4c) == uVar4) {
              *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + -1;
              FUN_02edcd9c(plVar8,uVar4);
              goto LAB_02e7d864;
            }
          }
        }
        nn::os::UnlockMutex(pMVar2);
LAB_02e7d864:
        (**(code **)(**(long **)(puVar13 + 0x14) + 0x18))();
        if (*(long *)(puVar13 + 10) != 0) {
          FUN_02e771a8();
        }
        break;
      case 0x19:
        puVar3 = puVar13 + 2;
        if (*(int *)(puVar13 + 6) == 3) {
          pMVar2 = (MutexType *)(DAT_0440a170 + 3);
          uVar4 = *(uint *)(*(long *)puVar3 + 0x6c);
          nn::os::LockMutex(pMVar2);
          uVar5 = *(uint *)(plVar8 + 1);
          if (uVar5 != 0) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar4 / uVar5;
            }
            for (lVar11 = *(long *)(*plVar8 + (ulong)(uVar4 - uVar6 * uVar5) * 8); lVar11 != 0;
                lVar11 = *(long *)(lVar11 + 0x68)) {
              if (*(uint *)(lVar11 + 0x4c) == uVar4) {
                *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + -1;
                FUN_02edcd9c(plVar8,uVar4);
                goto LAB_02e7d8ec;
              }
            }
          }
          nn::os::UnlockMutex(pMVar2);
LAB_02e7d8ec:
          (**(code **)(**(long **)puVar3 + 0x18))();
        }
        plVar8 = *(long **)puVar3;
        goto LAB_02e7d7cc;
      case 0x21:
      case 0x22:
      case 0x27:
        plVar8 = *(long **)(puVar13 + 6);
LAB_02e7d7cc:
        (**(code **)(*plVar8 + 0x18))();
        break;
      case 0x23:
        plVar8 = *(long **)(puVar13 + 6);
        if (plVar8 != (long *)0x0) goto LAB_02e7d7cc;
        break;
      case 0x2a:
        (*DAT_0442d150)(0,*(undefined8 *)(puVar13 + 2));
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        break;
      case 0x37:
        piVar10 = (int *)param_1[0x15];
        uVar4 = (uint)param_1[0x16];
        if ((uVar4 == 0) || (*piVar10 == *(int *)(puVar13 + 2))) {
          piVar12 = piVar10;
        }
        else {
          lVar11 = (ulong)uVar4 * 0x18;
          piVar7 = piVar10;
          do {
            lVar11 = lVar11 + -0x18;
            if (lVar11 == 0) goto switchD_02e7d7c4_caseD_2;
            piVar1 = piVar7 + 6;
            piVar12 = piVar7 + 6;
            piVar7 = piVar7 + 6;
          } while (*piVar1 != *(int *)(puVar13 + 2));
        }
        if (piVar12 != piVar10 + (ulong)uVar4 * 6) {
          (**(code **)(piVar12 + 4))(puVar13 + 4,*puVar13 - 4);
        }
        break;
      case 0x3a:
        uVar9 = (ulong)((int)param_1[4] + 3U & 0xfffffffc);
        goto LAB_02e7d7e4;
      }
switchD_02e7d7c4_caseD_2:
      uVar9 = (ulong)(*puVar13 + 3) & 0x1fffc;
LAB_02e7d7e4:
      uVar9 = *param_1 + uVar9;
      if (param_1[3] <= uVar9) {
        uVar9 = param_1[2];
      }
      *param_1 = uVar9;
    } while (*param_1 != param_1[1]);
  }
  return;
}


