/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d1898; name: FUN_029d1898
 */


undefined4 FUN_029d1898(long param_1,long *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((int)param_2[1] == 5) {
    uVar3 = 7;
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = (undefined4)param_2[2];
    uVar6 = (ulong)*(byte *)(*param_2 + 0x7d);
    uVar3 = FUN_029506a8(*param_2,0xc);
    lVar7 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(lVar7 + 0x20);
    uVar4 = FUN_02a17630(*(undefined8 *)(lVar5 + 0x18),
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10) + 8) + uVar6 * 8 + 0x120)
                         ,uVar2,uVar3);
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x56,uVar6,uVar2,uVar3);
    }
    uVar3 = FUN_02977028(*(undefined8 *)(param_1 + 0x38),uVar2,*param_2);
    if (bVar1) {
      lVar7 = *(long *)(param_1 + 0x20);
      lVar5 = *(long *)(lVar7 + 0x20);
      FUN_02a17860(*(undefined8 *)(lVar5 + 0x18),
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10) + 8) + uVar6 * 8 + 0x120),uVar2
                  );
      FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x57,uVar6,uVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


