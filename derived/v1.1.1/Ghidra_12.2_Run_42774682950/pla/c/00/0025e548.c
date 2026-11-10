/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025e548; name: FUN_0025e548
 */


void FUN_0025e548(long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_00251550(param_2,param_4,*(undefined8 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x58));
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18) + lVar2 + 0x10;
      if (*(code **)(param_3 + 0x48) == (code *)0x0) {
        FUN_00877fa4(0x3f800000,param_4,*(undefined8 *)(param_2 + 0x150),0,2,0);
        FUN_0022d778(param_2,param_4);
      }
      else {
        (**(code **)(param_3 + 0x48))(param_2,param_4,*(undefined8 *)(param_3 + 0x50));
      }
      FUN_0025e3a8(param_1,param_2,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2),lVar1);
      FUN_0025e1fc(param_1,param_2,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2),lVar1,param_5);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}


