/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dab6fc; name: FUN_02dab6fc
 */


void FUN_02dab6fc(float param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  ushort *puVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  long *local_18;
  
  piVar4 = *(int **)(param_2 + 0x220);
  if (piVar4 != (int *)0x0) {
    if (param_1 <= -1.0) {
      param_1 = -1.0;
    }
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
    if (*puVar6 < 7) {
      fVar10 = 1.1;
      fVar9 = 0.9;
    }
    else {
      if ((ulong)puVar6[3] == 0) {
        fVar9 = 0.9;
      }
      else {
        fVar9 = *(float *)((long)piVar4 + (ulong)puVar6[3]);
      }
      if ((*puVar6 < 9) || ((ulong)puVar6[4] == 0)) {
        fVar10 = 1.1;
      }
      else {
        fVar10 = *(float *)((long)piVar4 + (ulong)puVar6[4]);
      }
    }
    fVar7 = (float)(**(code **)PTR_PTR_0437a4c8)(param_1 * 0.5 + 0.5);
    *(float *)(param_2 + 0x270) = fVar9 + (fVar10 - fVar9) * fVar7;
    FUN_009c69bc(&local_18,param_2);
    uVar8 = *(uint *)(param_2 + 0x270);
    *(undefined1 *)(local_18 + 0x1c) = 1;
    local_18[0x17] = (ulong)uVar8;
    local_18[0x16] = CONCAT44(uVar8,uVar8);
    if (local_18 != (long *)0x0) {
      lVar5 = local_18[0xb];
      piVar4 = (int *)(lVar5 + 0xc);
      do {
        iVar1 = *piVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
  }
  return;
}


