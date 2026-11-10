/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855ad0; name: FUN_00855ad0
 */


void FUN_00855ad0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)(param_2 * 0x668);
  uVar1 = FUN_007e336c();
  puVar2 = (undefined8 *)FUN_0081a750(uVar5,uVar1);
  if ((param_2 * 0x668 != 0) && (puVar2 != (undefined8 *)0x0)) {
    lVar3 = (long)puVar2 + 3;
    do {
      *(undefined4 *)(lVar3 + -3) = 0;
      lVar3 = lVar3 + 4;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
  }
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  if ((param_2 != 0) && (puVar2 != (undefined8 *)0x0)) {
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    lVar3 = param_1 + 0x18;
    *(uint *)(param_1 + 0x38) = param_2;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_007e8fa0(lVar3,lVar3,(long)*(int *)(param_1 + 0x2c) + (long)puVar2);
    if (param_2 != 1) {
      lVar4 = (ulong)param_2 - 1;
      lVar6 = 0x668;
      do {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_007e8fa0(lVar3,lVar3,(long)*(int *)(param_1 + 0x2c) + (long)puVar2);
        lVar6 = lVar6 + 0x668;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}


