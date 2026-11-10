/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301e620; name: FUN_0301e620
 */


void FUN_0301e620(long *param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      puVar6 = (undefined8 *)(*param_1 + lVar5 * 0x20);
      if (*(int *)((long)puVar6 + 0xc) != 0) {
        do {
          if (*(int *)((long)puVar6 + 0xc) != 0) {
            uVar1 = *(ushort *)((long)puVar6 + 10);
            uVar9 = (uint)uVar1;
            if (uVar1 != 0) {
              puVar7 = (uint *)*puVar6;
              uVar8 = *(int *)((long)puVar6 + 0xc) - (uint)uVar1;
              puVar4 = (uint *)((long)puVar7 + (ulong)*(ushort *)(puVar6 + 1) + 0x20);
              do {
                while( true ) {
                  plVar2 = *(long **)(param_2 + (ulong)*(byte *)((long)puVar4 + 3) * 8 + 8);
                  (**(code **)(*plVar2 + 0x20))(plVar2,puVar4);
                  uVar9 = uVar9 - 1;
                  if (0 < (int)uVar9) break;
                  if ((uVar8 == 0) || (puVar7 = *(uint **)(puVar7 + 2), puVar7 == (uint *)0x0))
                  goto LAB_0301e6d0;
                  uVar9 = *puVar7 & 0xffff;
                  if ((int)uVar8 <= (int)(*puVar7 & 0xffff)) {
                    uVar9 = uVar8;
                  }
                  if ((int)uVar9 < 1) goto LAB_0301e6d0;
                  uVar8 = uVar8 - uVar9;
                  puVar4 = puVar7 + 8;
                  Hint_Prefetch(*(long *)(puVar7 + 2),0,0,0);
                  Hint_Prefetch(*(long *)(puVar7 + 2) + 0x40,0,0,0);
                  Hint_Prefetch(puVar7 + 0x20,0,0,0);
                  Hint_Prefetch(puVar7 + 0x30,0,0,0);
                  if (puVar4 == (uint *)0x0) goto LAB_0301e6d0;
                }
                puVar4 = (uint *)((long)puVar4 + (ulong)(ushort)*puVar4);
              } while (puVar4 != (uint *)0x0);
            }
          }
LAB_0301e6d0:
          puVar6 = (undefined8 *)puVar6[2];
        } while (puVar6 != (undefined8 *)0x0);
        iVar3 = (int)param_1[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}


