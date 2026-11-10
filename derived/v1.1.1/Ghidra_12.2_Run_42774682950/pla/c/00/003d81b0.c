/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d81b0; name: FUN_003d81b0
 */


void FUN_003d81b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5,undefined4 param_6)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (PTR_DAT_04374098[0x10] != '\0') {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    __ptr = (void *)FUN_002f2680(&local_60);
    uStack_78 = param_3[1];
    local_80 = *param_3;
    uStack_68 = param_3[3];
    uStack_70 = param_3[2];
    __ptr_00 = (void *)FUN_002f2680(&local_80);
    FUN_002ebea0(param_5,param_6,0,"mdelem   UNREF:%p:%ld->%ld: \'%s\' = \'%s\'",param_1,param_4,
                 param_4 + -1,__ptr,__ptr_00);
    free(__ptr);
    free(__ptr_00);
  }
  return;
}


