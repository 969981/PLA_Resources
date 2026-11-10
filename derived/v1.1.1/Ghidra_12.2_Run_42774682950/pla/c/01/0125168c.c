/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125168c; name: FUN_0125168c
 */


void FUN_0125168c(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  char local_50 [32];
  
  uVar1 = FUN_012510b8();
  FUN_0280779c(uVar1,param_2 & 1);
  local_50[0x10] = '\0';
  local_50[0x11] = '\0';
  local_50[0x12] = '\0';
  local_50[0x13] = '\0';
  local_50[0x14] = '\0';
  local_50[0x15] = '\0';
  local_50[0x16] = '\0';
  local_50[0x17] = '\0';
  local_50[0x18] = '\0';
  local_50[0x19] = '\0';
  local_50[0x1a] = '\0';
  local_50[0x1b] = '\0';
  local_50[0x1c] = '\0';
  local_50[0x1d] = '\0';
  local_50[0x1e] = '\0';
  local_50[0x1f] = '\0';
  param_1 = param_1 + 0x180;
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\0';
  local_50[5] = '\0';
  local_50[6] = '\0';
  local_50[7] = '\0';
  local_50[8] = '\0';
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  local_50[0xc] = '\0';
  local_50[0xd] = '\0';
  local_50[0xe] = '\0';
  local_50[0xf] = '\0';
  snprintf(local_50,0x20,"button_%02d",0);
  lVar2 = FUN_00d2e81c(param_1,local_50);
  if (lVar2 != 0) {
    FUN_0280779c(lVar2,param_2 & 1);
  }
  snprintf(local_50,0x20,"button_%02d",1);
  lVar2 = FUN_00d2e81c(param_1,local_50);
  if (lVar2 != 0) {
    FUN_0280779c(lVar2,param_2 & 1);
  }
  snprintf(local_50,0x20,"button_%02d",2);
  lVar2 = FUN_00d2e81c(param_1,local_50);
  if (lVar2 != 0) {
    FUN_0280779c(lVar2,param_2 & 1);
  }
  snprintf(local_50,0x20,"button_%02d",3);
  lVar2 = FUN_00d2e81c(param_1,local_50);
  if (lVar2 != 0) {
    FUN_0280779c(lVar2,param_2 & 1);
  }
  snprintf(local_50,0x20,"button_%02d",4);
  lVar2 = FUN_00d2e81c(param_1,local_50);
  if (lVar2 != 0) {
    FUN_0280779c(lVar2,param_2 & 1);
  }
  snprintf(local_50,0x20,"button_%02d",5);
  lVar2 = FUN_00d2e81c(param_1,local_50);
  if (lVar2 != 0) {
    FUN_0280779c(lVar2,param_2 & 1);
  }
  snprintf(local_50,0x20,"button_%02d",6);
  lVar2 = FUN_00d2e81c(param_1,local_50);
  if (lVar2 != 0) {
    FUN_0280779c(lVar2,param_2 & 1);
  }
  return;
}


