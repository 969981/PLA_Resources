/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00834118; name: FUN_00834118
 */


void FUN_00834118(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x788);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x788) = 0;
  }
  FUN_008401f4(param_1 + 0x180);
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_0083dd88();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_00847a24(*(long *)PTR_DAT_043773c0 + 0x10);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x178);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 200);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}


