/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2f110; name: FUN_02f2f110
 */


undefined8
FUN_02f2f110(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,long param_5,
            long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_6 + 4);
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = param_4;
  *(long *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar5 = *(long *)(param_5 + 8);
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = lVar5 + -0x18;
  }
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  lVar2 = FUN_02eaeebc(param_1 + 0x20,*param_3,lVar1,lVar1 + 0x10,0,1);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*param_3 + 0x30);
    puVar3 = (undefined8 *)(*DAT_0442d138)(5,0x28);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = param_4;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_042abfc0;
      puVar3[4] = param_5;
      *(undefined8 **)(param_1 + 0x18) = puVar3;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x98) + 0x38))
                        (*(long **)(param_1 + 0x98),&PTR_PTR_042a9250,puVar3,
                         *(undefined8 *)(param_1 + 0x28),param_6);
      if ((int)uVar4 == 1) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x98) + 0x18))();
        return uVar4;
      }
      return uVar4;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return 2;
}


