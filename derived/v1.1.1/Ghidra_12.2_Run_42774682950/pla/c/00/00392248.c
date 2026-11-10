/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00392248; name: FUN_00392248
 */


void FUN_00392248(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[0xc];
  *param_1 = &PTR_FUN_04153f08;
  puVar1 = PTR_LAB_04373088;
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_002e2ea0(puVar1);
  }
  lVar3 = param_1[10];
  param_1[10] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  std::mutex::~mutex((mutex *)(param_1 + 6));
  puVar1 = PTR_LAB_04373088;
  plVar2 = (long *)param_1[3];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_002e2ea0(puVar1);
  }
  lVar3 = param_1[1];
  param_1[1] = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


