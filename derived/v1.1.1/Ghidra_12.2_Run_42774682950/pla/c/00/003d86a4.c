/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d86a4; name: FUN_003d86a4
 */


void FUN_003d86a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  param_1[8] = 1;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_002ef6d0(param_1 + 10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (PTR_DAT_04374098[0x10] != '\0') {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    uStack_38 = param_1[3];
    uStack_40 = param_1[2];
                    /* try { // try from 003d86fc to 003d8763 has its CatchHandler @ 003d8778 */
    __ptr = (void *)FUN_002f2680(&local_50);
    uStack_68 = param_1[5];
    local_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    __ptr_00 = (void *)FUN_002f2680(&local_70);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0xa1,0,
                 "mdelem   %s:%p:%ld: \'%s\' = \'%s\'","ALLOC_MD_NOREF_KEY_VAL",param_1,param_1[8],
                 __ptr,__ptr_00);
    free(__ptr);
    free(__ptr_00);
  }
  return;
}


