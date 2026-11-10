/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df3b8; name: FUN_001df3b8
 */


undefined8 FUN_001df3b8(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001f43b0(param_1,5,2);
    }
    FUN_001e0ebc(param_2,auStack_58);
    lVar2 = FUN_001e0ecc(auStack_58);
    if (lVar2 != 0) {
      do {
        lVar4 = *(long *)(lVar2 + 0x18);
        lVar2 = FUN_001e0ecc(auStack_58);
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        while (puVar5 != (undefined8 *)0x0) {
          uVar3 = *puVar5;
          puVar5 = (undefined8 *)puVar5[2];
          iVar1 = (*param_4)(uVar3,param_3);
          if (iVar1 == 1) {
            if (*(long *)(param_1 + 0xe8) != 0) {
              FUN_001f43f8(param_1,5);
            }
            return 1;
          }
        }
      } while (lVar2 != 0);
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001f43f8(param_1,5);
    }
  }
  return 0;
}


