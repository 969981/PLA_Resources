/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03003bc0; name: FUN_03003bc0
 */


undefined8 FUN_03003bc0(long *param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar5 = 0x80040200;
  if (((int)param_2 < (int)param_1[1]) &&
     (lVar7 = *param_1, *(int *)(lVar7 + (long)(int)param_2 * 0x38 + 0x14) == 0x7fffffff)) {
    uVar9 = *(uint *)((long)param_1 + 0x1c) & 0xffffff;
    if (uVar9 == param_2) {
      *(uint *)((long)param_1 + 0x1c) =
           *(uint *)((long)param_1 + 0x1c) + 0x1000000 & 0xff000000 |
           *(uint *)(lVar7 + (long)(int)param_2 * 0x38 + 0x18) & 0xffffff;
    }
    else {
      do {
        puVar8 = (uint *)(lVar7 + (long)(int)uVar9 * 0x38 + 0x18);
        uVar9 = *puVar8;
      } while (uVar9 != 0xffffffff && uVar9 != param_2);
      if (uVar9 == 0xffffffff) {
        return 0x80040200;
      }
      *puVar8 = *(uint *)(lVar7 + (long)(int)uVar9 * 0x38 + 0x18);
    }
    iVar1 = param_2 + 1;
    if (iVar1 <= *(int *)((long)param_1 + 0x24) + 1) {
      iVar1 = *(int *)((long)param_1 + 0x24) + 1;
    }
    *(int *)((long)param_1 + 0x24) = iVar1 + -1;
    plVar2 = param_1 + 4;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar6 = (undefined8 *)(*param_1 + (long)(int)param_2 * 0x38);
    *puVar6 = 0;
    puVar6[1] = 0x3f0000003089705f;
    uVar5 = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    *(undefined1 *)puVar6 = 1;
    *(undefined1 *)((long)puVar6 + 6) = 0;
    puVar6[4] = 0xff00;
    *(undefined2 *)((long)puVar6 + 4) = 0;
    puVar6[2] = 0x7fffffff3f000000;
    puVar6[3] = 0x7fffffff;
  }
  return uVar5;
}


