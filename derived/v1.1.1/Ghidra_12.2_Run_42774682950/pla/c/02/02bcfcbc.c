/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcfcbc; name: FUN_02bcfcbc
 */


void FUN_02bcfcbc(long param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  
  if (DAT_04286908 != 1) {
    puVar3 = (undefined8 *)(param_1 + 0x80);
    puVar5 = (undefined8 *)*puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar3;
      do {
        lVar4 = 0x10;
        if (param_2 <= (ulong)puVar5[4]) {
          lVar4 = 8;
          puVar6 = puVar5;
        }
        puVar5 = *(undefined8 **)((long)puVar5 + lVar4);
      } while (puVar5 != (undefined8 *)0x0);
      if (puVar6 != puVar3) {
        puVar5 = puVar3;
        if ((ulong)puVar6[4] <= param_2) {
          puVar5 = puVar6;
        }
        if (puVar5 != puVar3) {
          puVar3 = *(undefined8 **)(param_1 + 0xb0);
          plVar7 = puVar5 + -2;
          *plVar7 = param_1 + 0xa8;
          puVar5[-1] = puVar3;
          *(long **)(param_1 + 0xb0) = plVar7;
          *puVar3 = plVar7;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar4 = puVar5[2];
          if (lVar4 == 0) {
            puVar3 = puVar5;
            do {
              bVar2 = puVar3 == (undefined8 *)((undefined8 *)*puVar3)[2];
              puVar3 = (undefined8 *)*puVar3;
            } while (bVar2);
          }
          else {
            do {
              lVar4 = *(long *)(lVar4 + 8);
            } while (lVar4 != 0);
          }
          FUN_02b93c98(param_1 + 0x80,puVar5,&local_48);
          if (local_38 == puVar5) {
            iVar1 = *(int *)(puVar5 + 3);
          }
          else {
            iVar1 = *(int *)(local_38 + 3);
            *(undefined4 *)(local_38 + 3) = *(undefined4 *)(puVar5 + 3);
          }
          if (iVar1 != 0) {
            FUN_02b93df4(param_1 + 0x80,local_48,uStack_40);
          }
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
        }
      }
    }
  }
  return;
}


