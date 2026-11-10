/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b05288; name: FUN_01b05288
 */


void FUN_01b05288(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  FUN_01a7b1c8();
  *param_1 = (long)&PTR_FUN_0423db58;
  param_1[0x17e] = 0;
  param_1[9] = (long)&PTR_LAB_0423df78;
  param_1[10] = (long)&PTR_FUN_0423e058;
  param_1[0x3e] = (long)&PTR_LAB_0423e080;
  param_1[0x40] = (long)&PTR_LAB_0423e0e8;
  param_1[0x42] = (long)&PTR_LAB_0423e140;
  param_1[0x43] = (long)&PTR_LAB_0423e1a8;
  param_1[0x17f] = 0;
  FUN_01b21938(param_1 + 0x17e,param_2 + 0x3a0);
  param_1[0x181] = 0;
  param_1[0x180] = 0;
  FUN_01aff51c(param_1 + 0x180,param_2 + 0x3b0);
  param_1[0x183] = 0;
  param_1[0x182] = 0;
  FUN_01b0043c(param_1 + 0x182,param_2 + 0x3c0);
  param_1[0x185] = 0;
  param_1[0x184] = 0;
  FUN_0095aa3c(param_1 + 0x184,param_2 + 0x3d0);
  lVar1 = *(long *)(param_2 + 0x3e0);
  *(undefined1 *)((long)param_1 + 0xc64) = 0;
  *(undefined2 *)(param_1 + 0x18d) = 0;
  param_1[0x187] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined2 *)((long)param_1 + 0xc74) = 0;
  param_1[0x186] = lVar1;
  *(undefined8 *)((long)param_1 + 0xc6c) = 0;
  *(undefined1 *)((long)param_1 + 0xa1c) = 1;
  *(undefined1 *)((long)param_1 + 0xa24) = 1;
  uVar2 = 8;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  *(undefined1 *)(param_1 + 0x193) = 0;
  param_1[0x188] = 8;
  if (*(char *)((long)param_1 + 0xa1d) != '\0') {
    (**(code **)(*param_1 + 0x310))(param_1);
    uVar2 = param_1[0x189] | 8;
  }
  param_1[0x189] = uVar2;
  return;
}


