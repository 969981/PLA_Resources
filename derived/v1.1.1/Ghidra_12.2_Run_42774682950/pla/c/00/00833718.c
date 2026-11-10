/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00833718; name: FUN_00833718
 */


void FUN_00833718(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_04377e28;
  *(short *)((long)param_1 + 10) = (short)param_2;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_007e336c();
  uVar6 = param_2 & 0xffff;
  lVar3 = FUN_0081a750(uVar6 << 3,uVar2);
  if ((lVar3 != 0) && ((param_2 & 0xffff) != 0)) {
    param_2 = param_2 & 3;
    if (uVar6 - 1 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      puVar5 = (undefined8 *)(lVar3 + 0x10);
      do {
        lVar4 = lVar4 + 4;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 4;
      } while (uVar6 - param_2 != lVar4);
    }
    if (param_2 != 0) {
      puVar5 = (undefined8 *)(lVar3 + lVar4 * 8);
      do {
        param_2 = param_2 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (param_2 != 0);
    }
  }
  param_1[2] = lVar3;
  return;
}


