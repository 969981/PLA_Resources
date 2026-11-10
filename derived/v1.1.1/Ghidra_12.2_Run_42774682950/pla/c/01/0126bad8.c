/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126bad8; name: FUN_0126bad8
 */


void FUN_0126bad8(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [28];
  float local_e4;
  undefined1 auStack_28 [8];
  
  FUN_0134eddc(auStack_100);
  lVar7 = param_1 + 0x90;
  lVar6 = FUN_01233404(lVar7,3,4);
  local_e4 = *(float *)(lVar6 + 0x30) *
             (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
  lVar6 = FUN_01233404(lVar7,3,4);
  local_110 = *(undefined8 *)(lVar6 + 0x10);
  uStack_108 = *(undefined8 *)(lVar6 + 0x18);
  lVar7 = FUN_01233404(lVar7,3,4);
  local_120 = *(undefined8 *)(lVar7 + 0x20);
  uStack_118 = *(undefined8 *)(lVar7 + 0x28);
  lVar7 = FUN_01245e94(auStack_28,*(undefined8 *)(param_1 + 0x58),(undefined8 *)(param_1 + 0x58),
                       auStack_100,&local_110,&local_120);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x88) = lVar7;
  FUN_0134edcc(lVar7);
  return;
}


