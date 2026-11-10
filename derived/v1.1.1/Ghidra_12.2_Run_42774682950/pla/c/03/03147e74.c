/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03147e74; name: FUN_03147e74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03147e74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_03143400();
  *param_1 = &PTR_LAB_042dae30;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined8 *)((long)param_1 + 100) = 0x424800003ba3d70a;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x4248000042c80000;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 3) = 3;
  FUN_032c7c38(param_1 + 4,"GravityGun");
  uVar3 = _DAT_0388a510;
  uVar2 = DAT_0388a148;
  uVar1 = DAT_0388a140;
  param_1[0x11] = _UNK_0388a518;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}


