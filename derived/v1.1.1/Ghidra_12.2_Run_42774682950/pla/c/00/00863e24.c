/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00863e24; name: FUN_00863e24
 */


void FUN_00863e24(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04378248 + 0x80;
  puVar2 = PTR_DAT_04378248 + 0xa0;
  *param_1 = (long)(PTR_DAT_04378248 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[0x13] = (long)puVar2;
  if (*(long **)(*(long *)PTR_DAT_04377ce8 + 0x88) == param_1 + 0x13) {
    *(undefined8 *)(*(long *)PTR_DAT_04377ce8 + 0x88) = 0;
    puVar4 = (undefined8 *)param_1[0x1c];
  }
  else {
    puVar4 = (undefined8 *)param_1[0x1c];
  }
  if (puVar4 == (undefined8 *)0x0) {
    lVar5 = param_1[0x1e];
    param_1[0x1d] = 0;
  }
  else {
    uVar3 = FUN_0081a840(puVar4);
    uVar3 = uVar3 >> 5;
    if (uVar3 != 0) {
      puVar6 = puVar4;
      do {
        (**(code **)*puVar6)(puVar6);
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 4;
      } while (uVar3 != 0);
    }
    FUN_0081a800(puVar4);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    lVar5 = param_1[0x1e];
  }
  if (lVar5 != 0) {
    FUN_0081a840(lVar5);
    FUN_0081a800(lVar5);
    param_1[0x1e] = 0;
  }
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    FUN_0085e5b0(lVar5);
    FUN_0081a800(lVar5);
    param_1[0x14] = 0;
  }
  lVar5 = param_1[0x16];
  if (lVar5 != 0) {
    FUN_0081a840(lVar5);
    FUN_0081a800(lVar5);
    param_1[0x16] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x17));
  FUN_00808a98(param_1);
  return;
}


