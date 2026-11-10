/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec5b74; name: FUN_02ec5b74
 */


undefined8
FUN_02ec5b74(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
            long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = FUN_02ee2778(DAT_0440a160);
  uVar3 = 0;
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x48) == 1) ||
       (((param_3 != 7 && (param_3 != 0)) || (uVar4 = FUN_02ec5b20(lVar2,param_4), (uVar4 & 1) == 0)
        ))) {
      uVar3 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar2 + 0x58);
      if (uVar5 == 0) {
        uVar3 = 0;
      }
      else {
        lVar6 = *(long *)(lVar2 + 0x50);
        uVar3 = 0;
        lVar7 = lVar6 + 8;
        do {
          if (*(int *)(lVar7 + -4) == param_4) {
            *(int *)(param_6 + 8) = param_3;
            FUN_02ec5c54(lVar7,param_6 + 4,param_6);
            lVar6 = *(long *)(lVar2 + 0x50);
            uVar3 = 1;
            uVar5 = *(uint *)(lVar2 + 0x58);
          }
          lVar1 = lVar7 + 0x18;
          lVar7 = lVar7 + 0x20;
        } while (lVar1 != lVar6 + (ulong)uVar5 * 0x20);
      }
    }
  }
  return uVar3;
}


