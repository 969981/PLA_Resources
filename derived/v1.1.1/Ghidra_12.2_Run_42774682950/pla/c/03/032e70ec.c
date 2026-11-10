/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e70ec; name: FUN_032e70ec
 */


undefined4 FUN_032e70ec(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar2 = FUN_032c4c80(*param_2,param_2[1] - *param_2,&DAT_03924305);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_032c4c80(*param_2,param_2[1] - *param_2,"false");
    if ((uVar2 & 1) == 0) {
      return 0x80040200;
    }
    uVar5 = param_1[1];
    plVar3 = (long *)(param_1[2] & 0xfffffffffffffffe);
    uVar4 = *param_1;
    pcVar7 = *(code **)(*plVar3 + 0x30);
    uVar6 = 0;
  }
  else {
    uVar5 = param_1[1];
    plVar3 = (long *)(param_1[2] & 0xfffffffffffffffe);
    uVar4 = *param_1;
    pcVar7 = *(code **)(*plVar3 + 0x30);
    uVar6 = 1;
  }
  uVar1 = (*pcVar7)(plVar3,uVar4,uVar5,uVar6);
  return uVar1;
}


