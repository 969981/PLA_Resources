/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5310c; name: FUN_02f5310c
 */


undefined8
FUN_02f5310c(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  int local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 auStack_44 [4];
  
  *param_5 = 0;
  plVar7 = (long *)param_1[0x12];
  if (((param_4 < (int)plVar7[0x22] - *(int *)(plVar7[0x20] + 4)) && ((int)plVar7[0x21] != 0)) &&
     (plVar3 = (long *)(*DAT_0442d138)(0,0xa0), plVar3 != (long *)0x0)) {
    *(undefined2 *)(plVar3 + 0xb) = 0;
    plVar3[5] = (long)&PTR_FUN_042af340;
    plVar3[6] = 0;
    *plVar3 = (long)&PTR_LAB_042af288;
    *(undefined4 *)(plVar3 + 4) = 0;
    plVar3[9] = 0;
    plVar3[10] = -0xc0800000;
    plVar3[2] = (long)param_1;
    plVar3[3] = (long)&PTR_LAB_042af318;
    *(byte *)((long)plVar3 + 0x5a) = *(byte *)((long)plVar3 + 0x5a) & 0xe0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[0xc] = (long)&PTR_LAB_042af358;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = (long)plVar7;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    *(undefined8 *)((long)plVar3 + 0x8d) = 0;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
    lVar6 = plVar3[2];
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x30) == 0) {
        *(long **)(lVar6 + 0x30) = plVar3;
        plVar3[1] = 0;
      }
      else {
        plVar3[1] = *(long *)(lVar6 + 0x30);
        *(long **)(lVar6 + 0x30) = plVar3;
      }
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    }
    FUN_02f50cf4(plVar3);
    puVar4 = (undefined8 *)(*DAT_0442d138)(0,0x48);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = plVar3;
      *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
      *(undefined4 *)((long)puVar4 + 0x3c) = 4;
      *(undefined8 *)((long)puVar4 + 0x24) = 0;
      *(undefined8 *)((long)puVar4 + 0x34) = 0;
      *(undefined1 *)(puVar4 + 8) = 0;
      *(byte *)((long)puVar4 + 0x44) = *(byte *)((long)puVar4 + 0x44) & 0xf8;
      uVar5 = 0;
      if (puVar4[3] != 0) {
        *(undefined8 **)(puVar4[3] + 0x80) = puVar4;
        uVar5 = *(undefined4 *)(*(long *)(puVar4[3] + 0x78) + 0x10);
      }
      *(undefined4 *)(puVar4 + 4) = uVar5;
      *puVar4 = 0;
      plVar7 = param_1 + 0x10;
      if (*plVar7 != 0) {
        plVar7 = (long *)param_1[0xf];
      }
      *plVar7 = (long)puVar4;
      param_1[0xf] = (long)puVar4;
    }
    iVar2 = (int)plVar3[9] + -1;
    *(int *)(plVar3 + 9) = iVar2;
    if (iVar2 == 0) {
      if (plVar3[2] == 0) {
        FUN_02f37eb4(plVar3);
      }
      else {
        FUN_02f3b8c0(plVar3[2],plVar3);
        plVar3[2] = 0;
      }
      (**(code **)(*plVar3 + 0x50))(plVar3);
      (*DAT_0442d150)(0,plVar3);
    }
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0xd] = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_58 = param_4;
      iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_58,param_5,auStack_44,0,0);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1[0x12] + 0x110);
        iVar1 = *(int *)(*(long *)(param_1[0x12] + 0x100) + 4);
        *(undefined4 *)(puVar4 + 7) = 0;
        iVar2 = iVar2 - iVar1;
        iVar1 = *(int *)((long)puVar4 + 0x24);
        if (iVar2 < iVar1) {
          dVar9 = (double)NEON_ucvtf((ulong)DAT_042ab258);
          dVar9 = ((double)(iVar2 - iVar1) * 1000.0) / dVar9;
          dVar8 = 0.5;
          if (dVar9 <= 0.0) {
            dVar8 = -0.5;
          }
          *(int *)(puVar4 + 7) = (int)(dVar8 + dVar9);
          iVar2 = iVar1;
        }
        *(undefined4 *)((long)puVar4 + 0x3c) = 4;
        *(int *)((long)puVar4 + 0x34) = iVar2;
        *(byte *)((long)puVar4 + 0x44) = *(byte *)((long)puVar4 + 0x44) | 2;
        lVar6 = *(long *)(param_1[0x12] + 0x100);
        iVar1 = *(int *)(lVar6 + (ulong)*(uint *)(param_1[0x12] + 0x108) * 0x10 + -0xc);
        iVar2 = *(int *)(lVar6 + 4);
        puVar4 = (undefined8 *)(*DAT_0442d138)(0,0x48);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = (ulong)(uint)(iVar1 - iVar2);
          *(undefined4 *)(puVar4 + 5) = 0;
          *(undefined8 *)((long)puVar4 + 0x34) = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *(undefined4 *)((long)puVar4 + 0x3c) = 4;
          *(undefined1 *)(puVar4 + 8) = 0;
          *(byte *)((long)puVar4 + 0x44) = *(byte *)((long)puVar4 + 0x44) & 0xf8;
          puVar4[4] = 0;
          plVar7 = param_1 + 0x10;
          if (*plVar7 != 0) {
            plVar7 = (long *)param_1[0xf];
          }
          *plVar7 = (long)puVar4;
          param_1[0xf] = (long)puVar4;
          return 1;
        }
      }
    }
  }
  return 2;
}


