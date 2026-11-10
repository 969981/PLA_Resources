/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f39b88; name: FUN_02f39b88
 */


undefined8 FUN_02f39b88(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  
  if (param_3 == 0) {
    return 1;
  }
  do {
    piVar7 = (int *)*param_2;
    *param_2 = (long)(piVar7 + 8);
    if (*piVar7 == 0) {
      puVar4 = (undefined8 *)(*DAT_0442d138)(2,0x40);
      if (puVar4 == (undefined8 *)0x0) {
        return 2;
      }
      *(undefined2 *)(puVar4 + 3) = 0;
      *puVar4 = &PTR_FUN_042af050;
      puVar4[1] = param_1;
      puVar4[2] = 0x100000000;
      *(undefined4 *)((long)puVar4 + 0x1c) = 50000;
      *(undefined8 *)((long)puVar4 + 0x2d) = 0;
      *(undefined2 *)((long)puVar4 + 0x35) = 1;
      *(undefined2 *)(puVar4 + 7) = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      uVar2 = *(uint *)(param_1 + 0x28);
      uVar6 = *(uint *)(param_1 + 0x2c);
      if (uVar6 <= uVar2) {
        iVar3 = uVar6 + (uVar6 >> 1);
        if (uVar6 == 0) {
          iVar3 = 1;
        }
        uVar6 = iVar3 + uVar6;
        lVar5 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 0x20),(ulong)uVar6 << 3);
        if (lVar5 == 0) goto LAB_02f39dd8;
        *(long *)(param_1 + 0x20) = lVar5;
        *(uint *)(param_1 + 0x2c) = uVar6;
      }
      if (uVar6 <= uVar2) goto LAB_02f39dd8;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 8);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
      if (puVar1 == (undefined8 *)0x0) goto LAB_02f39dd8;
      *puVar1 = puVar4;
      *(short *)(puVar4 + 7) = (short)piVar7[7];
      iVar3 = piVar7[5];
      *(int *)((long)puVar4 + 0x14) = piVar7[4];
      *(short *)(puVar4 + 3) = (short)iVar3;
      *(int *)((long)puVar4 + 0x1c) = piVar7[6];
      *(int *)(puVar4 + 6) = piVar7[3];
      *(undefined1 *)((long)puVar4 + 0x34) = 0;
      *(undefined1 *)((long)puVar4 + 0x35) = *(undefined1 *)((long)piVar7 + 0x1f);
      *(int *)(puVar4 + 2) = piVar7[1];
      if ((piVar7[2] != 0) && (iVar3 = FUN_02f39b88(puVar4,param_2), iVar3 != 1)) {
        return 2;
      }
    }
    else {
      puVar4 = (undefined8 *)(*DAT_0442d138)(2,0x28);
      if (puVar4 == (undefined8 *)0x0) {
        return 2;
      }
      *(undefined2 *)(puVar4 + 3) = 0;
      *puVar4 = &PTR_FUN_042ad6d0;
      puVar4[1] = param_1;
      puVar4[2] = 0x100000000;
      *(undefined4 *)((long)puVar4 + 0x1c) = 50000;
      uVar2 = *(uint *)(param_1 + 0x28);
      uVar6 = *(uint *)(param_1 + 0x2c);
      if (uVar6 <= uVar2) {
        iVar3 = uVar6 + (uVar6 >> 1);
        if (uVar6 == 0) {
          iVar3 = 1;
        }
        uVar6 = iVar3 + uVar6;
        lVar5 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 0x20),(ulong)uVar6 << 3);
        if (lVar5 == 0) goto LAB_02f39dd8;
        *(long *)(param_1 + 0x20) = lVar5;
        *(uint *)(param_1 + 0x2c) = uVar6;
      }
      if (uVar6 <= uVar2) {
LAB_02f39dd8:
        (**(code **)*puVar4)(puVar4);
        (*DAT_0442d150)(2,puVar4);
        return 2;
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 8);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
      if (puVar1 == (undefined8 *)0x0) goto LAB_02f39dd8;
      *puVar1 = puVar4;
      iVar3 = piVar7[5];
      *(int *)((long)puVar4 + 0x14) = piVar7[4];
      *(short *)(puVar4 + 3) = (short)iVar3;
      *(int *)((long)puVar4 + 0x1c) = piVar7[6];
      *(int *)(puVar4 + 4) = *piVar7;
      *(int *)(puVar4 + 2) = piVar7[1];
      FUN_02f4bb7c(param_1);
    }
    if (piVar7[6] == 50000) {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x34) = 1;
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return 1;
      }
    }
  } while( true );
}


