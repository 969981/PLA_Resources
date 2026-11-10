/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f588e0; name: FUN_02f588e0
 */


void FUN_02f588e0(int param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 == 0) {
    return;
  }
  FUN_02f58540(param_2);
  lVar10 = 0;
  plVar1 = (long *)(param_2 + 0x7e0);
  lVar7 = *plVar1;
  if (lVar7 != 0) goto LAB_02f58964;
  do {
    do {
      plVar1[lVar10] = 0;
      lVar10 = lVar10 + 1;
      if (lVar10 == 0x20) {
        lVar10 = (long)param_1 * 0x820;
        puVar2 = (ulong *)(&DAT_0442c8e8 + lVar10);
        puVar3 = (uint *)(&DAT_0442c8f0 + lVar10);
        do {
          uVar9 = *puVar2;
          *(ulong *)(param_2 + 0x908) = uVar9 & 0xfffffffffffffe00;
          do {
            uVar4 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar4 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          while (*puVar2 == uVar9) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar4 + 1 & 0x1ff | param_2;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              FUN_02f59da0(*(undefined4 *)(&DAT_0442d120 + (long)param_1 * 4),0);
              return;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      lVar7 = plVar1[lVar10];
    } while (lVar7 == 0);
LAB_02f58964:
    puVar3 = (uint *)(&DAT_0442c158 + (long)param_1 * 0x820);
    if (lVar10 != 0) {
      puVar3 = (uint *)(&DAT_0442c160 + (long)param_1 * 0x820);
    }
    do {
      uVar4 = *puVar3;
      if (uVar4 < 3) {
        uVar4 = 2;
      }
      if (*(uint *)(lVar7 + 0x1c) <= uVar4) {
        FUN_02f592a0(param_1);
        break;
      }
      uVar8 = 0;
      lVar12 = lVar7;
      do {
        lVar11 = lVar12;
        lVar12 = *(long *)(lVar11 + 0x48);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(uint *)(lVar12 + 0x1c) = *(int *)(lVar7 + 0x1c) - uVar8;
      *(uint *)(lVar7 + 0x1c) = uVar8;
      *(undefined8 *)(lVar7 + 0x50) = 0;
      FUN_02f592a0(param_1);
      lVar7 = lVar12;
    } while (lVar12 != 0);
  } while( true );
}


