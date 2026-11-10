/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e79efc; name: FUN_02e79efc
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02e79efc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *local_28;
  
  puVar2 = (undefined8 *)param_1[2];
  uVar7 = (ulong)*(uint *)(param_1 + 3);
  *param_1 = &PTR_LAB_042a71c8;
  if (*(uint *)(param_1 + 3) != 0) {
    puVar9 = puVar2 + uVar7 * 4;
    puVar3 = puVar2;
    do {
      iVar6 = (int)uVar7;
      if (puVar3[2] == 0) {
        if (puVar3 < puVar9 + -4) {
          uVar10 = (long)puVar9 + (-0x21 - (long)puVar3);
          uVar1 = ((uint)(uVar10 >> 5) & 0x7ffffff) + 1;
          uVar7 = (ulong)uVar1 & 3;
          puVar2 = puVar3;
          if ((uVar1 & 3) != 0) {
            puVar8 = puVar3;
            do {
              puVar2 = puVar8 + 4;
              uVar7 = uVar7 - 1;
              *puVar8 = *puVar2;
              puVar8[1] = puVar8[5];
              puVar8[2] = puVar8[6];
              puVar8[3] = puVar8[7];
              puVar8 = puVar2;
            } while (uVar7 != 0);
          }
          if (0x5f < uVar10) {
            do {
              *puVar2 = puVar2[4];
              puVar2[1] = puVar2[5];
              puVar2[4] = puVar2[8];
              puVar2[5] = puVar2[9];
              puVar2[2] = puVar2[6];
              puVar2[3] = puVar2[7];
              puVar2[6] = puVar2[10];
              puVar2[7] = puVar2[0xb];
              puVar2[10] = puVar2[0xe];
              puVar2[0xb] = puVar2[0xf];
              puVar2[8] = puVar2[0xc];
              puVar2[9] = puVar2[0xd];
              puVar8 = puVar2 + 0x10;
              puVar2[0xe] = puVar2[0x12];
              puVar2[0xf] = puVar2[0x13];
              puVar2[0xc] = *puVar8;
              puVar2[0xd] = puVar2[0x11];
              puVar2 = puVar8;
            } while (puVar8 < puVar9 + -4);
          }
          iVar6 = *(int *)(param_1 + 3);
          puVar2 = (undefined8 *)param_1[2];
        }
        uVar7 = (ulong)(iVar6 - 1U);
        *(uint *)(param_1 + 3) = iVar6 - 1U;
      }
      else {
        puVar3 = puVar3 + 4;
      }
      puVar9 = puVar2 + uVar7 * 4;
    } while (puVar9 != puVar3);
  }
  if (puVar2 == (undefined8 *)0x0) {
    local_28 = (long *)param_1[5];
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_02f59e60(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    local_28 = (long *)param_1[5];
  }
  if (local_28 != (long *)0x0) {
    while( true ) {
      plVar5 = (long *)*local_28;
      lVar4 = local_28[2];
      param_1[5] = plVar5;
      if ((long *)param_1[4] == local_28) {
        param_1[4] = 0;
      }
      *(undefined8 *)(lVar4 + 0x10) = 0;
      FUN_02e7be30(local_28);
      FUN_02e7b5fc(local_28);
      if (plVar5 == (long *)0x0) break;
      local_28 = plVar5;
      if ((long *)param_1[5] != plVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


