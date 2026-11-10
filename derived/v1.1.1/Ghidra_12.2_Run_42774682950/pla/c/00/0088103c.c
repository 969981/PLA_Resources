/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0088103c; name: FUN_0088103c
 */


undefined8 FUN_0088103c(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  FUN_0299bea0(auStack_38,2,param_2);
  uVar2 = FUN_02947964(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98));
  uVar3 = FUN_0294796c(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98));
  FUN_02940e84(*(undefined8 *)(param_1 + 0x58));
  uVar4 = FUN_0295e400();
  cVar1 = FUN_0299d334(auStack_38,uVar2,uVar3,uVar4,auStack_40);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00923bf0(*(undefined8 *)(param_1 + 0x2b68));
    uVar5 = FUN_009273d4(uVar4,cVar1);
    FUN_02940e84(*(undefined8 *)(param_1 + 0x58));
    uVar4 = FUN_0295e400();
    uVar4 = FUN_0294cf6c(uVar4,auStack_40[uVar5 & 0xffffffff]);
  }
  return uVar4;
}


