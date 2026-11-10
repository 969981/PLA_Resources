/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031474bc; name: FUN_031474bc
 */


void FUN_031474bc(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  FUN_03143400();
  *(undefined4 *)((long)param_1 + 0x54) = param_2;
  *(undefined8 *)((long)param_1 + 0x44) = 0x422000003e4ccccd;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x4248000042480000;
  *param_1 = &PTR_LAB_042dad20;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11) = 0xc;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_032c7c38(param_1 + 4,"BallGun");
  puVar1 = (undefined8 *)FUN_032cf5b0(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0xe] = puVar1;
  if (*(int *)((long)param_1 + 0x54) < 1) {
    return;
  }
  FUN_03147580(puVar1,*(int *)((long)param_1 + 0x54) + 1);
  return;
}


