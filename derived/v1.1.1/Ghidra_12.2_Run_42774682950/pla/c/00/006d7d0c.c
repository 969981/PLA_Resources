/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d7d0c; name: FUN_006d7d0c
 */


void FUN_006d7d0c(undefined8 *param_1,char *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  EnvironmentIdentifier aEStack_128 [8];
  char acStack_120 [255];
  undefined1 local_21;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_00612290();
  param_1[2] = 0;
  param_1[3] = uVar2;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = FUN_00612290();
  param_1[6] = 0;
  param_1[7] = uVar2;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar2 = FUN_00612290();
  param_1[10] = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = FUN_00612290();
  param_1[0xe] = 0;
  param_1[0xf] = uVar2;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar2 = FUN_00612290();
  param_1[0x12] = 0;
  param_1[0x13] = uVar2;
  uVar1 = *PTR_DAT_043758c8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  nn::nsd::GetEnvironmentIdentifier(aEStack_128);
  snprintf(acStack_120,0x100,"%s.%s.t.npln.srv.nintendo.net:443",param_2,(char *)aEStack_128);
  local_21 = 0;
  sVar3 = strlen(acStack_120);
                    /* try { // try from 006d7dc8 to 006d7dd3 has its CatchHandler @ 006d7de4 */
  FUN_02762710(param_1,acStack_120,sVar3);
  return;
}


