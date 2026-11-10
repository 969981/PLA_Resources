/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03251d28; name: FUN_03251d28
 */


void FUN_03251d28(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  
  puVar6 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar11 = *param_1;
      lVar12 = lVar11 + (long)(int)param_1[1] * 0x10;
      do {
        plVar7 = *(long **)(lVar12 + -8);
        lVar12 = lVar12 + -0x10;
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar1 = plVar7 + 2;
          do {
            lVar8 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
      } while (lVar12 != lVar11);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x18))
                (puVar6,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 4);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_03251ef4(puVar6,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_032c21f8(param_1 + 2);
  iVar2 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar2 * 3) {
    FUN_032c2334(param_1 + 2);
    iVar2 = (int)param_1[1];
  }
  if (0 < iVar2) {
    lVar12 = 0;
    do {
      lVar11 = param_1[2];
      uVar3 = *(int *)(*param_1 + lVar12 * 0x10) * -0x61c8864f;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar9 = (ulong)(*(uint *)(param_1 + 3) & uVar3);
      piVar10 = (int *)(lVar11 + uVar9 * 8 + 4);
      iVar2 = *piVar10;
      while (-1 < iVar2) {
        uVar9 = ((long)(uVar9 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar10 = (int *)(lVar11 + uVar9 * 8 + 4);
        iVar2 = *piVar10;
      }
      *(uint *)(lVar11 + uVar9 * 8) = uVar3;
      *piVar10 = (int)lVar12;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[1]);
  }
  return;
}


