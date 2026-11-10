/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03251ef4; name: FUN_03251ef4
 */


void FUN_03251ef4(long *param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  ulong local_68;
  undefined8 local_60;
  undefined *puStack_58;
  uint *local_50;
  undefined4 *puStack_48;
  undefined4 local_34;
  
  local_34 = 0x10;
  puVar13 = (uint *)(param_2 + 1);
  uVar4 = *puVar13;
  local_68 = (long)(int)uVar4 << 4;
  if ((int)uVar4 < 0) {
    local_60 = 2;
    puStack_58 = &DAT_0411b3a0;
    puStack_48 = &local_34;
    local_50 = puVar13;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_60);
    uVar4 = *puVar13;
  }
  if (uVar4 == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar7 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    if (lVar7 != 0) {
      iVar9 = (int)(local_68 >> 4);
      if (0x3ffffffe < iVar9) {
        iVar9 = 0x3fffffff;
      }
      if (0 < (int)*puVar13) {
        lVar11 = 0;
        lVar12 = 0;
        do {
          puVar2 = (undefined4 *)(*param_2 + lVar11);
          puVar3 = (undefined4 *)(lVar7 + lVar11);
          lVar11 = lVar11 + 0x10;
          *puVar3 = *puVar2;
          *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar2 + 2) = 0;
          uVar10 = (ulong)(int)param_2[1];
          lVar12 = lVar12 + 1;
        } while (lVar12 < (long)uVar10);
        if (0 < (int)param_2[1]) {
          lVar11 = 0;
          do {
            plVar8 = *(long **)(*param_2 + lVar11 * 0x10 + 8);
            if (plVar8 != (long *)0x0) {
              if (plVar8[1] != 0) {
                plVar1 = plVar8 + 2;
                do {
                  lVar12 = *plVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar12 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar12 + -1 == 0) {
                  (**(code **)(*plVar8 + 0x18))();
                }
              }
              uVar10 = (ulong)*puVar13;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < (int)uVar10);
        }
      }
      *param_2 = lVar7;
      *(int *)((long)param_2 + 0xc) = iVar9;
    }
  }
  return;
}


