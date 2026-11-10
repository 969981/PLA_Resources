/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004025f0; name: FUN_004025f0
 */


undefined4 FUN_004025f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 auStack_83c [4];
  long local_838 [2];
  undefined1 *local_828;
  undefined1 auStack_820 [2048];
  undefined4 local_18 [2];
  
  local_828 = auStack_820;
  local_838[0] = 0;
  local_838[1] = 0x800;
  uStack_858 = param_3[1];
  local_860 = *param_3;
  uStack_848 = param_3[3];
  uStack_850 = param_3[2];
  iVar1 = FUN_004026b0(&local_828,local_838,local_838 + 1,local_18,auStack_83c,param_2,&local_860);
  if (iVar1 == 0) {
    FUN_00400420(local_838[0],"external/openssl/crypto/bio/b_print.c",0x377);
    uVar2 = 0xffffffff;
  }
  else if (local_838[0] == 0) {
    uVar2 = FUN_004042b0(param_1,auStack_820,local_18[0]);
  }
  else {
    uVar2 = FUN_004042b0(param_1,local_838[0],local_18[0]);
    FUN_00400420(local_838[0],"external/openssl/crypto/bio/b_print.c",0x37c);
  }
  return uVar2;
}


