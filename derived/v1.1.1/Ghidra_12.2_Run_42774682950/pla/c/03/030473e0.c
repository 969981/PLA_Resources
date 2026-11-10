/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030473e0; name: FUN_030473e0
 */


void FUN_030473e0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                 uint param_5)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  param_4[1] = 0;
  param_4[2] = 0x8000000000000000;
  *param_4 = &PTR_LAB_042b27e8;
  *(undefined4 *)(param_4 + 3) = 1;
  *(undefined4 *)((long)param_4 + 0x24) = 0;
  if (0 < (int)param_5) {
    param_1 = 0x41200000;
    param_2 = 0x40a00000;
    uVar2 = 0;
    param_3 = 0;
    do {
      fVar3 = (float)((uint)(uVar2 >> 2) & 0x3fffffff);
      lVar1 = uVar2 * 4;
      (param_4 + uVar2 * 2 + 0x16)[1] = (ulong)(uint)(fVar3 * 5.0);
      param_4[uVar2 * 2 + 0x16] = CONCAT44(fVar3 * 10.0,(float)((uint)uVar2 & 3) * 10.0);
      uVar2 = uVar2 + 1;
      *(undefined4 *)((long)param_4 + lVar1 + 0x28) = 0;
    } while (param_5 != uVar2);
  }
  *(uint *)((long)param_4 + 0x1c) = param_5;
  *(int *)(param_4 + 4) = (int)((param_5 + 1) * param_5) >> 1;
  FUN_03046fdc(param_1,param_2,param_3);
  return;
}


