/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d4fa0; name: FUN_003d4fa0
 */


undefined8 * FUN_003d4fa0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long **pplVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long local_50 [4];
  long *local_30 [2];
  
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  local_30[0] = (long *)param_1[4];
  if (local_30[0] == (long *)0x0) {
    *puVar2 = 0;
LAB_003d500c:
    pplVar3 = (long **)(puVar2 + 6);
  }
  else {
    if (param_1 == local_30[0]) {
      lVar4 = *local_30[0];
      plVar1 = local_30[0];
      local_30[0] = local_50;
                    /* try { // try from 003d5040 to 003d5047 has its CatchHandler @ 003d50b4 */
      (**(code **)(lVar4 + 0x18))(plVar1,local_50);
      *puVar2 = 0;
      if (local_30[0] == (long *)0x0) goto LAB_003d500c;
      if (local_50 == local_30[0]) goto LAB_003d5064;
    }
    else {
      param_1[4] = 0;
      *puVar2 = 0;
      if (local_50 == local_30[0]) {
LAB_003d5064:
        puVar2[6] = puVar2 + 2;
                    /* try { // try from 003d5074 to 003d5077 has its CatchHandler @ 003d50b0 */
        (**(code **)(*local_30[0] + 0x18))();
        uVar6 = *param_2;
        puVar2[9] = param_2[1];
        puVar2[8] = uVar6;
        if (local_50 == local_30[0]) {
          pcVar5 = *(code **)(*local_30[0] + 0x20);
        }
        else {
          if (local_30[0] == (long *)0x0) {
            return puVar2;
          }
          pcVar5 = *(code **)(*local_30[0] + 0x28);
        }
        (*pcVar5)();
        return puVar2;
      }
    }
    pplVar3 = local_30;
    puVar2[6] = local_30[0];
  }
  *pplVar3 = (long *)0x0;
  uVar6 = *param_2;
  puVar2[9] = param_2[1];
  puVar2[8] = uVar6;
  return puVar2;
}


