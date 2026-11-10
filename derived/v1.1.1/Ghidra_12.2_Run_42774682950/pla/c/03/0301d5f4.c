/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301d5f4; name: FUN_0301d5f4
 */


void FUN_0301d5f4(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  do {
    if (*(int *)((long)param_3 + 0xc) != 0) {
      uVar2 = *(ushort *)((long)param_3 + 10);
      uVar11 = (uint)uVar2;
      if (uVar2 != 0) {
        puVar9 = (uint *)*param_3;
        uVar10 = *(int *)((long)param_3 + 0xc) - (uint)uVar2;
        puVar8 = (uint *)((long)puVar9 + (ulong)*(ushort *)(param_3 + 1) + 0x20);
        if ((*(byte *)((long)puVar9 + (ulong)*(ushort *)(param_3 + 1) + 0x22) & 1) != 0)
        goto LAB_0301d65c;
        do {
          uVar2 = (ushort)*puVar8;
          if ((int)(*(int *)(param_4 + 0x18) + (uint)uVar2) < 0xee1) {
            puVar6 = (undefined8 *)
                     (*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) + 0x20);
          }
          else {
            puVar6 = (undefined8 *)FUN_032bf82c(param_4);
          }
          uVar3 = (uint)(uVar2 >> 4);
          if ((uVar3 + (uVar3 == 0) & 1) == 0) {
            puVar7 = puVar8;
            uVar4 = uVar3;
          }
          else {
            uVar4 = puVar8[2];
            uVar1 = puVar8[3];
            *puVar6 = *(undefined8 *)puVar8;
            *(uint *)(puVar6 + 1) = uVar4;
            *(uint *)((long)puVar6 + 0xc) = uVar1;
            puVar6 = puVar6 + 2;
            puVar7 = puVar8 + 4;
            uVar4 = uVar3 - 1;
          }
          if (uVar3 != 1 - (uVar3 == 0)) {
            do {
              uVar4 = uVar4 - 2;
              uVar3 = puVar7[2];
              uVar1 = puVar7[3];
              *puVar6 = *(undefined8 *)puVar7;
              *(uint *)(puVar6 + 1) = uVar3;
              *(uint *)((long)puVar6 + 0xc) = uVar1;
              uVar3 = puVar7[6];
              uVar1 = puVar7[7];
              puVar6[2] = *(undefined8 *)(puVar7 + 4);
              *(uint *)(puVar6 + 3) = uVar3;
              *(uint *)((long)puVar6 + 0x1c) = uVar1;
              puVar7 = puVar7 + 8;
              puVar6 = puVar6 + 4;
            } while (0 < (int)uVar4);
          }
          *(uint *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + (uint)uVar2;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          while( true ) {
            uVar11 = uVar11 - 1;
            if ((int)uVar11 < 1) {
              if ((uVar10 == 0) || (puVar9 = *(uint **)(puVar9 + 2), puVar9 == (uint *)0x0))
              goto LAB_0301d72c;
              uVar11 = *puVar9 & 0xffff;
              if ((int)uVar10 <= (int)(*puVar9 & 0xffff)) {
                uVar11 = uVar10;
              }
              if ((int)uVar11 < 1) goto LAB_0301d72c;
              uVar10 = uVar10 - uVar11;
              puVar8 = puVar9 + 8;
              Hint_Prefetch(*(long *)(puVar9 + 2),0,0,0);
              Hint_Prefetch(*(long *)(puVar9 + 2) + 0x40,0,0,0);
              Hint_Prefetch(puVar9 + 0x20,0,0,0);
              Hint_Prefetch(puVar9 + 0x30,0,0,0);
            }
            else {
              puVar8 = (uint *)((long)puVar8 + (ulong)(ushort)*puVar8);
            }
            if (puVar8 == (uint *)0x0) goto LAB_0301d72c;
            if ((*puVar8 & 0x10000) == 0) break;
LAB_0301d65c:
            plVar5 = *(long **)(param_2 + (ulong)*(byte *)((long)puVar8 + 3) * 8 + 8);
            (**(code **)(*plVar5 + 0x20))(plVar5,puVar8);
          }
        } while( true );
      }
    }
LAB_0301d72c:
    param_3 = (undefined8 *)param_3[2];
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
  } while( true );
}


