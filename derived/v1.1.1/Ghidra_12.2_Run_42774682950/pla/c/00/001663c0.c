/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001663c0; name: FUN_001663c0
 */


void FUN_001663c0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_00168460(uVar2);
  FUN_0016a400(param_1);
  if (*(int *)(param_1 + 0x10) != 0x124) {
    FUN_00166920(param_1,0x124);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x166458);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_0016a400(param_1);
  local_40 = FUN_001677a0(*(undefined8 *)(param_1 + 0x30),uVar3);
  local_38 = 0xffffffffffffffff;
  local_48[0] = 4;
  FUN_00168d90(uVar2,param_2,local_48);
  return;
}


