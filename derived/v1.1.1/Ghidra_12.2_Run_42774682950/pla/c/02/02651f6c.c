/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02651f6c; name: FUN_02651f6c
 */


void FUN_02651f6c(long param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  long *local_28;
  
  FUN_0267661c();
  if (*(char *)(param_1 + 0xd60) != '\0') {
    iVar1 = *(int *)(param_1 + 0xd64) + 1;
    *(int *)(param_1 + 0xd64) = iVar1;
    fVar7 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0xd6c) * 8))
                             ((float)iVar1 / (float)*(int *)(param_1 + 0xd68));
    FUN_00956dac(&local_28,param_1 + 0xcc8);
    plVar5 = local_28;
    if (local_28 != (long *)0x0) {
      uVar15 = *(undefined8 *)(param_1 + 0xd88);
      uVar12 = *(undefined8 *)(param_1 + 0xd80);
      uVar10 = *(undefined8 *)(param_1 + 0xda8);
      uVar9 = *(undefined8 *)(param_1 + 0xda0);
      *(undefined1 *)(local_28 + 0x1c) = 1;
      fVar11 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar14 = (float)uVar15;
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      local_28[0x1b] =
           CONCAT44(fVar16 + ((float)((ulong)uVar10 >> 0x20) - fVar16) * fVar7,
                    fVar14 + ((float)uVar10 - fVar14) * fVar7);
      local_28[0x1a] =
           CONCAT44(fVar13 + ((float)((ulong)uVar9 >> 0x20) - fVar13) * fVar7,
                    fVar11 + ((float)uVar9 - fVar11) * fVar7);
      auVar8 = FUN_009c6b1c(param_1 + 0xd70,param_1 + 0xd90);
      *(undefined1 (*) [16])(plVar5 + 0x18) = auVar8;
      *(undefined1 *)(plVar5 + 0x1c) = 1;
      if (local_28 != (long *)0x0) {
        lVar6 = local_28[0xb];
        piVar2 = (int *)(lVar6 + 0xc);
        do {
          iVar1 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
    if (*(int *)(param_1 + 0xd68) <= *(int *)(param_1 + 0xd64)) {
      *(undefined1 *)(param_1 + 0xd60) = 0;
    }
  }
  if (*(int *)(param_1 + 0xcb4) < 1) {
    cVar3 = *(char *)(param_1 + 0xcb0);
  }
  else {
    *(int *)(param_1 + 0xcb4) = *(int *)(param_1 + 0xcb4) + -1;
    cVar3 = *(char *)(param_1 + 0xcb0);
  }
  if (cVar3 != '\0') {
    FUN_01a8ac20(param_1);
  }
  FUN_026520ac(param_1);
  return;
}


