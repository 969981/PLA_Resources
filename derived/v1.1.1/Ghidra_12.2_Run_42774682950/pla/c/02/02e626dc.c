/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e626dc; name: FUN_02e626dc
 */


undefined8 FUN_02e626dc(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + 8;
  lVar5 = FUN_02f59e40(0xb,(ulong)uVar1 * 0x50,0x10);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      if (uVar4 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + lVar7);
          *puVar2 = &PTR_LAB_042a5f70;
          puVar2[6] = 0;
          puVar2[8] = 0;
          puVar2[7] = 0;
          lVar3 = *param_1 + lVar7;
          FUN_02e627dc(puVar2 + 7,lVar3 + 0x38);
          puVar2[6] = *(undefined8 *)(lVar3 + 0x30);
          uVar6 = *(undefined8 *)(lVar3 + 0x10);
          puVar2[3] = *(undefined8 *)(lVar3 + 0x18);
          puVar2[2] = uVar6;
          uVar6 = *(undefined8 *)(lVar3 + 0x20);
          puVar2[5] = *(undefined8 *)(lVar3 + 0x28);
          puVar2[4] = uVar6;
          (*(code *)**(undefined8 **)(*param_1 + lVar7))();
          lVar7 = lVar7 + 0x50;
        } while ((ulong)uVar4 * 0x50 != lVar7);
        lVar7 = *param_1;
      }
      (*DAT_0442d158)(0xb,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


