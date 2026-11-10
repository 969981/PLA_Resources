/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebf984; name: FUN_02ebf984
 */


undefined8 FUN_02ebf984(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN_02f59e30(0,(ulong)uVar1 * 0x30);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      if (uVar4 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + lVar7);
          *(undefined1 *)(puVar2 + 2) = 0;
          *puVar2 = &PTR_LAB_042a9f98;
          puVar2[1] = 0;
          puVar2[4] = 0;
          puVar2[3] = 0;
          lVar3 = *param_1 + lVar7;
          *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(lVar3 + 0x28);
          puVar2[1] = *(undefined8 *)(lVar3 + 8);
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(lVar3 + 0x10);
          FUN_02ebd390(puVar2 + 3,lVar3 + 0x18);
          (*(code *)**(undefined8 **)(*param_1 + lVar7))();
          lVar7 = lVar7 + 0x30;
        } while ((ulong)uVar4 * 0x30 != lVar7);
        lVar7 = *param_1;
      }
      (*DAT_0442d150)(0,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


