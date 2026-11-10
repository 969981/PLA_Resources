/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bb6368; name: FUN_00bb6368
 */


void FUN_00bb6368(undefined8 *param_1,long param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  code *local_a8;
  undefined1 auStack_90 [96];
  undefined8 local_28;
  
  puVar3 = &DAT_cbf29ce484222645;
  bVar1 = *param_4;
  while (bVar1 != 0) {
    param_4 = param_4 + 1;
    puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_4;
  }
  puVar4 = *(undefined1 **)(param_2 + 0x70);
  if (puVar4 != (undefined1 *)0x0) {
    uVar6 = (long)puVar4 - ((ulong)puVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      puVar7 = (undefined1 *)((ulong)(puVar4 + -1) & (ulong)puVar3);
    }
    else {
      puVar7 = puVar3;
      if (puVar4 <= puVar3) {
        uVar2 = 0;
        if (puVar4 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar3 / (ulong)puVar4;
        }
        puVar7 = puVar3 + -(uVar2 * (long)puVar4);
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x68) + (long)puVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if ((undefined1 *)plVar9[1] == puVar3) {
            if ((undefined1 *)plVar9[2] == puVar3) goto LAB_00bb64b4;
          }
          else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar4 + -1)) != puVar7) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          puVar8 = (undefined1 *)plVar9[1];
          if (puVar8 == puVar3) {
            if ((undefined1 *)plVar9[2] == puVar3) {
LAB_00bb64b4:
              local_a8 = (code *)0x0;
              if ((code *)plVar9[6] == (code *)0x0) {
                pcVar5 = (code *)0x0;
              }
              else {
                (*(code *)plVar9[6])(plVar9 + 8,auStack_90);
                pcVar5 = (code *)plVar9[4];
                local_a8 = (code *)plVar9[5];
              }
              local_28 = param_3;
              (*pcVar5)(param_1,auStack_90,&local_28);
              if (local_a8 == (code *)0x0) {
                return;
              }
              (*local_a8)(auStack_90);
              return;
            }
          }
          else {
            if (puVar4 <= puVar8) {
              uVar6 = 0;
              if (puVar4 != (undefined1 *)0x0) {
                uVar6 = (ulong)puVar8 / (ulong)puVar4;
              }
              puVar8 = puVar8 + -(uVar6 * (long)puVar4);
            }
            if (puVar8 != puVar7) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


