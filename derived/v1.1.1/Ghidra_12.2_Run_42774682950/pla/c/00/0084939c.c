/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084939c; name: FUN_0084939c
 */


void FUN_0084939c(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_04378010;
  puVar3 = (undefined8 *)param_1[0xd];
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = FUN_0081a840(puVar3);
    if (0x51f < uVar2) {
      uVar5 = 0;
      puVar4 = puVar3;
      do {
        (**(code **)*puVar4)(puVar4);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xa4;
      } while (uVar5 < uVar2 / 0x520);
    }
    FUN_0081a800(puVar3);
    param_1[0xd] = 0;
  }
  thunk_FUN_00847210(param_1);
  return;
}


