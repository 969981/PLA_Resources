/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebe6f8; name: FUN_02ebe6f8
 */


undefined8 FUN_02ebe6f8(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = FUN_02f59e30(0,(ulong)uVar1 * 0x30);
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          puVar2 = (undefined8 *)(lVar4 + lVar6);
          *puVar2 = &PTR_LAB_042a9ed8;
          puVar2[1] = 0;
          *(undefined1 *)(puVar2 + 2) = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(*param_1 + lVar6 + 0x28);
          FUN_02ebd60c();
          (*(code *)**(undefined8 **)(*param_1 + lVar6))();
          lVar6 = lVar6 + 0x30;
        } while ((ulong)uVar3 * 0x30 != lVar6);
        lVar6 = *param_1;
      }
      (*DAT_0442d150)(0,lVar6);
    }
    uVar5 = 1;
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar5;
}


