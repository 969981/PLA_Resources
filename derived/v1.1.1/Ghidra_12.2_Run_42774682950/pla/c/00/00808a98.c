/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00808a98; name: FUN_00808a98
 */


void FUN_00808a98(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_043778e8 + 0x78;
  *param_1 = (long)(PTR_DAT_043778e8 + 0x10);
  param_1[1] = (long)puVar1;
  puVar3 = (undefined8 *)param_1[0x10];
  param_1[0xb] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = FUN_0081a840(puVar3);
    uVar2 = uVar2 >> 5;
    if (uVar2 != 0) {
      puVar5 = puVar3;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 4;
      } while (uVar2 != 0);
    }
    FUN_0081a800(puVar3);
    param_1[0x10] = 0;
  }
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    FUN_0081a840(lVar4);
    FUN_0081a800(lVar4);
    param_1[0x11] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xc));
  FUN_007f0220(param_1 + 1);
  return;
}


