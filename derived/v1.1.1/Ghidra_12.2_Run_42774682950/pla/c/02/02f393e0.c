/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f393e0; name: FUN_02f393e0
 */


undefined8 FUN_02f393e0(long *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_4c;
  uint *local_48;
  long local_38;
  
  local_4c = param_3;
  local_48 = param_2;
  iVar3 = (**(code **)(*param_1 + 0x88))();
  uVar5 = DAT_0440a148;
  if (iVar3 == 8) {
    uVar5 = FUN_02f4adc8(param_1,&local_48,&local_4c,0);
    if ((int)uVar5 == 1) {
      if (*local_48 != 0) {
        lVar11 = (ulong)*local_48 * 0x20;
        local_48 = local_48 + 1;
        lVar6 = (*DAT_0442d138)(0,lVar11);
        if (lVar6 == 0) {
          return 2;
        }
        lVar8 = 0;
        do {
          puVar1 = (uint *)(lVar6 + lVar8);
          lVar8 = lVar8 + 0x20;
          *puVar1 = *local_48;
          puVar1[1] = local_48[1];
          puVar1[2] = local_48[2];
          puVar1[3] = local_48[3];
          *(short *)(puVar1 + 4) = (short)local_48[4];
          *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)local_48 + 0x12);
          *(short *)(puVar1 + 5) = (short)local_48[5];
          puVar1[6] = *(uint *)((long)local_48 + 0x16);
          *(undefined2 *)(puVar1 + 7) = *(undefined2 *)((long)local_48 + 0x1a);
          pcVar9 = (char *)((long)local_48 + 0x1d);
          *(bool *)((long)puVar1 + 0x1e) = (char)local_48[7] != '\0';
          local_48 = (uint *)((long)local_48 + 0x1e);
          *(bool *)((long)puVar1 + 0x1f) = *pcVar9 != '\0';
        } while (lVar11 != lVar8);
        uVar7 = *(uint *)(param_1 + 0x27);
        local_38 = lVar6;
        if (uVar7 != 0) {
          puVar10 = (undefined8 *)param_1[0x26];
          puVar13 = puVar10;
          do {
            puVar12 = (undefined8 *)*puVar13;
            if (puVar12 != (undefined8 *)0x0) {
              (**(code **)*puVar12)(puVar12);
              (*DAT_0442d150)(2,puVar12);
              puVar10 = (undefined8 *)param_1[0x26];
              uVar7 = *(uint *)(param_1 + 0x27);
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 != puVar10 + uVar7);
        }
        *(undefined4 *)(param_1 + 0x27) = 0;
        if ((int)param_1[0x2b] != 0) {
          lVar11 = param_1[0x2a];
          do {
            (**(code **)(**(long **)(lVar11 + 8) + 0x10))();
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != param_1[0x2a] + (ulong)*(uint *)(param_1 + 0x2b) * 0x10);
        }
        local_38 = lVar6 + 0x20;
        *(undefined4 *)(param_1 + 0x2b) = 0;
        *(undefined2 *)(param_1 + 0x29) = *(undefined2 *)(lVar6 + 0x1c);
        uVar2 = *(undefined2 *)(lVar6 + 0x14);
        *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar6 + 0x10);
        *(undefined2 *)(param_1 + 0x25) = uVar2;
        *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(lVar6 + 0x18);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar6 + 0xc);
        *(undefined1 *)((long)param_1 + 0x144) = 0;
        *(undefined1 *)((long)param_1 + 0x145) = *(undefined1 *)(lVar6 + 0x1f);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar6 + 4);
        if (*(int *)(lVar6 + 8) != 0) {
          FUN_02f39b88(param_1 + 0x22,&local_38);
        }
        (*DAT_0442d150)(0,lVar6);
      }
      uVar5 = 1;
    }
  }
  else {
    lVar6 = param_1[2];
    uVar4 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_02e96d3c(uVar5,(int)lVar6,8,uVar4);
    uVar5 = 0x5b;
  }
  return uVar5;
}


