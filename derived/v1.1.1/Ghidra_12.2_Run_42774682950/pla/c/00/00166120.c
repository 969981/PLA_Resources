/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166120; name: FUN_00166120
 */


void FUN_00166120(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [24];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined8 local_48;
  
  lVar6 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined1 *)(lVar6 + 0x3c);
  if (*(int *)(param_1 + 0x10) == 0x124) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    FUN_0016a400(param_1);
    local_50 = FUN_001677a0(*(undefined8 *)(param_1 + 0x30),uVar7);
    local_48 = 0xffffffffffffffff;
    local_58[0] = 4;
  }
  else {
    FUN_0016a400(param_1);
    FUN_00165360(param_1,local_58,0);
    FUN_00168480(*(undefined8 *)(param_1 + 0x30),local_58);
    if (*(int *)(param_1 + 0x10) != 0x5d) goto LAB_00166250;
    FUN_0016a400(param_1);
  }
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  if (*(int *)(param_1 + 0x10) == 0x3d) {
    FUN_0016a400(param_1);
    uVar4 = FUN_001684a0(lVar6,local_58);
    FUN_00165360(param_1,auStack_70,0);
    uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x18) + 8);
    uVar5 = FUN_001684a0(lVar6,auStack_70);
    FUN_00167040(lVar6,10,uVar1,uVar4,uVar5);
    *(undefined1 *)(lVar6 + 0x3c) = uVar2;
    return;
  }
  FUN_00166920(param_1,0x3d);
LAB_00166250:
  FUN_00166920(param_1,0x5d);
                    /* WARNING: Does not return */
  pcVar3 = (code *)UndefinedInstructionException(0,0x16625c);
  (*pcVar3)();
}


