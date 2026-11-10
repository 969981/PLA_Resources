/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03003a08; name: FUN_03003a08
 */


uint FUN_03003a08(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  
  if (param_2[6] == 0x7fffffff) {
    uVar8 = *(uint *)(param_1 + 0x54) & 0xffffff;
    if (uVar8 != 0xffffff) {
      puVar1 = (uint *)(param_1 + 0x54);
      uVar11 = *(uint *)(param_1 + 0x54);
      do {
        uVar3 = *puVar1;
        if (uVar3 == uVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar11 + 0x1000000 & 0xff000000 |
                      *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar8 * 0x38 + 0x18) & 0xffffff;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            piVar2 = (int *)(param_1 + 0x58);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            iVar7 = *(int *)(param_1 + 0x5c);
            uVar11 = iVar7 + 1;
            if (uVar11 <= uVar8) {
              uVar3 = uVar8 + 1;
              if (uVar11 <= uVar3) {
                uVar11 = uVar3;
              }
              piVar2 = (int *)(param_1 + 0x5c);
              do {
                if (*piVar2 != iVar7) {
                  do {
                    ClearExclusiveLocal();
                    iVar7 = *piVar2;
                    uVar11 = uVar3;
                    if (uVar3 < iVar7 + 1U) {
                      uVar11 = iVar7 + 1;
                    }
                    while (*piVar2 == iVar7) {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar6) {
                        *piVar2 = uVar11 - 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_03003b14;
                    }
                  } while( true );
                }
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = uVar11 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
LAB_03003b14:
            puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)uVar8 * 0x38);
            *puVar9 = 0;
            puVar9[1] = 0x3f0000003089705f;
            puVar9[4] = 0xff00;
            *(undefined2 *)((long)puVar9 + 4) = 0;
            puVar9[5] = 0;
            puVar9[6] = 0;
            *(undefined1 *)((long)puVar9 + 6) = 0;
            *(undefined1 *)puVar9 = 1;
            puVar9[2] = 0x7fffffff3f000000;
            puVar9[3] = 0x7fffffff;
            goto LAB_03003b5c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar8 = uVar3 & 0xffffff;
        uVar11 = uVar3;
      } while (uVar8 != 0xffffff);
    }
  }
  else {
    iVar7 = FUN_03003bc0();
    if (-1 < iVar7) {
      uVar8 = param_2[6];
LAB_03003b5c:
      puVar10 = (undefined1 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar8 * 0x38);
      *puVar10 = (char)*param_2;
      *(undefined4 *)(puVar10 + 0x1c) = 0;
      *(undefined8 *)(puVar10 + 0x30) = 0;
      puVar10[0x20] = *(undefined1 *)(param_2 + 1);
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar10 + 4) = uVar4;
      *(undefined8 *)(puVar10 + 0x30) = *(undefined8 *)(param_2 + 8);
      *(uint *)(puVar10 + 0x14) = uVar8;
      return uVar8;
    }
  }
  return 0x7fffffff;
}


