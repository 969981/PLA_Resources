/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad854; name: FUN_00aad854
 */


void FUN_00aad854(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  char *param3;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  char acStack_b0 [128];
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = &DAT_cbf29ce484222645;
  param_1[2] = &DAT_03996322;
  param_1[3] = 0;
  param3 = *(char **)(param_3 + 8);
  FUN_00aad61c(&local_e0);
  snprintf(acStack_b0,0x80,"bin/effect/battle/model/%s%s%s.trmdl",param3,local_d8,
           *(char **)(param_4 + 8));
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  FUN_00aad744(&local_e0,acStack_b0);
  *param_1 = local_e0;
  param_1[1] = local_d8;
  param_1[2] = local_d0;
  param_1[3] = local_c8;
  param_1[4] = local_c0;
  *(undefined4 *)(param_1 + 5) = local_b8;
  return;
}


